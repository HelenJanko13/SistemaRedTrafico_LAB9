#include "TraficoVentana.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SistemaRedTrafico::TraficoVentana form;
	Application::Run(% form);
}




