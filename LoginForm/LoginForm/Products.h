#pragma once
namespace LoginForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Products
	/// </summary>
	public ref class Products : public System::Windows::Forms::Form
	{
	public:
		Products(void)
		{
			InitializeComponent();

			//
			//TODO: Add the constructor code here
			//
		};

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Products()
		{
			if (components)
			{
				delete components;
			}
		}
	private:
		static initonly System::String^ connectionString = "Data Source=DESKTOP-JP19D7R;Initial Catalog=custmors;Integrated Security=True";
		DataTable^ undoBackup;


		TextBox^ productIdTextBox;
		TextBox^ productNameTextBox;
		TextBox^ productQtyTextBox;
		TextBox^ brandTextBox;
		ComboBox^ categoryComboBox;
		TextBox^ descriptionTextBox;
		TextBox^ priceTextBox;
		DataGridView^ dataGridView1;


		Button^ button1;
		Button^ btnUpdate;
		Button^ button3;
		Button^ btnClear;



	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Button^ insertBtn;
	private: System::Windows::Forms::Button^ updateBtn;
	private: System::Windows::Forms::Button^ deleteBtn;
	private: System::Windows::Forms::Button^ clearBtn;

	private: System::Windows::Forms::Button^ btnUndo;



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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->productNameTextBox = (gcnew System::Windows::Forms::TextBox());
			this->productQtyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->brandTextBox = (gcnew System::Windows::Forms::TextBox());
			this->descriptionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->priceTextBox = (gcnew System::Windows::Forms::TextBox());
			this->productIdTextBox = (gcnew System::Windows::Forms::TextBox());
			this->insertBtn = (gcnew System::Windows::Forms::Button());
			this->updateBtn = (gcnew System::Windows::Forms::Button());
			this->deleteBtn = (gcnew System::Windows::Forms::Button());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->btnUndo = (gcnew System::Windows::Forms::Button());
			this->categoryComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(184, 57);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(200, 60);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Products";
			this->label1->Click += gcnew System::EventHandler(this, &Products::label1_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(51, 150);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(200, 50);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Product id";
			this->label2->Click += gcnew System::EventHandler(this, &Products::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(47, 225);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(187, 31);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Product Name";
			this->label3->Click += gcnew System::EventHandler(this, &Products::label3_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(47, 308);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(217, 31);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Product Quantity";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(51, 383);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(86, 31);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Brand";
			this->label6->Click += gcnew System::EventHandler(this, &Products::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(47, 456);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(226, 31);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Product Category";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(51, 535);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 31);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Description";
			this->label8->Click += gcnew System::EventHandler(this, &Products::label8_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(51, 605);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(76, 31);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Price";
			// 
			// productNameTextBox
			// 
			this->productNameTextBox->BackColor = System::Drawing::Color::Thistle;
			this->productNameTextBox->Location = System::Drawing::Point(322, 225);
			this->productNameTextBox->Name = L"productNameTextBox";
			this->productNameTextBox->Size = System::Drawing::Size(294, 38);
			this->productNameTextBox->TabIndex = 10;
			this->productNameTextBox->TextChanged += gcnew System::EventHandler(this, &Products::productNameTextBox_TextChanged);
			// 
			// productQtyTextBox
			// 
			this->productQtyTextBox->BackColor = System::Drawing::Color::Thistle;
			this->productQtyTextBox->Location = System::Drawing::Point(322, 308);
			this->productQtyTextBox->Name = L"productQtyTextBox";
			this->productQtyTextBox->Size = System::Drawing::Size(294, 38);
			this->productQtyTextBox->TabIndex = 11;
			this->productQtyTextBox->TextChanged += gcnew System::EventHandler(this, &Products::productQtyTextBox_TextChanged);
			// 
			// brandTextBox
			// 
			this->brandTextBox->BackColor = System::Drawing::Color::Thistle;
			this->brandTextBox->Location = System::Drawing::Point(322, 383);
			this->brandTextBox->Name = L"brandTextBox";
			this->brandTextBox->Size = System::Drawing::Size(294, 38);
			this->brandTextBox->TabIndex = 12;
			this->brandTextBox->TextChanged += gcnew System::EventHandler(this, &Products::brandTextBox_TextChanged);
			// 
			// descriptionTextBox
			// 
			this->descriptionTextBox->BackColor = System::Drawing::Color::Thistle;
			this->descriptionTextBox->Location = System::Drawing::Point(322, 535);
			this->descriptionTextBox->Name = L"descriptionTextBox";
			this->descriptionTextBox->Size = System::Drawing::Size(294, 38);
			this->descriptionTextBox->TabIndex = 13;
			this->descriptionTextBox->TextChanged += gcnew System::EventHandler(this, &Products::descriptionTextBox_TextChanged);
			// 
			// priceTextBox
			// 
			this->priceTextBox->BackColor = System::Drawing::Color::Thistle;
			this->priceTextBox->Location = System::Drawing::Point(322, 605);
			this->priceTextBox->Name = L"priceTextBox";
			this->priceTextBox->Size = System::Drawing::Size(294, 38);
			this->priceTextBox->TabIndex = 15;
			this->priceTextBox->TextChanged += gcnew System::EventHandler(this, &Products::priceTextBox_TextChanged);
			// 
			// productIdTextBox
			// 
			this->productIdTextBox->BackColor = System::Drawing::Color::Thistle;
			this->productIdTextBox->Location = System::Drawing::Point(322, 150);
			this->productIdTextBox->Name = L"productIdTextBox";
			this->productIdTextBox->Size = System::Drawing::Size(294, 38);
			this->productIdTextBox->TabIndex = 16;
			this->productIdTextBox->TextChanged += gcnew System::EventHandler(this, &Products::productIdTextBox_TextChanged);
			// 
			// insertBtn
			// 
			this->insertBtn->BackColor = System::Drawing::Color::Thistle;
			this->insertBtn->Font = (gcnew System::Drawing::Font(L"High Tower Text", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->insertBtn->Location = System::Drawing::Point(144, 682);
			this->insertBtn->Name = L"insertBtn";
			this->insertBtn->Size = System::Drawing::Size(152, 77);
			this->insertBtn->TabIndex = 17;
			this->insertBtn->Text = L"Insert";
			this->insertBtn->UseVisualStyleBackColor = false;
			this->insertBtn->Click += gcnew System::EventHandler(this, &Products::button1_Click);
			// 
			// updateBtn
			// 
			this->updateBtn->BackColor = System::Drawing::Color::Thistle;
			this->updateBtn->Font = (gcnew System::Drawing::Font(L"High Tower Text", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->updateBtn->Location = System::Drawing::Point(347, 682);
			this->updateBtn->Name = L"updateBtn";
			this->updateBtn->Size = System::Drawing::Size(152, 77);
			this->updateBtn->TabIndex = 18;
			this->updateBtn->Text = L"Update";
			this->updateBtn->UseVisualStyleBackColor = false;
			this->updateBtn->Click += gcnew System::EventHandler(this, &Products::btnUpdate_Click);
			// 
			// deleteBtn
			// 
			this->deleteBtn->BackColor = System::Drawing::Color::Thistle;
			this->deleteBtn->Font = (gcnew System::Drawing::Font(L"High Tower Text", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deleteBtn->Location = System::Drawing::Point(554, 682);
			this->deleteBtn->Name = L"deleteBtn";
			this->deleteBtn->Size = System::Drawing::Size(152, 77);
			this->deleteBtn->TabIndex = 19;
			this->deleteBtn->Text = L"Delete";
			this->deleteBtn->UseVisualStyleBackColor = false;
			this->deleteBtn->Click += gcnew System::EventHandler(this, &Products::button3_Click);
			// 
			// clearBtn
			// 
			this->clearBtn->BackColor = System::Drawing::Color::Thistle;
			this->clearBtn->Font = (gcnew System::Drawing::Font(L"High Tower Text", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clearBtn->Location = System::Drawing::Point(757, 682);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(152, 77);
			this->clearBtn->TabIndex = 20;
			this->clearBtn->Text = L"Clear";
			this->clearBtn->UseVisualStyleBackColor = false;
			this->clearBtn->Click += gcnew System::EventHandler(this, &Products::btnClear_Click);
			// 
			// btnUndo
			// 
			this->btnUndo->BackColor = System::Drawing::Color::Thistle;
			this->btnUndo->Font = (gcnew System::Drawing::Font(L"High Tower Text", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUndo->Location = System::Drawing::Point(1011, 514);
			this->btnUndo->Name = L"btnUndo";
			this->btnUndo->Size = System::Drawing::Size(152, 77);
			this->btnUndo->TabIndex = 22;
			this->btnUndo->Text = L"Undo";
			this->btnUndo->UseVisualStyleBackColor = false;
			this->btnUndo->Click += gcnew System::EventHandler(this, &Products::btnUndo_Click);
			// 
			// categoryComboBox
			// 
			this->categoryComboBox->BackColor = System::Drawing::Color::Thistle;
			this->categoryComboBox->ForeColor = System::Drawing::Color::Black;
			this->categoryComboBox->FormattingEnabled = true;
			this->categoryComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Electronics", L"SmartPhones", L"Audio",
					L"Clothing", L"FootWear"
			});
			this->categoryComboBox->Location = System::Drawing::Point(322, 456);
			this->categoryComboBox->Name = L"categoryComboBox";
			this->categoryComboBox->Size = System::Drawing::Size(294, 39);
			this->categoryComboBox->TabIndex = 24;
			this->categoryComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Products::categoryComboBox_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::Thistle;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::Color::LightGray;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::Thistle;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(709, 150);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(777, 327);
			this->dataGridView1->TabIndex = 25;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Products::dataGridView1_CellContentClick);
			// 
			// Products
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Thistle;
			this->ClientSize = System::Drawing::Size(1505, 771);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->categoryComboBox);
			this->Controls->Add(this->btnUndo);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->deleteBtn);
			this->Controls->Add(this->updateBtn);
			this->Controls->Add(this->insertBtn);
			this->Controls->Add(this->productIdTextBox);
			this->Controls->Add(this->priceTextBox);
			this->Controls->Add(this->descriptionTextBox);
			this->Controls->Add(this->brandTextBox);
			this->Controls->Add(this->productQtyTextBox);
			this->Controls->Add(this->productNameTextBox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"Products";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Products";
			this->TransparencyKey = System::Drawing::Color::White;
			this->Load += gcnew System::EventHandler(this, &Products::Products_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		Void LoadData(void);
		System::Void label1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label2_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label3_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label8_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void Products_Load(System::Object^ sender, System::EventArgs^ e);
		System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		System::Void btnUndo_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void label6_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e);
		System::Void btnSelect_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void productIdTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void productNameTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void productQtyTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void brandTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void categoryComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void descriptionTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void priceTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
