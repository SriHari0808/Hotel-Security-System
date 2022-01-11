#pragma once
// DOORS CONTROL
//#include"ACCESS_CONTROL.h"


namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{


	public:
		Form^ obj3;
		Form2(void)
		{

			InitializeComponent();
		}
		//static Form2 instance;

		//static Form2 instance;
		Form2(Form^ obj1)
		{
			obj3 = obj1;
			InitializeComponent();

			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ToolTip^ toolTip1;

	private: System::ComponentModel::IContainer^ components;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
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
			this->button7->Location = System::Drawing::Point(18, 14);
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
			this->button8->Location = System::Drawing::Point(18, 72);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 42);
			this->button8->TabIndex = 7;
			this->button8->Text = L"🢀";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form2::button8_Click);
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
			this->button1->Location = System::Drawing::Point(404, 14);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(262, 54);
			this->button1->TabIndex = 8;
			this->button1->Text = L"DOORS";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(139, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 108);
			this->button2->TabIndex = 9;
			this->button2->Text = L"DOOR 1";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click_1);
			this->button2->MouseHover += gcnew System::EventHandler(this, &Form2::button2_MouseHover);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(139, 333);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 108);
			this->button3->TabIndex = 10;
			this->button3->Text = L"DOOR 2";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Form2::button3_Click_1);
			this->button3->MouseHover += gcnew System::EventHandler(this, &Form2::button3_MouseHover);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(139, 491);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(192, 108);
			this->button4->TabIndex = 11;
			this->button4->Text = L"DOOR 3";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Form2::button4_Click);
			this->button4->MouseHover += gcnew System::EventHandler(this, &Form2::button4_MouseHover);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(438, 158);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(192, 108);
			this->button5->TabIndex = 12;
			this->button5->Text = L"DOOR 4";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Form2::button5_Click);
			this->button5->MouseHover += gcnew System::EventHandler(this, &Form2::button5_MouseHover);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(438, 333);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(192, 108);
			this->button6->TabIndex = 13;
			this->button6->Text = L"DOOR 5";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Form2::button6_Click);
			this->button6->MouseHover += gcnew System::EventHandler(this, &Form2::button6_MouseHover);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(438, 491);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(192, 108);
			this->button9->TabIndex = 14;
			this->button9->Text = L"DOOR 6";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Form2::button9_Click);
			this->button9->MouseHover += gcnew System::EventHandler(this, &Form2::button9_MouseHover);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(728, 158);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(192, 108);
			this->button10->TabIndex = 15;
			this->button10->Text = L"DOOR 7";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &Form2::button10_Click);
			this->button10->MouseHover += gcnew System::EventHandler(this, &Form2::button10_MouseHover);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(728, 333);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(192, 108);
			this->button11->TabIndex = 16;
			this->button11->Text = L"DOOR 8";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form2::button11_Click);
			this->button11->MouseHover += gcnew System::EventHandler(this, &Form2::button11_MouseHover);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(728, 491);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(192, 108);
			this->button12->TabIndex = 17;
			this->button12->Text = L"DOOR 9";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &Form2::button12_Click);
			this->button12->MouseHover += gcnew System::EventHandler(this, &Form2::button12_MouseHover);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(875, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 18;
			this->label1->Text = L":  Door Closed";
			this->label1->Click += gcnew System::EventHandler(this, &Form2::label1_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::Red;
			this->button13->Location = System::Drawing::Point(845, 28);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(24, 20);
			this->button13->TabIndex = 19;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::Lime;
			this->button14->Location = System::Drawing::Point(845, 54);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(24, 20);
			this->button14->TabIndex = 20;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(875, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 13);
			this->label2->TabIndex = 21;
			this->label2->Text = L":  Door Open";
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 862);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->DoubleBuffered = true;
			this->MaximumSize = System::Drawing::Size(1080, 920);
			this->MinimumSize = System::Drawing::Size(1080, 883);
			this->Name = L"Form2";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Text = L"SecureIT";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
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
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		obj3->Show();

	}
	private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {

		
		if (button2->BackColor != Color::Red)
			(button2->BackColor = Color::Red);
		else
			button2->BackColor = Color::Green;

		/*Form^ myForm = button1->FindForm();
		int n = 1;
		switch (n)
		{
		case 1:
			button2->BackColor = Color::Red;
			break;


		case 2:
			button2->BackColor = Color::ForestGreen;
			break;

		}
		*/

	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button4->BackColor != Color::Red)
			(button4->BackColor = Color::Red);
		else
			button4->BackColor = Color::Green;

	}
	private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (button3->BackColor != Color::Red)
			(button3->BackColor = Color::Red);
		else
			button3->BackColor = Color::Green;
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button5->BackColor != Color::Red)
			(button5->BackColor = Color::Red);
		else
			button5->BackColor = Color::Green;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button6->BackColor != Color::Red)
			(button6->BackColor = Color::Red);
		else
			button6->BackColor = Color::Green;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button9->BackColor != Color::Red)
			(button9->BackColor = Color::Red);
		else
			button9->BackColor = Color::Green;
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button10->BackColor != Color::Red)
			(button10->BackColor = Color::Red);
		else
			button10->BackColor = Color::Green;
	}
	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button11->BackColor != Color::Red)
			(button11->BackColor = Color::Red);
		else
			button11->BackColor = Color::Green;
	}
	private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
		if (button12->BackColor != Color::Red)
			(button12->BackColor = Color::Red);
		else
			button12->BackColor = Color::Green;
	}

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void toolTip1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {

	}
	private: System::Void button2_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button2);
	}



	private: System::Void button3_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button3);
	}
	private: System::Void button4_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button4);
	}
	private: System::Void button5_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button5);
	}
	private: System::Void button6_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button6);
	}
	private: System::Void button9_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button9);
	}
	private: System::Void button10_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button10);
	}
	private: System::Void button11_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button11);
	}
	private: System::Void button12_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		toolTip1->Show("Click to Open/Close", button12);
	}
};
}
