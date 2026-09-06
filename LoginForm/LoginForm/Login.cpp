#include "Login.h"


using namespace System;
using namespace System::Windows::Forms;
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	LoginForm::Login form;
	Application::Run(% form);
}

