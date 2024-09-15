#include "CurrencyConverter.h"

using namespace System;
using namespace System::Windows::Forms;

void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	CurrencyConverter::CurrencyConverter form;

	Application::Run(% form);
}