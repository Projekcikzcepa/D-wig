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








	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	protected:

	private:
		/// <summary>
		
		//enum class stage_type {search_triangle,move_triangle,search_circle,move_circle,end};
		int  stage=0;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
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
			// button2
			// 
			this->button2->Location = System::Drawing::Point(13, 173);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(222, 23);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Losuj elementy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(695, 99);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(5, 2);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 7;
			this->pictureBox5->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(784, 612);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"D�wig";
			this->TransparencyKey = System::Drawing::Color::Transparent;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->timer1->Start();
	}
			 private :int a= 675;
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	
		switch (stage) {
		case 0://szuka trojkata
			if (pictureBox2->Location.X != pictureBox4->Location.X)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X - 1, pictureBox2->Location.Y);
				this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X - 1, pictureBox5->Location.Y);
			}
			else {

				if (pictureBox2->Location.X == (pictureBox4->Location.X) && pictureBox2->Location.Y <= 500)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y + 1);
					this->pictureBox5->Height += 1;
				}
				else
					stage=1;
				}
			break;
		case 1://ustawia trojkat
			if (pictureBox2->Location.Y >= 300&&pictureBox2->Location.X!=pictureBox3->Location.X)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);
				this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X, pictureBox4->Location.Y - 1);
				this->pictureBox5->Height -= 1;
			}
			else
			{
				if (pictureBox2->Location.X < pictureBox3->Location.X)
				{
					this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X+1, pictureBox4->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X+1, pictureBox2->Location.Y);
					this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X+1, pictureBox5->Location.Y);

				}
				if (pictureBox2->Location.X > pictureBox3->Location.X)
				{
					this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X + 1, pictureBox4->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
					this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X + 1, pictureBox5->Location.Y);
				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox4->Location.Y!=pictureBox3->Location.Y - 52)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X , pictureBox2->Location.Y+1);
					this->pictureBox4->Location = System::Drawing::Point(pictureBox4->Location.X , pictureBox4->Location.Y+1);
					this->pictureBox5->Height += 1;
				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox4->Location.Y == pictureBox3->Location.Y - 52) stage=2;
				
			}
			break;
		case 2://szuka kola
			if (pictureBox2->Location.Y > 300&& pictureBox2->Location.X==pictureBox3->Location.X)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);
				this->pictureBox5->Height -= 1;
			}
			else{
				if (pictureBox2->Location.X > pictureBox1->Location.X)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X - 1, pictureBox2->Location.Y);
					this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X - 1, pictureBox5->Location.Y);
				}
				if (pictureBox2->Location.X < pictureBox1->Location.X)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
					this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X + 1, pictureBox5->Location.Y);
				}
				if (pictureBox2->Location.X == pictureBox1->Location.X&&pictureBox2->Location.Y != pictureBox1->Location.Y-67)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y+1);
					this->pictureBox5->Height += 1;
				}
				if (pictureBox2->Location.X == pictureBox1->Location.X&&pictureBox2->Location.Y == pictureBox1->Location.Y - 67) stage = 3;

			}

			
			break;
		case 3://ustawia kolo
			if (pictureBox2->Location.Y > 300 && pictureBox2->Location.X != pictureBox3->Location.X)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);
				this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y - 1);
				this->pictureBox5->Height -= 1;
			}
			else
			{
				if (pictureBox2->Location.X < pictureBox3->Location.X)
				{
					this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X + 1, pictureBox1->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
					this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X + 1, pictureBox5->Location.Y);

				}
				if (pictureBox2->Location.X > pictureBox3->Location.X)
				{
					this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X + 1, pictureBox1->Location.Y);
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
					this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X + 1, pictureBox5->Location.Y);
				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox1->Location.Y != pictureBox3->Location.Y - 104)
				{
					this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y + 1);
					this->pictureBox1->Location = System::Drawing::Point(pictureBox1->Location.X, pictureBox1->Location.Y + 1);
					this->pictureBox5->Height += 1;
				}
				if (pictureBox2->Location.X == pictureBox3->Location.X&&pictureBox1->Location.Y == pictureBox3->Location.Y - 104) stage=4;

			}
			break;

		case 4://pozycja wyjsciowa
			if (pictureBox2->Location.Y > 100)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X, pictureBox2->Location.Y - 1);
				this->pictureBox5->Height -= 1;
			}
			if (pictureBox2->Location.X < 676)
			{
				this->pictureBox2->Location = System::Drawing::Point(pictureBox2->Location.X + 1, pictureBox2->Location.Y);
				this->pictureBox5->Location = System::Drawing::Point(pictureBox5->Location.X + 1, pictureBox5->Location.Y);
			}
			this->timer1->Stop();
			break;
			

		}
	
}
	
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (!timer1->Enabled)
	{
		this->pictureBox1->Location = System::Drawing::Point(rand() % 330 + 340, 562);
		this->pictureBox3->Location = System::Drawing::Point(rand() % 330 + 340, 562);
		this->pictureBox4->Location = System::Drawing::Point(rand() % 320 + 340, 562);
		while (this->pictureBox1->Bounds.IntersectsWith(this->pictureBox3->Bounds) || this->pictureBox1->Bounds.IntersectsWith(this->pictureBox4->Bounds) ||
			this->pictureBox3->Bounds.IntersectsWith(this->pictureBox1->Bounds) || this->pictureBox3->Bounds.IntersectsWith(this->pictureBox4->Bounds) ||
			this->pictureBox4->Bounds.IntersectsWith(this->pictureBox1->Bounds) || this->pictureBox4->Bounds.IntersectsWith(this->pictureBox3->Bounds))
		{
			this->pictureBox1->Location = System::Drawing::Point(rand() % 330 + 340, 562);
			this->pictureBox3->Location = System::Drawing::Point(rand() % 330 + 340, 562);
			this->pictureBox4->Location = System::Drawing::Point(rand() % 320 + 340, 562);
		}
	}
}
};
}
