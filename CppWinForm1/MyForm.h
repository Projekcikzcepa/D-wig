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



	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Timer^  timer4;
	private: System::Windows::Forms::Timer^  timer5;
	private: System::Windows::Forms::Timer^  timer6;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		int square_x;
		int triangle_x=372;
		int circle_x;
		enum stage_type {search_triangle,move_triangle,search_circle,move_circle,end};
		stage_type  stage=search_triangle;
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
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Default;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(676, 100);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(43, 68);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(631, 36);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"START";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(341, 562);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Tag = L"";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(452, 562);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(52, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 4;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Tag = L"";
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(391, 562);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(60, 50);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 5;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Tag = L"";
			// 
			// timer1
			// 
			this->timer1->Interval = 4;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(579, 331);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"DŸwig";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->timer1->Start();
	}
			 private :int a= 675;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
		switch (stage) {
		case search_triangle:
			if(pictureBox2->Location.X != triangle_x+25)
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X - 1, pictureBox2->Location.Y);
			else {

				if (pictureBox2->Location.X == (triangle_x+25)&&pictureBox2->Location.Y <= 478)
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y + 1);
				else
					stage=move_triangle;
				}
			break;
		case 1:
			if (pictureBox2->Location.Y >= 300&&pictureBox2->Location.X!=pictureBox3->Location.X)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);
				this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X, pictureBox4->Location.Y - 1);
			}
			else
			{
				if (pictureBox2->Location.X < pictureBox3->Location.X)
				{
					this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X+1, pictureBox4->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X+1, pictureBox2->Location.Y);

				}
				if (pictureBox2->Location.X > pictureBox3->Location.X)
				{
					this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X + 1, pictureBox4->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox4->Location.Y!=pictureBox3->Location.Y - 52)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X , pictureBox2->Location.Y+1);
					this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X , pictureBox4->Location.Y+1);


				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox4->Location.Y == pictureBox3->Location.Y - 52) stage=search_circle;
				
			}
			break;
		case 2:
			if (pictureBox2->Location.Y > 300&& pictureBox2->Location.X==pictureBox3->Location.X)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);
			}
			else{
				if(pictureBox2->Location.X > pictureBox1->Location.X)
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X-1, pictureBox2->Location.Y);
				if (pictureBox2->Location.X < pictureBox1->Location.X)
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X+1, pictureBox2->Location.Y);
				if (pictureBox2->Location.X == pictureBox1->Location.X&&pictureBox2->Location.Y != pictureBox1->Location.Y-52)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y+1);
				}
				if (pictureBox2->Location.X == pictureBox1->Location.X&&pictureBox2->Location.Y == pictureBox1->Location.Y - 52) stage=move_circle;

			}

			
			break;
		case 3:
			if (pictureBox2->Location.Y > 300 && pictureBox2->Location.X != pictureBox3->Location.X)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);
				this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y - 1);
			}
			else
			{
				if (pictureBox2->Location.X < pictureBox3->Location.X)
				{
					this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X + 1, pictureBox1->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);

				}
				if (pictureBox2->Location.X > pictureBox3->Location.X)
				{
					this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X + 1, pictureBox1->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox1->Location.Y != pictureBox3->Location.Y - 104)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y + 1);
					this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y + 1);


				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox1->Location.Y == pictureBox3->Location.Y - 52) stage=end;

			}
			break;

		case 4:
			if(pictureBox2->Location.Y>100) 
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);

			break;
			

		}
	
}
	/*	 int b=0;
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
*/
};
}
