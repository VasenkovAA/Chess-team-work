#pragma once
#include <iostream>


namespace winFormsLaba {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		} 

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ MainPanel;
	protected:
	private: System::Windows::Forms::Panel^ SettingsPanel;


	private: System::Windows::Forms::Panel^ coord00;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ StartGameButton;
	

	private: System::Windows::Forms::Panel^ coord06;
	private: System::Windows::Forms::Panel^ coord05;
	private: System::Windows::Forms::Panel^ coord04;
	private: System::Windows::Forms::Panel^ coord03;
	private: System::Windows::Forms::Panel^ coord02;
	private: System::Windows::Forms::Panel^ coord01;
	private: System::Windows::Forms::Panel^ coord60;
	private: System::Windows::Forms::Panel^ coord50;
	private: System::Windows::Forms::Panel^ coord40;
	private: System::Windows::Forms::Panel^ coord30;
	private: System::Windows::Forms::Panel^ coord20;
	private: System::Windows::Forms::Panel^ coord10;
	private: System::Windows::Forms::Panel^ coord70;
	private: System::Windows::Forms::Panel^ coord77;

	private: System::Windows::Forms::Panel^ coord76;
	private: System::Windows::Forms::Panel^ coord67;


	private: System::Windows::Forms::Panel^ coord75;
	private: System::Windows::Forms::Panel^ coord57;


	private: System::Windows::Forms::Panel^ coord66;
	private: System::Windows::Forms::Panel^ coord47;


	private: System::Windows::Forms::Panel^ coord74;
	private: System::Windows::Forms::Panel^ coord37;


	private: System::Windows::Forms::Panel^ coord56;
	private: System::Windows::Forms::Panel^ coord27;
	private: System::Windows::Forms::Panel^ coord17;




	private: System::Windows::Forms::Panel^ coord65;
	private: System::Windows::Forms::Panel^ coord46;


	private: System::Windows::Forms::Panel^ coord73;
	private: System::Windows::Forms::Panel^ coord36;


	private: System::Windows::Forms::Panel^ coord55;
	private: System::Windows::Forms::Panel^ coord26;


	private: System::Windows::Forms::Panel^ coord16;

	private: System::Windows::Forms::Panel^ coord64;
	private: System::Windows::Forms::Panel^ coord45;


	private: System::Windows::Forms::Panel^ coord72;
	private: System::Windows::Forms::Panel^ coord35;


	private: System::Windows::Forms::Panel^ coord54;
	private: System::Windows::Forms::Panel^ coord25;


	private: System::Windows::Forms::Panel^ coord15;

	private: System::Windows::Forms::Panel^ coord63;
	private: System::Windows::Forms::Panel^ coord44;


	private: System::Windows::Forms::Panel^ coord71;
	private: System::Windows::Forms::Panel^ coord34;


	private: System::Windows::Forms::Panel^ coord53;
	private: System::Windows::Forms::Panel^ coord24;


	private: System::Windows::Forms::Panel^ coord14;

	private: System::Windows::Forms::Panel^ coord62;
	private: System::Windows::Forms::Panel^ coord43;


	private: System::Windows::Forms::Panel^ coord33;

	private: System::Windows::Forms::Panel^ coord52;
	private: System::Windows::Forms::Panel^ coord23;


	private: System::Windows::Forms::Panel^ coord13;

	private: System::Windows::Forms::Panel^ coord61;
	private: System::Windows::Forms::Panel^ coord42;
	private: System::Windows::Forms::Panel^ coord32;



	private: System::Windows::Forms::Panel^ coord51;
	private: System::Windows::Forms::Panel^ coord22;
	private: System::Windows::Forms::Panel^ coord12;



	private: System::Windows::Forms::Panel^ coord41;

	private: System::Windows::Forms::Panel^ coord31;

	private: System::Windows::Forms::Panel^ coord21;








	private: System::Windows::Forms::Panel^ coord11;
private: System::Windows::Forms::ListBox^ listBox1;
private: System::Windows::Forms::Button^ ResetGameButton;
private: System::Windows::Forms::Button^ StopGameButton;
private: System::Windows::Forms::Panel^ coord07;
private: System::Windows::Forms::PictureBox^ pictureBox1;







	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->MainPanel = (gcnew System::Windows::Forms::Panel());
			this->coord11 = (gcnew System::Windows::Forms::Panel());
			this->coord77 = (gcnew System::Windows::Forms::Panel());
			this->coord76 = (gcnew System::Windows::Forms::Panel());
			this->coord67 = (gcnew System::Windows::Forms::Panel());
			this->coord75 = (gcnew System::Windows::Forms::Panel());
			this->coord57 = (gcnew System::Windows::Forms::Panel());
			this->coord66 = (gcnew System::Windows::Forms::Panel());
			this->coord47 = (gcnew System::Windows::Forms::Panel());
			this->coord74 = (gcnew System::Windows::Forms::Panel());
			this->coord37 = (gcnew System::Windows::Forms::Panel());
			this->coord56 = (gcnew System::Windows::Forms::Panel());
			this->coord27 = (gcnew System::Windows::Forms::Panel());
			this->coord17 = (gcnew System::Windows::Forms::Panel());
			this->coord65 = (gcnew System::Windows::Forms::Panel());
			this->coord46 = (gcnew System::Windows::Forms::Panel());
			this->coord73 = (gcnew System::Windows::Forms::Panel());
			this->coord36 = (gcnew System::Windows::Forms::Panel());
			this->coord55 = (gcnew System::Windows::Forms::Panel());
			this->coord26 = (gcnew System::Windows::Forms::Panel());
			this->coord16 = (gcnew System::Windows::Forms::Panel());
			this->coord64 = (gcnew System::Windows::Forms::Panel());
			this->coord45 = (gcnew System::Windows::Forms::Panel());
			this->coord72 = (gcnew System::Windows::Forms::Panel());
			this->coord35 = (gcnew System::Windows::Forms::Panel());
			this->coord54 = (gcnew System::Windows::Forms::Panel());
			this->coord25 = (gcnew System::Windows::Forms::Panel());
			this->coord15 = (gcnew System::Windows::Forms::Panel());
			this->coord63 = (gcnew System::Windows::Forms::Panel());
			this->coord44 = (gcnew System::Windows::Forms::Panel());
			this->coord71 = (gcnew System::Windows::Forms::Panel());
			this->coord34 = (gcnew System::Windows::Forms::Panel());
			this->coord53 = (gcnew System::Windows::Forms::Panel());
			this->coord24 = (gcnew System::Windows::Forms::Panel());
			this->coord14 = (gcnew System::Windows::Forms::Panel());
			this->coord62 = (gcnew System::Windows::Forms::Panel());
			this->coord43 = (gcnew System::Windows::Forms::Panel());
			this->coord70 = (gcnew System::Windows::Forms::Panel());
			this->coord33 = (gcnew System::Windows::Forms::Panel());
			this->coord52 = (gcnew System::Windows::Forms::Panel());
			this->coord23 = (gcnew System::Windows::Forms::Panel());
			this->coord13 = (gcnew System::Windows::Forms::Panel());
			this->coord61 = (gcnew System::Windows::Forms::Panel());
			this->coord42 = (gcnew System::Windows::Forms::Panel());
			this->coord60 = (gcnew System::Windows::Forms::Panel());
			this->coord32 = (gcnew System::Windows::Forms::Panel());
			this->coord51 = (gcnew System::Windows::Forms::Panel());
			this->coord22 = (gcnew System::Windows::Forms::Panel());
			this->coord50 = (gcnew System::Windows::Forms::Panel());
			this->coord12 = (gcnew System::Windows::Forms::Panel());
			this->coord41 = (gcnew System::Windows::Forms::Panel());
			this->coord40 = (gcnew System::Windows::Forms::Panel());
			this->coord31 = (gcnew System::Windows::Forms::Panel());
			this->coord30 = (gcnew System::Windows::Forms::Panel());
			this->coord21 = (gcnew System::Windows::Forms::Panel());
			this->coord20 = (gcnew System::Windows::Forms::Panel());
			this->coord10 = (gcnew System::Windows::Forms::Panel());
			this->coord06 = (gcnew System::Windows::Forms::Panel());
			this->coord05 = (gcnew System::Windows::Forms::Panel());
			this->coord04 = (gcnew System::Windows::Forms::Panel());
			this->coord03 = (gcnew System::Windows::Forms::Panel());
			this->coord02 = (gcnew System::Windows::Forms::Panel());
			this->coord01 = (gcnew System::Windows::Forms::Panel());
			this->coord00 = (gcnew System::Windows::Forms::Panel());
			this->SettingsPanel = (gcnew System::Windows::Forms::Panel());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->ResetGameButton = (gcnew System::Windows::Forms::Button());
			this->StopGameButton = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->StartGameButton = (gcnew System::Windows::Forms::Button());
			this->coord07 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->MainPanel->SuspendLayout();
			this->coord00->SuspendLayout();
			this->SettingsPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// MainPanel
			// 
			this->MainPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->MainPanel->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->MainPanel->Controls->Add(this->coord11);
			this->MainPanel->Controls->Add(this->coord77);
			this->MainPanel->Controls->Add(this->coord76);
			this->MainPanel->Controls->Add(this->coord67);
			this->MainPanel->Controls->Add(this->coord75);
			this->MainPanel->Controls->Add(this->coord57);
			this->MainPanel->Controls->Add(this->coord66);
			this->MainPanel->Controls->Add(this->coord47);
			this->MainPanel->Controls->Add(this->coord74);
			this->MainPanel->Controls->Add(this->coord37);
			this->MainPanel->Controls->Add(this->coord56);
			this->MainPanel->Controls->Add(this->coord27);
			this->MainPanel->Controls->Add(this->coord17);
			this->MainPanel->Controls->Add(this->coord65);
			this->MainPanel->Controls->Add(this->coord46);
			this->MainPanel->Controls->Add(this->coord73);
			this->MainPanel->Controls->Add(this->coord36);
			this->MainPanel->Controls->Add(this->coord55);
			this->MainPanel->Controls->Add(this->coord26);
			this->MainPanel->Controls->Add(this->coord16);
			this->MainPanel->Controls->Add(this->coord64);
			this->MainPanel->Controls->Add(this->coord45);
			this->MainPanel->Controls->Add(this->coord72);
			this->MainPanel->Controls->Add(this->coord35);
			this->MainPanel->Controls->Add(this->coord54);
			this->MainPanel->Controls->Add(this->coord25);
			this->MainPanel->Controls->Add(this->coord15);
			this->MainPanel->Controls->Add(this->coord63);
			this->MainPanel->Controls->Add(this->coord44);
			this->MainPanel->Controls->Add(this->coord71);
			this->MainPanel->Controls->Add(this->coord34);
			this->MainPanel->Controls->Add(this->coord53);
			this->MainPanel->Controls->Add(this->coord24);
			this->MainPanel->Controls->Add(this->coord14);
			this->MainPanel->Controls->Add(this->coord62);
			this->MainPanel->Controls->Add(this->coord43);
			this->MainPanel->Controls->Add(this->coord70);
			this->MainPanel->Controls->Add(this->coord33);
			this->MainPanel->Controls->Add(this->coord52);
			this->MainPanel->Controls->Add(this->coord23);
			this->MainPanel->Controls->Add(this->coord13);
			this->MainPanel->Controls->Add(this->coord61);
			this->MainPanel->Controls->Add(this->coord42);
			this->MainPanel->Controls->Add(this->coord60);
			this->MainPanel->Controls->Add(this->coord32);
			this->MainPanel->Controls->Add(this->coord51);
			this->MainPanel->Controls->Add(this->coord22);
			this->MainPanel->Controls->Add(this->coord50);
			this->MainPanel->Controls->Add(this->coord12);
			this->MainPanel->Controls->Add(this->coord41);
			this->MainPanel->Controls->Add(this->coord40);
			this->MainPanel->Controls->Add(this->coord31);
			this->MainPanel->Controls->Add(this->coord30);
			this->MainPanel->Controls->Add(this->coord21);
			this->MainPanel->Controls->Add(this->coord20);
			this->MainPanel->Controls->Add(this->coord10);
			this->MainPanel->Controls->Add(this->coord07);
			this->MainPanel->Controls->Add(this->coord06);
			this->MainPanel->Controls->Add(this->coord05);
			this->MainPanel->Controls->Add(this->coord04);
			this->MainPanel->Controls->Add(this->coord03);
			this->MainPanel->Controls->Add(this->coord02);
			this->MainPanel->Controls->Add(this->coord01);
			this->MainPanel->Controls->Add(this->coord00);
			this->MainPanel->Location = System::Drawing::Point(12, 12);
			this->MainPanel->Name = L"MainPanel";
			this->MainPanel->Size = System::Drawing::Size(850, 850);
			this->MainPanel->TabIndex = 0;
			this->MainPanel->Resize += gcnew System::EventHandler(this, &Form1::MainPanel_Resize);
			// 
			// coord11
			// 
			this->coord11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord11->BackColor = System::Drawing::SystemColors::Info;
			this->coord11->Location = System::Drawing::Point(109, 641);
			this->coord11->Name = L"coord11";
			this->coord11->Size = System::Drawing::Size(100, 100);
			this->coord11->TabIndex = 8;
			// 
			// coord77
			// 
			this->coord77->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord77->BackColor = System::Drawing::SystemColors::Info;
			this->coord77->Location = System::Drawing::Point(745, 5);
			this->coord77->Name = L"coord77";
			this->coord77->Size = System::Drawing::Size(100, 100);
			this->coord77->TabIndex = 16;
			// 
			// coord76
			// 
			this->coord76->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord76->BackColor = System::Drawing::SystemColors::Info;
			this->coord76->Location = System::Drawing::Point(745, 111);
			this->coord76->Name = L"coord76";
			this->coord76->Size = System::Drawing::Size(100, 100);
			this->coord76->TabIndex = 16;
			// 
			// coord67
			// 
			this->coord67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord67->BackColor = System::Drawing::SystemColors::Info;
			this->coord67->Location = System::Drawing::Point(639, 5);
			this->coord67->Name = L"coord67";
			this->coord67->Size = System::Drawing::Size(100, 100);
			this->coord67->TabIndex = 17;
			// 
			// coord75
			// 
			this->coord75->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord75->BackColor = System::Drawing::SystemColors::Info;
			this->coord75->Location = System::Drawing::Point(745, 217);
			this->coord75->Name = L"coord75";
			this->coord75->Size = System::Drawing::Size(100, 100);
			this->coord75->TabIndex = 16;
			// 
			// coord57
			// 
			this->coord57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord57->BackColor = System::Drawing::SystemColors::Info;
			this->coord57->Location = System::Drawing::Point(533, 5);
			this->coord57->Name = L"coord57";
			this->coord57->Size = System::Drawing::Size(100, 100);
			this->coord57->TabIndex = 18;
			// 
			// coord66
			// 
			this->coord66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord66->BackColor = System::Drawing::SystemColors::Info;
			this->coord66->Location = System::Drawing::Point(639, 111);
			this->coord66->Name = L"coord66";
			this->coord66->Size = System::Drawing::Size(100, 100);
			this->coord66->TabIndex = 17;
			// 
			// coord47
			// 
			this->coord47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord47->BackColor = System::Drawing::SystemColors::Info;
			this->coord47->Location = System::Drawing::Point(427, 5);
			this->coord47->Name = L"coord47";
			this->coord47->Size = System::Drawing::Size(100, 100);
			this->coord47->TabIndex = 19;
			// 
			// coord74
			// 
			this->coord74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord74->BackColor = System::Drawing::SystemColors::Info;
			this->coord74->Location = System::Drawing::Point(745, 323);
			this->coord74->Name = L"coord74";
			this->coord74->Size = System::Drawing::Size(100, 100);
			this->coord74->TabIndex = 16;
			// 
			// coord37
			// 
			this->coord37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord37->BackColor = System::Drawing::SystemColors::Info;
			this->coord37->Location = System::Drawing::Point(321, 5);
			this->coord37->Name = L"coord37";
			this->coord37->Size = System::Drawing::Size(100, 100);
			this->coord37->TabIndex = 20;
			// 
			// coord56
			// 
			this->coord56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord56->BackColor = System::Drawing::SystemColors::Info;
			this->coord56->Location = System::Drawing::Point(533, 111);
			this->coord56->Name = L"coord56";
			this->coord56->Size = System::Drawing::Size(100, 100);
			this->coord56->TabIndex = 18;
			// 
			// coord27
			// 
			this->coord27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord27->BackColor = System::Drawing::SystemColors::Info;
			this->coord27->Location = System::Drawing::Point(215, 5);
			this->coord27->Name = L"coord27";
			this->coord27->Size = System::Drawing::Size(100, 100);
			this->coord27->TabIndex = 21;
			// 
			// coord17
			// 
			this->coord17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord17->BackColor = System::Drawing::SystemColors::Info;
			this->coord17->Location = System::Drawing::Point(109, 5);
			this->coord17->Name = L"coord17";
			this->coord17->Size = System::Drawing::Size(100, 100);
			this->coord17->TabIndex = 22;
			// 
			// coord65
			// 
			this->coord65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord65->BackColor = System::Drawing::SystemColors::Info;
			this->coord65->Location = System::Drawing::Point(639, 217);
			this->coord65->Name = L"coord65";
			this->coord65->Size = System::Drawing::Size(100, 100);
			this->coord65->TabIndex = 17;
			// 
			// coord46
			// 
			this->coord46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord46->BackColor = System::Drawing::SystemColors::Info;
			this->coord46->Location = System::Drawing::Point(427, 111);
			this->coord46->Name = L"coord46";
			this->coord46->Size = System::Drawing::Size(100, 100);
			this->coord46->TabIndex = 19;
			// 
			// coord73
			// 
			this->coord73->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord73->BackColor = System::Drawing::SystemColors::Info;
			this->coord73->Location = System::Drawing::Point(745, 429);
			this->coord73->Name = L"coord73";
			this->coord73->Size = System::Drawing::Size(100, 100);
			this->coord73->TabIndex = 16;
			// 
			// coord36
			// 
			this->coord36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord36->BackColor = System::Drawing::SystemColors::Info;
			this->coord36->Location = System::Drawing::Point(321, 111);
			this->coord36->Name = L"coord36";
			this->coord36->Size = System::Drawing::Size(100, 100);
			this->coord36->TabIndex = 20;
			// 
			// coord55
			// 
			this->coord55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord55->BackColor = System::Drawing::SystemColors::Info;
			this->coord55->Location = System::Drawing::Point(533, 217);
			this->coord55->Name = L"coord55";
			this->coord55->Size = System::Drawing::Size(100, 100);
			this->coord55->TabIndex = 18;
			// 
			// coord26
			// 
			this->coord26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord26->BackColor = System::Drawing::SystemColors::Info;
			this->coord26->Location = System::Drawing::Point(215, 111);
			this->coord26->Name = L"coord26";
			this->coord26->Size = System::Drawing::Size(100, 100);
			this->coord26->TabIndex = 21;
			// 
			// coord16
			// 
			this->coord16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord16->BackColor = System::Drawing::SystemColors::Info;
			this->coord16->Location = System::Drawing::Point(109, 111);
			this->coord16->Name = L"coord16";
			this->coord16->Size = System::Drawing::Size(100, 100);
			this->coord16->TabIndex = 22;
			// 
			// coord64
			// 
			this->coord64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord64->BackColor = System::Drawing::SystemColors::Info;
			this->coord64->Location = System::Drawing::Point(639, 323);
			this->coord64->Name = L"coord64";
			this->coord64->Size = System::Drawing::Size(100, 100);
			this->coord64->TabIndex = 17;
			// 
			// coord45
			// 
			this->coord45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord45->BackColor = System::Drawing::SystemColors::Info;
			this->coord45->Location = System::Drawing::Point(427, 217);
			this->coord45->Name = L"coord45";
			this->coord45->Size = System::Drawing::Size(100, 100);
			this->coord45->TabIndex = 19;
			// 
			// coord72
			// 
			this->coord72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord72->BackColor = System::Drawing::SystemColors::Info;
			this->coord72->Location = System::Drawing::Point(745, 535);
			this->coord72->Name = L"coord72";
			this->coord72->Size = System::Drawing::Size(100, 100);
			this->coord72->TabIndex = 9;
			// 
			// coord35
			// 
			this->coord35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord35->BackColor = System::Drawing::SystemColors::Info;
			this->coord35->Location = System::Drawing::Point(321, 217);
			this->coord35->Name = L"coord35";
			this->coord35->Size = System::Drawing::Size(100, 100);
			this->coord35->TabIndex = 20;
			// 
			// coord54
			// 
			this->coord54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord54->BackColor = System::Drawing::SystemColors::Info;
			this->coord54->Location = System::Drawing::Point(533, 323);
			this->coord54->Name = L"coord54";
			this->coord54->Size = System::Drawing::Size(100, 100);
			this->coord54->TabIndex = 18;
			// 
			// coord25
			// 
			this->coord25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord25->BackColor = System::Drawing::SystemColors::Info;
			this->coord25->Location = System::Drawing::Point(215, 217);
			this->coord25->Name = L"coord25";
			this->coord25->Size = System::Drawing::Size(100, 100);
			this->coord25->TabIndex = 21;
			// 
			// coord15
			// 
			this->coord15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord15->BackColor = System::Drawing::SystemColors::Info;
			this->coord15->Location = System::Drawing::Point(109, 217);
			this->coord15->Name = L"coord15";
			this->coord15->Size = System::Drawing::Size(100, 100);
			this->coord15->TabIndex = 22;
			// 
			// coord63
			// 
			this->coord63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord63->BackColor = System::Drawing::SystemColors::Info;
			this->coord63->Location = System::Drawing::Point(639, 429);
			this->coord63->Name = L"coord63";
			this->coord63->Size = System::Drawing::Size(100, 100);
			this->coord63->TabIndex = 17;
			this->coord63->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel23_Paint);
			// 
			// coord44
			// 
			this->coord44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord44->BackColor = System::Drawing::SystemColors::Info;
			this->coord44->Location = System::Drawing::Point(427, 323);
			this->coord44->Name = L"coord44";
			this->coord44->Size = System::Drawing::Size(100, 100);
			this->coord44->TabIndex = 19;
			// 
			// coord71
			// 
			this->coord71->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord71->BackColor = System::Drawing::SystemColors::Info;
			this->coord71->Location = System::Drawing::Point(745, 641);
			this->coord71->Name = L"coord71";
			this->coord71->Size = System::Drawing::Size(100, 100);
			this->coord71->TabIndex = 2;
			this->coord71->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint_1);
			// 
			// coord34
			// 
			this->coord34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord34->BackColor = System::Drawing::SystemColors::Info;
			this->coord34->Location = System::Drawing::Point(321, 323);
			this->coord34->Name = L"coord34";
			this->coord34->Size = System::Drawing::Size(100, 100);
			this->coord34->TabIndex = 20;
			// 
			// coord53
			// 
			this->coord53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord53->BackColor = System::Drawing::SystemColors::Info;
			this->coord53->Location = System::Drawing::Point(533, 429);
			this->coord53->Name = L"coord53";
			this->coord53->Size = System::Drawing::Size(100, 100);
			this->coord53->TabIndex = 18;
			// 
			// coord24
			// 
			this->coord24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord24->BackColor = System::Drawing::SystemColors::Info;
			this->coord24->Location = System::Drawing::Point(215, 323);
			this->coord24->Name = L"coord24";
			this->coord24->Size = System::Drawing::Size(100, 100);
			this->coord24->TabIndex = 21;
			// 
			// coord14
			// 
			this->coord14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord14->BackColor = System::Drawing::SystemColors::Info;
			this->coord14->Location = System::Drawing::Point(109, 323);
			this->coord14->Name = L"coord14";
			this->coord14->Size = System::Drawing::Size(100, 100);
			this->coord14->TabIndex = 22;
			// 
			// coord62
			// 
			this->coord62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord62->BackColor = System::Drawing::SystemColors::Info;
			this->coord62->Location = System::Drawing::Point(639, 535);
			this->coord62->Name = L"coord62";
			this->coord62->Size = System::Drawing::Size(100, 100);
			this->coord62->TabIndex = 10;
			// 
			// coord43
			// 
			this->coord43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord43->BackColor = System::Drawing::SystemColors::Info;
			this->coord43->Location = System::Drawing::Point(427, 429);
			this->coord43->Name = L"coord43";
			this->coord43->Size = System::Drawing::Size(100, 100);
			this->coord43->TabIndex = 19;
			// 
			// coord70
			// 
			this->coord70->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord70->BackColor = System::Drawing::SystemColors::Info;
			this->coord70->Location = System::Drawing::Point(745, 747);
			this->coord70->Name = L"coord70";
			this->coord70->Size = System::Drawing::Size(100, 100);
			this->coord70->TabIndex = 1;
			// 
			// coord33
			// 
			this->coord33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord33->BackColor = System::Drawing::SystemColors::Info;
			this->coord33->Location = System::Drawing::Point(321, 429);
			this->coord33->Name = L"coord33";
			this->coord33->Size = System::Drawing::Size(100, 100);
			this->coord33->TabIndex = 20;
			// 
			// coord52
			// 
			this->coord52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord52->BackColor = System::Drawing::SystemColors::Info;
			this->coord52->Location = System::Drawing::Point(533, 535);
			this->coord52->Name = L"coord52";
			this->coord52->Size = System::Drawing::Size(100, 100);
			this->coord52->TabIndex = 11;
			// 
			// coord23
			// 
			this->coord23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord23->BackColor = System::Drawing::SystemColors::Info;
			this->coord23->Location = System::Drawing::Point(215, 429);
			this->coord23->Name = L"coord23";
			this->coord23->Size = System::Drawing::Size(100, 100);
			this->coord23->TabIndex = 21;
			// 
			// coord13
			// 
			this->coord13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord13->BackColor = System::Drawing::SystemColors::Info;
			this->coord13->Location = System::Drawing::Point(109, 429);
			this->coord13->Name = L"coord13";
			this->coord13->Size = System::Drawing::Size(100, 100);
			this->coord13->TabIndex = 22;
			// 
			// coord61
			// 
			this->coord61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord61->BackColor = System::Drawing::SystemColors::Info;
			this->coord61->Location = System::Drawing::Point(639, 641);
			this->coord61->Name = L"coord61";
			this->coord61->Size = System::Drawing::Size(100, 100);
			this->coord61->TabIndex = 3;
			// 
			// coord42
			// 
			this->coord42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord42->BackColor = System::Drawing::SystemColors::Info;
			this->coord42->Location = System::Drawing::Point(427, 535);
			this->coord42->Name = L"coord42";
			this->coord42->Size = System::Drawing::Size(100, 100);
			this->coord42->TabIndex = 12;
			// 
			// coord60
			// 
			this->coord60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord60->BackColor = System::Drawing::SystemColors::Info;
			this->coord60->Location = System::Drawing::Point(639, 747);
			this->coord60->Name = L"coord60";
			this->coord60->Size = System::Drawing::Size(100, 100);
			this->coord60->TabIndex = 1;
			// 
			// coord32
			// 
			this->coord32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord32->BackColor = System::Drawing::SystemColors::Info;
			this->coord32->Location = System::Drawing::Point(321, 535);
			this->coord32->Name = L"coord32";
			this->coord32->Size = System::Drawing::Size(100, 100);
			this->coord32->TabIndex = 13;
			// 
			// coord51
			// 
			this->coord51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord51->BackColor = System::Drawing::SystemColors::Info;
			this->coord51->Location = System::Drawing::Point(533, 641);
			this->coord51->Name = L"coord51";
			this->coord51->Size = System::Drawing::Size(100, 100);
			this->coord51->TabIndex = 4;
			// 
			// coord22
			// 
			this->coord22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord22->BackColor = System::Drawing::SystemColors::Info;
			this->coord22->Location = System::Drawing::Point(215, 535);
			this->coord22->Name = L"coord22";
			this->coord22->Size = System::Drawing::Size(100, 100);
			this->coord22->TabIndex = 14;
			// 
			// coord50
			// 
			this->coord50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord50->BackColor = System::Drawing::SystemColors::Info;
			this->coord50->Location = System::Drawing::Point(533, 747);
			this->coord50->Name = L"coord50";
			this->coord50->Size = System::Drawing::Size(100, 100);
			this->coord50->TabIndex = 1;
			// 
			// coord12
			// 
			this->coord12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord12->BackColor = System::Drawing::SystemColors::Info;
			this->coord12->Location = System::Drawing::Point(109, 535);
			this->coord12->Name = L"coord12";
			this->coord12->Size = System::Drawing::Size(100, 100);
			this->coord12->TabIndex = 15;
			// 
			// coord41
			// 
			this->coord41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord41->BackColor = System::Drawing::SystemColors::Info;
			this->coord41->Location = System::Drawing::Point(427, 641);
			this->coord41->Name = L"coord41";
			this->coord41->Size = System::Drawing::Size(100, 100);
			this->coord41->TabIndex = 5;
			// 
			// coord40
			// 
			this->coord40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord40->BackColor = System::Drawing::SystemColors::Info;
			this->coord40->Location = System::Drawing::Point(427, 747);
			this->coord40->Name = L"coord40";
			this->coord40->Size = System::Drawing::Size(100, 100);
			this->coord40->TabIndex = 1;
			// 
			// coord31
			// 
			this->coord31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord31->BackColor = System::Drawing::SystemColors::Info;
			this->coord31->Location = System::Drawing::Point(321, 641);
			this->coord31->Name = L"coord31";
			this->coord31->Size = System::Drawing::Size(100, 100);
			this->coord31->TabIndex = 6;
			// 
			// coord30
			// 
			this->coord30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord30->BackColor = System::Drawing::SystemColors::Info;
			this->coord30->Location = System::Drawing::Point(321, 747);
			this->coord30->Name = L"coord30";
			this->coord30->Size = System::Drawing::Size(100, 100);
			this->coord30->TabIndex = 1;
			// 
			// coord21
			// 
			this->coord21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord21->BackColor = System::Drawing::SystemColors::Info;
			this->coord21->Location = System::Drawing::Point(215, 641);
			this->coord21->Name = L"coord21";
			this->coord21->Size = System::Drawing::Size(100, 100);
			this->coord21->TabIndex = 7;
			// 
			// coord20
			// 
			this->coord20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord20->BackColor = System::Drawing::SystemColors::Info;
			this->coord20->Location = System::Drawing::Point(215, 747);
			this->coord20->Name = L"coord20";
			this->coord20->Size = System::Drawing::Size(100, 100);
			this->coord20->TabIndex = 1;
			// 
			// coord10
			// 
			this->coord10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord10->BackColor = System::Drawing::SystemColors::Info;
			this->coord10->Location = System::Drawing::Point(109, 747);
			this->coord10->Name = L"coord10";
			this->coord10->Size = System::Drawing::Size(100, 100);
			this->coord10->TabIndex = 1;
			// 
			// coord06
			// 
			this->coord06->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord06->BackColor = System::Drawing::SystemColors::Info;
			this->coord06->Location = System::Drawing::Point(3, 111);
			this->coord06->Name = L"coord06";
			this->coord06->Size = System::Drawing::Size(100, 100);
			this->coord06->TabIndex = 1;
			// 
			// coord05
			// 
			this->coord05->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord05->BackColor = System::Drawing::SystemColors::Info;
			this->coord05->Location = System::Drawing::Point(3, 217);
			this->coord05->Name = L"coord05";
			this->coord05->Size = System::Drawing::Size(100, 100);
			this->coord05->TabIndex = 1;
			// 
			// coord04
			// 
			this->coord04->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord04->BackColor = System::Drawing::SystemColors::Info;
			this->coord04->Location = System::Drawing::Point(3, 323);
			this->coord04->Name = L"coord04";
			this->coord04->Size = System::Drawing::Size(100, 100);
			this->coord04->TabIndex = 1;
			// 
			// coord03
			// 
			this->coord03->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord03->BackColor = System::Drawing::SystemColors::Info;
			this->coord03->Location = System::Drawing::Point(3, 429);
			this->coord03->Name = L"coord03";
			this->coord03->Size = System::Drawing::Size(100, 100);
			this->coord03->TabIndex = 1;
			// 
			// coord02
			// 
			this->coord02->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord02->BackColor = System::Drawing::SystemColors::Info;
			this->coord02->Location = System::Drawing::Point(3, 535);
			this->coord02->Name = L"coord02";
			this->coord02->Size = System::Drawing::Size(100, 100);
			this->coord02->TabIndex = 1;
			// 
			// coord01
			// 
			this->coord01->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord01->BackColor = System::Drawing::SystemColors::Info;
			this->coord01->Location = System::Drawing::Point(3, 641);
			this->coord01->Name = L"coord01";
			this->coord01->Size = System::Drawing::Size(100, 100);
			this->coord01->TabIndex = 1;
			// 
			// coord00
			// 
			this->coord00->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord00->BackColor = System::Drawing::SystemColors::Info;
			this->coord00->Controls->Add(this->pictureBox1);
			this->coord00->Location = System::Drawing::Point(3, 747);
			this->coord00->Name = L"coord00";
			this->coord00->Size = System::Drawing::Size(100, 100);
			this->coord00->TabIndex = 0;
			// 
			// SettingsPanel
			// 
			this->SettingsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SettingsPanel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->SettingsPanel->Controls->Add(this->listBox1);
			this->SettingsPanel->Controls->Add(this->ResetGameButton);
			this->SettingsPanel->Controls->Add(this->StopGameButton);
			this->SettingsPanel->Controls->Add(this->textBox2);
			this->SettingsPanel->Controls->Add(this->textBox1);
			this->SettingsPanel->Controls->Add(this->StartGameButton);
			this->SettingsPanel->Location = System::Drawing::Point(868, 12);
			this->SettingsPanel->Name = L"SettingsPanel";
			this->SettingsPanel->Size = System::Drawing::Size(200, 850);
			this->SettingsPanel->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->listBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 20;
			this->listBox1->Location = System::Drawing::Point(3, 143);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(194, 704);
			this->listBox1->TabIndex = 5;
			// 
			// ResetGameButton
			// 
			this->ResetGameButton->Location = System::Drawing::Point(3, 41);
			this->ResetGameButton->Name = L"ResetGameButton";
			this->ResetGameButton->Size = System::Drawing::Size(194, 30);
			this->ResetGameButton->TabIndex = 4;
			this->ResetGameButton->Text = L"Reset";
			this->ResetGameButton->UseVisualStyleBackColor = true;
			// 
			// StopGameButton
			// 
			this->StopGameButton->Location = System::Drawing::Point(100, 5);
			this->StopGameButton->Name = L"StopGameButton";
			this->StopGameButton->Size = System::Drawing::Size(97, 30);
			this->StopGameButton->TabIndex = 3;
			this->StopGameButton->Text = L"Stop";
			this->StopGameButton->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 111);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(194, 26);
			this->textBox2->TabIndex = 2;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 79);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 26);
			this->textBox1->TabIndex = 1;
			// 
			// StartGameButton
			// 
			this->StartGameButton->Location = System::Drawing::Point(3, 5);
			this->StartGameButton->Name = L"StartGameButton";
			this->StartGameButton->Size = System::Drawing::Size(97, 30);
			this->StartGameButton->TabIndex = 0;
			this->StartGameButton->Text = L"Start";
			this->StartGameButton->UseVisualStyleBackColor = true;
			this->StartGameButton->Click += gcnew System::EventHandler(this, &Form1::StartGameButton_Click);
			// 
			// coord07
			// 
			this->coord07->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord07->BackColor = System::Drawing::SystemColors::Info;
			this->coord07->Location = System::Drawing::Point(3, 5);
			this->coord07->Name = L"coord07";
			this->coord07->Size = System::Drawing::Size(100, 100);
			this->coord07->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Highlight;
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(94, 94);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1080, 874);
			this->Controls->Add(this->SettingsPanel);
			this->Controls->Add(this->MainPanel);
			this->MinimumSize = System::Drawing::Size(505, 333);
			this->Name = L"Form1";
			this->Text = L"шахматы";
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
			this->MainPanel->ResumeLayout(false);
			this->coord00->ResumeLayout(false);
			this->SettingsPanel->ResumeLayout(false);
			this->SettingsPanel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
		
#pragma endregion


	private: System::Void Form1_Resize(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

private: System::Void MainPanel_Resize(System::Object^ sender, System::EventArgs^ e) {
	int min_size = (std::min)(MainPanel->Size.Height, MainPanel->Size.Width);
	System::Drawing::Size box_size(((min_size - 5*9 ) / 8), ((min_size - 5*9 ) / 8));
	System::Drawing::Point box_location(5, MainPanel->Size.Height - box_size.Width - 5);
	coord00->Size = box_size;
	coord00->Location = box_location;
	box_location.X = box_location.X + box_size.Width +5;
	coord10->Size = box_size;
	coord10->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord20->Size = box_size;
	coord20->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord30->Size = box_size;
	coord30->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord40->Size = box_size;
	coord40->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord50->Size = box_size;
	coord50->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord60->Size = box_size;
	coord60->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord70->Size = box_size;
	coord70->Location = box_location;

	box_location.X = 5;
	box_location.Y = box_location.Y - box_size.Height - 5;
	
	coord01->Size = box_size;
	coord01->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord11->Size = box_size;
	coord11->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord21->Size = box_size;
	coord21->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord31->Size = box_size;
	coord31->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord41->Size = box_size;
	coord41->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord51->Size = box_size;
	coord51->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord61->Size = box_size;
	coord61->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord71->Size = box_size;
	coord71->Location = box_location;

	box_location.X = 5;
	box_location.Y = box_location.Y - box_size.Height - 5;

	coord02->Size = box_size;
	coord02->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord12->Size = box_size;
	coord12->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord22->Size = box_size;
	coord22->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord32->Size = box_size;
	coord32->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord42->Size = box_size;
	coord42->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord52->Size = box_size;
	coord52->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord62->Size = box_size;
	coord62->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord72->Size = box_size;
	coord72->Location = box_location;

	box_location.X = 5;
	box_location.Y = box_location.Y - box_size.Height - 5;

	coord03->Size = box_size;
	coord03->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord13->Size = box_size;
	coord13->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord23->Size = box_size;
	coord23->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord33->Size = box_size;
	coord33->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord43->Size = box_size;
	coord43->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord53->Size = box_size;
	coord53->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord63->Size = box_size;
	coord63->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord73->Size = box_size;
	coord73->Location = box_location;

	box_location.X = 5;
	box_location.Y = box_location.Y - box_size.Height - 5;

	coord04->Size = box_size;
	coord04->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord14->Size = box_size;
	coord14->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord24->Size = box_size;
	coord24->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord34->Size = box_size;
	coord34->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord44->Size = box_size;
	coord44->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord54->Size = box_size;
	coord54->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord64->Size = box_size;
	coord64->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord74->Size = box_size;
	coord74->Location = box_location;

	box_location.X = 5;
	box_location.Y = box_location.Y - box_size.Height - 5;

	coord05->Size = box_size;
	coord05->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord15->Size = box_size;
	coord15->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord25->Size = box_size;
	coord25->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord35->Size = box_size;
	coord35->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord45->Size = box_size;
	coord45->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord55->Size = box_size;
	coord55->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord65->Size = box_size;
	coord65->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord75->Size = box_size;
	coord75->Location = box_location;

	box_location.X = 5;
	box_location.Y = box_location.Y - box_size.Height - 5;

	coord06->Size = box_size;
	coord06->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord16->Size = box_size;
	coord16->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord26->Size = box_size;
	coord26->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord36->Size = box_size;
	coord36->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord46->Size = box_size;
	coord46->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord56->Size = box_size;
	coord56->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord66->Size = box_size;
	coord66->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord76->Size = box_size;
	coord76->Location = box_location;

	box_location.X = 5;
	box_location.Y = box_location.Y - box_size.Height - 5;

	coord07->Size = box_size;
	coord07->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord17->Size = box_size;
	coord17->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord27->Size = box_size;
	coord27->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord37->Size = box_size;
	coord37->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord47->Size = box_size;
	coord47->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord57->Size = box_size;
	coord57->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord67->Size = box_size;
	coord67->Location = box_location;
	box_location.X = box_location.X + box_size.Width + 5;
	coord77->Size = box_size;
	coord77->Location = box_location;


	/*coord00->Left = (5 + 0) * 1;
	coord00->Top = MainPanel->Size.Height - coord00->Height - 5;*/
}
private: System::Void panel1_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel23_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void splitter1_SplitterMoved(System::Object^ sender, System::Windows::Forms::SplitterEventArgs^ e) {
}
private: System::Void splitter1_SplitterMoved_1(System::Object^ sender, System::Windows::Forms::SplitterEventArgs^ e) {

}
private: System::Void StartGameButton_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
