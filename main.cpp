#include <Windows.h>
#include <iostream>
#include <windows.h>
#include <sqlext.h>
#include <sqltypes.h>
#include <sql.h>
#include <string>

//Include project source / header files
#include "main.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;


//Global Vars

//We're going to keep main as clean as possible
int main()
{
	/*we can continue to the login screen, the server connection should only take
	a few miliseconds, we can implement a splash screen to make it more polished.
	Once the connection to the server is verified, we can ask the user for their login
	*/

	loginMenu();


}

void loginMenu()
{
	CSC400CLR2::login login; //Name of project, name of form.
	Application::Run(% login);
}


void connectToDB()
{
	SQLWCHAR* serverName = L"localhost,1433";
	SQLWCHAR* userName = L"sa";
	SQLWCHAR* auth = L"SQL~4001";

	char  regastring[120] = "localhost,1433";  //regular char * input
	char  regbstring[120] = "sa";  //regular char * input
	char  regcstring[120] = "CSC~4001";  //regular char * input
	const size_t WCHARBUFSIZE = 120;
	SQLWCHAR  serverNameL[WCHARBUFSIZE];
	SQLWCHAR  userNameL[WCHARBUFSIZE];
	SQLWCHAR  authL[WCHARBUFSIZE];
	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, regastring, -1, serverNameL, WCHARBUFSIZE);
	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, regbstring, -1, userNameL, WCHARBUFSIZE);
	MultiByteToWideChar(CP_ACP, MB_PRECOMPOSED, regcstring, -1, authL, WCHARBUFSIZE);

	// To provide the size of a SQLWCHAR (wchar_t)

#define SQL_RESULT_LEN 240
#define SQL_RETURN_CODE_LEN 1000

	//define handles and vars
	SQLHANDLE sqlConnHandle;
	SQLHANDLE sqlStmtHandle;
	SQLHANDLE sqlEnvHandle;
	SQLWCHAR retconstring[SQL_RETURN_CODE_LEN];

	//start
	sqlConnHandle = NULL;
	sqlStmtHandle = NULL;

	//allocations
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &sqlEnvHandle))
		goto COMPLETED;

	if (SQL_SUCCESS != SQLSetEnvAttr(sqlEnvHandle, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0))
		goto COMPLETED;

	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_DBC, sqlEnvHandle, &sqlConnHandle))
		goto COMPLETED;

	//output
	cout << "Attempting connection to SQL Server...";
	cout << "\n";

	//For connecting to DB
	switch (SQLDriverConnect(
		sqlConnHandle,
		NULL,
		//(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost,1433;DATABASE=master;" UID + PWD, //password stored in source plain text for now
		(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost,1433;DATABASE=master;UID=sa;PWD=CSC~4001;",
		//(SQLWCHAR*)L"DRIVER={SQL Server};SERVER=localhost,1433;DATABASE=master;Trusted=true;", //Without login
		SQL_NTS,
		retconstring,
		1024,
		NULL,
		SQL_DRIVER_NOPROMPT))

		/*switch (SQLConnect(
			sqlConnHandle,
			serverName,
			wcslen(serverNameL),
			userName,
			wcslen(userNameL),
			auth,
			wcslen(authL)))*/
	{

	case SQL_SUCCESS:
		cout << "Successfully connected to SQL Server";
		cout << "\n";
		break;

	case SQL_SUCCESS_WITH_INFO:
		cout << "Successfully connected to SQL Server";
		cout << "\n";
		break;

	case SQL_INVALID_HANDLE:
		cout << "Could not connect to SQL Server";
		cout << "\n";
		goto COMPLETED;

	case SQL_ERROR:
		cout << "Could not connect to SQL Server";
		cout << "\n";
		goto COMPLETED;

	default:
		break;
	}

	//if there is a problem connecting then exit application
	if (SQL_SUCCESS != SQLAllocHandle(SQL_HANDLE_STMT, sqlConnHandle, &sqlStmtHandle))
		goto COMPLETED;

	//output
	cout << "\n";
	cout << "Executing T-SQL query...";
	cout << "\n";

	//if there is a problem executing the query then exit application
	//else display query result
	if (SQL_SUCCESS != SQLExecDirect(sqlStmtHandle, (SQLWCHAR*)L"SELECT @@VERSION", SQL_NTS))
	{
		cout << "Error querying SQL Server";
		cout << "\n";
		goto COMPLETED;
	}
	else
	{

		//declare output variable and pointer
		SQLCHAR sqlVersion[SQL_RESULT_LEN];
		SQLINTEGER ptrSqlVersion;

		while (SQLFetch(sqlStmtHandle) == SQL_SUCCESS)
		{

			SQLGetData(sqlStmtHandle, 1, SQL_CHAR, sqlVersion, SQL_RESULT_LEN, &ptrSqlVersion);

			//display query result
			cout << "\nQuery Result:\n\n";
			cout << sqlVersion << endl;
		}
	}

	//close connection and free resources
COMPLETED:
	SQLFreeHandle(SQL_HANDLE_STMT, sqlStmtHandle);
	SQLDisconnect(sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_DBC, sqlConnHandle);
	SQLFreeHandle(SQL_HANDLE_ENV, sqlEnvHandle);

	//pause the console window - exit when key is pressed
	cout << "\nPress any key to exit...";
	getchar();
}
