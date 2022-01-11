#pragma once

namespace SC_Project_3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Camera
	/// </summary>
	public ref class Camera : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		Camera(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		Camera(Form ^obj1)
		{
			obj = obj1;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Camera()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;

	private: System::Windows::Forms::TextBox^ textBox1;









	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBoxCamera;
	private: System::Windows::Forms::TextBox^ textBoAddCamera;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;





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
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBoxCamera = (gcnew System::Windows::Forms::ComboBox());
			this->textBoAddCamera = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(81, 610);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(148, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Camera::button1_Click);
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::HighlightText;
			this->textBox1->Location = System::Drawing::Point(378, 64);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(374, 45);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"     Available Cameras";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(427, 511);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(198, 34);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Camera::button2_Click_1);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(427, 591);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(198, 34);
			this->button3->TabIndex = 13;
			this->button3->Text = L"Remove";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Camera::button3_Click);
			// 
			// comboBoxCamera
			// 
			this->comboBoxCamera->FormattingEnabled = true;
			this->comboBoxCamera->Items->AddRange(gcnew cli::array< System::Object^  >(8) {
				L"Lounge", L"Gym", L"Game Room", L"Parking Lot",
					L"Kitchen", L"Hall 1", L"Hall 2", L"Hall 3"
			});
			this->comboBoxCamera->Location = System::Drawing::Point(355, 267);
			this->comboBoxCamera->Name = L"comboBoxCamera";
			this->comboBoxCamera->Size = System::Drawing::Size(280, 24);
			this->comboBoxCamera->TabIndex = 14;
			// 
			// textBoAddCamera
			// 
			this->textBoAddCamera->Location = System::Drawing::Point(427, 421);
			this->textBoAddCamera->Name = L"textBoAddCamera";
			this->textBoAddCamera->Size = System::Drawing::Size(208, 22);
			this->textBoAddCamera->TabIndex = 15;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(129, 421);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 36);
			this->label1->TabIndex = 16;
			this->label1->Text = L"Enter Camera name";
			this->label1->Click += gcnew System::EventHandler(this, &Camera::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(127, 267);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(224, 36);
			this->label2->TabIndex = 17;
			this->label2->Text = L"List of Cameras";
			// 
			// Camera
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1062, 873);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoAddCamera);
			this->Controls->Add(this->comboBoxCamera);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Camera";
			this->Text = L"Parking Lot";
			this->Load += gcnew System::EventHandler(this, &Camera::Camera_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		obj->Show();
	}
	private: System::Void treeView1_AfterSelect(System::Object^ sender, System::Windows::Forms::TreeViewEventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Camera_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	//handle event when user wants to delete a camera
	this->comboBoxCamera->Items->Remove(this->comboBoxCamera->SelectedItem);
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//user wants to add new camera
	String^ cameraName = this->textBoAddCamera->Text; //get the user input from the textbox
	this->comboBoxCamera->Items->Add(cameraName);  //add the new camera to the combobox

}
};
}


///this->comboBoxCamera->Items->Add("Lounge");