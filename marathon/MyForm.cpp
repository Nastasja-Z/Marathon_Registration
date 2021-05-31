#include "MyForm.h"
#include "MyForm2.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
int main(array<String^>^ arg)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	marathon::MyForm form;
	Application::Run(% form);
}

System::Void marathon::MyForm::MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void marathon::MyForm::Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked)
	{
		function.id_m = 1;
	}

	if (radioButton6->Checked || radioButton7->Checked)
	{
		function.id_m = 3;
	}

	if (radioButton8->Checked || radioButton9->Checked)
	{
		function.id_m = 4;
	}

	if (radioButton1->Checked || radioButton6->Checked || radioButton8->Checked )
	{
		function.id_d = 1;
	}

	if (radioButton2->Checked || radioButton7->Checked || radioButton9->Checked)
	{
		function.id_d = 2;
	}

	if (radioButton3->Checked)
	{
		function.id_d = 3;
	}

	if (radioButton4->Checked)
	{
		function.id_d = 4;
	}

	if (radioButton5->Checked)
	{
		function.id_d = 5;
	}


	if (function.id_d == 0)
	{
		MessageBox::Show("Оберіть дистанцію", "Не обрано слот!");
		return;
	}
		

	this->Visible = false;
	marathon::MyForm2 form2;
	form2.ShowDialog();
	
	return System::Void();
}

System::Void marathon::MyForm::Button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	radioButton1->Checked = false;
	radioButton2->Checked = false;
	radioButton3->Checked = false;
	radioButton4->Checked = false;
	radioButton5->Checked = false;
	radioButton6->Checked = false;
	radioButton7->Checked = false;
	radioButton8->Checked = false;
	radioButton9->Checked = false;

	return System::Void();
}
