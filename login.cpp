#include "login.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void loginMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CSC400CLR2::login login; //Name of project, name of form.
	Application::Run(% login);
}

