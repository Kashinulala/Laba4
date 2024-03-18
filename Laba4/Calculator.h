#pragma once

namespace Laba4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Calculator
	/// </summary>
	public ref class Calculator : public System::Windows::Forms::Form
	{
	public:
		Calculator(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Calculator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button0;

	private: System::Windows::Forms::Button^ buttonResult;

	private: System::Windows::Forms::Button^ buttonPlus;

	private: System::Windows::Forms::Button^ buttonSub;

	private: System::Windows::Forms::Button^ buttonMult;

	private: System::Windows::Forms::Button^ buttonDevide;
	private: System::Windows::Forms::Button^ buttonErase;
	private: System::Windows::Forms::Button^ buttonC;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonFrac;
	
	private: double first_num;
	private: char sign = ' ';
	private: bool result_fl = false;


	protected:

















	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonResult = (gcnew System::Windows::Forms::Button());
			this->buttonPlus = (gcnew System::Windows::Forms::Button());
			this->buttonSub = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->buttonDevide = (gcnew System::Windows::Forms::Button());
			this->buttonErase = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonFrac = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(70, 69);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(88, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(70, 69);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(164, 335);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(70, 69);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 260);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(70, 69);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(88, 260);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(70, 69);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(164, 260);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(70, 69);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 185);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(70, 69);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(88, 185);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 69);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(164, 185);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(70, 69);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// button0
			// 
			this->button0->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->button0->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(12, 410);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(146, 69);
			this->button0->TabIndex = 9;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = false;
			this->button0->Click += gcnew System::EventHandler(this, &Calculator::ButtonNumber_Click);
			// 
			// buttonResult
			// 
			this->buttonResult->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonResult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonResult->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonResult->Location = System::Drawing::Point(240, 410);
			this->buttonResult->Name = L"buttonResult";
			this->buttonResult->Size = System::Drawing::Size(70, 69);
			this->buttonResult->TabIndex = 10;
			this->buttonResult->Text = L"=";
			this->buttonResult->UseVisualStyleBackColor = false;
			this->buttonResult->Click += gcnew System::EventHandler(this, &Calculator::buttonResult_Click);
			// 
			// buttonPlus
			// 
			this->buttonPlus->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonPlus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonPlus->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonPlus->Location = System::Drawing::Point(240, 335);
			this->buttonPlus->Name = L"buttonPlus";
			this->buttonPlus->Size = System::Drawing::Size(70, 69);
			this->buttonPlus->TabIndex = 11;
			this->buttonPlus->Text = L"+";
			this->buttonPlus->UseVisualStyleBackColor = false;
			this->buttonPlus->Click += gcnew System::EventHandler(this, &Calculator::buttonPlus_Click);
			// 
			// buttonSub
			// 
			this->buttonSub->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonSub->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonSub->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSub->Location = System::Drawing::Point(240, 259);
			this->buttonSub->Name = L"buttonSub";
			this->buttonSub->Size = System::Drawing::Size(70, 69);
			this->buttonSub->TabIndex = 12;
			this->buttonSub->Text = L"-";
			this->buttonSub->UseVisualStyleBackColor = false;
			this->buttonSub->Click += gcnew System::EventHandler(this, &Calculator::buttonSub_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonMult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonMult->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMult->Location = System::Drawing::Point(240, 185);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(70, 69);
			this->buttonMult->TabIndex = 13;
			this->buttonMult->Text = L"×";
			this->buttonMult->UseVisualStyleBackColor = false;
			this->buttonMult->Click += gcnew System::EventHandler(this, &Calculator::buttonMult_Click);
			// 
			// buttonDevide
			// 
			this->buttonDevide->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonDevide->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonDevide->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDevide->Location = System::Drawing::Point(240, 110);
			this->buttonDevide->Name = L"buttonDevide";
			this->buttonDevide->Size = System::Drawing::Size(70, 69);
			this->buttonDevide->TabIndex = 14;
			this->buttonDevide->Text = L"/";
			this->buttonDevide->UseVisualStyleBackColor = false;
			this->buttonDevide->Click += gcnew System::EventHandler(this, &Calculator::buttonDevide_Click);
			// 
			// buttonErase
			// 
			this->buttonErase->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonErase->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonErase->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonErase->Location = System::Drawing::Point(164, 110);
			this->buttonErase->Name = L"buttonErase";
			this->buttonErase->Size = System::Drawing::Size(70, 69);
			this->buttonErase->TabIndex = 15;
			this->buttonErase->Text = L"<-";
			this->buttonErase->UseVisualStyleBackColor = false;
			this->buttonErase->Click += gcnew System::EventHandler(this, &Calculator::buttonErase_Click);
			// 
			// buttonC
			// 
			this->buttonC->BackColor = System::Drawing::Color::WhiteSmoke;
			this->buttonC->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonC->Location = System::Drawing::Point(12, 110);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(146, 69);
			this->buttonC->TabIndex = 16;
			this->buttonC->Text = L"С";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &Calculator::buttonC_Click);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(298, 98);
			this->label1->TabIndex = 17;
			this->label1->Text = L"0";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->label1->UseWaitCursor = true;
			// 
			// buttonFrac
			// 
			this->buttonFrac->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->buttonFrac->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->buttonFrac->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonFrac->Location = System::Drawing::Point(164, 410);
			this->buttonFrac->Name = L"buttonFrac";
			this->buttonFrac->Size = System::Drawing::Size(70, 69);
			this->buttonFrac->TabIndex = 18;
			this->buttonFrac->Text = L".";
			this->buttonFrac->UseVisualStyleBackColor = false;
			this->buttonFrac->Click += gcnew System::EventHandler(this, &Calculator::buttonFrac_Click);
			// 
			// Calculator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(324, 490);
			this->Controls->Add(this->buttonFrac);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonErase);
			this->Controls->Add(this->buttonDevide);
			this->Controls->Add(this->buttonMult);
			this->Controls->Add(this->buttonSub);
			this->Controls->Add(this->buttonPlus);
			this->Controls->Add(this->buttonResult);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Calculator";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Calculator";
			this->ResumeLayout(false);

		}
#pragma endregion






	private: System::Void ButtonNumber_Click(System::Object^ sender, System::EventArgs^ e) {
		Button^ B = safe_cast<Button^>(sender);
		if (label1->Text == "0" || result_fl) {
			this->label1->Text = B->Text;
			result_fl = false;
		}
		else
			this->label1->Text = this->label1->Text + B->Text;
	}

	private: System::Void buttonDevide_Click(System::Object^ sender, System::EventArgs^ e) {
		math_sign('/');
	}
	private: System::Void buttonMult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_sign('*');
	}
	private: System::Void buttonSub_Click(System::Object^ sender, System::EventArgs^ e) {
		math_sign('-');
	}
	private: System::Void buttonPlus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_sign('+');
	}

	private: System::Void math_sign(char _sign) {
		this->first_num = System::Convert::ToDouble(this->label1->Text);
		this->sign = _sign;
		this->label1->Text = "0";
	}
	private: System::Void buttonFrac_Click(System::Object^ sender, System::EventArgs^ e) {
		if(!(this->label1->Text->Contains(",")))
		this->label1->Text = this->label1->Text + ",";
	}
	private: System::Void buttonResult_Click(System::Object^ sender, System::EventArgs^ e) {
		if (sign == ' ')
			return;
		double second_num = System::Convert::ToDouble(this->label1->Text);
		double result;
		switch (this->sign) {
		case '+': result = this->first_num + second_num; break;
		case '-': result = this->first_num - second_num; break;
		case '*': result = this->first_num * second_num; break;
		case '/': result = this->first_num / second_num; break;
		}
		this->result_fl = true;
		this->label1->Text = System::Convert::ToString(result);
	}

	private: System::Void clear() {
		this->label1->Text = "0";
		this->first_num = 0;
		sign = ' ';
		result_fl = false;
	}

	private: System::Void buttonC_Click(System::Object^ sender, System::EventArgs^ e) {
		clear();
	}

	private: System::Void buttonErase_Click(System::Object^ sender, System::EventArgs^ e) {
		if(result_fl == false){
			String^ text = this->label1->Text;
			if (text->Length != 1) {
				text = text->Remove(text->Length - 1);
				this->label1->Text = text;
			}
			else {
				this->label1->Text = "0";
			}
		}
		else clear();
	}
};
}
