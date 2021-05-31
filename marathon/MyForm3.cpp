#include "MyForm3.h"

System::Void marathon::MyForm3::MyForm3_Load(System::Object^ sender, System::EventArgs^ e)
{
	checkedListBox1->SetItemChecked(0, true);
	checkedListBox1->SetItemChecked(1, true);
	checkedListBox1->SetItemChecked(2, true);

	
	func.connectToDb();
	func.connection->Open();
	String^ command = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo] where PIN = '"+ func.pin +"' ";
	SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);
	SqlDataReader^ r = sqlcmd->ExecuteReader();

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView1->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"],  r["firstName"], r["sportClub"], r["country"]);
		}
	}

	r->Close();

	sqlcmd->CommandText = "SELECT lastName, firstName, phoneNumber, E_Mail, contactPersonsPhoneNumber, dateOfBirth, sportClub, sex, country, city FROM [Runner] where PIN = '"+ func.pin +"' ";
	sqlcmd->Connection = func.connection;
	 r = sqlcmd->ExecuteReader();

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView3->Rows->Add( r["lastName"], r["firstName"],r["phoneNumber"], r["E_Mail"], r["contactPersonsPhoneNumber"], r["dateOfBirth"], r["sportClub"], r["sex"], r["country"], r["city"]);
		}
	}

	r->Close();
	
	sqlcmd->CommandText = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo]";
	sqlcmd->Connection = func.connection;
	r = sqlcmd->ExecuteReader();

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView4->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
		}
	}

	r->Close();
	
	func.connection->Close();

	return System::Void();
}

System::Void marathon::MyForm3::MyForm3_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e)
{
	func.id_d = 0;
	Application::Exit();

	return System::Void();
}

System::Void marathon::MyForm3::Button2_Click(System::Object^ sender, System::EventArgs^ e)
{

	if (radioButton6->Checked)
	{
		radioButton1->Visible = true;
		radioButton2->Visible = true;
		radioButton3->Visible = true;
		radioButton4->Visible = true;
		radioButton5->Visible = true;

		func.id_m = 1;
	}
	else
	{
		radioButton1->Visible = false;
		radioButton2->Visible = false;
		radioButton3->Visible = false;
		radioButton4->Visible = false;
		radioButton5->Visible = false;
	}

	if (radioButton7->Checked)
	{
		radioButton1->Visible = true;
		radioButton2->Visible = true;

		func.id_m = 3;
	}
	

	if (radioButton8->Checked)
	{
		radioButton1->Visible = true;
		radioButton2->Visible = true;

		func.id_m = 4;
	}
	

	if (radioButton1->Checked)
	{
		func.id_d = 1;
	}
	if (radioButton2->Checked)
	{
		func.id_d = 2;
	}
	if (radioButton3->Checked)
	{
		func.id_d = 3;
	}
	if (radioButton4->Checked)
	{
		func.id_d = 4;
	}
	if (radioButton5->Checked)
	{
		func.id_d = 5;
	}

	if (!radioButton1->Checked && !radioButton2->Checked && !radioButton3->Checked && !radioButton4->Checked &&
		!radioButton5->Checked && !radioButton6->Checked && !radioButton7->Checked && !radioButton8->Checked)
	{
		MessageBox::Show("Оберіть марафон та дистанцію", "Не обрано слот!");
		return;
	}


	if ((radioButton1->Checked || radioButton2->Checked || radioButton3->Checked || radioButton4->Checked || radioButton5->Checked) &&
		(radioButton6->Checked || radioButton7->Checked || radioButton8->Checked))
	{
		
		func.connectToDb();
		func.connection->Open();
		String^ command = "INSERT INTO [RunnerSlot] VALUES(" + func.id_r + ", " + func.id_m + ", " + func.id_d + ", " + func.id_d + func.id_m + func.id_r + ", " + 300 + ", " + 300 + ")";
		SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);
		if (sqlcmd->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка", "!!!!!");
		else
			MessageBox::Show("Ви додали новий слот", "Вітаю!");

		//obnovlenie tabl

		dataGridView1->Rows->Clear();

		sqlcmd->CommandText = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo] where PIN = '" + func.pin + "' ";
		sqlcmd->Connection = func.connection;
		SqlDataReader^ r = sqlcmd->ExecuteReader();


		if (r->HasRows == false)
		{
			MessageBox::Show("Error", "!!!!!!!!");
		}
		else
		{
			while (r->Read())
			{
				dataGridView1->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
			}
		}

		r->Close();

		dataGridView4->Rows->Clear();

		sqlcmd->CommandText = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo]";
		sqlcmd->Connection = func.connection;
		r = sqlcmd->ExecuteReader();

		if (r->HasRows == false)
		{
			MessageBox::Show("Error", "!!!!!!!!");
		}
		else
		{
			while (r->Read())
			{
				dataGridView4->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
			}
		}

		r->Close();

		func.connection->Close();

	}

	return System::Void();
}

System::Void marathon::MyForm3::Button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView3->Rows[0]->Cells[0]->Value == nullptr || dataGridView3->Rows[0]->Cells[1]->Value == nullptr ||
		dataGridView3->Rows[0]->Cells[2]->Value == nullptr || dataGridView3->Rows[0]->Cells[3]->Value == nullptr||
		dataGridView3->Rows[0]->Cells[4]->Value == nullptr || dataGridView3->Rows[0]->Cells[5]->Value == nullptr||
		dataGridView3->Rows[0]->Cells[7]->Value == nullptr || dataGridView3->Rows[0]->Cells[8]->Value == nullptr||
		dataGridView3->Rows[0]->Cells[9]->Value == nullptr)
	{
		MessageBox::Show("Потрібно вказати всі обов'язкові дані", "Заповніть дані!");
		return;
	}

	String^ lName = dataGridView3->Rows[0]->Cells[0]->Value->ToString();
	String^ fName = dataGridView3->Rows[0]->Cells[1]->Value->ToString();
	String^ phone = dataGridView3->Rows[0]->Cells[2]->Value->ToString();
	String^ email = dataGridView3->Rows[0]->Cells[3]->Value->ToString();
	String^ phone2 = dataGridView3->Rows[0]->Cells[4]->Value->ToString();
	String^ sportclub = dataGridView3->Rows[0]->Cells[6]->Value->ToString();
	String^ city = dataGridView3->Rows[0]->Cells[9]->Value->ToString();
	String^ country = dataGridView3->Rows[0]->Cells[8]->Value->ToString();
	String^ sex = dataGridView3->Rows[0]->Cells[7]->Value->ToString();
	String^ status = dataGridView3->Rows[0]->Cells[0]->Value->ToString();
	String^ date = dataGridView3->Rows[0]->Cells[5]->Value->ToString();

	func.connectToDb();
	func.connection->Open();
	String^ command = "UPDATE[Runner] SET [lastName] = '"+lName+"', [firstName] ='"+fName+"' , [phoneNumber] = '"+phone+"', [E_Mail] = '"+email+"', [contactPersonsPhoneNumber] ='"+phone2+"' , [dateOfBirth] ='"+date+"' , [sportClub] ='"+sportclub+"'	, [sex] ='"+sex+"' , [country] ='"+country+"' , [city] ='"+city+"' where PIN = '"+ func.pin+"'";
	SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);

	if (sqlcmd->ExecuteNonQuery() != 1)
		MessageBox::Show("Оновлення не відбулося", "Помилка");
	else
		MessageBox::Show("Данні оновлені", "Готово!");

	//obnovlenie tabl

	dataGridView1->Rows->Clear();

	sqlcmd->CommandText = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo] where PIN = '"+ func.pin +"' ";
	sqlcmd->Connection = func.connection;
	SqlDataReader^ r = sqlcmd->ExecuteReader();
	

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView1->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
		}
	}

	r->Close();

	dataGridView4->Rows->Clear();

	sqlcmd->CommandText = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo]";
	sqlcmd->Connection = func.connection;
	r = sqlcmd->ExecuteReader();

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView4->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
		}
	}

	r->Close();

	func.connection->Close();
	return System::Void();
}

System::Void marathon::MyForm3::Button5_Click(System::Object^ sender, System::EventArgs^ e)
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

System::Void marathon::MyForm3::Button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ c1 = "";
	String^ c2 = "";
	String^ c3 = "";

	for (int i = 0; i < checkedListBox1->CheckedItems->Count;i++)
	{
		if (checkedListBox1->CheckedIndices[i] == 0)
		{
			c1 = checkedListBox1->CheckedItems[i]->ToString();
		}
		if (checkedListBox1->CheckedIndices[i] == 1)
		{
			c2 = checkedListBox1->CheckedItems[i]->ToString();
		}
		if (checkedListBox1->CheckedIndices[i] == 2)
		{
			c3 = checkedListBox1->CheckedItems[i]->ToString();
		}
	}
		

	func.connectToDb();
	func.connection->Open();

	//переделать снизу запрос
	dataGridView4->Rows->Clear();

	String^ command = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo] where name = '"+ c1 +"' or name = '"+ c2 +"' or name = '"+ c3 +"'";
	SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);
	SqlDataReader^ r = sqlcmd->ExecuteReader();

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView4->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
		}
	}
	
	r->Close();
	func.connection->Close();


	return System::Void();
}

System::Void marathon::MyForm3::Button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	checkedListBox1->SetItemChecked(0, true);
	checkedListBox1->SetItemChecked(1, true);
	checkedListBox1->SetItemChecked(2, true);

	radioButton9->Checked = false;
	radioButton10->Checked = false;

	func.connectToDb();
	func.connection->Open();
	String^ command =  "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo]";
	SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);
	SqlDataReader^ r = sqlcmd->ExecuteReader();

	dataGridView4->Rows->Clear();

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView4->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
		}
	}

	r->Close();

	func.connection->Close();


	return System::Void();
}

System::Void marathon::MyForm3::Button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	if(!radioButton10->Checked && !radioButton9->Checked)
	{
		MessageBox::Show("Не заданий параметр сортування", "Нестача данних!");
		return;
	}


	String^ c1 = "";
	String^ c2 = "";
	String^ c3 = "";

	for (int i = 0; i < checkedListBox1->CheckedItems->Count;i++)
	{
		if (checkedListBox1->CheckedIndices[i] == 0)
		{
			c1 = checkedListBox1->CheckedItems[i]->ToString();
		}
		if (checkedListBox1->CheckedIndices[i] == 1)
		{
			c2 = checkedListBox1->CheckedItems[i]->ToString();
		}
		if (checkedListBox1->CheckedIndices[i] == 2)
		{
			c3 = checkedListBox1->CheckedItems[i]->ToString();
		}
	}



	func.connectToDb();
	func.connection->Open();
	String^ command;
	if(radioButton9->Checked )
		command = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo] where name = '"+ c1 +"' or name = '"+ c2 +"' or name = '"+ c3 +"' order by ID_distance";
	else
		command = "SELECT name, distance, startNumber, lastName, firstName, sportClub, country FROM [commonInfo] where name = '"+ c1 +"' or name = '"+ c2 +"' or name = '"+ c3 +"' order by ID_distance DESC";

	SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);
	SqlDataReader^ r = sqlcmd->ExecuteReader();

	dataGridView4->Rows->Clear();

	if (r->HasRows == false)
	{
		MessageBox::Show("Error", "!!!!!!!!");
	}
	else
	{
		while (r->Read())
		{
			dataGridView4->Rows->Add(r["name"], r["Distance"], r["startNumber"], r["lastName"], r["firstName"], r["sportClub"], r["country"]);
		}
	}

	r->Close();

	func.connection->Close();
	return System::Void();
}

System::Void marathon::MyForm3::Button7_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (dataGridView1->SelectedRows->Count != 1)
	{
		MessageBox::Show("Оберіть однин рядок", "!!!");
		return;
	}
	if (textBox1->Text=="")
	{
		MessageBox::Show("Введіть пароль", "!!!");
		return;
	}
	else if (textBox1->Text != func.pin)
	{
		MessageBox::Show("Пароль невірний", "!!!");
		return;
	}
	
	int index = dataGridView1->SelectedRows[0]->Index;
	String^ snumb = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
	

	func.connectToDb();
	func.connection->Open();
	String^ command = "DELETE FROM [RunnerSlot] WHERE [startNumber] = '"+ snumb +"'";
	SqlCommand^ sqlcmd = gcnew SqlCommand(command, func.connection);

	if (sqlcmd->ExecuteNonQuery() != 1)
		MessageBox::Show("Помилка", "error");
	else
	{
		MessageBox::Show("Дані видалені", "Готово");
		dataGridView1->Rows->RemoveAt(index);
	}


	func.connection->Close();
	
	return System::Void();
}
