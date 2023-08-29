#pragma once
#define _USE_MATH_DEFINES
#include <math.h>

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textDisplay;
	private: System::Windows::Forms::Button^ Del;
	protected:


	private: System::Windows::Forms::Button^ btnDigitK;
	private: System::Windows::Forms::Button^ btnDigitS;
	private: System::Windows::Forms::Button^ btnDigitGip;
	private: System::Windows::Forms::Button^ btnDigitExp;
	private: System::Windows::Forms::Button^ btnDigitL;
	private: System::Windows::Forms::Button^ btnDigitCos;

	private: System::Windows::Forms::Button^ btnDigitLn;







	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ btnDigit9;

	private: System::Windows::Forms::Button^ btnDigit8;

	private: System::Windows::Forms::Button^ btnDigit7;
	private: System::Windows::Forms::Button^ btnDigitFact;


	private: System::Windows::Forms::Button^ btnDigitSin;

	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ btnDigit6;

	private: System::Windows::Forms::Button^ btnDigit5;

	private: System::Windows::Forms::Button^ btnDigit4;

	private: System::Windows::Forms::Button^ btnDigit1;
	private: System::Windows::Forms::Button^ btnDigit2;
	private: System::Windows::Forms::Button^ btnDigit3;



	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ btnDigitTan;
	private: System::Windows::Forms::Button^ btnDigitProc;



	private: System::Windows::Forms::Button^ btnDigit0;
	private: System::Windows::Forms::Button^ btnDigitT;


	private: System::Windows::Forms::Button^ btnDigitPM;

	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ btn_DigitClear;

	private: System::Windows::Forms::Button^ btnDigitR;

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
			this->textDisplay = (gcnew System::Windows::Forms::TextBox());
			this->Del = (gcnew System::Windows::Forms::Button());
			this->btnDigitK = (gcnew System::Windows::Forms::Button());
			this->btnDigitS = (gcnew System::Windows::Forms::Button());
			this->btnDigitGip = (gcnew System::Windows::Forms::Button());
			this->btnDigitExp = (gcnew System::Windows::Forms::Button());
			this->btnDigitL = (gcnew System::Windows::Forms::Button());
			this->btnDigitCos = (gcnew System::Windows::Forms::Button());
			this->btnDigitLn = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->btnDigit9 = (gcnew System::Windows::Forms::Button());
			this->btnDigit8 = (gcnew System::Windows::Forms::Button());
			this->btnDigit7 = (gcnew System::Windows::Forms::Button());
			this->btnDigitFact = (gcnew System::Windows::Forms::Button());
			this->btnDigitSin = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->btnDigit6 = (gcnew System::Windows::Forms::Button());
			this->btnDigit5 = (gcnew System::Windows::Forms::Button());
			this->btnDigit4 = (gcnew System::Windows::Forms::Button());
			this->btnDigit1 = (gcnew System::Windows::Forms::Button());
			this->btnDigit2 = (gcnew System::Windows::Forms::Button());
			this->btnDigit3 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->btnDigitTan = (gcnew System::Windows::Forms::Button());
			this->btnDigitProc = (gcnew System::Windows::Forms::Button());
			this->btnDigit0 = (gcnew System::Windows::Forms::Button());
			this->btnDigitT = (gcnew System::Windows::Forms::Button());
			this->btnDigitPM = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->btnDigitR = (gcnew System::Windows::Forms::Button());
			this->btn_DigitClear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textDisplay
			// 
			this->textDisplay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textDisplay->Location = System::Drawing::Point(13, 13);
			this->textDisplay->Margin = System::Windows::Forms::Padding(4);
			this->textDisplay->Multiline = true;
			this->textDisplay->Name = L"textDisplay";
			this->textDisplay->Size = System::Drawing::Size(549, 41);
			this->textDisplay->TabIndex = 0;
			this->textDisplay->Text = L"0";
			this->textDisplay->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// Del
			// 
			this->Del->BackColor = System::Drawing::Color::Red;
			this->Del->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Del->Location = System::Drawing::Point(12, 62);
			this->Del->Margin = System::Windows::Forms::Padding(4);
			this->Del->Name = L"Del";
			this->Del->Size = System::Drawing::Size(85, 48);
			this->Del->TabIndex = 1;
			this->Del->Text = L"Delete";
			this->Del->UseVisualStyleBackColor = false;
			this->Del->Click += gcnew System::EventHandler(this, &MyForm::Del_click);
			// 
			// btnDigitK
			// 
			this->btnDigitK->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitK->Location = System::Drawing::Point(198, 62);
			this->btnDigitK->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitK->Name = L"btnDigitK";
			this->btnDigitK->Size = System::Drawing::Size(85, 48);
			this->btnDigitK->TabIndex = 2;
			this->btnDigitK->Text = L"sqr";
			this->btnDigitK->UseVisualStyleBackColor = false;
			this->btnDigitK->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitS
			// 
			this->btnDigitS->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitS->Location = System::Drawing::Point(291, 62);
			this->btnDigitS->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitS->Name = L"btnDigitS";
			this->btnDigitS->Size = System::Drawing::Size(85, 48);
			this->btnDigitS->TabIndex = 3;
			this->btnDigitS->Text = L"^";
			this->btnDigitS->UseVisualStyleBackColor = false;
			this->btnDigitS->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitGip
			// 
			this->btnDigitGip->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitGip->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitGip->Location = System::Drawing::Point(386, 62);
			this->btnDigitGip->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitGip->Name = L"btnDigitGip";
			this->btnDigitGip->Size = System::Drawing::Size(84, 48);
			this->btnDigitGip->TabIndex = 4;
			this->btnDigitGip->Text = L"1/";
			this->btnDigitGip->UseVisualStyleBackColor = false;
			this->btnDigitGip->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitExp
			// 
			this->btnDigitExp->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitExp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitExp->Location = System::Drawing::Point(477, 62);
			this->btnDigitExp->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitExp->Name = L"btnDigitExp";
			this->btnDigitExp->Size = System::Drawing::Size(85, 48);
			this->btnDigitExp->TabIndex = 5;
			this->btnDigitExp->Text = L"exp";
			this->btnDigitExp->UseVisualStyleBackColor = false;
			this->btnDigitExp->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitL
			// 
			this->btnDigitL->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitL->Location = System::Drawing::Point(386, 283);
			this->btnDigitL->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitL->Name = L"btnDigitL";
			this->btnDigitL->Size = System::Drawing::Size(85, 48);
			this->btnDigitL->TabIndex = 6;
			this->btnDigitL->Text = L"log";
			this->btnDigitL->UseVisualStyleBackColor = false;
			this->btnDigitL->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitCos
			// 
			this->btnDigitCos->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitCos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitCos->Location = System::Drawing::Point(384, 118);
			this->btnDigitCos->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitCos->Name = L"btnDigitCos";
			this->btnDigitCos->Size = System::Drawing::Size(85, 48);
			this->btnDigitCos->TabIndex = 7;
			this->btnDigitCos->Text = L"cos";
			this->btnDigitCos->UseVisualStyleBackColor = false;
			this->btnDigitCos->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitLn
			// 
			this->btnDigitLn->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitLn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitLn->Location = System::Drawing::Point(477, 118);
			this->btnDigitLn->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitLn->Name = L"btnDigitLn";
			this->btnDigitLn->Size = System::Drawing::Size(85, 48);
			this->btnDigitLn->TabIndex = 8;
			this->btnDigitLn->Text = L"ln";
			this->btnDigitLn->UseVisualStyleBackColor = false;
			this->btnDigitLn->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(291, 118);
			this->button9->Margin = System::Windows::Forms::Padding(4);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(85, 48);
			this->button9->TabIndex = 9;
			this->button9->Text = L"+";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit9
			// 
			this->btnDigit9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit9->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit9->Location = System::Drawing::Point(198, 117);
			this->btnDigit9->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit9->Name = L"btnDigit9";
			this->btnDigit9->Size = System::Drawing::Size(85, 48);
			this->btnDigit9->TabIndex = 10;
			this->btnDigit9->Text = L"9";
			this->btnDigit9->UseVisualStyleBackColor = false;
			this->btnDigit9->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit8
			// 
			this->btnDigit8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit8->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit8->Location = System::Drawing::Point(105, 117);
			this->btnDigit8->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit8->Name = L"btnDigit8";
			this->btnDigit8->Size = System::Drawing::Size(85, 48);
			this->btnDigit8->TabIndex = 11;
			this->btnDigit8->Text = L"8";
			this->btnDigit8->UseVisualStyleBackColor = false;
			this->btnDigit8->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit7
			// 
			this->btnDigit7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit7->Location = System::Drawing::Point(12, 117);
			this->btnDigit7->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit7->Name = L"btnDigit7";
			this->btnDigit7->Size = System::Drawing::Size(85, 48);
			this->btnDigit7->TabIndex = 12;
			this->btnDigit7->Text = L"7";
			this->btnDigit7->UseVisualStyleBackColor = false;
			this->btnDigit7->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigitFact
			// 
			this->btnDigitFact->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitFact->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitFact->Location = System::Drawing::Point(477, 175);
			this->btnDigitFact->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitFact->Name = L"btnDigitFact";
			this->btnDigitFact->Size = System::Drawing::Size(85, 48);
			this->btnDigitFact->TabIndex = 13;
			this->btnDigitFact->Text = L"n!";
			this->btnDigitFact->UseVisualStyleBackColor = false;
			this->btnDigitFact->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitSin
			// 
			this->btnDigitSin->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitSin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitSin->Location = System::Drawing::Point(384, 175);
			this->btnDigitSin->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitSin->Name = L"btnDigitSin";
			this->btnDigitSin->Size = System::Drawing::Size(85, 48);
			this->btnDigitSin->TabIndex = 14;
			this->btnDigitSin->Text = L"sin";
			this->btnDigitSin->UseVisualStyleBackColor = false;
			this->btnDigitSin->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button15->Location = System::Drawing::Point(291, 173);
			this->button15->Margin = System::Windows::Forms::Padding(4);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(85, 48);
			this->button15->TabIndex = 15;
			this->button15->Text = L"-";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit6
			// 
			this->btnDigit6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit6->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit6->Location = System::Drawing::Point(198, 173);
			this->btnDigit6->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit6->Name = L"btnDigit6";
			this->btnDigit6->Size = System::Drawing::Size(85, 48);
			this->btnDigit6->TabIndex = 16;
			this->btnDigit6->Text = L"6";
			this->btnDigit6->UseVisualStyleBackColor = false;
			this->btnDigit6->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit5
			// 
			this->btnDigit5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit5->Location = System::Drawing::Point(105, 173);
			this->btnDigit5->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit5->Name = L"btnDigit5";
			this->btnDigit5->Size = System::Drawing::Size(85, 48);
			this->btnDigit5->TabIndex = 17;
			this->btnDigit5->Text = L"5";
			this->btnDigit5->UseVisualStyleBackColor = false;
			this->btnDigit5->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit4
			// 
			this->btnDigit4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit4->Location = System::Drawing::Point(12, 173);
			this->btnDigit4->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit4->Name = L"btnDigit4";
			this->btnDigit4->Size = System::Drawing::Size(85, 48);
			this->btnDigit4->TabIndex = 18;
			this->btnDigit4->Text = L"4";
			this->btnDigit4->UseVisualStyleBackColor = false;
			this->btnDigit4->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit1
			// 
			this->btnDigit1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit1->Location = System::Drawing::Point(12, 227);
			this->btnDigit1->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit1->Name = L"btnDigit1";
			this->btnDigit1->Size = System::Drawing::Size(85, 48);
			this->btnDigit1->TabIndex = 19;
			this->btnDigit1->Text = L"1";
			this->btnDigit1->UseVisualStyleBackColor = false;
			this->btnDigit1->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit2
			// 
			this->btnDigit2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit2->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit2->Location = System::Drawing::Point(105, 228);
			this->btnDigit2->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit2->Name = L"btnDigit2";
			this->btnDigit2->Size = System::Drawing::Size(85, 48);
			this->btnDigit2->TabIndex = 20;
			this->btnDigit2->Text = L"2";
			this->btnDigit2->UseVisualStyleBackColor = false;
			this->btnDigit2->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigit3
			// 
			this->btnDigit3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit3->Location = System::Drawing::Point(198, 228);
			this->btnDigit3->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit3->Name = L"btnDigit3";
			this->btnDigit3->Size = System::Drawing::Size(85, 48);
			this->btnDigit3->TabIndex = 21;
			this->btnDigit3->Text = L"3";
			this->btnDigit3->UseVisualStyleBackColor = false;
			this->btnDigit3->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->Location = System::Drawing::Point(105, 283);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(85, 48);
			this->button22->TabIndex = 22;
			this->button22->Text = L"*";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitTan
			// 
			this->btnDigitTan->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitTan->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitTan->Location = System::Drawing::Point(384, 228);
			this->btnDigitTan->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitTan->Name = L"btnDigitTan";
			this->btnDigitTan->Size = System::Drawing::Size(85, 48);
			this->btnDigitTan->TabIndex = 23;
			this->btnDigitTan->Text = L"tan";
			this->btnDigitTan->UseVisualStyleBackColor = false;
			this->btnDigitTan->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitProc
			// 
			this->btnDigitProc->BackColor = System::Drawing::SystemColors::ControlDark;
			this->btnDigitProc->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitProc->Location = System::Drawing::Point(477, 228);
			this->btnDigitProc->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitProc->Name = L"btnDigitProc";
			this->btnDigitProc->Size = System::Drawing::Size(85, 48);
			this->btnDigitProc->TabIndex = 24;
			this->btnDigitProc->Text = L"%";
			this->btnDigitProc->UseVisualStyleBackColor = false;
			this->btnDigitProc->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigit0
			// 
			this->btnDigit0->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->btnDigit0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigit0->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->btnDigit0->Location = System::Drawing::Point(12, 283);
			this->btnDigit0->Margin = System::Windows::Forms::Padding(4);
			this->btnDigit0->Name = L"btnDigit0";
			this->btnDigit0->Size = System::Drawing::Size(85, 48);
			this->btnDigit0->TabIndex = 25;
			this->btnDigit0->Text = L"0";
			this->btnDigit0->UseVisualStyleBackColor = false;
			this->btnDigit0->Click += gcnew System::EventHandler(this, &MyForm::EnterNumber);
			// 
			// btnDigitT
			// 
			this->btnDigitT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitT->Location = System::Drawing::Point(198, 283);
			this->btnDigitT->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitT->Name = L"btnDigitT";
			this->btnDigitT->Size = System::Drawing::Size(85, 48);
			this->btnDigitT->TabIndex = 26;
			this->btnDigitT->Text = L",";
			this->btnDigitT->UseVisualStyleBackColor = true;
			this->btnDigitT->Click += gcnew System::EventHandler(this, &MyForm::btnDigitT_Click);
			// 
			// btnDigitPM
			// 
			this->btnDigitPM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitPM->Location = System::Drawing::Point(291, 283);
			this->btnDigitPM->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitPM->Name = L"btnDigitPM";
			this->btnDigitPM->Size = System::Drawing::Size(85, 48);
			this->btnDigitPM->TabIndex = 27;
			this->btnDigitPM->Text = L"+/-";
			this->btnDigitPM->UseVisualStyleBackColor = true;
			this->btnDigitPM->Click += gcnew System::EventHandler(this, &MyForm::btnDigitPM_Click);
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button28->Location = System::Drawing::Point(291, 227);
			this->button28->Margin = System::Windows::Forms::Padding(4);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(85, 48);
			this->button28->TabIndex = 28;
			this->button28->Text = L"/";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::EnterOperator);
			// 
			// btnDigitR
			// 
			this->btnDigitR->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnDigitR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnDigitR->Location = System::Drawing::Point(477, 285);
			this->btnDigitR->Margin = System::Windows::Forms::Padding(4);
			this->btnDigitR->Name = L"btnDigitR";
			this->btnDigitR->Size = System::Drawing::Size(85, 46);
			this->btnDigitR->TabIndex = 29;
			this->btnDigitR->Text = L"=";
			this->btnDigitR->UseVisualStyleBackColor = false;
			this->btnDigitR->Click += gcnew System::EventHandler(this, &MyForm::btnDigitR_click);
			// 
			// btn_DigitClear
			// 
			this->btn_DigitClear->BackColor = System::Drawing::Color::Red;
			this->btn_DigitClear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_DigitClear->Location = System::Drawing::Point(105, 62);
			this->btn_DigitClear->Margin = System::Windows::Forms::Padding(4);
			this->btn_DigitClear->Name = L"btn_DigitClear";
			this->btn_DigitClear->Size = System::Drawing::Size(85, 48);
			this->btn_DigitClear->TabIndex = 30;
			this->btn_DigitClear->Text = L"Clear";
			this->btn_DigitClear->UseVisualStyleBackColor = false;
			this->btn_DigitClear->Click += gcnew System::EventHandler(this, &MyForm::btn_Digit_Clear);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(583, 352);
			this->Controls->Add(this->btn_DigitClear);
			this->Controls->Add(this->btnDigitR);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->btnDigitPM);
			this->Controls->Add(this->btnDigitT);
			this->Controls->Add(this->btnDigit0);
			this->Controls->Add(this->btnDigitProc);
			this->Controls->Add(this->btnDigitTan);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->btnDigit3);
			this->Controls->Add(this->btnDigit2);
			this->Controls->Add(this->btnDigit1);
			this->Controls->Add(this->btnDigit4);
			this->Controls->Add(this->btnDigit5);
			this->Controls->Add(this->btnDigit6);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->btnDigitSin);
			this->Controls->Add(this->btnDigitFact);
			this->Controls->Add(this->btnDigit7);
			this->Controls->Add(this->btnDigit8);
			this->Controls->Add(this->btnDigit9);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->btnDigitLn);
			this->Controls->Add(this->btnDigitCos);
			this->Controls->Add(this->btnDigitL);
			this->Controls->Add(this->btnDigitExp);
			this->Controls->Add(this->btnDigitGip);
			this->Controls->Add(this->btnDigitS);
			this->Controls->Add(this->btnDigitK);
			this->Controls->Add(this->Del);
			this->Controls->Add(this->textDisplay);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"Калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		double firstDigit, secondDigit, result; 
		String^ operators;

	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnDigit0_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void EnterNumber(System::Object^ sender, System::EventArgs^ e) {
	Button^ Numbers = safe_cast<Button^>(sender);

	if (textDisplay->Text == "0")
	{
		textDisplay->Text = Numbers->Text;
	}
	else
	{
		textDisplay->Text = textDisplay->Text + Numbers->Text;
	}
}
private: System::Void EnterOperator(System::Object^ sender, System::EventArgs^ e) {
	
	Button^ NumbersOp = safe_cast<Button^>(sender);
	firstDigit = Double::Parse(textDisplay->Text);
	
	textDisplay->Text = " ";
	operators = NumbersOp->Text;
}
private: System::Void btnDigitT_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!textDisplay->Text->Contains(",")) 
	{
		textDisplay->Text = textDisplay->Text + ",";
	}
}
	   private: System::Void btnDigitR_click(System::Object^ sender, System::EventArgs^ e) {
		   secondDigit = Double::Parse(textDisplay->Text);

		   if (operators == "+")
		   {
			   result = firstDigit + secondDigit;
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "-")
		   {
			   result = firstDigit - secondDigit;
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "/") {
			   result = firstDigit / secondDigit;
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "*") {
			   result = firstDigit * secondDigit;
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "^"){
			   result = pow(firstDigit, secondDigit);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "sqr") {
			   result = pow(firstDigit, 1 / secondDigit);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "log") {
			   result = log(firstDigit) / log(secondDigit);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "cos") {
			   result = cos(secondDigit * M_PI / 180);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "sin") {
			   result = sin(secondDigit * M_PI / 180);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "tan") {
			   result = tan(secondDigit * M_PI / 180);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "1/") {
			   result = 1 / secondDigit;
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "exp") {
			   result = exp(secondDigit);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "ln") {
			   result = log(secondDigit);
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "n!") {
			   double i = 1; //вводим переменную счётчик
			   double s = 1; // вводим переменную для "накапливания" произведения 
			   while (i <= secondDigit) {
				   s = s * i;
				   i = i + 1;
			   }
			   result = s; //в качестве результата выступает переменная-копилка s 
			   textDisplay->Text = System::Convert::ToString(result);
		   }
		   else if (operators == "%") {
			   result = (firstDigit * 100) / secondDigit;
			   textDisplay->Text = System::Convert::ToString(result);
		   }
}
		private: System::Void btnDigitPM_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!textDisplay->Text->Contains("-")) {
				textDisplay->Text = "-" + textDisplay->Text;
			}
			else {
				textDisplay->Text = textDisplay->Text->Remove(0, 1);
			}
		}
		private: System::Void Del_click(System::Object^ sender, System::EventArgs^ e) {
			if (textDisplay->Text->Length > 0) {
				textDisplay->Text = textDisplay->Text->Remove(textDisplay->Text -> Length - 1, 1);
			}
			if (textDisplay->Text == "") {
				textDisplay->Text = "0";
			}
}
		private: System::Void btn_Digit_Clear(System::Object^ sender, System::EventArgs^ e) {
				textDisplay->Text = "0";
}
};
}
