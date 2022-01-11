#pragma once
//#include"Form3.h"
namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form7
	/// </summary>
	public ref class Form7 : public System::Windows::Forms::Form
	{
	public:
		Form^ Obj7;
		Form7(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Form7(Form^ Obj1)
		{
			Obj7 = Obj1;
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form7()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::ComponentModel::IContainer^ components;
	protected:




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 100);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(128, 102);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open Gate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form7::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(85, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(128, 102);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Close Gate";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form7::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(85, 392);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(128, 102);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Lock Gate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form7::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(85, 551);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(128, 102);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Auto On/Off";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form7::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->pictureBox1->Location = System::Drawing::Point(313, 100);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(696, 553);
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &Form7::pictureBox1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 20;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(12, 64);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(51, 42);
			this->button8->TabIndex = 8;
			this->button8->Text = L"🢀";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::White;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->button7->Location = System::Drawing::Point(12, 9);
			this->button7->Margin = System::Windows::Forms::Padding(0);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(51, 40);
			this->button7->TabIndex = 9;
			this->button7->Text = L"🏠";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Form7::button7_Click);
			// 
			// Form7
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1064, 881);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form7";
			this->Text = L"Form7";
			this->Load += gcnew System::EventHandler(this, &Form7::Form7_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		button1->BackColor = Color::ForestGreen;
		button2->BackColor = Color::White;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		button2->BackColor = Color::Red;
		button1->BackColor = Color::White;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button3->BackColor != Color::LightYellow)
		(button3->BackColor = Color::LightYellow);
	else
		button3->BackColor = Color::White;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (button4->BackColor != Color::Blue)
	{
		(button4->BackColor = Color::Blue);
		button4->Text = "AUTO : ON";
	}		
	else
	{
		button4->BackColor = Color::White;
		button4->Text = "AUTO : OFF";
	}
		
}
private: System::Void Form7_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
