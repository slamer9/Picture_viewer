#pragma once
#include <iostream>
#include <iomanip>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include "Givin.h"


System::String^ s2s(std::string  str) 
{
	return gcnew System::String(str.c_str());
}


std::string s2s(System::String^ str) 
{
	return msclr::interop::marshal_as<std::string>(str);
}

namespace Picture_viewer 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	//Declare PList, and current_position
	private:
		PictureList PList;


	private: System::Windows::Forms::Button^  Add;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

			 int current_position;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  Center_pic;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^  Right_pic;

	private: System::Windows::Forms::PictureBox^  Left_pic;

	protected:

	protected:


	private: System::Windows::Forms::Button^  Next;

	private: System::Windows::Forms::Button^  Previous;

	private: System::Windows::Forms::Button^  Remove;
	private: System::Windows::Forms::RichTextBox^  Prolog_box;









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
			this->Center_pic = (gcnew System::Windows::Forms::PictureBox());
			this->Right_pic = (gcnew System::Windows::Forms::PictureBox());
			this->Left_pic = (gcnew System::Windows::Forms::PictureBox());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Previous = (gcnew System::Windows::Forms::Button());
			this->Remove = (gcnew System::Windows::Forms::Button());
			this->Prolog_box = (gcnew System::Windows::Forms::RichTextBox());
			this->Add = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Center_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Right_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Left_pic))->BeginInit();
			this->SuspendLayout();
			// 
			// Center_pic
			// 
			this->Center_pic->Location = System::Drawing::Point(216, 88);
			this->Center_pic->Name = L"Center_pic";
			this->Center_pic->Size = System::Drawing::Size(220, 197);
			this->Center_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Center_pic->TabIndex = 0;
			this->Center_pic->TabStop = false;
			// 
			// Right_pic
			// 
			this->Right_pic->Location = System::Drawing::Point(522, 200);
			this->Right_pic->Name = L"Right_pic";
			this->Right_pic->Size = System::Drawing::Size(91, 85);
			this->Right_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Right_pic->TabIndex = 1;
			this->Right_pic->TabStop = false;
			this->Right_pic->Click += gcnew System::EventHandler(this, &MyForm::Right_pic_Click);
			// 
			// Left_pic
			// 
			this->Left_pic->Location = System::Drawing::Point(39, 200);
			this->Left_pic->Name = L"Left_pic";
			this->Left_pic->Size = System::Drawing::Size(91, 85);
			this->Left_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Left_pic->TabIndex = 2;
			this->Left_pic->TabStop = false;
			this->Left_pic->Click += gcnew System::EventHandler(this, &MyForm::Left_pic_Click);
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(538, 345);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(75, 23);
			this->Next->TabIndex = 3;
			this->Next->Text = L"Next";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Previous
			// 
			this->Previous->Location = System::Drawing::Point(39, 345);
			this->Previous->Name = L"Previous";
			this->Previous->Size = System::Drawing::Size(75, 23);
			this->Previous->TabIndex = 4;
			this->Previous->Text = L"Previous";
			this->Previous->UseVisualStyleBackColor = true;
			this->Previous->Click += gcnew System::EventHandler(this, &MyForm::Previous_Click);
			// 
			// Remove
			// 
			this->Remove->Location = System::Drawing::Point(287, 320);
			this->Remove->Name = L"Remove";
			this->Remove->Size = System::Drawing::Size(75, 23);
			this->Remove->TabIndex = 6;
			this->Remove->Text = L"Remove";
			this->Remove->UseVisualStyleBackColor = true;
			this->Remove->Click += gcnew System::EventHandler(this, &MyForm::Remove_Click);
			// 
			// Prolog_box
			// 
			this->Prolog_box->Location = System::Drawing::Point(12, 12);
			this->Prolog_box->Name = L"Prolog_box";
			this->Prolog_box->Size = System::Drawing::Size(133, 48);
			this->Prolog_box->TabIndex = 7;
			this->Prolog_box->Text = L"Author: Duncan Reeves\nDate started: 17/Nov/15\nCP2 C++";
			// 
			// Add
			// 
			this->Add->Location = System::Drawing::Point(287, 291);
			this->Add->Name = L"Add";
			this->Add->Size = System::Drawing::Size(75, 23);
			this->Add->TabIndex = 5;
			this->Add->Text = L"Add";
			this->Add->UseVisualStyleBackColor = true;
			this->Add->Click += gcnew System::EventHandler(this, &MyForm::Add_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(659, 483);
			this->Controls->Add(this->Prolog_box);
			this->Controls->Add(this->Remove);
			this->Controls->Add(this->Add);
			this->Controls->Add(this->Previous);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->Left_pic);
			this->Controls->Add(this->Right_pic);
			this->Controls->Add(this->Center_pic);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Center_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Right_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Left_pic))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (PList.current == NULL || PList.current->next == NULL)
	{
		return;
	}

	PList.current = PList.current->next;

	//***********Gives each picture box an image***********//
	this->Center_pic->ImageLocation = s2s(PList.current->picturePath);
	this->Left_pic->ImageLocation = s2s(PList.current->prev->picturePath);
	if (PList.current->next != NULL)
	{
		this->Right_pic->ImageLocation = s2s(PList.current->next->picturePath);
	}
	else //Gives an empty box
		this->Right_pic->ImageLocation = "";
}
private: System::Void Previous_Click(System::Object^  sender, System::EventArgs^  e) 
{
	if (PList.current == NULL || PList.current->prev == NULL)
	{
		return;
	}

	PList.current = PList.current->prev;

	//***********Gives each picture box an image***********//
	this->Center_pic->ImageLocation = s2s(PList.current->picturePath);
	this->Right_pic->ImageLocation = s2s(PList.current->next->picturePath);
	if (PList.current->prev != NULL)
	{
		this->Left_pic->ImageLocation = s2s(PList.current->prev->picturePath);
	}
	else //Gives an empty box
		this->Left_pic->ImageLocation = "";
}


private: System::Void Add_Click(System::Object^  sender, System::EventArgs^  e) 
{
	PictureNode * Temp = new PictureNode();

	//Lets user choose a filepath to a picture.
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::Cancel)
	{
		return;
	}

	Temp->picturePath = s2s(this->openFileDialog1->FileName); //It needs to be a different type of string, so the s2s function is called



	if (PList.current == NULL)
	{
		PList.current = Temp;
		PList.start = Temp;
		PList.end = Temp;
		Temp->next = NULL;
		Temp->prev = NULL;
	} else 
	{
		 if (PList.current == PList.start)
		 {
			 PList.start = Temp;
			 Temp->prev = NULL;
			 Temp->next = PList.current;
			 PList.current->prev = Temp;
			 PList.current = Temp;
		 }
		 else
		 {
			 PList.current->prev->next = Temp;
			 Temp->prev = PList.current->prev;
			 PList.current->prev = Temp;
			 Temp->next = PList.current;
			 PList.current = Temp;
		 }
	}

	//changes the pictures
	this->Center_pic->ImageLocation = s2s(PList.current->picturePath);
	if (PList.current->next != NULL)
		this->Right_pic->ImageLocation = s2s(PList.current->next->picturePath);
	if (PList.current->prev != NULL)
		this->Left_pic->ImageLocation = s2s(PList.current->prev->picturePath);
	
}

private: System::Void Remove_Click(System::Object^  sender, System::EventArgs^  e) 
{
	PictureNode *temporary = NULL;

	if (PList.current == NULL)
	{
		return;
	}

	if (PList.current == PList.start)
	{
		if (PList.current->next != NULL)
		{
			PList.current->next->prev = NULL;
			PList.start = PList.current->next;
			delete(PList.current);
			PList.current = PList.start;
			this->Center_pic->ImageLocation = s2s(PList.current->picturePath);
			if (PList.current->next != NULL)
				this->Right_pic->ImageLocation = s2s(PList.current->next->picturePath);
			else
				this->Right_pic->ImageLocation = "";
			return;
		}
		else
		{
			delete(PList.current);
			PList.start = NULL;
			PList.current = NULL;
			PList.end = NULL;
			this->Center_pic->ImageLocation = "";
			return;
		}
	}

	
	if (PList.current == PList.end)
	{
		//No need to check if there is only one picture. because it would have been caught already above
		PList.current->prev->next = NULL;
		PList.end = PList.current->prev;
		delete(PList.current);
		PList.current = PList.end;
		this->Center_pic->ImageLocation = s2s(PList.current->picturePath);
		if (PList.current->prev != NULL)
			this->Left_pic->ImageLocation = s2s(PList.current->prev->picturePath);
		else
			this->Left_pic->ImageLocation = "";
		return;
	}

	//When you are neither at the start, nor the end of the linked list
	temporary = PList.current;
	PList.current = PList.current->prev;
	temporary->next->prev = temporary->prev;
	temporary->prev->next = temporary->next;
	delete(temporary);
	temporary = NULL;
	this->Center_pic->ImageLocation = s2s(PList.current->picturePath);
	if (PList.current->next != NULL)
		this->Right_pic->ImageLocation = s2s(PList.current->next->picturePath);
	else
		this->Right_pic->ImageLocation = "";
	if (PList.current->prev != NULL)
		this->Left_pic->ImageLocation = s2s(PList.current->prev->picturePath);
	else
		this->Left_pic->ImageLocation = "";
	return;
}

};
}
