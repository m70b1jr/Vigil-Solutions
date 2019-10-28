#include "mainMenu.h"
using namespace System;
using namespace System::Windows::Forms;

void mainMenuMain(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CSC400CLR2::mainMenu mainMenu; //Name of project, name of form.
	Application::Run(% mainMenu);
}