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
	/// Zusammenfassung für Form5
	/// </summary>
	public ref class Form5 : public System::Windows::Forms::Form
	{


	public:
		Form^ obj;
		Form5(void)
		{

			InitializeComponent();
		}
		//static Form5 instance;

		//static Form5 instance;
		Form5(Form^ obj1)
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
		~Form5()
		{
			if (components)
			{
				delete components;
			}
		}






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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
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
			this->button7->Location = System::Drawing::Point(18, 54);
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
			this->button8->Location = System::Drawing::Point(18, 113);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"🢀";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form5::button8_Click);
			// 
			// Form5
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 862);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(1080, 920);
			this->MinimumSize = System::Drawing::Size(1080, 883);
			this->Name = L"Form5";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Text = L"SecureIT";
			this->Load += gcnew System::EventHandler(this, &Form5::Form5_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form5_Load(System::Object^ sender, System::EventArgs^ e) {
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
	};
}
