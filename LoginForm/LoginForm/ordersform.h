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

    public ref class ordersform : public System::Windows::Forms::Form
    {
    public:
        ordersform(void)
        {
            InitializeComponent();

            conString = "Data Source=DESKTOP-JP19D7R;Initial Catalog=custmors;Integrated Security=True;";
            LoadData();
        }

    protected:
        ~ordersform()
        {
            if (components)
            {
                delete components;
            }
        }

    private: String^ conString;
    private: System::Windows::Forms::Label^ label1;
    private: System::Windows::Forms::Label^ label2;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label5;

    private: System::Windows::Forms::TextBox^ textBox2;
    private: System::Windows::Forms::TextBox^ textBox3;
    private: System::Windows::Forms::TextBox^ textBox4;
    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button2;
    private: System::Windows::Forms::Button^ button3;
    private: System::Windows::Forms::DataGridView^ dataGridView1;
    private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
    private: System::Windows::Forms::TextBox^ textBox1;
    private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->label1 = (gcnew System::Windows::Forms::Label());
               this->label2 = (gcnew System::Windows::Forms::Label());
               this->label3 = (gcnew System::Windows::Forms::Label());
               this->label4 = (gcnew System::Windows::Forms::Label());
               this->label5 = (gcnew System::Windows::Forms::Label());
               this->textBox2 = (gcnew System::Windows::Forms::TextBox());
               this->textBox3 = (gcnew System::Windows::Forms::TextBox());
               this->textBox4 = (gcnew System::Windows::Forms::TextBox());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->button2 = (gcnew System::Windows::Forms::Button());
               this->button3 = (gcnew System::Windows::Forms::Button());
               this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
               this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
               this->textBox1 = (gcnew System::Windows::Forms::TextBox());
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
               this->SuspendLayout();
               // 
               // label1
               // 
               this->label1->AutoSize = true;
               this->label1->Location = System::Drawing::Point(6, 6);
               this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
               this->label1->Name = L"label1";
               this->label1->Size = System::Drawing::Size(57, 16);
               this->label1->TabIndex = 0;
               this->label1->Text = L"Order ID";
               // 
               // label2
               // 
               this->label2->AutoSize = true;
               this->label2->Location = System::Drawing::Point(6, 42);
               this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
               this->label2->Name = L"label2";
               this->label2->Size = System::Drawing::Size(69, 16);
               this->label2->TabIndex = 1;
               this->label2->Text = L"Product ID";
               // 
               // label3
               // 
               this->label3->AutoSize = true;
               this->label3->Location = System::Drawing::Point(6, 77);
               this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
               this->label3->Name = L"label3";
               this->label3->Size = System::Drawing::Size(80, 16);
               this->label3->TabIndex = 2;
               this->label3->Text = L"Customer ID";
               // 
               // label4
               // 
               this->label4->AutoSize = true;
               this->label4->Location = System::Drawing::Point(6, 108);
               this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
               this->label4->Name = L"label4";
               this->label4->Size = System::Drawing::Size(55, 16);
               this->label4->TabIndex = 3;
               this->label4->Text = L"Quantity";
               // 
               // label5
               // 
               this->label5->AutoSize = true;
               this->label5->Location = System::Drawing::Point(6, 142);
               this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
               this->label5->Name = L"label5";
               this->label5->Size = System::Drawing::Size(73, 16);
               this->label5->TabIndex = 4;
               this->label5->Text = L"Order Date";
               // 
               // textBox2
               // 
               this->textBox2->Location = System::Drawing::Point(94, 42);
               this->textBox2->Margin = System::Windows::Forms::Padding(2);
               this->textBox2->Name = L"textBox2";
               this->textBox2->Size = System::Drawing::Size(195, 22);
               this->textBox2->TabIndex = 6;
               this->textBox2->TextChanged += gcnew System::EventHandler(this, &ordersform::textBox2_TextChanged);
               // 
               // textBox3
               // 
               this->textBox3->Location = System::Drawing::Point(94, 75);
               this->textBox3->Margin = System::Windows::Forms::Padding(2);
               this->textBox3->Name = L"textBox3";
               this->textBox3->Size = System::Drawing::Size(195, 22);
               this->textBox3->TabIndex = 7;
               this->textBox3->TextChanged += gcnew System::EventHandler(this, &ordersform::textBox3_TextChanged);
               // 
               // textBox4
               // 
               this->textBox4->Location = System::Drawing::Point(94, 107);
               this->textBox4->Margin = System::Windows::Forms::Padding(2);
               this->textBox4->Name = L"textBox4";
               this->textBox4->Size = System::Drawing::Size(195, 22);
               this->textBox4->TabIndex = 8;
               // 
               // button1
               // 
               this->button1->Location = System::Drawing::Point(310, 130);
               this->button1->Margin = System::Windows::Forms::Padding(2);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(96, 35);
               this->button1->TabIndex = 10;
               this->button1->Text = L"Insert";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &ordersform::button1_Click);
               // 
               // button2
               // 
               this->button2->Location = System::Drawing::Point(436, 130);
               this->button2->Margin = System::Windows::Forms::Padding(2);
               this->button2->Name = L"button2";
               this->button2->Size = System::Drawing::Size(88, 35);
               this->button2->TabIndex = 11;
               this->button2->Text = L"Update";
               this->button2->UseVisualStyleBackColor = true;
               this->button2->Click += gcnew System::EventHandler(this, &ordersform::button2_Click);
               // 
               // button3
               // 
               this->button3->Location = System::Drawing::Point(554, 130);
               this->button3->Margin = System::Windows::Forms::Padding(2);
               this->button3->Name = L"button3";
               this->button3->Size = System::Drawing::Size(95, 34);
               this->button3->TabIndex = 12;
               this->button3->Text = L"Delete";
               this->button3->UseVisualStyleBackColor = true;
               this->button3->Click += gcnew System::EventHandler(this, &ordersform::button3_Click);
               // 
               // dataGridView1
               // 
               this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
               this->dataGridView1->Location = System::Drawing::Point(94, 182);
               this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
               this->dataGridView1->Name = L"dataGridView1";
               this->dataGridView1->RowHeadersWidth = 51;
               this->dataGridView1->RowTemplate->Height = 24;
               this->dataGridView1->Size = System::Drawing::Size(603, 284);
               this->dataGridView1->TabIndex = 13;
               this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ordersform::dataGridView1_CellClick);
               this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ordersform::dataGridView1_CellContentClick);
               // 
               // dateTimePicker1
               // 
               this->dateTimePicker1->Location = System::Drawing::Point(94, 139);
               this->dateTimePicker1->Margin = System::Windows::Forms::Padding(2);
               this->dateTimePicker1->Name = L"dateTimePicker1";
               this->dateTimePicker1->Size = System::Drawing::Size(195, 22);
               this->dateTimePicker1->TabIndex = 14;
               // 
               // textBox1
               // 
               this->textBox1->Location = System::Drawing::Point(94, 6);
               this->textBox1->Name = L"textBox1";
               this->textBox1->Size = System::Drawing::Size(195, 22);
               this->textBox1->TabIndex = 15;
               this->textBox1->TextChanged += gcnew System::EventHandler(this, &ordersform::textBox1_TextChanged_1);
               // 
               // ordersform
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->BackColor = System::Drawing::Color::Thistle;
               this->ClientSize = System::Drawing::Size(778, 477);
               this->Controls->Add(this->textBox1);
               this->Controls->Add(this->dateTimePicker1);
               this->Controls->Add(this->dataGridView1);
               this->Controls->Add(this->button3);
               this->Controls->Add(this->button2);
               this->Controls->Add(this->button1);
               this->Controls->Add(this->textBox4);
               this->Controls->Add(this->textBox3);
               this->Controls->Add(this->textBox2);
               this->Controls->Add(this->label5);
               this->Controls->Add(this->label4);
               this->Controls->Add(this->label3);
               this->Controls->Add(this->label2);
               this->Controls->Add(this->label1);
               this->Margin = System::Windows::Forms::Padding(2);
               this->Name = L"ordersform";
               this->Text = L"Orders Form";
               (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private:

        void LoadData()
        {
            SqlConnection^ con = gcnew SqlConnection(conString);
            try
            {
                SqlDataAdapter^ sda = gcnew SqlDataAdapter(
                    "SELECT * FROM OrdersDB ORDER BY OrderID DESC", con);
                DataTable^ dt = gcnew DataTable();
                sda->Fill(dt);
                dataGridView1->DataSource = dt;
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Load failed: " + ex->Message);
            }
        }

        System::Void dataGridView1_CellClick(System::Object^ sender, DataGridViewCellEventArgs^ e)
        {
            if (e->RowIndex < 0) return;

            DataGridViewRow^ row = dataGridView1->Rows[e->RowIndex];
            textBox1->Text = row->Cells["OrderID"]->Value->ToString();
            textBox2->Text = row->Cells["ProductID"]->Value->ToString();
            textBox3->Text = row->Cells["CustomerID"]->Value->ToString();
            textBox4->Text = row->Cells["Quantity"]->Value->ToString();

            if (row->Cells["OrderDate"]->Value != nullptr)
            {
                DateTime orderDate = safe_cast<DateTime>(row->Cells["OrderDate"]->Value);
                dateTimePicker1->Value = orderDate;
            }
        }


        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            SqlConnection^ con = gcnew SqlConnection(conString);
            String^ sql = "INSERT INTO OrdersDB (ProductID, CustomerID, Quantity, OrderDate) VALUES (@ProductID, @CustomerID, @Quantity, @OrderDate)";
            try
            {
                SqlCommand^ cmd = gcnew SqlCommand(sql, con);
                cmd->Parameters->AddWithValue("@ProductID", Int32::Parse(textBox2->Text));
                cmd->Parameters->AddWithValue("@CustomerID", Int32::Parse(textBox3->Text));
                cmd->Parameters->AddWithValue("@Quantity", Int32::Parse(textBox4->Text));
                cmd->Parameters->AddWithValue("@OrderDate", dateTimePicker1->Value);

                con->Open();
                cmd->ExecuteNonQuery();
                MessageBox::Show("Row inserted!");
                LoadData();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Insert failed: " + ex->Message);
            }
        }

        System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrWhiteSpace(textBox1->Text))
            {
                MessageBox::Show("Select a row first.");
                return;
            }

            SqlConnection^ con = gcnew SqlConnection(conString);
            String^ sql = "UPDATE OrdersDB SET ProductID=@ProductID, CustomerID=@CustomerID, Quantity=@Quantity, OrderDate=@OrderDate WHERE OrderID=@OrderID";
            try
            {
                SqlCommand^ cmd = gcnew SqlCommand(sql, con);
                cmd->Parameters->AddWithValue("@ProductID", Int32::Parse(textBox2->Text));
                cmd->Parameters->AddWithValue("@CustomerID", Int32::Parse(textBox3->Text));
                cmd->Parameters->AddWithValue("@Quantity", Int32::Parse(textBox4->Text));
                cmd->Parameters->AddWithValue("@OrderDate", dateTimePicker1->Value);
                cmd->Parameters->AddWithValue("@OrderID", Int32::Parse(textBox1->Text));

                con->Open();
                cmd->ExecuteNonQuery();
                MessageBox::Show("Row updated!");
                LoadData();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Update failed: " + ex->Message);
            }
        }

        System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrWhiteSpace(textBox1->Text))
            {
                MessageBox::Show("Select a row first.");
                return;
            }

            if (MessageBox::Show("Do you want to delete this record", "Confirm", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::No)
                return;

            SqlConnection^ con = gcnew SqlConnection(conString);
            String^ sql = "DELETE FROM OrdersDB WHERE OrderID=@OrderID";
            try
            {
                SqlCommand^ cmd = gcnew SqlCommand(sql, con);
                cmd->Parameters->AddWithValue("@OrderID", Int32::Parse(textBox1->Text));

                con->Open();
                cmd->ExecuteNonQuery();
                MessageBox::Show("Row deleted!");
                LoadData();
            }
            catch (Exception^ ex)
            {
                MessageBox::Show("Delete failed: " + ex->Message);
            }
        }
    private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    }
    };
}
