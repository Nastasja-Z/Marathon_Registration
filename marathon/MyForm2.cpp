#include "MyForm2.h"

System::Void marathon::MyForm2::Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	//проверка на ввод всех данніх

	String^ lName = textBox1->Text->ToString();
	String^ fName = textBox2->Text->ToString();
	String^ phone = textBox3->Text->ToString();
	String^ email = textBox4->Text->ToString();
	String^ phone2 = textBox5->Text->ToString();
	String^ sportclub = textBox6->Text->ToString();
	String^ city = textBox7->Text->ToString();
	String^ country = comboBox3->SelectedItem->ToString();
	String^ sex = comboBox1->SelectedItem->ToString();
	String^ status = comboBox2->SelectedItem->ToString();
	String^ date = dateTimePicker1->Value.ToShortDateString();		//pomeniala na ToString, potomu chto etot deb brykalsia
	String^ pin1 = textBox8->Text->ToString();
	func.pin = pin1;

	func.connectToDb();
	func.connection->Open();
	String^ command = "INSERT INTO [Runner] VALUES ('"+lName+"', '"+fName+"', '"+phone+"', '"+email+"', '"+phone2+"', '"+date+"', '"+sportclub+"', '"+sex+"', '"+country+"', '"+city+"', '"+status+"', '"+pin1+"');";
	SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);
	if (sqlcmd->ExecuteNonQuery() != 1)
		MessageBox::Show("Проблема", "!!!!!");
	else
		MessageBox::Show("Ви зареєструвалися!", "Вітаю!");

	//command = "select ID_runner from Runner where PIN = '"+func.pin+"'";       ToShortDateString();
	sqlcmd->CommandText = "select ID_runner from Runner where PIN = '"+ func.pin +"'";
	sqlcmd->Connection = func.connection;
	SqlDataReader^ r = sqlcmd->ExecuteReader();
	while (r->Read())
		func.id_r = r[0]->ToString();
	r->Close();

	sqlcmd->CommandText = "INSERT INTO [RunnerSlot] VALUES("+func.id_r+", "+func.id_m+", "+func.id_d+", "+ 20 + func.id_r +", "+300+", "+300+")";
	sqlcmd->Connection = func.connection;
	if (sqlcmd->ExecuteNonQuery() != 1)
		MessageBox::Show("Помилка", "!!!!!");


	func.connection->Close();


	this->Visible = false;
	marathon::MyForm3 form3;
	form3.ShowDialog();

	return System::Void();
}
