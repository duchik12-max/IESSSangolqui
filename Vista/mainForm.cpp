#include "mainForm.h"
using namespace System;
using namespace System::Windows::Forms;
// Esta línea asegura que se use el punto de entrada main en lugar de WinMain
[STAThread]
int main(cli::array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Vista::mainForm form;
    Application::Run(% form);

    return 0;
}
