#pragma once
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace Data;
using namespace Data::SqlClient;

ref class Functions
{
	
public: 
	static String^ pin;
	static String^ id_r;
	static int id_d=0, id_m=0;
	SqlConnection^ connection;
	SqlConnectionStringBuilder^ connStrBuilder;
	Functions() {};
	void connectToDb();

};
//int Functions::id_d = 0;
//int Functions::id_m = 0;

