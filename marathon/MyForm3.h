#pragma once
#include "Functions.h"
namespace marathon {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		Functions func;
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::GroupBox^ groupBox3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button4;




	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton1;








	private: System::Windows::Forms::DataGridView^ dataGridView3;







	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lastName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ firstName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ e_mail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ctPhone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ birth;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sportclub;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ land;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ city;
	private: System::Windows::Forms::DataGridView^ dataGridView4;







	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ marathon_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ distance;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ startNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ lname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ sprtClub;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ country;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
private: System::Windows::Forms::BindingSource^ bindingSource1;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::ComponentModel::IContainer^ components;



























	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->lastName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->firstName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->e_mail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ctPhone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->birth = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sportclub = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->land = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->city = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->marathon_name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->distance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->startNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->sprtClub = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->dataGridView4 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1150, 591);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->Controls->Add(this->dataGridView3);
			this->tabPage1->Controls->Add(this->groupBox3);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1142, 562);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Моя сторінка";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm3::TabPage1_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Thistle;
			this->button7->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(267, 498);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(172, 51);
			this->button7->TabIndex = 7;
			this->button7->Text = L"Видалити";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm3::Button7_Click);
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->lastName,
					this->firstName, this->phone, this->e_mail, this->ctPhone, this->birth, this->sportclub, this->sex, this->land, this->city
			});
			this->dataGridView3->Location = System::Drawing::Point(21, 119);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->RowTemplate->Height = 24;
			this->dataGridView3->Size = System::Drawing::Size(848, 119);
			this->dataGridView3->TabIndex = 6;
			// 
			// lastName
			// 
			this->lastName->HeaderText = L"Прізвище";
			this->lastName->MinimumWidth = 6;
			this->lastName->Name = L"lastName";
			this->lastName->Width = 125;
			// 
			// firstName
			// 
			this->firstName->HeaderText = L"Ім\'я";
			this->firstName->MinimumWidth = 6;
			this->firstName->Name = L"firstName";
			this->firstName->Width = 125;
			// 
			// phone
			// 
			this->phone->HeaderText = L"Телефон";
			this->phone->MinimumWidth = 6;
			this->phone->Name = L"phone";
			this->phone->Width = 125;
			// 
			// e_mail
			// 
			this->e_mail->HeaderText = L"E-Mail";
			this->e_mail->MinimumWidth = 6;
			this->e_mail->Name = L"e_mail";
			this->e_mail->Width = 125;
			// 
			// ctPhone
			// 
			this->ctPhone->HeaderText = L"Контактна особа";
			this->ctPhone->MinimumWidth = 6;
			this->ctPhone->Name = L"ctPhone";
			this->ctPhone->Width = 125;
			// 
			// birth
			// 
			this->birth->HeaderText = L"Дата народження";
			this->birth->MinimumWidth = 6;
			this->birth->Name = L"birth";
			this->birth->Width = 125;
			// 
			// sportclub
			// 
			this->sportclub->HeaderText = L"Спортклуб";
			this->sportclub->MinimumWidth = 6;
			this->sportclub->Name = L"sportclub";
			this->sportclub->Width = 125;
			// 
			// sex
			// 
			this->sex->HeaderText = L"Пол";
			this->sex->MinimumWidth = 6;
			this->sex->Name = L"sex";
			this->sex->Width = 125;
			// 
			// land
			// 
			this->land->HeaderText = L"Країна";
			this->land->MinimumWidth = 6;
			this->land->Name = L"land";
			this->land->Width = 125;
			// 
			// city
			// 
			this->city->HeaderText = L"Місто";
			this->city->MinimumWidth = 6;
			this->city->Name = L"city";
			this->city->Width = 125;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton3);
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Location = System::Drawing::Point(892, 38);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(242, 500);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Додати слот";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton6);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Location = System::Drawing::Point(6, 31);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(230, 139);
			this->groupBox4->TabIndex = 23;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Марафони";
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton6->Location = System::Drawing::Point(27, 21);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(183, 27);
			this->radioButton6->TabIndex = 20;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Kharkiv Marathon";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::RadioButton6_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton8->Location = System::Drawing::Point(27, 103);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(163, 27);
			this->radioButton8->TabIndex = 22;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"High Heels Run";
			this->radioButton8->UseVisualStyleBackColor = true;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton7->Location = System::Drawing::Point(27, 61);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(140, 27);
			this->radioButton7->TabIndex = 21;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"TrinkAndRun";
			this->radioButton7->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(79, 234);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(68, 27);
			this->radioButton2->TabIndex = 16;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"5 км";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->Visible = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton5->Location = System::Drawing::Point(79, 380);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(79, 27);
			this->radioButton5->TabIndex = 19;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"42 км";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->Visible = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(79, 282);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(74, 27);
			this->radioButton3->TabIndex = 17;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"10 км";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->Visible = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton4->Location = System::Drawing::Point(79, 332);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(74, 27);
			this->radioButton4->TabIndex = 18;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"21 км";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->Visible = false;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(82, 188);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(64, 27);
			this->radioButton1->TabIndex = 15;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1 км";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Thistle;
			this->button2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(42, 425);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(165, 50);
			this->button2->TabIndex = 3;
			this->button2->Text = L"+слот";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::Button2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Thistle;
			this->button5->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(713, 454);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(173, 75);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Скасувати фільтри";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::Button5_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Thistle;
			this->button1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(21, 450);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(152, 63);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Змінити";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::Button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(269, 38);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(233, 36);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Моя інформація";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm3::Label2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->marathon_name,
					this->distance, this->startNumber, this->lname, this->fname, this->sprtClub, this->country
			});
			this->dataGridView1->Location = System::Drawing::Point(21, 244);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(848, 177);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm3::OneRunnerInfoDataGridView_CellContentClick);
			// 
			// marathon_name
			// 
			this->marathon_name->HeaderText = L"Марафон";
			this->marathon_name->MinimumWidth = 6;
			this->marathon_name->Name = L"marathon_name";
			this->marathon_name->ReadOnly = true;
			this->marathon_name->Width = 125;
			// 
			// distance
			// 
			this->distance->HeaderText = L"Дистанція";
			this->distance->MinimumWidth = 6;
			this->distance->Name = L"distance";
			this->distance->ReadOnly = true;
			this->distance->Width = 90;
			// 
			// startNumber
			// 
			this->startNumber->HeaderText = L"Стартовий номер";
			this->startNumber->MinimumWidth = 6;
			this->startNumber->Name = L"startNumber";
			this->startNumber->ReadOnly = true;
			this->startNumber->Width = 110;
			// 
			// lname
			// 
			this->lname->HeaderText = L"Прізвище";
			this->lname->MinimumWidth = 6;
			this->lname->Name = L"lname";
			this->lname->ReadOnly = true;
			this->lname->Width = 125;
			// 
			// fname
			// 
			this->fname->HeaderText = L"Ім\'я";
			this->fname->MinimumWidth = 6;
			this->fname->Name = L"fname";
			this->fname->ReadOnly = true;
			this->fname->Width = 125;
			// 
			// sprtClub
			// 
			this->sprtClub->HeaderText = L"Спортклуб";
			this->sprtClub->MinimumWidth = 6;
			this->sprtClub->Name = L"sprtClub";
			this->sprtClub->ReadOnly = true;
			this->sprtClub->Width = 125;
			// 
			// country
			// 
			this->country->HeaderText = L"Країна";
			this->country->MinimumWidth = 6;
			this->country->Name = L"country";
			this->country->ReadOnly = true;
			this->country->Width = 125;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->groupBox5);
			this->tabPage2->Controls->Add(this->dataGridView4);
			this->tabPage2->Controls->Add(this->groupBox2);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1142, 562);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Усі учасники";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &MyForm3::TabPage2_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::YellowGreen;
			this->button6->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(873, 475);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(261, 51);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Відсортувати";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm3::Button6_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::YellowGreen;
			this->button3->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(873, 409);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(261, 51);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Скасувати фільтри";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::Button3_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton10);
			this->groupBox5->Controls->Add(this->radioButton9);
			this->groupBox5->Location = System::Drawing::Point(873, 291);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(261, 100);
			this->groupBox5->TabIndex = 8;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Сортування за";
			this->groupBox5->Enter += gcnew System::EventHandler(this, &MyForm3::GroupBox5_Enter);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton10->Location = System::Drawing::Point(16, 64);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(210, 25);
			this->radioButton10->TabIndex = 6;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"зменшенням дистанції";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton9->Location = System::Drawing::Point(16, 37);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(213, 25);
			this->radioButton9->TabIndex = 5;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"збільшенням дистанції";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &MyForm3::RadioButton9_CheckedChanged);
			// 
			// dataGridView4
			// 
			this->dataGridView4->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7
			});
			this->dataGridView4->Location = System::Drawing::Point(9, 102);
			this->dataGridView4->Name = L"dataGridView4";
			this->dataGridView4->ReadOnly = true;
			this->dataGridView4->RowHeadersWidth = 51;
			this->dataGridView4->RowTemplate->Height = 24;
			this->dataGridView4->Size = System::Drawing::Size(853, 447);
			this->dataGridView4->TabIndex = 7;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"Марафон";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 125;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Дистанція";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			this->dataGridViewTextBoxColumn2->Width = 90;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Стартовий номер";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			this->dataGridViewTextBoxColumn3->Width = 125;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"Прізвище";
			this->dataGridViewTextBoxColumn4->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			this->dataGridViewTextBoxColumn4->Width = 125;
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"Ім\'я";
			this->dataGridViewTextBoxColumn5->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			this->dataGridViewTextBoxColumn5->ReadOnly = true;
			this->dataGridViewTextBoxColumn5->Width = 125;
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"Спортклуб";
			this->dataGridViewTextBoxColumn6->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			this->dataGridViewTextBoxColumn6->ReadOnly = true;
			this->dataGridViewTextBoxColumn6->Width = 125;
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"Країна";
			this->dataGridViewTextBoxColumn7->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			this->dataGridViewTextBoxColumn7->ReadOnly = true;
			this->dataGridViewTextBoxColumn7->Width = 125;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->checkedListBox1);
			this->groupBox2->Location = System::Drawing::Point(873, 81);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(261, 204);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Пошук по марафону";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::YellowGreen;
			this->button4->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(15, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(228, 48);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Пошук";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::Button4_Click);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift SemiBold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Kharkiv Marathon", L"TrinkAndRun", L"High Heels Run" });
			this->checkedListBox1->Location = System::Drawing::Point(15, 30);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(228, 100);
			this->checkedListBox1->TabIndex = 2;
			this->checkedListBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm3::CheckedListBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(161, 26);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Зареєстровані учасники";
			// 
			// bindingSource1
			// 
			this->bindingSource1->CurrentChanged += gcnew System::EventHandler(this, &MyForm3::BindingSource1_CurrentChanged);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(267, 450);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(172, 32);
			this->textBox1->TabIndex = 8;
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1149, 586);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MyForm3";
			this->Text = L"Інформація";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm3::MyForm3_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView4))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CheckedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OneRunnerInfoDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void TabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm3_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void CheckedListBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RadioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GroupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm3_FormClosed(System::Object^ sender, System::Windows::Forms::FormClosedEventArgs^ e);
private: System::Void RadioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Button5_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void BindingSource1_CurrentChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void Button7_Click(System::Object^ sender, System::EventArgs^ e);
};
}
