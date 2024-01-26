#pragma once

namespace WakeUpAlarm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::Text;
	using namespace System::Threading;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button5;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->comboBox2);
			this->panel1->Controls->Add(this->comboBox1);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(40, 29);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(958, 516);
			this->panel1->TabIndex = 0;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(53, 368);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(187, 36);
			this->label11->TabIndex = 53;
			this->label11->Text = L"Countdown";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(465, 368);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(125, 36);
			this->label10->TabIndex = 52;
			this->label10->Text = L"Snooze";
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Location = System::Drawing::Point(799, 459);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(106, 34);
			this->button4->TabIndex = 51;
			this->button4->Text = L"Set";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm1::button4_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(465, 305);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 36);
			this->label9->TabIndex = 50;
			this->label9->Text = L"Snooze";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(465, 236);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(214, 36);
			this->label8->TabIndex = 49;
			this->label8->Text = L"Alarm Sound";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(465, 167);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(195, 36);
			this->label7->TabIndex = 48;
			this->label7->Text = L"Alarm Time";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(465, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(205, 36);
			this->label6->TabIndex = 47;
			this->label6->Text = L"Alarm Name";
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button3->Location = System::Drawing::Point(59, 459);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(106, 34);
			this->button3->TabIndex = 46;
			this->button3->Text = L"Clear";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button2->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(429, 459);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 34);
			this->button2->TabIndex = 45;
			this->button2->Text = L"Stop";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(799, 459);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(106, 34);
			this->button1->TabIndex = 44;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(411, 24);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(205, 36);
			this->label5->TabIndex = 43;
			this->label5->Text = L"Alarm Name";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Snap ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"1 minutes", L"2 minutes", L"3 minutes", L"Off" });
			this->comboBox2->Location = System::Drawing::Point(471, 306);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(434, 35);
			this->comboBox2->TabIndex = 42;
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Sound 01", L"Sound 02", L"Sound 03", L"Sound 04",
					L"Sound 05"
			});
			this->comboBox1->Location = System::Drawing::Point(471, 237);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(434, 35);
			this->comboBox1->TabIndex = 41;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Transparent;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(471, 170);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(434, 33);
			this->dateTimePicker1->TabIndex = 40;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(471, 103);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(434, 33);
			this->textBox1->TabIndex = 39;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(53, 305);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(125, 36);
			this->label4->TabIndex = 38;
			this->label4->Text = L"Snooze";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(53, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(214, 36);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Alarm Sound";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(53, 168);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 36);
			this->label2->TabIndex = 36;
			this->label2->Text = L"Alarm Time";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Snap ITC", 16.2F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(53, 99);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(205, 36);
			this->label1->TabIndex = 35;
			this->label1->Text = L"Alarm Name";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm1::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Interval = 1000;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm1::timer2_Tick);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Snap ITC", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button5->Location = System::Drawing::Point(429, 459);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 34);
			this->button5->TabIndex = 54;
			this->button5->Text = L"Stop";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm1::button5_Click);
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1042, 583);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm1";
			this->Text = L"Alarm System";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		SoundPlayer^ player = gcnew SoundPlayer();
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	panel1->BackColor = System::Drawing::Color::FromArgb(75, 0, 0, 0);
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = false;
	label6->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	label9->Visible = false;
	label10->Visible = false;
	label11->Visible = false;
	button1->Visible = false;
	button3->Visible = true;
	button2->Visible = false;
	button4->Visible = true;
	button5->Visible = false;
	comboBox1->Visible = true;
	comboBox2->Visible = true;
	textBox1->Visible = true;
	dateTimePicker1->Visible = true;
}
	   String^ player01;
public: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ sound = this->comboBox1->Text;
	String^ snooze = this->comboBox2->Text;
	String^ name = this->textBox1->Text;
	String^ time = this->dateTimePicker1->Text;
	if (name->Length == 0) {
		MessageBox::Show("Please enter a Alarm Name",
			"Error", MessageBoxButtons::OK);
	}
	else if (time->Length == 0) {
		MessageBox::Show("Please enter an Alarm Time",
			"Error", MessageBoxButtons::OK);
	}
	else if (sound->Length == 0) {
		MessageBox::Show("Please choose a Sound",
			"Error", MessageBoxButtons::OK);
	}
	else if (snooze->Length == 0) {
		MessageBox::Show("Please choose a Snooze Time",
			"Error", MessageBoxButtons::OK);
	}
	else {
	label1->Visible = true;
	label2->Visible = true;
	label3->Visible = true;
	label4->Visible = true;
	label5->Visible = true;
	label6->Visible = true;
	label7->Visible = true;
	label8->Visible = true;
	label9->Visible = true;
	label10->Visible = false;
	label11->Visible = false;
	button1->Visible = true;
	button2->Visible = true;
	button3->Visible = false;
	button4->Visible = false;
	button5->Visible = false;
	comboBox1->Visible = false;
	comboBox2->Visible = false;
	textBox1->Visible = false;
	dateTimePicker1->Visible = false;
	label5->Text = System::Convert::ToString(name);
	label6->Text = System::Convert::ToString(name);
	label7->Text = System::Convert::ToString(time);
	label8->Text = System::Convert::ToString(sound);
	label9->Text = System::Convert::ToString(snooze);
	int index1 = comboBox1->SelectedIndex;
	int index2 = comboBox2->SelectedIndex;
	timer1->Start();
	button4->Enabled = false;
	}
	
}
	
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	comboBox1->Text = "";
	comboBox2->Text = "";
	textBox1->Text = "";
	dateTimePicker1->Text = "";

}
	   int index1, index2;
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
	DateTime currentTime = DateTime::Now;
	DateTime alarmTime = dateTimePicker1->Value;
	int index1 = comboBox1->SelectedIndex;
	int index2 = comboBox2->SelectedIndex;
	if (index1 == 0) {
		if (currentTime.Hour == alarmTime.Hour && currentTime.Minute == alarmTime.Minute && currentTime.Second == alarmTime.Second) {
			timer1->Stop();

			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 01.wav";
			player->PlayLooping();
		}
	}
	else if (index1 == 1) {
		if (currentTime.Hour == alarmTime.Hour && currentTime.Minute == alarmTime.Minute && currentTime.Second == alarmTime.Second) {
			timer1->Stop();

			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 02.wav";
			player->PlayLooping();
		}
	}
	else if (index1 == 2) {
		if (currentTime.Hour == alarmTime.Hour && currentTime.Minute == alarmTime.Minute && currentTime.Second == alarmTime.Second) {
			timer1->Stop();

			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 03.wav";
			player->PlayLooping();
		}
	}
	else if (index1 == 3) {
		if (currentTime.Hour == alarmTime.Hour && currentTime.Minute == alarmTime.Minute && currentTime.Second == alarmTime.Second) {
			timer1->Stop();

			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 04.wav";
			player->PlayLooping();
		}
	}
	else if (index1 == 4) {
		if (currentTime.Hour == alarmTime.Hour && currentTime.Minute == alarmTime.Minute && currentTime.Second == alarmTime.Second) {
			timer1->Stop();

			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 05.wav";
			player->PlayLooping();
		}
	}
}
	   int seconds = 0;
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	button4->Enabled = false;
	button2->Enabled = false;
	player->Stop();
	int index1 = comboBox1->SelectedIndex;
	int index2 = comboBox2->SelectedIndex;
	if (index2 == 0) {
		seconds = 60;
		timer2->Start();
	}
	else if (index2 == 1) {
		seconds = 120;
		timer2->Start();
	}
	else if (index2 == 2) {
		seconds = 180;
		timer2->Start();
	}

}
private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
	int index1 = comboBox1->SelectedIndex;
	int index2 = comboBox2->SelectedIndex;
	label10->Visible = true;
	label11->Visible = true;
	label10->Text = System::Convert::ToString(seconds--);
	if (seconds == 0) {
		label10->Visible = false;
		label11->Visible = false;
		button5->Visible = true;
		if (index1 == 0) {
			timer2->Stop();
			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 01.wav";
			player->PlayLooping();
		}
		else if (index1 == 1) {
			timer2->Stop();
			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 02.wav";
			player->PlayLooping();
		}
		else if (index1 == 2) {
			timer2->Stop();
			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 03.wav";
			player->PlayLooping();
		}
		else if (index1 == 3) {
			timer2->Stop();
			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 04.wav";
			player->PlayLooping();
		}
		else if (index1 == 4) {
			timer2->Stop();
			player->SoundLocation = "C:\\Users\\User\\Downloads\\Sound 05.wav";
			player->PlayLooping();
		}
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	button4->Enabled = false;
	button2->Enabled = false;
	button5->Enabled = false;
	player->Stop();
}
};
}