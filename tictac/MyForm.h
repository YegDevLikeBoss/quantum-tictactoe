#pragma once
#pragma comment(lib, "winmm.lib")
#include "Windows.h"
#include "Class.h"

namespace tictac {

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
			//this->tabControl1->MouseEnter += gcnew EventHandler(this, &MyForm::tabControl1_MouseEnter);
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
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  gameField;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  preferencesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::RadioButton^  radioButton5;
	private: System::Windows::Forms::RadioButton^  radioButton6;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel1;

	private: System::Windows::Forms::RadioButton^  radioButton7;
	private: System::Windows::Forms::TableLayoutPanel^  tableLayoutPanel2;
	private: System::Windows::Forms::RadioButton^  radioButton13;
	private: System::Windows::Forms::RadioButton^  radioButton12;
	private: System::Windows::Forms::RadioButton^  radioButton11;
	private: System::Windows::Forms::RadioButton^  radioButton10;
	private: System::Windows::Forms::RadioButton^  radioButton9;
	private: System::Windows::Forms::RadioButton^  radioButton8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  bq2;
	private: System::Windows::Forms::Button^  bq1;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->gameField = (gcnew System::Windows::Forms::GroupBox());
			this->bq2 = (gcnew System::Windows::Forms::Button());
			this->bq1 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->preferencesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->radioButton13 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton12 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton11 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton10 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->gameField->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox1->Location = System::Drawing::Point(104, 395);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(61, 58);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Player 1";
			this->groupBox1->Visible = false;
			// 
			// gameField
			// 
			this->gameField->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->gameField->Controls->Add(this->bq2);
			this->gameField->Controls->Add(this->bq1);
			this->gameField->Controls->Add(this->button10);
			this->gameField->Controls->Add(this->label4);
			this->gameField->Controls->Add(this->button7);
			this->gameField->Controls->Add(this->button2);
			this->gameField->Controls->Add(this->button3);
			this->gameField->Controls->Add(this->button8);
			this->gameField->Controls->Add(this->button6);
			this->gameField->Controls->Add(this->button9);
			this->gameField->Controls->Add(this->button1);
			this->gameField->Controls->Add(this->button5);
			this->gameField->Controls->Add(this->button4);
			this->gameField->Controls->Add(this->label3);
			this->gameField->Cursor = System::Windows::Forms::Cursors::Hand;
			this->gameField->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->gameField->ForeColor = System::Drawing::Color::DarkViolet;
			this->gameField->Location = System::Drawing::Point(221, 40);
			this->gameField->Name = L"gameField";
			this->gameField->Size = System::Drawing::Size(479, 479);
			this->gameField->TabIndex = 1;
			this->gameField->TabStop = false;
			this->gameField->Text = L"Field";
			this->gameField->Enter += gcnew System::EventHandler(this, &MyForm::gameField_Enter);
			// 
			// bq2
			// 
			this->bq2->BackColor = System::Drawing::Color::BlueViolet;
			this->bq2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bq2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bq2->Location = System::Drawing::Point(88, 26);
			this->bq2->Name = L"bq2";
			this->bq2->Size = System::Drawing::Size(53, 53);
			this->bq2->TabIndex = 10;
			this->bq2->UseVisualStyleBackColor = false;
			this->bq2->Visible = false;
			this->bq2->Click += gcnew System::EventHandler(this, &MyForm::bq2_Click);
			// 
			// bq1
			// 
			this->bq1->BackColor = System::Drawing::Color::BlueViolet;
			this->bq1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bq1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->bq1->Location = System::Drawing::Point(333, 26);
			this->bq1->Name = L"bq1";
			this->bq1->Size = System::Drawing::Size(53, 53);
			this->bq1->TabIndex = 9;
			this->bq1->UseVisualStyleBackColor = false;
			this->bq1->Visible = false;
			this->bq1->Click += gcnew System::EventHandler(this, &MyForm::bq1_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::Indigo;
			this->button10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button10->Location = System::Drawing::Point(147, 206);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(180, 57);
			this->button10->TabIndex = 3;
			this->button10->Text = L"Play";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18));
			this->label4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->label4->Location = System::Drawing::Point(147, 28);
			this->label4->Margin = System::Windows::Forms::Padding(3);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(3);
			this->label4->Size = System::Drawing::Size(180, 51);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Win";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label4->Visible = false;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button7->BackColor = System::Drawing::Color::DimGray;
			this->button7->Enabled = false;
			this->button7->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button7->Location = System::Drawing::Point(85, 295);
			this->button7->Name = L"button7";
			this->button7->Padding = System::Windows::Forms::Padding(10);
			this->button7->Size = System::Drawing::Size(99, 99);
			this->button7->TabIndex = 8;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button2->BackColor = System::Drawing::Color::DimGray;
			this->button2->Enabled = false;
			this->button2->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(190, 85);
			this->button2->Name = L"button2";
			this->button2->Padding = System::Windows::Forms::Padding(10);
			this->button2->Size = System::Drawing::Size(99, 99);
			this->button2->TabIndex = 1;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button3->BackColor = System::Drawing::Color::DimGray;
			this->button3->Enabled = false;
			this->button3->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(295, 85);
			this->button3->Name = L"button3";
			this->button3->Padding = System::Windows::Forms::Padding(10);
			this->button3->Size = System::Drawing::Size(99, 99);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button8->BackColor = System::Drawing::Color::DimGray;
			this->button8->Enabled = false;
			this->button8->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button8->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button8->Location = System::Drawing::Point(190, 295);
			this->button8->Name = L"button8";
			this->button8->Padding = System::Windows::Forms::Padding(10);
			this->button8->Size = System::Drawing::Size(99, 99);
			this->button8->TabIndex = 7;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button6->BackColor = System::Drawing::Color::DimGray;
			this->button6->Enabled = false;
			this->button6->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button6->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button6->Location = System::Drawing::Point(295, 190);
			this->button6->Name = L"button6";
			this->button6->Padding = System::Windows::Forms::Padding(10);
			this->button6->Size = System::Drawing::Size(99, 99);
			this->button6->TabIndex = 3;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button9->BackColor = System::Drawing::Color::DimGray;
			this->button9->Enabled = false;
			this->button9->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button9->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button9->Location = System::Drawing::Point(295, 295);
			this->button9->Name = L"button9";
			this->button9->Padding = System::Windows::Forms::Padding(10);
			this->button9->Size = System::Drawing::Size(99, 99);
			this->button9->TabIndex = 6;
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::DimGray;
			this->button1->Enabled = false;
			this->button1->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(85, 85);
			this->button1->Name = L"button1";
			this->button1->Padding = System::Windows::Forms::Padding(10);
			this->button1->Size = System::Drawing::Size(99, 99);
			this->button1->TabIndex = 0;
			this->button1->Text = L"\r\n";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button5->BackColor = System::Drawing::Color::DimGray;
			this->button5->Enabled = false;
			this->button5->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button5->Location = System::Drawing::Point(190, 190);
			this->button5->Name = L"button5";
			this->button5->Padding = System::Windows::Forms::Padding(10);
			this->button5->Size = System::Drawing::Size(99, 99);
			this->button5->TabIndex = 4;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button4->BackColor = System::Drawing::Color::DimGray;
			this->button4->Enabled = false;
			this->button4->Font = (gcnew System::Drawing::Font(L"Droid Sans Mono Slashed", 9));
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button4->Location = System::Drawing::Point(85, 190);
			this->button4->Name = L"button4";
			this->button4->Padding = System::Windows::Forms::Padding(10);
			this->button4->Size = System::Drawing::Size(99, 99);
			this->button4->TabIndex = 5;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22));
			this->label3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label3->Location = System::Drawing::Point(162, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 52);
			this->label3->TabIndex = 6;
			this->label3->Visible = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->groupBox2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->groupBox2->Location = System::Drawing::Point(104, 441);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(53, 60);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Player 2";
			this->groupBox2->Visible = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Enabled = false;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->radioButton2->Location = System::Drawing::Point(16, 76);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(175, 32);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Player vs. Comp.";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->radioButton1->Location = System::Drawing::Point(16, 38);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(171, 32);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Player vs. Player";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button11->BackColor = System::Drawing::Color::Indigo;
			this->button11->Enabled = false;
			this->button11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16));
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button11->Location = System::Drawing::Point(12, 236);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(198, 73);
			this->button11->TabIndex = 4;
			this->button11->Text = L"New Game";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->gameToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(702, 33);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->gameToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->gameToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->preferencesToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->gameToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->gameToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->gameToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gameToolStripMenuItem.Image")));
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(73, 29);
			this->gameToolStripMenuItem->Text = L"Game";
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->BackColor = System::Drawing::Color::Indigo;
			this->newGameToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->ShortcutKeyDisplayString = L"F2";
			this->newGameToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F2;
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(211, 30);
			this->newGameToolStripMenuItem->Text = L"New game";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::newGameToolStripMenuItem_Click);
			// 
			// preferencesToolStripMenuItem
			// 
			this->preferencesToolStripMenuItem->BackColor = System::Drawing::Color::Indigo;
			this->preferencesToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->preferencesToolStripMenuItem->Name = L"preferencesToolStripMenuItem";
			this->preferencesToolStripMenuItem->Size = System::Drawing::Size(211, 30);
			this->preferencesToolStripMenuItem->Text = L"Rules";
			this->preferencesToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::preferencesToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->BackColor = System::Drawing::Color::Indigo;
			this->exitToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->ShortcutKeyDisplayString = L"Alt + F4";
			this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F4));
			this->exitToolStripMenuItem->Size = System::Drawing::Size(211, 30);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->helpToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->helpToolStripMenuItem->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(63, 29);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->BackColor = System::Drawing::SystemColors::Highlight;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->label1->Location = System::Drawing::Point(221, 527);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(479, 35);
			this->label1->TabIndex = 3;
			this->label1->Text = L"8.1";
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->radioButton4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->radioButton4->Location = System::Drawing::Point(14, 28);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(90, 32);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->Text = L"Classic";
			this->radioButton4->UseVisualStyleBackColor = true;
			this->radioButton4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton4_CheckedChanged);
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Checked = true;
			this->radioButton5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->radioButton5->ForeColor = System::Drawing::SystemColors::Highlight;
			this->radioButton5->Location = System::Drawing::Point(14, 66);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(115, 32);
			this->radioButton5->TabIndex = 1;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Quantum";
			this->radioButton5->UseVisualStyleBackColor = true;
			this->radioButton5->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton5_CheckedChanged);
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Enabled = false;
			this->radioButton6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F));
			this->radioButton6->ForeColor = System::Drawing::SystemColors::Highlight;
			this->radioButton6->Location = System::Drawing::Point(3, 79);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(128, 27);
			this->radioButton6->TabIndex = 2;
			this->radioButton6->Text = L"Incapsulated";
			this->radioButton6->UseVisualStyleBackColor = true;
			this->radioButton6->Visible = false;
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label2->BackColor = System::Drawing::SystemColors::Highlight;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7));
			this->label2->Location = System::Drawing::Point(12, 527);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(198, 35);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Copyright (C) Artyom Yeghoyan 2018";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->tabControl1->Location = System::Drawing::Point(28, 385);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(71, 89);
			this->tabControl1->TabIndex = 6;
			this->tabControl1->Visible = false;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::DarkCyan;
			this->tabPage1->Controls->Add(this->tableLayoutPanel2);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Margin = System::Windows::Forms::Padding(0);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(63, 25);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Radio";
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 1;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->radioButton13, 0, 5);
			this->tableLayoutPanel2->Controls->Add(this->radioButton12, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->radioButton11, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->radioButton10, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->radioButton9, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->tableLayoutPanel1, 0, 0);
			this->tableLayoutPanel2->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel2->Location = System::Drawing::Point(6, 3);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 6;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 31)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 30)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 29)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 27)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 33)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(186, 185);
			this->tableLayoutPanel2->TabIndex = 4;
			// 
			// radioButton13
			// 
			this->radioButton13->AutoSize = true;
			this->radioButton13->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->radioButton13->Location = System::Drawing::Point(3, 155);
			this->radioButton13->Name = L"radioButton13";
			this->radioButton13->Size = System::Drawing::Size(36, 24);
			this->radioButton13->TabIndex = 11;
			this->radioButton13->TabStop = true;
			this->radioButton13->Text = L"-";
			this->radioButton13->UseVisualStyleBackColor = true;
			// 
			// radioButton12
			// 
			this->radioButton12->AutoSize = true;
			this->radioButton12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->radioButton12->Location = System::Drawing::Point(3, 128);
			this->radioButton12->Name = L"radioButton12";
			this->radioButton12->Size = System::Drawing::Size(36, 21);
			this->radioButton12->TabIndex = 10;
			this->radioButton12->TabStop = true;
			this->radioButton12->Text = L"-";
			this->radioButton12->UseVisualStyleBackColor = true;
			// 
			// radioButton11
			// 
			this->radioButton11->AutoSize = true;
			this->radioButton11->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->radioButton11->Location = System::Drawing::Point(3, 99);
			this->radioButton11->Name = L"radioButton11";
			this->radioButton11->Size = System::Drawing::Size(143, 23);
			this->radioButton11->TabIndex = 9;
			this->radioButton11->TabStop = true;
			this->radioButton11->Text = L"About Pyatigorsk";
			this->radioButton11->UseVisualStyleBackColor = true;
			// 
			// radioButton10
			// 
			this->radioButton10->AutoSize = true;
			this->radioButton10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->radioButton10->Location = System::Drawing::Point(3, 69);
			this->radioButton10->Name = L"radioButton10";
			this->radioButton10->Size = System::Drawing::Size(105, 24);
			this->radioButton10->TabIndex = 8;
			this->radioButton10->TabStop = true;
			this->radioButton10->Text = L"Pulp fiction";
			this->radioButton10->UseVisualStyleBackColor = true;
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->radioButton9->Location = System::Drawing::Point(3, 38);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(75, 24);
			this->radioButton9->TabIndex = 4;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Author";
			this->radioButton9->UseVisualStyleBackColor = true;
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->radioButton8, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->radioButton7, 0, 0);
			this->tableLayoutPanel1->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->tableLayoutPanel1->Location = System::Drawing::Point(3, 3);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(180, 28);
			this->tableLayoutPanel1->TabIndex = 7;
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8));
			this->radioButton8->Location = System::Drawing::Point(93, 3);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(49, 22);
			this->radioButton8->TabIndex = 5;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Off";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton8_CheckedChanged);
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 8));
			this->radioButton7->Location = System::Drawing::Point(3, 3);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(49, 22);
			this->radioButton7->TabIndex = 4;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"On";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton7_CheckedChanged);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->radioButton6);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(63, 25);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Game mode";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->groupBox3->Controls->Add(this->radioButton4);
			this->groupBox3->Controls->Add(this->radioButton5);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->groupBox3->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox3->Location = System::Drawing::Point(12, 40);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(198, 118);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Mode";
			// 
			// groupBox4
			// 
			this->groupBox4->BackColor = System::Drawing::Color::Transparent;
			this->groupBox4->Controls->Add(this->radioButton1);
			this->groupBox4->Controls->Add(this->radioButton2);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14));
			this->groupBox4->ForeColor = System::Drawing::SystemColors::Highlight;
			this->groupBox4->Location = System::Drawing::Point(12, 164);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(198, 60);
			this->groupBox4->TabIndex = 4;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Type";
			this->groupBox4->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(32)), static_cast<System::Int32>(static_cast<System::Byte>(32)),
				static_cast<System::Int32>(static_cast<System::Byte>(32)));
			this->ClientSize = System::Drawing::Size(702, 572);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->gameField);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Location = System::Drawing::Point(50, 50);
			this->MinimumSize = System::Drawing::Size(720, 619);
			this->Name = L"MyForm";
			this->Text = L"Quantum tic-tac-toe";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->gameField->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int lastBtn = 0;
		array<int, 2>^ cycle = gcnew array<int, 2>(81, 82);
		array<int>^ btn = gcnew array<int>(9);
		Game game;
		int x, y;
		int move;
		int typemode = 1;
		System::String^ index;
		int mind;
		bool ifWon(int w1, int w2, int w3, int w4, int w5, int w6, int w7, int w8, int w9);
		bool stdWin(
			System::String^ w1,
			System::String^ w2,
			System::String^ w3,
			System::String^ w4,
			System::String^ w5,
			System::String^ w6,
			System::String^ w7,
			System::String^ w8,
			System::String^ w9);
		void buttonClick(int number);
		int quantParse(int number, int mode);
		void moveto(int pos);
		array<int, 2>^ checkcl(array<int, 2>^ arr, int btn);
		array<int, 2>^ unloop(array<int, 2>^ arr, int btn, int lastmove, System::String^ element);
		void recur(System::String^ str, int btn);
		void fill(int mode);
		int mindblow(
			System::String^ w1,
			System::String^ w2,
			System::String^ w3,
			System::String^ w4,
			System::String^ w5,
			System::String^ w6,
			System::String^ w7,
			System::String^ w8,
			System::String^ w9);
		//void buttonClick(int number);

private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 3;
	btn[3]++;
	if (btn[3] > 8)
		this->button3->Enabled = false;
	buttonClick(3);
	move = quantParse(3, typemode);
	cycle = checkcl(cycle, 3);
	//this->label2->Text = System::Convert::ToString(cycle[0, 0]);
	fill(typemode);
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 2;
	btn[2]++;
	if (btn[2] > 8)
		this->button2->Enabled = false;
	buttonClick(2);
	move = quantParse(2, typemode);
	cycle = checkcl(cycle, 2);
	fill(typemode);
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 7;
	btn[7]++;
	if (btn[7] > 8)
		this->button7->Enabled = false;
	buttonClick(7);
	move = quantParse(7, typemode);
	cycle = checkcl(cycle, 7);
	fill(typemode);
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 9;
	btn[0]++;
	if (btn[0] > 8)
		this->button9->Enabled = false;
	buttonClick(9);
	move = quantParse(9, typemode);
	cycle = checkcl(cycle, 9);
	fill(typemode);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 5;
	btn[5]++;
	if (btn[5] > 8)
		this->button5->Enabled = false;
	buttonClick(5);
	move = quantParse(5, typemode);
	cycle = checkcl(cycle, 5);
	fill(typemode);
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 4;
	btn[4]++;
	if (btn[4] > 8)
		this->button4->Enabled = false;
	buttonClick(4);
	move = quantParse(4, typemode);
	cycle = checkcl(cycle, 4);
	fill(typemode);

}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 1;
	btn[1]++;
	if (btn[1] > 8)
		this->button1->Enabled = false;
	buttonClick(1);
	move = quantParse(1, typemode);
	cycle = checkcl(cycle, 1);
	fill(typemode);
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 8;
	btn[8]++;
	if (btn[8] > 8)
		this->button8->Enabled = false;
	buttonClick(8);
	move = quantParse(8, typemode);
	cycle = checkcl(cycle, 8);
	fill(typemode);
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	lastBtn = 6;
	btn[6]++;
	if (btn[6] > 8)
		this->button6->Enabled = false;
	buttonClick(6);
	move = quantParse(6, typemode);
	cycle = checkcl(cycle, 6);
	fill(typemode);
}
private: System::Void gameField_Enter(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void toolStripTextBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	/*int r = 3;
	games.createRow(r);
	for (int i = 0; i < r; i++)
		games.createColumn(3, i);*/
}
private: System::Void newGameToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;
	this->button1->BackColor = System::Drawing::Color::DimGray;
	this->button2->BackColor = System::Drawing::Color::DimGray;
	this->button3->BackColor = System::Drawing::Color::DimGray;
	this->button4->BackColor = System::Drawing::Color::DimGray;
	this->button5->BackColor = System::Drawing::Color::DimGray;
	this->button6->BackColor = System::Drawing::Color::DimGray;
	this->button7->BackColor = System::Drawing::Color::DimGray;
	this->button8->BackColor = System::Drawing::Color::DimGray;
	this->button9->BackColor = System::Drawing::Color::DimGray;
	this->button10->Visible = true;
	this->label4->Visible = false;
	this->label2->Text = "";
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	this->button1->Enabled = true;
	this->button2->Enabled = true;
	this->button3->Enabled = true;
	this->button4->Enabled = true;
	this->button5->Enabled = true;
	this->button6->Enabled = true;
	this->button7->Enabled = true;
	this->button8->Enabled = true;
	this->button9->Enabled = true;
	this->button1->BackColor = System::Drawing::Color::Indigo;
	this->button2->BackColor = System::Drawing::Color::Indigo;
	this->button3->BackColor = System::Drawing::Color::Indigo;
	this->button4->BackColor = System::Drawing::Color::Indigo;
	this->button5->BackColor = System::Drawing::Color::Indigo;
	this->button6->BackColor = System::Drawing::Color::Indigo;
	this->button7->BackColor = System::Drawing::Color::Indigo;
	this->button8->BackColor = System::Drawing::Color::Indigo;
	this->button9->BackColor = System::Drawing::Color::Indigo;
	this->button10->Visible = false;

	//games.nullGame();

	game.initGame(1, typemode);

	this->button1->Text = "";
	this->button2->Text = "";
	this->button3->Text = "";
	this->button4->Text = "";
	this->button5->Text = "";
	this->button6->Text = "";
	this->button7->Text = "";
	this->button8->Text = "";
	this->button9->Text = "";
	this->bq1->Text = "";
	this->bq2->Text = "";

	this->bq1->Visible = false;
	this->bq2->Visible = false;

	move = 0;
	index = "";
	game.makeNull();
	for (int i = 0; i < 81; i++)
		cycle[i, 81] = 0;
	for (int i = 0; i < 9; i++)
		btn[i] = 0;
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	/*Game newGame;
	newGame.initGame(1);*/
	this->button1->Enabled = false;
	this->button2->Enabled = false;
	this->button3->Enabled = false;
	this->button4->Enabled = false;
	this->button5->Enabled = false;
	this->button6->Enabled = false;
	this->button7->Enabled = false;
	this->button8->Enabled = false;
	this->button9->Enabled = false;
	this->button1->BackColor = System::Drawing::Color::DimGray;
	this->button2->BackColor = System::Drawing::Color::DimGray;
	this->button3->BackColor = System::Drawing::Color::DimGray;
	this->button4->BackColor = System::Drawing::Color::DimGray;
	this->button5->BackColor = System::Drawing::Color::DimGray;
	this->button6->BackColor = System::Drawing::Color::DimGray;
	this->button7->BackColor = System::Drawing::Color::DimGray;
	this->button8->BackColor = System::Drawing::Color::DimGray;
	this->button9->BackColor = System::Drawing::Color::DimGray;
	this->radioButton1->Visible = true;
	this->radioButton2->Visible = true;
	this->button10->Visible = true;
	this->button11->Enabled = false;
	this->label4->Visible = false;
	

}
private: System::Void radioButton7_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	PlaySound(TEXT("C:/Users/artyo/Desktop/bulk.wav"), NULL, SND_ASYNC);
}
private: System::Void radioButton8_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	PlaySound(NULL, 0, 0);
}
private: System::Void radioButton4_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->button11->Enabled = true;
	typemode = 0;
}
private: System::Void radioButton5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	this->button11->Enabled = true;
	typemode = 1;
}
private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
private: System::Void preferencesToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void bq1_Click(System::Object^  sender, System::EventArgs^  e) {
	cycle = unloop(cycle, 0, lastBtn, this->bq1->Text);
}
private: System::Void bq2_Click(System::Object^  sender, System::EventArgs^  e) {
	cycle = unloop(cycle, 1, lastBtn, this->bq2->Text);
	
}
};
}
