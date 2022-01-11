#pragma once
//#include "ID_Verification.h"

namespace CppCLRWinformsProjekt 
	{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace CppCLRWinformsProjekt
		;

	/// <summary>
	/// Summary for Assign_ID
	/// </summary>
	public ref class Assign_ID : public System::Windows::Forms::Form
	{
	public:
		Form^ objectOne;
		Assign_ID(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Assign_ID(Form ^ object)
		{
			objectOne = object;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}


	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Assign_ID()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ dOBMMDDYYYToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dhyeyVToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ arunTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ zahraTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sriHariTToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ photoIDTypeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ approvedStatusToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ drivingLToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ passportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nAToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ monthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ dayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ yearToolStripMenuItem;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox3;
	private: System::Windows::Forms::ToolStripMenuItem^ approvedStatusToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ passToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ failToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dOBMMDDYYYToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dhyeyVToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->arunTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zahraTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sriHariTToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->photoIDTypeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->drivingLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->passportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nAToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->approvedStatusToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->monthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->dayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->yearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox3 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->approvedStatusToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->passToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->failToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->dOBMMDDYYYToolStripMenuItem,
					this->photoIDTypeToolStripMenuItem, this->approvedStatusToolStripMenuItem, this->approvedStatusToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1064, 24);
			this->menuStrip1->TabIndex = 19;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dOBMMDDYYYToolStripMenuItem
			// 
			this->dOBMMDDYYYToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->dhyeyVToolStripMenuItem,
					this->arunTToolStripMenuItem, this->zahraTToolStripMenuItem, this->sriHariTToolStripMenuItem
			});
			this->dOBMMDDYYYToolStripMenuItem->Name = L"dOBMMDDYYYToolStripMenuItem";
			this->dOBMMDDYYYToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->dOBMMDDYYYToolStripMenuItem->Text = L"Client";
			// 
			// dhyeyVToolStripMenuItem
			// 
			this->dhyeyVToolStripMenuItem->Name = L"dhyeyVToolStripMenuItem";
			this->dhyeyVToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->dhyeyVToolStripMenuItem->Text = L"Dhyey V";
			// 
			// arunTToolStripMenuItem
			// 
			this->arunTToolStripMenuItem->Name = L"arunTToolStripMenuItem";
			this->arunTToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->arunTToolStripMenuItem->Text = L"Arun T";
			// 
			// zahraTToolStripMenuItem
			// 
			this->zahraTToolStripMenuItem->Name = L"zahraTToolStripMenuItem";
			this->zahraTToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->zahraTToolStripMenuItem->Text = L"Zahra T";
			// 
			// sriHariTToolStripMenuItem
			// 
			this->sriHariTToolStripMenuItem->Name = L"sriHariTToolStripMenuItem";
			this->sriHariTToolStripMenuItem->Size = System::Drawing::Size(118, 22);
			this->sriHariTToolStripMenuItem->Text = L"SriHari T";
			// 
			// photoIDTypeToolStripMenuItem
			// 
			this->photoIDTypeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->drivingLToolStripMenuItem,
					this->passportToolStripMenuItem, this->nAToolStripMenuItem
			});
			this->photoIDTypeToolStripMenuItem->Name = L"photoIDTypeToolStripMenuItem";
			this->photoIDTypeToolStripMenuItem->Size = System::Drawing::Size(91, 20);
			this->photoIDTypeToolStripMenuItem->Text = L"Photo ID type";
			// 
			// drivingLToolStripMenuItem
			// 
			this->drivingLToolStripMenuItem->Name = L"drivingLToolStripMenuItem";
			this->drivingLToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->drivingLToolStripMenuItem->Text = L"Driving L";
			// 
			// passportToolStripMenuItem
			// 
			this->passportToolStripMenuItem->Name = L"passportToolStripMenuItem";
			this->passportToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->passportToolStripMenuItem->Text = L"Passport";
			// 
			// nAToolStripMenuItem
			// 
			this->nAToolStripMenuItem->Name = L"nAToolStripMenuItem";
			this->nAToolStripMenuItem->Size = System::Drawing::Size(121, 22);
			this->nAToolStripMenuItem->Text = L"N/A";
			// 
			// approvedStatusToolStripMenuItem
			// 
			this->approvedStatusToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->monthToolStripMenuItem,
					this->dayToolStripMenuItem, this->yearToolStripMenuItem
			});
			this->approvedStatusToolStripMenuItem->Name = L"approvedStatusToolStripMenuItem";
			this->approvedStatusToolStripMenuItem->Size = System::Drawing::Size(120, 20);
			this->approvedStatusToolStripMenuItem->Text = L"DOB(MM/DD/YYY)";
			// 
			// monthToolStripMenuItem
			// 
			this->monthToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox1 });
			this->monthToolStripMenuItem->Name = L"monthToolStripMenuItem";
			this->monthToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->monthToolStripMenuItem->Text = L"Month";
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			// 
			// dayToolStripMenuItem
			// 
			this->dayToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox2 });
			this->dayToolStripMenuItem->Name = L"dayToolStripMenuItem";
			this->dayToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->dayToolStripMenuItem->Text = L"Day";
			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
			// 
			// yearToolStripMenuItem
			// 
			this->yearToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripTextBox3 });
			this->yearToolStripMenuItem->Name = L"yearToolStripMenuItem";
			this->yearToolStripMenuItem->Size = System::Drawing::Size(110, 22);
			this->yearToolStripMenuItem->Text = L"Year";
			// 
			// toolStripTextBox3
			// 
			this->toolStripTextBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox3->Name = L"toolStripTextBox3";
			this->toolStripTextBox3->Size = System::Drawing::Size(100, 23);
			// 
			// approvedStatusToolStripMenuItem1
			// 
			this->approvedStatusToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->passToolStripMenuItem,
					this->failToolStripMenuItem
			});
			this->approvedStatusToolStripMenuItem1->Name = L"approvedStatusToolStripMenuItem1";
			this->approvedStatusToolStripMenuItem1->Size = System::Drawing::Size(106, 20);
			this->approvedStatusToolStripMenuItem1->Text = L"Approved Status";
			// 
			// passToolStripMenuItem
			// 
			this->passToolStripMenuItem->Name = L"passToolStripMenuItem";
			this->passToolStripMenuItem->Size = System::Drawing::Size(97, 22);
			this->passToolStripMenuItem->Text = L"Pass";
			// 
			// failToolStripMenuItem
			// 
			this->failToolStripMenuItem->Name = L"failToolStripMenuItem";
			this->failToolStripMenuItem->Size = System::Drawing::Size(97, 22);
			this->failToolStripMenuItem->Text = L"Fail";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(196, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 58);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Submit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Assign_ID::button1_Click);
			// 
			// Assign_ID
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1064, 881);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Assign_ID";
			this->Text = L"Assign_ID";
			this->Load += gcnew System::EventHandler(this, &Assign_ID::Assign_ID_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Assign_ID_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
