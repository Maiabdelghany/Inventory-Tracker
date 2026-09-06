
#include "Products.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Data::SqlClient;

namespace LoginForm {


    void Products::LoadData() {
        SqlConnection^ conn = gcnew SqlConnection(connectionString);
        SqlDataAdapter^ adapter = gcnew SqlDataAdapter("SELECT * FROM Products", conn);
        DataTable^ dt = gcnew DataTable();
        adapter->Fill(dt);

        dataGridView1->AutoGenerateColumns = true;
        dataGridView1->DataSource = dt;


        undoBackup = dt->Copy();
    }

    System::Void Products::button1_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            SqlConnection^ conn = gcnew SqlConnection(connectionString);
            String^ query = "INSERT INTO Products (ProductID, ProductName, Quantity, Brand, Category, Description, Price) "
                "VALUES (@id, @name, @qty, @brand, @cat, @desc, @price)";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", Int32::Parse(productIdTextBox->Text));
            cmd->Parameters->AddWithValue("@name", productNameTextBox->Text);
            cmd->Parameters->AddWithValue("@qty", Int32::Parse(productQtyTextBox->Text));
            cmd->Parameters->AddWithValue("@brand", brandTextBox->Text);
            cmd->Parameters->AddWithValue("@cat", categoryComboBox->Text);
            cmd->Parameters->AddWithValue("@desc", descriptionTextBox->Text);
            cmd->Parameters->AddWithValue("@price", Decimal::Parse(priceTextBox->Text));
            conn->Open();
            cmd->ExecuteNonQuery();
            conn->Close();
            MessageBox::Show("Product inserted.");
            LoadData();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Operation Failed");
        }
    }

    System::Void Products::btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            SqlConnection^ conn = gcnew SqlConnection(connectionString);
            String^ query = "UPDATE Products SET ProductName=@name, Quantity=@qty, Brand=@brand, Category=@cat, Description=@desc, Price=@price "
                "WHERE ProductID=@id";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", Int32::Parse(productIdTextBox->Text));
            cmd->Parameters->AddWithValue("@name", productNameTextBox->Text);
            cmd->Parameters->AddWithValue("@qty", Int32::Parse(productQtyTextBox->Text));
            cmd->Parameters->AddWithValue("@brand", brandTextBox->Text);
            cmd->Parameters->AddWithValue("@cat", categoryComboBox->Text);
            cmd->Parameters->AddWithValue("@desc", descriptionTextBox->Text);
            cmd->Parameters->AddWithValue("@price", Decimal::Parse(priceTextBox->Text));
            conn->Open();
            cmd->ExecuteNonQuery();
            conn->Close();
            MessageBox::Show("Product updated.");
            LoadData();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Operation Failed");
        }
    }

    System::Void Products::button3_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            SqlConnection^ conn = gcnew SqlConnection(connectionString);
            String^ query = "DELETE FROM Products WHERE ProductID=@id";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);
            cmd->Parameters->AddWithValue("@id", Int32::Parse(productIdTextBox->Text));
            conn->Open();
            cmd->ExecuteNonQuery();
            conn->Close();
            MessageBox::Show("Product deleted.");
            LoadData();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Operation Failed");
        }
    }

    System::Void Products::btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            productIdTextBox->Clear();
            productNameTextBox->Clear();
            productQtyTextBox->Clear();
            brandTextBox->Clear();
            categoryComboBox->SelectedIndex = -1;
            descriptionTextBox->Clear();
            priceTextBox->Clear();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Operation Failed");
        }
    }

    System::Void Products::btnSelect_Click(System::Object^ sender, System::EventArgs^ e) {
        try {
            LoadData();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Operation Failed");
        }
    }

    System::Void Products::btnUndo_Click(System::Object^ sender, System::EventArgs^ e)
    {
        try {
            SqlConnection^ conn = gcnew SqlConnection(connectionString);
            String^ query = "DELETE FROM Products";
            SqlCommand^ cmd = gcnew SqlCommand(query, conn);

            conn->Open();
            cmd->ExecuteNonQuery();
            conn->Close();

            MessageBox::Show("All products have been deleted.", "Undo (Clear Table)");
            LoadData();
        }
        catch (Exception^ ex) {
            MessageBox::Show("Error: " + ex->Message, "Undo Failed");
        }
    }



    System::Void Products::dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {}

    System::Void Products::label1_Click(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Products::label2_Click(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Products::label3_Click(System::Object^ sender, System::EventArgs^ e) {}
    System::Void Products::label6_Click(System::Object^ sender, System::EventArgs^ e) {}

    System::Void Products::Products_Load(System::Object^ sender, System::EventArgs^ e) {
        LoadData();
    }
}
System::Void LoginForm::Products::label8_Click(System::Object^ sender, System::EventArgs^ e)
{

}
