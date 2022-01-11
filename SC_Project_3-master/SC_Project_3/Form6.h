#pragma once

#include"Form2.h"
#include"Form3.h"



namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form6
	/// </summary>
	public ref class Form6 : public System::Windows::Forms::Form
	{


	public:		
		Form^ obj;
		Form6(void)
		{

			InitializeComponent();
		}
		//static Form6 instance;

		//static Form6 instance;
		Form6(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();

			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form6()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::RadioButton^ radioButton10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::RadioButton^ radioButton11;
	private: System::Windows::Forms::RadioButton^ radioButton12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox7;
	private: System::Windows::Forms::RadioButton^ radioButton13;
	private: System::Windows::Forms::RadioButton^ radioButton14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::GroupBox^ groupBox8;
	private: System::Windows::Forms::RadioButton^ radioButton15;
	private: System::Windows::Forms::RadioButton^ radioButton16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Button^ button1;
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton14 = (gcnew System::Windows::Forms::RadioButton());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->groupBox8 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton15 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton16 = (gcnew System::Windows::Forms::RadioButton());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->groupBox8->SuspendLayout();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(18, 11);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"🏠";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(18, 66);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"🢀";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form6::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(130, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(196, 24);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Exterior Trip Alarms";
			this->label1->Click += gcnew System::EventHandler(this, &Form6::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(131, 157);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 18);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Main Entrance";
			this->label2->Click += gcnew System::EventHandler(this, &Form6::label2_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(7, 9);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(77, 17);
			this->radioButton1->TabIndex = 10;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"ACTIVATE";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(90, 9);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(92, 17);
			this->radioButton2->TabIndex = 11;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"DEACTIVATE";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton2_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(425, 158);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 12;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form6::textBox1_TextChanged_2);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(376, 162);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 13;
			this->label3->Text = L"Status :";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Location = System::Drawing::Point(592, 147);
			this->groupBox1->Margin = System::Windows::Forms::Padding(0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 31);
			this->groupBox1->TabIndex = 14;
			this->groupBox1->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton4);
			this->groupBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox2->Location = System::Drawing::Point(592, 188);
			this->groupBox2->Margin = System::Windows::Forms::Padding(0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 31);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(7, 9);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(77, 17);
			this->radioButton3->TabIndex = 10;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"ACTIVATE";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton3_CheckedChanged);
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(90, 9);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(92, 17);
			this->radioButton4->TabIndex = 11;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"DEACTIVATE";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton4_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(376, 203);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"Status :";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(425, 199);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 16;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Form6::textBox2_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(131, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(167, 18);
			this->label5->TabIndex = 15;
			this->label5->Text = L"East Gate and Doors";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Controls->Add(this->radioButton6);
			this->groupBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox3->Location = System::Drawing::Point(592, 229);
			this->groupBox3->Margin = System::Windows::Forms::Padding(0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 31);
			this->groupBox3->TabIndex = 22;
			this->groupBox3->TabStop = false;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(7, 9);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(77, 17);
			this->radioButton5->TabIndex = 10;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"ACTIVATE";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(90, 9);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(92, 17);
			this->radioButton6->TabIndex = 11;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"DEACTIVATE";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton6_CheckedChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(376, 244);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(43, 13);
			this->label6->TabIndex = 21;
			this->label6->Text = L"Status :";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(425, 240);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 20);
			this->textBox3->TabIndex = 20;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &Form6::textBox3_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(131, 239);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(172, 18);
			this->label7->TabIndex = 19;
			this->label7->Text = L"West Gate and Doors";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton7);
			this->groupBox4->Controls->Add(this->radioButton8);
			this->groupBox4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox4->Location = System::Drawing::Point(592, 269);
			this->groupBox4->Margin = System::Windows::Forms::Padding(0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(200, 31);
			this->groupBox4->TabIndex = 26;
			this->groupBox4->TabStop = false;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(7, 9);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(77, 17);
			this->radioButton7->TabIndex = 10;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"ACTIVATE";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton7_CheckedChanged);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(90, 9);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(92, 17);
			this->radioButton8->TabIndex = 11;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"DEACTIVATE";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton8_CheckedChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(376, 284);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 25;
			this->label8->Text = L"Status :";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(425, 280);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(100, 20);
			this->textBox4->TabIndex = 24;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &Form6::textBox4_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(131, 279);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(177, 18);
			this->label9->TabIndex = 23;
			this->label9->Text = L"South Gate and Doors";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(130, 340);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(117, 24);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Fire Alarms";
			this->label10->Click += gcnew System::EventHandler(this, &Form6::label10_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->radioButton9);
			this->groupBox5->Controls->Add(this->radioButton10);
			this->groupBox5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox5->Location = System::Drawing::Point(592, 506);
			this->groupBox5->Margin = System::Windows::Forms::Padding(0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(200, 31);
			this->groupBox5->TabIndex = 42;
			this->groupBox5->TabStop = false;
			this->groupBox5->Enter += gcnew System::EventHandler(this, &Form6::groupBox5_Enter);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(7, 9);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(77, 17);
			this->radioButton9->TabIndex = 10;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"ACTIVATE";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton9_CheckedChanged);
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Location = System::Drawing::Point(90, 9);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(92, 17);
			this->radioButton10->TabIndex = 11;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"DEACTIVATE";
			this->radioButton10->UseVisualStyleBackColor = true;
			this->radioButton10->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton10_CheckedChanged);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(376, 521);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 41;
			this->label11->Text = L"Status :";
			this->label11->Click += gcnew System::EventHandler(this, &Form6::label11_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(425, 517);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 20);
			this->textBox5->TabIndex = 40;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Form6::textBox5_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(131, 516);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(163, 18);
			this->label12->TabIndex = 39;
			this->label12->Text = L"Rooftop and Parking";
			this->label12->Click += gcnew System::EventHandler(this, &Form6::label12_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->radioButton11);
			this->groupBox6->Controls->Add(this->radioButton12);
			this->groupBox6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox6->Location = System::Drawing::Point(592, 466);
			this->groupBox6->Margin = System::Windows::Forms::Padding(0);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(200, 31);
			this->groupBox6->TabIndex = 38;
			this->groupBox6->TabStop = false;
			this->groupBox6->Enter += gcnew System::EventHandler(this, &Form6::groupBox6_Enter);
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Location = System::Drawing::Point(7, 9);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(77, 17);
			this->radioButton11->TabIndex = 10;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"ACTIVATE";
			this->radioButton11->UseVisualStyleBackColor = true;
			this->radioButton11->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton11_CheckedChanged);
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Location = System::Drawing::Point(90, 9);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(92, 17);
			this->radioButton12->TabIndex = 11;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"DEACTIVATE";
			this->radioButton12->UseVisualStyleBackColor = true;
			this->radioButton12->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton12_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(376, 481);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 37;
			this->label13->Text = L"Status :";
			this->label13->Click += gcnew System::EventHandler(this, &Form6::label13_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(425, 477);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(100, 20);
			this->textBox6->TabIndex = 36;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &Form6::textBox6_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(131, 476);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(110, 18);
			this->label14->TabIndex = 35;
			this->label14->Text = L"Second Floor";
			this->label14->Click += gcnew System::EventHandler(this, &Form6::label14_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->radioButton13);
			this->groupBox7->Controls->Add(this->radioButton14);
			this->groupBox7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox7->Location = System::Drawing::Point(592, 425);
			this->groupBox7->Margin = System::Windows::Forms::Padding(0);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Size = System::Drawing::Size(200, 31);
			this->groupBox7->TabIndex = 34;
			this->groupBox7->TabStop = false;
			this->groupBox7->Enter += gcnew System::EventHandler(this, &Form6::groupBox7_Enter);
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Location = System::Drawing::Point(7, 9);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(77, 17);
			this->radioButton13->TabIndex = 10;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"ACTIVATE";
			this->radioButton13->UseVisualStyleBackColor = true;
			this->radioButton13->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton13_CheckedChanged);
			// 
			// radioButton14
			// 
			this->radioButton14->AutoSize = true;
			this->radioButton14->Location = System::Drawing::Point(90, 9);
			this->radioButton14->Name = L"radioButton14";
			this->radioButton14->Size = System::Drawing::Size(92, 17);
			this->radioButton14->TabIndex = 11;
			this->radioButton14->TabStop = true;
			this->radioButton14->Text = L"DEACTIVATE";
			this->radioButton14->UseVisualStyleBackColor = true;
			this->radioButton14->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton14_CheckedChanged);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(376, 440);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(43, 13);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Status :";
			this->label15->Click += gcnew System::EventHandler(this, &Form6::label15_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(425, 436);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 32;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &Form6::textBox7_TextChanged);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(131, 435);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(89, 18);
			this->label16->TabIndex = 31;
			this->label16->Text = L"Main Floor";
			this->label16->Click += gcnew System::EventHandler(this, &Form6::label16_Click);
			// 
			// groupBox8
			// 
			this->groupBox8->Controls->Add(this->radioButton15);
			this->groupBox8->Controls->Add(this->radioButton16);
			this->groupBox8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox8->Location = System::Drawing::Point(592, 384);
			this->groupBox8->Margin = System::Windows::Forms::Padding(0);
			this->groupBox8->Name = L"groupBox8";
			this->groupBox8->Size = System::Drawing::Size(200, 31);
			this->groupBox8->TabIndex = 30;
			this->groupBox8->TabStop = false;
			this->groupBox8->Enter += gcnew System::EventHandler(this, &Form6::groupBox8_Enter);
			// 
			// radioButton15
			// 
			this->radioButton15->AutoSize = true;
			this->radioButton15->Location = System::Drawing::Point(7, 9);
			this->radioButton15->Name = L"radioButton15";
			this->radioButton15->Size = System::Drawing::Size(77, 17);
			this->radioButton15->TabIndex = 10;
			this->radioButton15->TabStop = true;
			this->radioButton15->Text = L"ACTIVATE";
			this->radioButton15->UseVisualStyleBackColor = true;
			this->radioButton15->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton15_CheckedChanged);
			// 
			// radioButton16
			// 
			this->radioButton16->AutoSize = true;
			this->radioButton16->Location = System::Drawing::Point(90, 9);
			this->radioButton16->Name = L"radioButton16";
			this->radioButton16->Size = System::Drawing::Size(92, 17);
			this->radioButton16->TabIndex = 11;
			this->radioButton16->TabStop = true;
			this->radioButton16->Text = L"DEACTIVATE";
			this->radioButton16->UseVisualStyleBackColor = true;
			this->radioButton16->CheckedChanged += gcnew System::EventHandler(this, &Form6::radioButton16_CheckedChanged);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(376, 399);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(43, 13);
			this->label17->TabIndex = 29;
			this->label17->Text = L"Status :";
			this->label17->Click += gcnew System::EventHandler(this, &Form6::label17_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(425, 395);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 20);
			this->textBox8->TabIndex = 28;
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &Form6::textBox8_TextChanged);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(131, 394);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(64, 18);
			this->label18->TabIndex = 27;
			this->label18->Text = L"Kitchen";
			this->label18->Click += gcnew System::EventHandler(this, &Form6::label18_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(938, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 43;
			this->button1->Text = L"Test Alarm";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form6::button1_Click_1);
			// 
			// Form6
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 862);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->groupBox8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(1080, 920);
			this->MinimumSize = System::Drawing::Size(1080, 883);
			this->Name = L"Form6";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Text = L"SecureIT";
			this->Load += gcnew System::EventHandler(this, &Form6::Form6_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->groupBox8->ResumeLayout(false);
			this->groupBox8->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form6_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();


	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked)
		{
			textBox1->Text = "ACTIVE";
			textBox1->BackColor.Green;
			textBox1->ForeColor.Green;
		}
	}
	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton2->Checked)
		{
			textBox1->Text = "INACTIVE";
			textBox1->BackColor.Red;
		}

	}
	private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) 
	{
		
		
	}
	private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox6_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox7_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox8_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label17_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void groupBox5_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		MessageBox::Show("Warning: Main Door Trip Alarm");


	}
	private: System::Void radioButton3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton3->Checked)
		{
			textBox2->Text = "ACTIVE";
			textBox2->BackColor.Green;
			textBox2->ForeColor.Green;
		}
	}
	private: System::Void radioButton4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton4->Checked)
		{
			textBox2->Text = "INACTIVE";
			textBox2->BackColor.Red;
		}
	}
	private: System::Void radioButton5_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton5->Checked)
		{
			textBox3->Text = "ACTIVE";
			textBox3->BackColor.Green;
			textBox3->ForeColor.Green;
		}
	}
	private: System::Void radioButton6_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton6->Checked)
		{
			textBox3->Text = "INACTIVE";
			textBox3->BackColor.Red;
		}
	}
	private: System::Void radioButton7_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton7->Checked)
		{
			textBox4->Text = "ACTIVE";
			textBox4->BackColor.Green;
			textBox4->ForeColor.Green;
		}
	}
	private: System::Void radioButton8_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton8->Checked)
		{
			textBox4->Text = "INACTIVE";
			textBox4->BackColor.Red;
		}
	}
	private: System::Void radioButton15_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton15->Checked)
		{
			textBox8->Text = "ACTIVE";
			textBox8->BackColor.Green;
			textBox8->ForeColor.Green;
		}
	}
	private: System::Void radioButton16_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton16->Checked)
		{
			textBox8->Text = "INACTIVE";
			textBox8->BackColor.Red;
		}
	}
	private: System::Void radioButton13_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton13->Checked)
		{
			textBox7->Text = "ACTIVE";
			textBox7->BackColor.Green;
			textBox7->ForeColor.Green;
		}  
	}
	private: System::Void radioButton14_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton14->Checked)
		{
			textBox7->Text = "INACTIVE";
			textBox7->BackColor.Red;
		}
	}
	private: System::Void radioButton11_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton11->Checked)
		{
			textBox6->Text = "ACTIVE";
			textBox6->BackColor.Green;
			textBox6->ForeColor.Green;
		}
	}
	private: System::Void radioButton12_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton12->Checked)
		{
			textBox6->Text = "INACTIVE";
			textBox6->BackColor.Red;
		}
	}
	private: System::Void radioButton9_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton9->Checked)
		{
			textBox5->Text = "ACTIVE";
			textBox5->BackColor.Green;
			textBox5->ForeColor.Green;
		}
	}
	private: System::Void radioButton10_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton10->Checked)
		{
			textBox5->Text = "INACTIVE";
			textBox5->BackColor.Red;
		}
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
