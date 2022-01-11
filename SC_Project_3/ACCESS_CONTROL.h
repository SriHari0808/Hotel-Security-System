#pragma once

#include"Form2.h"
#include"Form3.h"
#include"Form4.h"
#include"Form5.h"
#include"Form6.h"
#include"Form7.h"
//#include"Form9.h"



namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	

	public:
		//static Form1 instance;
		Form^ Obj12;
		//static Form1 instance;
		Form1(void)
		{
			InitializeComponent();

			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}
		Form1(Form^ obj1)
		{
			Obj12 = obj1;
			InitializeComponent();

			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlLight;
			this->button1->Location = System::Drawing::Point(289, 40);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(482, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"ACCESS CONTROL";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(134, 206);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 109);
			this->button2->TabIndex = 1;
			this->button2->Text = L"DOOR CONTROL";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(134, 385);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 109);
			this->button3->TabIndex = 2;
			this->button3->Text = L"PARKING GATES";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(650, 206);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(192, 109);
			this->button5->TabIndex = 3;
			this->button5->Text = L"KEY ACCESS";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(650, 385);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(192, 109);
			this->button6->TabIndex = 5;
			this->button6->Text = L"ALARMS";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(18, 14);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 40);
			this->button7->TabIndex = 6;
			this->button7->Text = L"🏠";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(18, 72);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"🢀";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 862);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(1080, 920);
			this->MinimumSize = System::Drawing::Size(1080, 883);
			this->Name = L"Form1";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Text = L"SecureIT";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		
		this->Hide();
		
		Form2^ Obj2 = gcnew Form2(this);
		Obj2->ShowDialog();


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		Form3 ^Obj3 = gcnew Form3(this);
		Obj3->ShowDialog();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		Form4^ Obj5 = gcnew Form4(this);
		Obj5->ShowDialog();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		Form5^ Obj5 = gcnew Form5(this);
		Obj5->ShowDialog();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		Form6^ Obj5 = gcnew Form6(this);
		Obj5->ShowDialog();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
};
}
