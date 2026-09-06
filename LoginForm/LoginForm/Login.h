#pragma once
#include "Home.h"
#include "SignUp.h"
#include <fstream>
#include <string>
#include <sstream>
#include <msclr/marshal_cppstd.h>

namespace LoginForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			
			

			textBox2->UseSystemPasswordChar = true;
		}

	protected:
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;

	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			   this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // button1
			   // 
			   this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold));
			   this->button1->Location = System::Drawing::Point(392, 270);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(160, 68);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"Login";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			   // 
			   // button2
			   // 
			   this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold));
			   this->button2->Location = System::Drawing::Point(392, 371);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(160, 57);
			   this->button2->TabIndex = 1;
			   this->button2->Text = L"Sign Up";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Login::button2_Click);
			   // 
			   // checkBox1
			   // 
			   this->checkBox1->AutoSize = true;
			   this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F));
			   this->checkBox1->Location = System::Drawing::Point(558, 213);
			   this->checkBox1->Name = L"checkBox1";
			   this->checkBox1->Size = System::Drawing::Size(151, 24);
			   this->checkBox1->TabIndex = 2;
			   this->checkBox1->Text = L"Show Password";
			   this->checkBox1->UseVisualStyleBackColor = true;
			   this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Login::checkBox1_CheckedChanged);
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 18, System::Drawing::FontStyle::Bold));
			   this->label1->Location = System::Drawing::Point(28, 47);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(238, 40);
			   this->label1->TabIndex = 3;
			   this->label1->Text = L"Welcome Back";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold));
			   this->label2->Location = System::Drawing::Point(353, 76);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(159, 37);
			   this->label2->TabIndex = 4;
			   this->label2->Text = L"Username";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 16.2F, System::Drawing::FontStyle::Bold));
			   this->label3->Location = System::Drawing::Point(360, 161);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(152, 37);
			   this->label3->TabIndex = 3;
			   this->label3->Text = L"Password";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			   this->pictureBox1->Location = System::Drawing::Point(12, 86);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(304, 342);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->pictureBox1->TabIndex = 2;
			   this->pictureBox1->TabStop = false;
			   // 
			   // textBox1
			   // 
			   this->textBox1->Location = System::Drawing::Point(347, 136);
			   this->textBox1->Name = L"textBox1";
			   this->textBox1->Size = System::Drawing::Size(203, 22);
			   this->textBox1->TabIndex = 1;
			   // 
			   // textBox2
			   // 
			   this->textBox2->Location = System::Drawing::Point(347, 214);
			   this->textBox2->Name = L"textBox2";
			   this->textBox2->Size = System::Drawing::Size(205, 22);
			   this->textBox2->TabIndex = 0;
			   // 
			   // MyForm
			   // 
			   this->BackColor = System::Drawing::Color::Thistle;
			   this->ClientSize = System::Drawing::Size(729, 476);
			   this->Controls->Add(this->textBox2);
			   this->Controls->Add(this->textBox1);
			   this->Controls->Add(this->pictureBox1);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->checkBox1);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->button1);
			   this->Name = L"MyForm";
			   this->Text = L"inventory system";
			   this->Load += gcnew System::EventHandler(this, &Login::MyForm_Load);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }

#pragma endregion

	private:
		std::string toStdString(System::String^ str) {
			return msclr::interop::marshal_as<std::string>(str);
		}

		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			String^ username = textBox1->Text;
			String^ password = textBox2->Text;
			if (String::IsNullOrWhiteSpace(username) && String::IsNullOrWhiteSpace(password)) {
				MessageBox::Show("Please enter both username and password.");
				return;
			}
			if (String::IsNullOrWhiteSpace(username)) {
				MessageBox::Show("Please enter your username.");
				return;
			}

			if (String::IsNullOrWhiteSpace(password)) {
				MessageBox::Show("Please enter your password.");
				return;
			}
			
			std::string u = msclr::interop::marshal_as<std::string>(username);
			std::string p = msclr::interop::marshal_as<std::string>(password);

			
			std::ifstream file("users.txt");
			std::string line;
			bool found = false;

			while (std::getline(file, line)) {
				std::stringstream ss(line);
				std::string file_username, file_password, phone, email;

				std::getline(ss, file_username, ',');
				std::getline(ss, file_password, ',');
				std::getline(ss, phone, ',');
				std::getline(ss, email, ',');

				if (file_username == u && file_password == p) {
					found = true;
					break;
				}
			}

			
			if (found) {
				MessageBox::Show("Login successful!");
				Home^ homeForm = gcnew Home();
				homeForm->Show();
				this->Hide();
			}
			else {
				MessageBox::Show("Invalid username or password.");
			}
		}

		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			SignUp^ sf = gcnew SignUp();

			sf->Show();
			
		}

		System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
			textBox2->UseSystemPasswordChar = !checkBox1->Checked;
		}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}

 