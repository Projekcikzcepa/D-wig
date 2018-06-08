#pragma once
#include <iostream>
#include <cstdlib>

namespace CppWinForm1 {

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

	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
	private: System::ComponentModel::IContainer^  components;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(1577, 223);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(7);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 152);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1472, 80);
			this->button1->Margin = System::Windows::Forms::Padding(7);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(329, 51);
			this->button1->TabIndex = 2;
			this->button1->Text = L"W³¹cz dŸwig";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(795, 1254);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(7);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(117, 112);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(1054, 1254);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(7);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(121, 112);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(913, 1254);
			this->pictureBox4->Margin = System::Windows::Forms::Padding(7);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(140, 112);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"";
			// 
			// timer1
			// 
			this->timer1->Interval = 1;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox5->Location = System::Drawing::Point(845, 241);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(10, 862);
			this->pictureBox5->TabIndex = 6;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox6->Location = System::Drawing::Point(987, 241);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(10, 862);
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Visible = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox7->Location = System::Drawing::Point(1110, 241);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(10, 862);
			this->pictureBox7->TabIndex = 8;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Visible = false;
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Interval = 1;
			this->timer3->Tick += gcnew System::EventHandler(this, &MyForm::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Interval = 1;
			this->timer4->Tick += gcnew System::EventHandler(this, &MyForm::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Interval = 1;
			this->timer5->Tick += gcnew System::EventHandler(this, &MyForm::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Interval = 1;
			this->timer6->Tick += gcnew System::EventHandler(this, &MyForm::timer6_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(14, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1829, 1365);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Margin = System::Windows::Forms::Padding(7);
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"DŸwig";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->timer1->Start();
	}
			 private :int a= 0;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	a++;
	this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X - 1, pictureBox2->Location.Y);
	if (a == 220)
	{
		timer1->Stop();
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, 495);
		this->pictureBox7->Visible = true;
		this->timer2->Start();
	}
}
		 int b=0;
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
	
	b++;
	this->pictureBox3->Location = System::Drawing::Point(pictureBox3->Location.X + 1, pictureBox3->Location.Y);
	this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X +1, pictureBox2->Location.Y);
	this->pictureBox7->Location = System::Drawing::Point(pictureBox7->Location.X + 1, pictureBox7->Location.Y);
	if (b == 220)
	{
		this->timer2->Stop();
		this->pictureBox7->Visible = false;
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X , 100);
		this->timer3->Start();
	}
}
		 int c;
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
	c++;
	this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X - 1, pictureBox2->Location.Y);
	if (c == 272)
	{
		this->timer3->Stop();
		this->pictureBox6->Visible = true;
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, 495);
		this->pictureBox6->Size = System::Drawing::Size(5, 340);
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, 444);
		this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X, 510);
		this->timer4->Start();
	}
}
		 int d;
private: System::Void timer4_Tick(System::Object^  sender, System::EventArgs^  e) {
	d++;
	this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X + 1, pictureBox4->Location.Y);
	this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
	this->pictureBox6->Location = System::Drawing::Point(pictureBox6->Location.X + 1, pictureBox6->Location.Y);
	if (d == 274)
	{
		this->timer4->Stop();
		this->pictureBox6->Visible = false;
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, 100);
		this->timer5->Start();
	}
}
		 int f=0;
private: System::Void timer5_Tick(System::Object^  sender, System::EventArgs^  e) {
	f++;
	this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X - 1, pictureBox2->Location.Y);
	if (f == 335)
	{
		this->timer5->Stop();
		this->pictureBox5->Visible = true;
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, 495);
		this->pictureBox5->Size = System::Drawing::Size(5, 284);
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, 393);
		this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X, 460);
		this->timer6->Start();
	}
}
		 int g = 0;
private: System::Void timer6_Tick(System::Object^  sender, System::EventArgs^  e) {
	g++;
	this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X + 1, pictureBox1->Location.Y);
	this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
	this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X + 1, pictureBox5->Location.Y);
	if (g == 335)
	{
		this->timer6->Stop();
		this->pictureBox5->Visible = false;
		this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, 100);
	}
}
};
}
