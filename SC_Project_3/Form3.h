#pragma once

#include"Form2.h"
#include"Form7.h"




namespace CppCLRWinformsProjekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{


	public:
		Form^ obj;
		Form3(void)
		{

			InitializeComponent();
		}
		//static Form3 instance;

		//static Form3 instance;
		Form3(Form^ obj1)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ level1ParkingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eastGateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ westGateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ northGateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ southGateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ level2ParkingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eastGateToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ westGateToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ northGateToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ southGateToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ guestParkingToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ eastEntryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ northExitToolStripMenuItem;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button1;
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
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->level1ParkingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eastGateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->westGateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->northGateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->southGateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->level2ParkingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eastGateToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->westGateToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->northGateToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->southGateToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->guestParkingToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->eastEntryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->northExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
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
			this->button8->Click += gcnew System::EventHandler(this, &Form3::button8_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->level1ParkingToolStripMenuItem,
					this->level2ParkingToolStripMenuItem, this->guestParkingToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(2, 2);
			this->menuStrip1->Margin = System::Windows::Forms::Padding(4);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1060, 33);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form3::menuStrip1_ItemClicked);
			// 
			// level1ParkingToolStripMenuItem
			// 
			this->level1ParkingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->eastGateToolStripMenuItem,
					this->westGateToolStripMenuItem, this->northGateToolStripMenuItem, this->southGateToolStripMenuItem
			});
			this->level1ParkingToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->level1ParkingToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ControlText;
			this->level1ParkingToolStripMenuItem->Name = L"level1ParkingToolStripMenuItem";
			this->level1ParkingToolStripMenuItem->Size = System::Drawing::Size(150, 29);
			this->level1ParkingToolStripMenuItem->Text = L"Level 1 Parking";
			// 
			// eastGateToolStripMenuItem
			// 
			this->eastGateToolStripMenuItem->Name = L"eastGateToolStripMenuItem";
			this->eastGateToolStripMenuItem->Size = System::Drawing::Size(177, 30);
			this->eastGateToolStripMenuItem->Text = L"East Gate";
			this->eastGateToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::eastGateToolStripMenuItem_Click);
			// 
			// westGateToolStripMenuItem
			// 
			this->westGateToolStripMenuItem->Name = L"westGateToolStripMenuItem";
			this->westGateToolStripMenuItem->Size = System::Drawing::Size(177, 30);
			this->westGateToolStripMenuItem->Text = L"West Gate";
			this->westGateToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::westGateToolStripMenuItem_Click);
			// 
			// northGateToolStripMenuItem
			// 
			this->northGateToolStripMenuItem->Name = L"northGateToolStripMenuItem";
			this->northGateToolStripMenuItem->Size = System::Drawing::Size(177, 30);
			this->northGateToolStripMenuItem->Text = L"North Gate";
			this->northGateToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::northGateToolStripMenuItem_Click);
			// 
			// southGateToolStripMenuItem
			// 
			this->southGateToolStripMenuItem->Name = L"southGateToolStripMenuItem";
			this->southGateToolStripMenuItem->Size = System::Drawing::Size(177, 30);
			this->southGateToolStripMenuItem->Text = L"South Gate";
			this->southGateToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::southGateToolStripMenuItem_Click);
			// 
			// level2ParkingToolStripMenuItem
			// 
			this->level2ParkingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->eastGateToolStripMenuItem1,
					this->westGateToolStripMenuItem1, this->northGateToolStripMenuItem1, this->southGateToolStripMenuItem1
			});
			this->level2ParkingToolStripMenuItem->Name = L"level2ParkingToolStripMenuItem";
			this->level2ParkingToolStripMenuItem->Size = System::Drawing::Size(150, 29);
			this->level2ParkingToolStripMenuItem->Text = L"Level 2 Parking";
			// 
			// eastGateToolStripMenuItem1
			// 
			this->eastGateToolStripMenuItem1->Name = L"eastGateToolStripMenuItem1";
			this->eastGateToolStripMenuItem1->Size = System::Drawing::Size(177, 30);
			this->eastGateToolStripMenuItem1->Text = L"East gate";
			this->eastGateToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form3::eastGateToolStripMenuItem1_Click);
			// 
			// westGateToolStripMenuItem1
			// 
			this->westGateToolStripMenuItem1->Name = L"westGateToolStripMenuItem1";
			this->westGateToolStripMenuItem1->Size = System::Drawing::Size(177, 30);
			this->westGateToolStripMenuItem1->Text = L"West gate ";
			this->westGateToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form3::westGateToolStripMenuItem1_Click);
			// 
			// northGateToolStripMenuItem1
			// 
			this->northGateToolStripMenuItem1->Name = L"northGateToolStripMenuItem1";
			this->northGateToolStripMenuItem1->Size = System::Drawing::Size(177, 30);
			this->northGateToolStripMenuItem1->Text = L"North Gate";
			this->northGateToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form3::northGateToolStripMenuItem1_Click);
			// 
			// southGateToolStripMenuItem1
			// 
			this->southGateToolStripMenuItem1->Name = L"southGateToolStripMenuItem1";
			this->southGateToolStripMenuItem1->Size = System::Drawing::Size(177, 30);
			this->southGateToolStripMenuItem1->Text = L"South Gate";
			this->southGateToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form3::southGateToolStripMenuItem1_Click);
			// 
			// guestParkingToolStripMenuItem
			// 
			this->guestParkingToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->eastEntryToolStripMenuItem,
					this->northExitToolStripMenuItem
			});
			this->guestParkingToolStripMenuItem->Name = L"guestParkingToolStripMenuItem";
			this->guestParkingToolStripMenuItem->Size = System::Drawing::Size(140, 29);
			this->guestParkingToolStripMenuItem->Text = L"Guest Parking";
			// 
			// eastEntryToolStripMenuItem
			// 
			this->eastEntryToolStripMenuItem->Name = L"eastEntryToolStripMenuItem";
			this->eastEntryToolStripMenuItem->Size = System::Drawing::Size(168, 30);
			this->eastEntryToolStripMenuItem->Text = L"East Entry";
			this->eastEntryToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::eastEntryToolStripMenuItem_Click);
			// 
			// northExitToolStripMenuItem
			// 
			this->northExitToolStripMenuItem->Name = L"northExitToolStripMenuItem";
			this->northExitToolStripMenuItem->Size = System::Drawing::Size(168, 30);
			this->northExitToolStripMenuItem->Text = L"North Exit";
			this->northExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form3::northExitToolStripMenuItem_Click);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
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
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(400, 224);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(201, 113);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Emergency Lockdown";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click_1);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1064, 862);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1080, 920);
			this->MinimumSize = System::Drawing::Size(1080, 883);
			this->Name = L"Form3";
			this->Padding = System::Windows::Forms::Padding(2);
			this->Text = L"SecureIT";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();

		Form3^ Obj2 = gcnew Form3(this);
		Obj2->ShowDialog();


	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();

		//Form3 ^Obj3 = gcnew Form3(this);
		//Obj3->ShowDialog();
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
	private: System::Void Take_toPage() 
	{
		Form7^ GOPage = gcnew Form7(this);
	    GOPage->ShowDialog();
	}
	private: System::Void eastGateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	
	private: System::Void westGateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void northGateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void southGateToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void eastGateToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void westGateToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void northGateToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void southGateToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void eastEntryToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void northExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Take_toPage();
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		
		

		if (button1->BackColor != Color::Red)
		{
			(button1->BackColor = Color::Red);
			button1->Text = "LOCKDOWN INITIATED";
		}
		else
		{
			button1->BackColor = Color::White;
			button1->Text = "EMERGENCY LOCKDOWN";
		}
	}
};
}
