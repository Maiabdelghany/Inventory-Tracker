#pragma once

namespace LoginForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Data::Odbc;



	/// <summary>
	/// Summary for custmors
	/// </summary>
	public ref class custmors : public System::Windows::Forms::Form
	{

	public:
		custmors(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~custmors()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ CusIdTb;

	private: System::Windows::Forms::Label^ labl2;
	private: System::Windows::Forms::TextBox^ CusNameTb;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ TelTb;
	private: System::Windows::Forms::Button^ InsertBtn;
	private: System::Windows::Forms::Button^ DELBtn;


	private: System::Windows::Forms::Button^ UpdateBtn;







	private: System::Windows::Forms::Label^ label3;











	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ button1;



	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(custmors::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->CusIdTb = (gcnew System::Windows::Forms::TextBox());
			this->labl2 = (gcnew System::Windows::Forms::Label());
			this->CusNameTb = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TelTb = (gcnew System::Windows::Forms::TextBox());
			this->InsertBtn = (gcnew System::Windows::Forms::Button());
			this->DELBtn = (gcnew System::Windows::Forms::Button());
			this->UpdateBtn = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Cursor = System::Windows::Forms::Cursors::No;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 224);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(213, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"customer ID";
			this->label1->Click += gcnew System::EventHandler(this, &custmors::label1_Click_1);
			// 
			// CusIdTb
			// 
			this->CusIdTb->BackColor = System::Drawing::Color::Thistle;
			this->CusIdTb->Location = System::Drawing::Point(263, 213);
			this->CusIdTb->Name = L"CusIdTb";
			this->CusIdTb->Size = System::Drawing::Size(219, 38);
			this->CusIdTb->TabIndex = 1;
			this->CusIdTb->TextChanged += gcnew System::EventHandler(this, &custmors::id_TextChanged);
			// 
			// labl2
			// 
			this->labl2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labl2->Location = System::Drawing::Point(12, 292);
			this->labl2->Name = L"labl2";
			this->labl2->Size = System::Drawing::Size(208, 34);
			this->labl2->TabIndex = 2;
			this->labl2->Text = L"customer name\r\n";
			this->labl2->Click += gcnew System::EventHandler(this, &custmors::customer_Click);
			// 
			// CusNameTb
			// 
			this->CusNameTb->BackColor = System::Drawing::Color::Thistle;
			this->CusNameTb->Location = System::Drawing::Point(263, 292);
			this->CusNameTb->Name = L"CusNameTb";
			this->CusNameTb->Size = System::Drawing::Size(219, 38);
			this->CusNameTb->TabIndex = 3;
			this->CusNameTb->TextChanged += gcnew System::EventHandler(this, &custmors::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 377);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(181, 37);
			this->label2->TabIndex = 4;
			this->label2->Text = L"telphone";
			// 
			// TelTb
			// 
			this->TelTb->BackColor = System::Drawing::Color::Thistle;
			this->TelTb->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TelTb->Location = System::Drawing::Point(263, 377);
			this->TelTb->Name = L"TelTb";
			this->TelTb->Size = System::Drawing::Size(219, 38);
			this->TelTb->TabIndex = 5;
			// 
			// InsertBtn
			// 
			this->InsertBtn->BackColor = System::Drawing::Color::Thistle;
			this->InsertBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->InsertBtn->Location = System::Drawing::Point(43, 452);
			this->InsertBtn->Name = L"InsertBtn";
			this->InsertBtn->Size = System::Drawing::Size(112, 57);
			this->InsertBtn->TabIndex = 6;
			this->InsertBtn->Text = L"insert";
			this->InsertBtn->UseVisualStyleBackColor = false;
			this->InsertBtn->Click += gcnew System::EventHandler(this, &custmors::button1_Click);
			// 
			// DELBtn
			// 
			this->DELBtn->BackColor = System::Drawing::Color::Thistle;
			this->DELBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DELBtn->Location = System::Drawing::Point(184, 452);
			this->DELBtn->Name = L"DELBtn";
			this->DELBtn->Size = System::Drawing::Size(139, 57);
			this->DELBtn->TabIndex = 7;
			this->DELBtn->Text = L"delete\r\n";
			this->DELBtn->UseVisualStyleBackColor = false;
			this->DELBtn->Click += gcnew System::EventHandler(this, &custmors::DELBtn_Click);
			// 
			// UpdateBtn
			// 
			this->UpdateBtn->BackColor = System::Drawing::Color::Thistle;
			this->UpdateBtn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UpdateBtn->Location = System::Drawing::Point(356, 452);
			this->UpdateBtn->Name = L"UpdateBtn";
			this->UpdateBtn->Size = System::Drawing::Size(144, 57);
			this->UpdateBtn->TabIndex = 8;
			this->UpdateBtn->Text = L"update\r\n";
			this->UpdateBtn->UseVisualStyleBackColor = false;
			this->UpdateBtn->Click += gcnew System::EventHandler(this, &custmors::button3_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(243, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 32);
			this->label3->TabIndex = 10;
			this->label3->Text = L"customers\r\n";
			this->label3->Click += gcnew System::EventHandler(this, &custmors::label3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(9, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(211, 209);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Thistle;
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->Location = System::Drawing::Point(558, 137);
			this->dataGridView1->MaximumSize = System::Drawing::Size(1000, 1000);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(512, 358);
			this->dataGridView1->TabIndex = 20;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &custmors::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &custmors::dataGridView1_CellContentClick_1);
			this->dataGridView1->DoubleClick += gcnew System::EventHandler(this, &custmors::dataGridView1_DoubleClick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(990, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(94, 48);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &custmors::pictureBox2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Thistle;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(685, 536);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 64);
			this->button1->TabIndex = 22;
			this->button1->Text = L"show data";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &custmors::ShowBtn_Click);
			// 
			// custmors
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(1125, 639);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->UpdateBtn);
			this->Controls->Add(this->DELBtn);
			this->Controls->Add(this->InsertBtn);
			this->Controls->Add(this->TelTb);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->CusNameTb);
			this->Controls->Add(this->labl2);
			this->Controls->Add(this->CusIdTb);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->Name = L"custmors";
			this->Text = L"custmors";
			this->Load += gcnew System::EventHandler(this, &custmors::custmors_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:System::String^ connstring = "Data Source=DESKTOP-JP19D7R;Initial Catalog=custmors;Integrated Security=True;Encrypt=False";
	private: System::Void custmors_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void customer_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		if (CusIdTb->Text == "" || CusNameTb->Text == "" || TelTb->Text == "") {
			MessageBox::Show("Please Enter Id,Name and Telphone number");
			return;
		}
		try {

			SqlConnection Sqlconn(connstring);
			Sqlconn.Open();
			System::String^ sqlQuery = "INSERT INTO Users (Id, Name, Telnum) VALUES (@id, @name, @tel)";
			SqlCommand command(sqlQuery, % Sqlconn);
			command.Parameters->AddWithValue("@id", CusIdTb->Text);
			command.Parameters->AddWithValue("@name", CusNameTb->Text);
			command.Parameters->AddWithValue("@tel", TelTb->Text);

			command.ExecuteReader();
			Sqlconn.Close();
			MessageBox::Show("successfully insert");


		}
		catch (Exception^ e) {
			MessageBox::Show("database connection error" + e->Message);

		}




	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			SqlConnection Sqlconn(connstring);
			Sqlconn.Open();
			System::String^ sqlQuery = "UPDATE Users SET Name = @name ,  Telnum=@tel  WHERE Id = @id";
			SqlCommand command(sqlQuery, % Sqlconn);

			command.Parameters->AddWithValue("@id", CusIdTb->Text);
			command.Parameters->AddWithValue("@name", CusNameTb->Text);
			command.Parameters->AddWithValue("@tel", TelTb->Text);
			command.ExecuteNonQuery();
			Sqlconn.Close();
			MessageBox::Show("updated successfully");


		}
		catch (Exception^ e) {
			MessageBox::Show("database connection error" + e->Message);

		}
	}
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView1_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void DELBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			SqlConnection Sqlconn(connstring);
			Sqlconn.Open();
			System::String^ sqlQuery = "DELETE FROM Users WHERE Id = @id ";
			SqlCommand command(sqlQuery, % Sqlconn);
			command.Parameters->AddWithValue("@id", CusIdTb->Text);
			command.ExecuteNonQuery();
			Sqlconn.Close();
			MessageBox::Show("deleted successfully");


		}
		catch (Exception^ e) {
			MessageBox::Show("database connection error" + e->Message);

		}
	}
	private: System::Void ShowBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			SqlConnection^ Sqlconn = gcnew SqlConnection(connstring);
			Sqlconn->Open();

			String^ query = "SELECT * FROM Users";
			SqlDataAdapter^ adapter = gcnew SqlDataAdapter(query, Sqlconn);
			DataTable^ table = gcnew DataTable();
			adapter->Fill(table);

			dataGridView1->DataSource = table;
			dataGridView1->AutoSizeColumnsMode = DataGridViewAutoSizeColumnsMode::AllCells;

			Sqlconn->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("database connection error" + ex->Message);
		}
	}


	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};

}