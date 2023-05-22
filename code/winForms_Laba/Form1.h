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
private: System::Windows::Forms::ListBox^ Histiry_ListBox;

private: System::Windows::Forms::Button^ ResetGameButton;
private: System::Windows::Forms::Button^ StopGameButton;
private: System::Windows::Forms::Panel^ coord07;
private: System::Windows::Forms::PictureBox^ coord_picture00;
private: System::Windows::Forms::PictureBox^ coord_picture11;
private: System::Windows::Forms::PictureBox^ coord_picture77;
private: System::Windows::Forms::PictureBox^ coord_picture76;
private: System::Windows::Forms::PictureBox^ coord_picture67;
private: System::Windows::Forms::PictureBox^ coord_picture75;
private: System::Windows::Forms::PictureBox^ coord_picture57;
private: System::Windows::Forms::PictureBox^ coord_picture66;
private: System::Windows::Forms::PictureBox^ coord_picture47;
private: System::Windows::Forms::PictureBox^ coord_picture74;
private: System::Windows::Forms::PictureBox^ coord_picture37;
private: System::Windows::Forms::PictureBox^ coord_picture56;
private: System::Windows::Forms::PictureBox^ coord_picture27;
private: System::Windows::Forms::PictureBox^ coord_picture17;
private: System::Windows::Forms::PictureBox^ coord_picture65;
private: System::Windows::Forms::PictureBox^ coord_picture46;
private: System::Windows::Forms::PictureBox^ coord_picture73;
private: System::Windows::Forms::PictureBox^ coord_picture36;
private: System::Windows::Forms::PictureBox^ coord_picture55;
private: System::Windows::Forms::PictureBox^ coord_picture26;
private: System::Windows::Forms::PictureBox^ coord_picture16;
private: System::Windows::Forms::PictureBox^ coord_picture64;
private: System::Windows::Forms::PictureBox^ coord_picture45;
private: System::Windows::Forms::PictureBox^ coord_picture72;
private: System::Windows::Forms::PictureBox^ coord_picture35;
private: System::Windows::Forms::PictureBox^ coord_picture54;
private: System::Windows::Forms::PictureBox^ coord_picture25;
private: System::Windows::Forms::PictureBox^ coord_picture15;
private: System::Windows::Forms::PictureBox^ coord_picture63;
private: System::Windows::Forms::PictureBox^ coord_picture44;
private: System::Windows::Forms::PictureBox^ coord_picture71;
private: System::Windows::Forms::PictureBox^ coord_picture34;
private: System::Windows::Forms::PictureBox^ coord_picture53;
private: System::Windows::Forms::PictureBox^ coord_picture24;
private: System::Windows::Forms::PictureBox^ coord_picture14;
private: System::Windows::Forms::PictureBox^ coord_picture62;
private: System::Windows::Forms::PictureBox^ coord_picture43;
private: System::Windows::Forms::PictureBox^ coord_picture70;
private: System::Windows::Forms::PictureBox^ coord_picture33;
private: System::Windows::Forms::PictureBox^ coord_picture52;
private: System::Windows::Forms::PictureBox^ coord_picture23;
private: System::Windows::Forms::PictureBox^ coord_picture13;
private: System::Windows::Forms::PictureBox^ coord_picture61;
private: System::Windows::Forms::PictureBox^ coord_picture42;
private: System::Windows::Forms::PictureBox^ coord_picture60;
private: System::Windows::Forms::PictureBox^ coord_picture32;
private: System::Windows::Forms::PictureBox^ coord_picture51;
private: System::Windows::Forms::PictureBox^ coord_picture22;
private: System::Windows::Forms::PictureBox^ coord_picture50;
private: System::Windows::Forms::PictureBox^ coord_picture12;
private: System::Windows::Forms::PictureBox^ coord_picture41;
private: System::Windows::Forms::PictureBox^ coord_picture40;
private: System::Windows::Forms::PictureBox^ coord_picture31;
private: System::Windows::Forms::PictureBox^ coord_picture30;
private: System::Windows::Forms::PictureBox^ coord_picture21;
private: System::Windows::Forms::PictureBox^ coord_picture20;
private: System::Windows::Forms::PictureBox^ coord_picture10;
private: System::Windows::Forms::PictureBox^ coord_picture07;
private: System::Windows::Forms::PictureBox^ coord_picture06;
private: System::Windows::Forms::PictureBox^ coord_picture05;
private: System::Windows::Forms::PictureBox^ coord_picture04;
private: System::Windows::Forms::PictureBox^ coord_picture03;
private: System::Windows::Forms::PictureBox^ coord_picture02;
private: System::Windows::Forms::PictureBox^ coord_picture01;
	   private: void checkCoord(short int x, short int y) {
		   textBox1->Text = ("(" + x.ToString() + "," + y.ToString() + ")");
		   Histiry_ListBox->Items->Add("(" + x.ToString() + "," + y.ToString() + ")");
	   }
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
			this->coord_picture11 = (gcnew System::Windows::Forms::PictureBox());
			this->coord77 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture77 = (gcnew System::Windows::Forms::PictureBox());
			this->coord76 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture76 = (gcnew System::Windows::Forms::PictureBox());
			this->coord67 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture67 = (gcnew System::Windows::Forms::PictureBox());
			this->coord75 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture75 = (gcnew System::Windows::Forms::PictureBox());
			this->coord57 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture57 = (gcnew System::Windows::Forms::PictureBox());
			this->coord66 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture66 = (gcnew System::Windows::Forms::PictureBox());
			this->coord47 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture47 = (gcnew System::Windows::Forms::PictureBox());
			this->coord74 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture74 = (gcnew System::Windows::Forms::PictureBox());
			this->coord37 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture37 = (gcnew System::Windows::Forms::PictureBox());
			this->coord56 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture56 = (gcnew System::Windows::Forms::PictureBox());
			this->coord27 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture27 = (gcnew System::Windows::Forms::PictureBox());
			this->coord17 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture17 = (gcnew System::Windows::Forms::PictureBox());
			this->coord65 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture65 = (gcnew System::Windows::Forms::PictureBox());
			this->coord46 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture46 = (gcnew System::Windows::Forms::PictureBox());
			this->coord73 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture73 = (gcnew System::Windows::Forms::PictureBox());
			this->coord36 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture36 = (gcnew System::Windows::Forms::PictureBox());
			this->coord55 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture55 = (gcnew System::Windows::Forms::PictureBox());
			this->coord26 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture26 = (gcnew System::Windows::Forms::PictureBox());
			this->coord16 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture16 = (gcnew System::Windows::Forms::PictureBox());
			this->coord64 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture64 = (gcnew System::Windows::Forms::PictureBox());
			this->coord45 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture45 = (gcnew System::Windows::Forms::PictureBox());
			this->coord72 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture72 = (gcnew System::Windows::Forms::PictureBox());
			this->coord35 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture35 = (gcnew System::Windows::Forms::PictureBox());
			this->coord54 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture54 = (gcnew System::Windows::Forms::PictureBox());
			this->coord25 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture25 = (gcnew System::Windows::Forms::PictureBox());
			this->coord15 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture15 = (gcnew System::Windows::Forms::PictureBox());
			this->coord63 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture63 = (gcnew System::Windows::Forms::PictureBox());
			this->coord44 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture44 = (gcnew System::Windows::Forms::PictureBox());
			this->coord71 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture71 = (gcnew System::Windows::Forms::PictureBox());
			this->coord34 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture34 = (gcnew System::Windows::Forms::PictureBox());
			this->coord53 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture53 = (gcnew System::Windows::Forms::PictureBox());
			this->coord24 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture24 = (gcnew System::Windows::Forms::PictureBox());
			this->coord14 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture14 = (gcnew System::Windows::Forms::PictureBox());
			this->coord62 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture62 = (gcnew System::Windows::Forms::PictureBox());
			this->coord43 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture43 = (gcnew System::Windows::Forms::PictureBox());
			this->coord70 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture70 = (gcnew System::Windows::Forms::PictureBox());
			this->coord33 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture33 = (gcnew System::Windows::Forms::PictureBox());
			this->coord52 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture52 = (gcnew System::Windows::Forms::PictureBox());
			this->coord23 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture23 = (gcnew System::Windows::Forms::PictureBox());
			this->coord13 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture13 = (gcnew System::Windows::Forms::PictureBox());
			this->coord61 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture61 = (gcnew System::Windows::Forms::PictureBox());
			this->coord42 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture42 = (gcnew System::Windows::Forms::PictureBox());
			this->coord60 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture60 = (gcnew System::Windows::Forms::PictureBox());
			this->coord32 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture32 = (gcnew System::Windows::Forms::PictureBox());
			this->coord51 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture51 = (gcnew System::Windows::Forms::PictureBox());
			this->coord22 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture22 = (gcnew System::Windows::Forms::PictureBox());
			this->coord50 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture50 = (gcnew System::Windows::Forms::PictureBox());
			this->coord12 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture12 = (gcnew System::Windows::Forms::PictureBox());
			this->coord41 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture41 = (gcnew System::Windows::Forms::PictureBox());
			this->coord40 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture40 = (gcnew System::Windows::Forms::PictureBox());
			this->coord31 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture31 = (gcnew System::Windows::Forms::PictureBox());
			this->coord30 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture30 = (gcnew System::Windows::Forms::PictureBox());
			this->coord21 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture21 = (gcnew System::Windows::Forms::PictureBox());
			this->coord20 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture20 = (gcnew System::Windows::Forms::PictureBox());
			this->coord10 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture10 = (gcnew System::Windows::Forms::PictureBox());
			this->coord07 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture07 = (gcnew System::Windows::Forms::PictureBox());
			this->coord06 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture06 = (gcnew System::Windows::Forms::PictureBox());
			this->coord05 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture05 = (gcnew System::Windows::Forms::PictureBox());
			this->coord04 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture04 = (gcnew System::Windows::Forms::PictureBox());
			this->coord03 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture03 = (gcnew System::Windows::Forms::PictureBox());
			this->coord02 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture02 = (gcnew System::Windows::Forms::PictureBox());
			this->coord01 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture01 = (gcnew System::Windows::Forms::PictureBox());
			this->coord00 = (gcnew System::Windows::Forms::Panel());
			this->coord_picture00 = (gcnew System::Windows::Forms::PictureBox());
			this->SettingsPanel = (gcnew System::Windows::Forms::Panel());
			this->Histiry_ListBox = (gcnew System::Windows::Forms::ListBox());
			this->ResetGameButton = (gcnew System::Windows::Forms::Button());
			this->StopGameButton = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->StartGameButton = (gcnew System::Windows::Forms::Button());
			this->MainPanel->SuspendLayout();
			this->coord11->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture11))->BeginInit();
			this->coord77->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture77))->BeginInit();
			this->coord76->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture76))->BeginInit();
			this->coord67->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture67))->BeginInit();
			this->coord75->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture75))->BeginInit();
			this->coord57->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture57))->BeginInit();
			this->coord66->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture66))->BeginInit();
			this->coord47->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture47))->BeginInit();
			this->coord74->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture74))->BeginInit();
			this->coord37->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture37))->BeginInit();
			this->coord56->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture56))->BeginInit();
			this->coord27->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture27))->BeginInit();
			this->coord17->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture17))->BeginInit();
			this->coord65->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture65))->BeginInit();
			this->coord46->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture46))->BeginInit();
			this->coord73->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture73))->BeginInit();
			this->coord36->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture36))->BeginInit();
			this->coord55->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture55))->BeginInit();
			this->coord26->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture26))->BeginInit();
			this->coord16->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture16))->BeginInit();
			this->coord64->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture64))->BeginInit();
			this->coord45->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture45))->BeginInit();
			this->coord72->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture72))->BeginInit();
			this->coord35->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture35))->BeginInit();
			this->coord54->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture54))->BeginInit();
			this->coord25->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture25))->BeginInit();
			this->coord15->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture15))->BeginInit();
			this->coord63->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture63))->BeginInit();
			this->coord44->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture44))->BeginInit();
			this->coord71->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture71))->BeginInit();
			this->coord34->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture34))->BeginInit();
			this->coord53->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture53))->BeginInit();
			this->coord24->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture24))->BeginInit();
			this->coord14->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture14))->BeginInit();
			this->coord62->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture62))->BeginInit();
			this->coord43->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture43))->BeginInit();
			this->coord70->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture70))->BeginInit();
			this->coord33->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture33))->BeginInit();
			this->coord52->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture52))->BeginInit();
			this->coord23->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture23))->BeginInit();
			this->coord13->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture13))->BeginInit();
			this->coord61->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture61))->BeginInit();
			this->coord42->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture42))->BeginInit();
			this->coord60->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture60))->BeginInit();
			this->coord32->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture32))->BeginInit();
			this->coord51->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture51))->BeginInit();
			this->coord22->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture22))->BeginInit();
			this->coord50->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture50))->BeginInit();
			this->coord12->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture12))->BeginInit();
			this->coord41->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture41))->BeginInit();
			this->coord40->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture40))->BeginInit();
			this->coord31->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture31))->BeginInit();
			this->coord30->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture30))->BeginInit();
			this->coord21->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture21))->BeginInit();
			this->coord20->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture20))->BeginInit();
			this->coord10->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture10))->BeginInit();
			this->coord07->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture07))->BeginInit();
			this->coord06->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture06))->BeginInit();
			this->coord05->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture05))->BeginInit();
			this->coord04->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture04))->BeginInit();
			this->coord03->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture03))->BeginInit();
			this->coord02->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture02))->BeginInit();
			this->coord01->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture01))->BeginInit();
			this->coord00->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture00))->BeginInit();
			this->SettingsPanel->SuspendLayout();
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
			this->MainPanel->Size = System::Drawing::Size(988, 854);
			this->MainPanel->TabIndex = 0;
			this->MainPanel->Resize += gcnew System::EventHandler(this, &Form1::MainPanel_Resize);
			// 
			// coord11
			// 
			this->coord11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord11->BackColor = System::Drawing::SystemColors::Info;
			this->coord11->Controls->Add(this->coord_picture11);
			this->coord11->Location = System::Drawing::Point(110, 646);
			this->coord11->Name = L"coord11";
			this->coord11->Size = System::Drawing::Size(100, 100);
			this->coord11->TabIndex = 8;
			// 
			// coord_picture11
			// 
			this->coord_picture11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture11->Location = System::Drawing::Point(4, 5);
			this->coord_picture11->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture11->Name = L"coord_picture11";
			this->coord_picture11->Size = System::Drawing::Size(92, 91);
			this->coord_picture11->TabIndex = 24;
			this->coord_picture11->TabStop = false;
			this->coord_picture11->Click += gcnew System::EventHandler(this, &Form1::coord_picture11_Click);
			// 
			// coord77
			// 
			this->coord77->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord77->BackColor = System::Drawing::SystemColors::Info;
			this->coord77->Controls->Add(this->coord_picture77);
			this->coord77->Location = System::Drawing::Point(746, 9);
			this->coord77->Name = L"coord77";
			this->coord77->Size = System::Drawing::Size(100, 100);
			this->coord77->TabIndex = 16;
			// 
			// coord_picture77
			// 
			this->coord_picture77->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture77->Location = System::Drawing::Point(4, 5);
			this->coord_picture77->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture77->Name = L"coord_picture77";
			this->coord_picture77->Size = System::Drawing::Size(92, 91);
			this->coord_picture77->TabIndex = 24;
			this->coord_picture77->TabStop = false;
			this->coord_picture77->Click += gcnew System::EventHandler(this, &Form1::coord_picture77_Click);
			// 
			// coord76
			// 
			this->coord76->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord76->BackColor = System::Drawing::SystemColors::Info;
			this->coord76->Controls->Add(this->coord_picture76);
			this->coord76->Location = System::Drawing::Point(746, 115);
			this->coord76->Name = L"coord76";
			this->coord76->Size = System::Drawing::Size(100, 100);
			this->coord76->TabIndex = 16;
			// 
			// coord_picture76
			// 
			this->coord_picture76->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture76->Location = System::Drawing::Point(4, 5);
			this->coord_picture76->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture76->Name = L"coord_picture76";
			this->coord_picture76->Size = System::Drawing::Size(92, 91);
			this->coord_picture76->TabIndex = 24;
			this->coord_picture76->TabStop = false;
			this->coord_picture76->Click += gcnew System::EventHandler(this, &Form1::coord_picture76_Click);
			// 
			// coord67
			// 
			this->coord67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord67->BackColor = System::Drawing::SystemColors::Info;
			this->coord67->Controls->Add(this->coord_picture67);
			this->coord67->Location = System::Drawing::Point(639, 9);
			this->coord67->Name = L"coord67";
			this->coord67->Size = System::Drawing::Size(100, 100);
			this->coord67->TabIndex = 17;
			// 
			// coord_picture67
			// 
			this->coord_picture67->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture67->Location = System::Drawing::Point(4, 5);
			this->coord_picture67->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture67->Name = L"coord_picture67";
			this->coord_picture67->Size = System::Drawing::Size(92, 91);
			this->coord_picture67->TabIndex = 24;
			this->coord_picture67->TabStop = false;
			this->coord_picture67->Click += gcnew System::EventHandler(this, &Form1::coord_picture67_Click);
			// 
			// coord75
			// 
			this->coord75->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord75->BackColor = System::Drawing::SystemColors::Info;
			this->coord75->Controls->Add(this->coord_picture75);
			this->coord75->Location = System::Drawing::Point(746, 222);
			this->coord75->Name = L"coord75";
			this->coord75->Size = System::Drawing::Size(100, 100);
			this->coord75->TabIndex = 16;
			// 
			// coord_picture75
			// 
			this->coord_picture75->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture75->Location = System::Drawing::Point(4, 5);
			this->coord_picture75->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture75->Name = L"coord_picture75";
			this->coord_picture75->Size = System::Drawing::Size(92, 91);
			this->coord_picture75->TabIndex = 24;
			this->coord_picture75->TabStop = false;
			this->coord_picture75->Click += gcnew System::EventHandler(this, &Form1::coord_picture75_Click);
			// 
			// coord57
			// 
			this->coord57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord57->BackColor = System::Drawing::SystemColors::Info;
			this->coord57->Controls->Add(this->coord_picture57);
			this->coord57->Location = System::Drawing::Point(532, 9);
			this->coord57->Name = L"coord57";
			this->coord57->Size = System::Drawing::Size(100, 100);
			this->coord57->TabIndex = 18;
			// 
			// coord_picture57
			// 
			this->coord_picture57->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture57->Location = System::Drawing::Point(4, 5);
			this->coord_picture57->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture57->Name = L"coord_picture57";
			this->coord_picture57->Size = System::Drawing::Size(92, 91);
			this->coord_picture57->TabIndex = 24;
			this->coord_picture57->TabStop = false;
			this->coord_picture57->Click += gcnew System::EventHandler(this, &Form1::coord_picture57_Click);
			// 
			// coord66
			// 
			this->coord66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord66->BackColor = System::Drawing::SystemColors::Info;
			this->coord66->Controls->Add(this->coord_picture66);
			this->coord66->Location = System::Drawing::Point(639, 115);
			this->coord66->Name = L"coord66";
			this->coord66->Size = System::Drawing::Size(100, 100);
			this->coord66->TabIndex = 17;
			// 
			// coord_picture66
			// 
			this->coord_picture66->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture66->Location = System::Drawing::Point(4, 5);
			this->coord_picture66->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture66->Name = L"coord_picture66";
			this->coord_picture66->Size = System::Drawing::Size(92, 91);
			this->coord_picture66->TabIndex = 24;
			this->coord_picture66->TabStop = false;
			this->coord_picture66->Click += gcnew System::EventHandler(this, &Form1::coord_picture66_Click);
			// 
			// coord47
			// 
			this->coord47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord47->BackColor = System::Drawing::SystemColors::Info;
			this->coord47->Controls->Add(this->coord_picture47);
			this->coord47->Location = System::Drawing::Point(428, 9);
			this->coord47->Name = L"coord47";
			this->coord47->Size = System::Drawing::Size(100, 100);
			this->coord47->TabIndex = 19;
			// 
			// coord_picture47
			// 
			this->coord_picture47->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture47->Location = System::Drawing::Point(4, 5);
			this->coord_picture47->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture47->Name = L"coord_picture47";
			this->coord_picture47->Size = System::Drawing::Size(92, 91);
			this->coord_picture47->TabIndex = 24;
			this->coord_picture47->TabStop = false;
			this->coord_picture47->Click += gcnew System::EventHandler(this, &Form1::coord_picture47_Click);
			// 
			// coord74
			// 
			this->coord74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord74->BackColor = System::Drawing::SystemColors::Info;
			this->coord74->Controls->Add(this->coord_picture74);
			this->coord74->Location = System::Drawing::Point(746, 328);
			this->coord74->Name = L"coord74";
			this->coord74->Size = System::Drawing::Size(100, 100);
			this->coord74->TabIndex = 16;
			// 
			// coord_picture74
			// 
			this->coord_picture74->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture74->Location = System::Drawing::Point(4, 5);
			this->coord_picture74->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture74->Name = L"coord_picture74";
			this->coord_picture74->Size = System::Drawing::Size(92, 91);
			this->coord_picture74->TabIndex = 24;
			this->coord_picture74->TabStop = false;
			this->coord_picture74->Click += gcnew System::EventHandler(this, &Form1::coord_picture74_Click);
			// 
			// coord37
			// 
			this->coord37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord37->BackColor = System::Drawing::SystemColors::Info;
			this->coord37->Controls->Add(this->coord_picture37);
			this->coord37->Location = System::Drawing::Point(321, 9);
			this->coord37->Name = L"coord37";
			this->coord37->Size = System::Drawing::Size(100, 100);
			this->coord37->TabIndex = 20;
			// 
			// coord_picture37
			// 
			this->coord_picture37->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture37->Location = System::Drawing::Point(4, 5);
			this->coord_picture37->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture37->Name = L"coord_picture37";
			this->coord_picture37->Size = System::Drawing::Size(92, 91);
			this->coord_picture37->TabIndex = 24;
			this->coord_picture37->TabStop = false;
			this->coord_picture37->Click += gcnew System::EventHandler(this, &Form1::coord_picture37_Click);
			// 
			// coord56
			// 
			this->coord56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord56->BackColor = System::Drawing::SystemColors::Info;
			this->coord56->Controls->Add(this->coord_picture56);
			this->coord56->Location = System::Drawing::Point(532, 115);
			this->coord56->Name = L"coord56";
			this->coord56->Size = System::Drawing::Size(100, 100);
			this->coord56->TabIndex = 18;
			// 
			// coord_picture56
			// 
			this->coord_picture56->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture56->Location = System::Drawing::Point(4, 5);
			this->coord_picture56->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture56->Name = L"coord_picture56";
			this->coord_picture56->Size = System::Drawing::Size(92, 91);
			this->coord_picture56->TabIndex = 24;
			this->coord_picture56->TabStop = false;
			this->coord_picture56->Click += gcnew System::EventHandler(this, &Form1::coord_picture56_Click);
			// 
			// coord27
			// 
			this->coord27->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord27->BackColor = System::Drawing::SystemColors::Info;
			this->coord27->Controls->Add(this->coord_picture27);
			this->coord27->Location = System::Drawing::Point(214, 9);
			this->coord27->Name = L"coord27";
			this->coord27->Size = System::Drawing::Size(100, 100);
			this->coord27->TabIndex = 21;
			// 
			// coord_picture27
			// 
			this->coord_picture27->Location = System::Drawing::Point(4, 5);
			this->coord_picture27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture27->Name = L"coord_picture27";
			this->coord_picture27->Size = System::Drawing::Size(92, 91);
			this->coord_picture27->TabIndex = 24;
			this->coord_picture27->TabStop = false;
			this->coord_picture27->Click += gcnew System::EventHandler(this, &Form1::coord_picture27_Click);
			// 
			// coord17
			// 
			this->coord17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord17->BackColor = System::Drawing::SystemColors::Info;
			this->coord17->Controls->Add(this->coord_picture17);
			this->coord17->Location = System::Drawing::Point(110, 9);
			this->coord17->Name = L"coord17";
			this->coord17->Size = System::Drawing::Size(100, 100);
			this->coord17->TabIndex = 22;
			// 
			// coord_picture17
			// 
			this->coord_picture17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture17->Location = System::Drawing::Point(4, 5);
			this->coord_picture17->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture17->Name = L"coord_picture17";
			this->coord_picture17->Size = System::Drawing::Size(92, 91);
			this->coord_picture17->TabIndex = 24;
			this->coord_picture17->TabStop = false;
			this->coord_picture17->Click += gcnew System::EventHandler(this, &Form1::coord_picture17_Click);
			// 
			// coord65
			// 
			this->coord65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord65->BackColor = System::Drawing::SystemColors::Info;
			this->coord65->Controls->Add(this->coord_picture65);
			this->coord65->Location = System::Drawing::Point(639, 222);
			this->coord65->Name = L"coord65";
			this->coord65->Size = System::Drawing::Size(100, 100);
			this->coord65->TabIndex = 17;
			// 
			// coord_picture65
			// 
			this->coord_picture65->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture65->Location = System::Drawing::Point(4, 5);
			this->coord_picture65->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture65->Name = L"coord_picture65";
			this->coord_picture65->Size = System::Drawing::Size(92, 91);
			this->coord_picture65->TabIndex = 24;
			this->coord_picture65->TabStop = false;
			this->coord_picture65->Click += gcnew System::EventHandler(this, &Form1::coord_picture65_Click);
			// 
			// coord46
			// 
			this->coord46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord46->BackColor = System::Drawing::SystemColors::Info;
			this->coord46->Controls->Add(this->coord_picture46);
			this->coord46->Location = System::Drawing::Point(428, 115);
			this->coord46->Name = L"coord46";
			this->coord46->Size = System::Drawing::Size(100, 100);
			this->coord46->TabIndex = 19;
			// 
			// coord_picture46
			// 
			this->coord_picture46->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture46->Location = System::Drawing::Point(4, 5);
			this->coord_picture46->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture46->Name = L"coord_picture46";
			this->coord_picture46->Size = System::Drawing::Size(92, 91);
			this->coord_picture46->TabIndex = 24;
			this->coord_picture46->TabStop = false;
			this->coord_picture46->Click += gcnew System::EventHandler(this, &Form1::coord_picture46_Click);
			// 
			// coord73
			// 
			this->coord73->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord73->BackColor = System::Drawing::SystemColors::Info;
			this->coord73->Controls->Add(this->coord_picture73);
			this->coord73->Location = System::Drawing::Point(746, 434);
			this->coord73->Name = L"coord73";
			this->coord73->Size = System::Drawing::Size(100, 100);
			this->coord73->TabIndex = 16;
			// 
			// coord_picture73
			// 
			this->coord_picture73->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture73->Location = System::Drawing::Point(4, 5);
			this->coord_picture73->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture73->Name = L"coord_picture73";
			this->coord_picture73->Size = System::Drawing::Size(92, 91);
			this->coord_picture73->TabIndex = 24;
			this->coord_picture73->TabStop = false;
			this->coord_picture73->Click += gcnew System::EventHandler(this, &Form1::coord_picture73_Click);
			// 
			// coord36
			// 
			this->coord36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord36->BackColor = System::Drawing::SystemColors::Info;
			this->coord36->Controls->Add(this->coord_picture36);
			this->coord36->Location = System::Drawing::Point(321, 115);
			this->coord36->Name = L"coord36";
			this->coord36->Size = System::Drawing::Size(100, 100);
			this->coord36->TabIndex = 20;
			// 
			// coord_picture36
			// 
			this->coord_picture36->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture36->Location = System::Drawing::Point(4, 5);
			this->coord_picture36->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture36->Name = L"coord_picture36";
			this->coord_picture36->Size = System::Drawing::Size(92, 91);
			this->coord_picture36->TabIndex = 24;
			this->coord_picture36->TabStop = false;
			this->coord_picture36->Click += gcnew System::EventHandler(this, &Form1::coord_picture36_Click);
			// 
			// coord55
			// 
			this->coord55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord55->BackColor = System::Drawing::SystemColors::Info;
			this->coord55->Controls->Add(this->coord_picture55);
			this->coord55->Location = System::Drawing::Point(532, 222);
			this->coord55->Name = L"coord55";
			this->coord55->Size = System::Drawing::Size(100, 100);
			this->coord55->TabIndex = 18;
			// 
			// coord_picture55
			// 
			this->coord_picture55->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture55->Location = System::Drawing::Point(4, 5);
			this->coord_picture55->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture55->Name = L"coord_picture55";
			this->coord_picture55->Size = System::Drawing::Size(92, 91);
			this->coord_picture55->TabIndex = 24;
			this->coord_picture55->TabStop = false;
			this->coord_picture55->Click += gcnew System::EventHandler(this, &Form1::coord_picture55_Click);
			// 
			// coord26
			// 
			this->coord26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord26->BackColor = System::Drawing::SystemColors::Info;
			this->coord26->Controls->Add(this->coord_picture26);
			this->coord26->Location = System::Drawing::Point(214, 115);
			this->coord26->Name = L"coord26";
			this->coord26->Size = System::Drawing::Size(100, 100);
			this->coord26->TabIndex = 21;
			// 
			// coord_picture26
			// 
			this->coord_picture26->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture26->Location = System::Drawing::Point(4, 5);
			this->coord_picture26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture26->Name = L"coord_picture26";
			this->coord_picture26->Size = System::Drawing::Size(92, 91);
			this->coord_picture26->TabIndex = 24;
			this->coord_picture26->TabStop = false;
			this->coord_picture26->Click += gcnew System::EventHandler(this, &Form1::coord_picture26_Click);
			// 
			// coord16
			// 
			this->coord16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord16->BackColor = System::Drawing::SystemColors::Info;
			this->coord16->Controls->Add(this->coord_picture16);
			this->coord16->Location = System::Drawing::Point(110, 115);
			this->coord16->Name = L"coord16";
			this->coord16->Size = System::Drawing::Size(100, 100);
			this->coord16->TabIndex = 22;
			// 
			// coord_picture16
			// 
			this->coord_picture16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture16->Location = System::Drawing::Point(4, 5);
			this->coord_picture16->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture16->Name = L"coord_picture16";
			this->coord_picture16->Size = System::Drawing::Size(92, 91);
			this->coord_picture16->TabIndex = 24;
			this->coord_picture16->TabStop = false;
			this->coord_picture16->Click += gcnew System::EventHandler(this, &Form1::coord_picture16_Click);
			// 
			// coord64
			// 
			this->coord64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord64->BackColor = System::Drawing::SystemColors::Info;
			this->coord64->Controls->Add(this->coord_picture64);
			this->coord64->Location = System::Drawing::Point(639, 328);
			this->coord64->Name = L"coord64";
			this->coord64->Size = System::Drawing::Size(100, 100);
			this->coord64->TabIndex = 17;
			// 
			// coord_picture64
			// 
			this->coord_picture64->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture64->Location = System::Drawing::Point(4, 5);
			this->coord_picture64->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture64->Name = L"coord_picture64";
			this->coord_picture64->Size = System::Drawing::Size(92, 91);
			this->coord_picture64->TabIndex = 24;
			this->coord_picture64->TabStop = false;
			this->coord_picture64->Click += gcnew System::EventHandler(this, &Form1::coord_picture64_Click);
			// 
			// coord45
			// 
			this->coord45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord45->BackColor = System::Drawing::SystemColors::Info;
			this->coord45->Controls->Add(this->coord_picture45);
			this->coord45->Location = System::Drawing::Point(428, 222);
			this->coord45->Name = L"coord45";
			this->coord45->Size = System::Drawing::Size(100, 100);
			this->coord45->TabIndex = 19;
			// 
			// coord_picture45
			// 
			this->coord_picture45->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture45->Location = System::Drawing::Point(4, 5);
			this->coord_picture45->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture45->Name = L"coord_picture45";
			this->coord_picture45->Size = System::Drawing::Size(92, 91);
			this->coord_picture45->TabIndex = 24;
			this->coord_picture45->TabStop = false;
			this->coord_picture45->Click += gcnew System::EventHandler(this, &Form1::coord_picture45_Click);
			// 
			// coord72
			// 
			this->coord72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord72->BackColor = System::Drawing::SystemColors::Info;
			this->coord72->Controls->Add(this->coord_picture72);
			this->coord72->Location = System::Drawing::Point(746, 540);
			this->coord72->Name = L"coord72";
			this->coord72->Size = System::Drawing::Size(100, 100);
			this->coord72->TabIndex = 9;
			// 
			// coord_picture72
			// 
			this->coord_picture72->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture72->Location = System::Drawing::Point(4, 5);
			this->coord_picture72->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture72->Name = L"coord_picture72";
			this->coord_picture72->Size = System::Drawing::Size(92, 91);
			this->coord_picture72->TabIndex = 24;
			this->coord_picture72->TabStop = false;
			this->coord_picture72->Click += gcnew System::EventHandler(this, &Form1::coord_picture72_Click);
			// 
			// coord35
			// 
			this->coord35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord35->BackColor = System::Drawing::SystemColors::Info;
			this->coord35->Controls->Add(this->coord_picture35);
			this->coord35->Location = System::Drawing::Point(321, 222);
			this->coord35->Name = L"coord35";
			this->coord35->Size = System::Drawing::Size(100, 100);
			this->coord35->TabIndex = 20;
			// 
			// coord_picture35
			// 
			this->coord_picture35->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture35->Location = System::Drawing::Point(4, 5);
			this->coord_picture35->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture35->Name = L"coord_picture35";
			this->coord_picture35->Size = System::Drawing::Size(92, 91);
			this->coord_picture35->TabIndex = 24;
			this->coord_picture35->TabStop = false;
			this->coord_picture35->Click += gcnew System::EventHandler(this, &Form1::coord_picture35_Click);
			// 
			// coord54
			// 
			this->coord54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord54->BackColor = System::Drawing::SystemColors::Info;
			this->coord54->Controls->Add(this->coord_picture54);
			this->coord54->Location = System::Drawing::Point(532, 328);
			this->coord54->Name = L"coord54";
			this->coord54->Size = System::Drawing::Size(100, 100);
			this->coord54->TabIndex = 18;
			// 
			// coord_picture54
			// 
			this->coord_picture54->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture54->Location = System::Drawing::Point(4, 5);
			this->coord_picture54->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture54->Name = L"coord_picture54";
			this->coord_picture54->Size = System::Drawing::Size(92, 91);
			this->coord_picture54->TabIndex = 24;
			this->coord_picture54->TabStop = false;
			this->coord_picture54->Click += gcnew System::EventHandler(this, &Form1::coord_picture54_Click);
			// 
			// coord25
			// 
			this->coord25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord25->BackColor = System::Drawing::SystemColors::Info;
			this->coord25->Controls->Add(this->coord_picture25);
			this->coord25->Location = System::Drawing::Point(214, 222);
			this->coord25->Name = L"coord25";
			this->coord25->Size = System::Drawing::Size(100, 100);
			this->coord25->TabIndex = 21;
			// 
			// coord_picture25
			// 
			this->coord_picture25->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture25->Location = System::Drawing::Point(4, 5);
			this->coord_picture25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture25->Name = L"coord_picture25";
			this->coord_picture25->Size = System::Drawing::Size(92, 91);
			this->coord_picture25->TabIndex = 24;
			this->coord_picture25->TabStop = false;
			this->coord_picture25->Click += gcnew System::EventHandler(this, &Form1::coord_picture25_Click);
			// 
			// coord15
			// 
			this->coord15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord15->BackColor = System::Drawing::SystemColors::Info;
			this->coord15->Controls->Add(this->coord_picture15);
			this->coord15->Location = System::Drawing::Point(110, 222);
			this->coord15->Name = L"coord15";
			this->coord15->Size = System::Drawing::Size(100, 100);
			this->coord15->TabIndex = 22;
			// 
			// coord_picture15
			// 
			this->coord_picture15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture15->Location = System::Drawing::Point(4, 5);
			this->coord_picture15->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture15->Name = L"coord_picture15";
			this->coord_picture15->Size = System::Drawing::Size(92, 91);
			this->coord_picture15->TabIndex = 24;
			this->coord_picture15->TabStop = false;
			this->coord_picture15->Click += gcnew System::EventHandler(this, &Form1::coord_picture15_Click);
			// 
			// coord63
			// 
			this->coord63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord63->BackColor = System::Drawing::SystemColors::Info;
			this->coord63->Controls->Add(this->coord_picture63);
			this->coord63->Location = System::Drawing::Point(639, 434);
			this->coord63->Name = L"coord63";
			this->coord63->Size = System::Drawing::Size(100, 100);
			this->coord63->TabIndex = 17;
			this->coord63->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel23_Paint);
			// 
			// coord_picture63
			// 
			this->coord_picture63->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture63->Location = System::Drawing::Point(4, 5);
			this->coord_picture63->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture63->Name = L"coord_picture63";
			this->coord_picture63->Size = System::Drawing::Size(92, 91);
			this->coord_picture63->TabIndex = 24;
			this->coord_picture63->TabStop = false;
			this->coord_picture63->Click += gcnew System::EventHandler(this, &Form1::coord_picture63_Click);
			// 
			// coord44
			// 
			this->coord44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord44->BackColor = System::Drawing::SystemColors::Info;
			this->coord44->Controls->Add(this->coord_picture44);
			this->coord44->Location = System::Drawing::Point(428, 328);
			this->coord44->Name = L"coord44";
			this->coord44->Size = System::Drawing::Size(100, 100);
			this->coord44->TabIndex = 19;
			// 
			// coord_picture44
			// 
			this->coord_picture44->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture44->Location = System::Drawing::Point(4, 5);
			this->coord_picture44->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture44->Name = L"coord_picture44";
			this->coord_picture44->Size = System::Drawing::Size(92, 91);
			this->coord_picture44->TabIndex = 24;
			this->coord_picture44->TabStop = false;
			this->coord_picture44->Click += gcnew System::EventHandler(this, &Form1::coord_picture44_Click);
			// 
			// coord71
			// 
			this->coord71->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord71->BackColor = System::Drawing::SystemColors::Info;
			this->coord71->Controls->Add(this->coord_picture71);
			this->coord71->Location = System::Drawing::Point(746, 646);
			this->coord71->Name = L"coord71";
			this->coord71->Size = System::Drawing::Size(100, 100);
			this->coord71->TabIndex = 2;
			this->coord71->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint_1);
			// 
			// coord_picture71
			// 
			this->coord_picture71->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture71->Location = System::Drawing::Point(4, 5);
			this->coord_picture71->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture71->Name = L"coord_picture71";
			this->coord_picture71->Size = System::Drawing::Size(92, 91);
			this->coord_picture71->TabIndex = 24;
			this->coord_picture71->TabStop = false;
			this->coord_picture71->Click += gcnew System::EventHandler(this, &Form1::coord_picture71_Click);
			// 
			// coord34
			// 
			this->coord34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord34->BackColor = System::Drawing::SystemColors::Info;
			this->coord34->Controls->Add(this->coord_picture34);
			this->coord34->Location = System::Drawing::Point(321, 328);
			this->coord34->Name = L"coord34";
			this->coord34->Size = System::Drawing::Size(100, 100);
			this->coord34->TabIndex = 20;
			// 
			// coord_picture34
			// 
			this->coord_picture34->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture34->Location = System::Drawing::Point(4, 5);
			this->coord_picture34->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture34->Name = L"coord_picture34";
			this->coord_picture34->Size = System::Drawing::Size(92, 91);
			this->coord_picture34->TabIndex = 24;
			this->coord_picture34->TabStop = false;
			this->coord_picture34->Click += gcnew System::EventHandler(this, &Form1::coord_picture34_Click);
			// 
			// coord53
			// 
			this->coord53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord53->BackColor = System::Drawing::SystemColors::Info;
			this->coord53->Controls->Add(this->coord_picture53);
			this->coord53->Location = System::Drawing::Point(532, 434);
			this->coord53->Name = L"coord53";
			this->coord53->Size = System::Drawing::Size(100, 100);
			this->coord53->TabIndex = 18;
			// 
			// coord_picture53
			// 
			this->coord_picture53->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture53->Location = System::Drawing::Point(4, 5);
			this->coord_picture53->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture53->Name = L"coord_picture53";
			this->coord_picture53->Size = System::Drawing::Size(92, 91);
			this->coord_picture53->TabIndex = 24;
			this->coord_picture53->TabStop = false;
			this->coord_picture53->Click += gcnew System::EventHandler(this, &Form1::coord_picture53_Click);
			// 
			// coord24
			// 
			this->coord24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord24->BackColor = System::Drawing::SystemColors::Info;
			this->coord24->Controls->Add(this->coord_picture24);
			this->coord24->Location = System::Drawing::Point(214, 328);
			this->coord24->Name = L"coord24";
			this->coord24->Size = System::Drawing::Size(100, 100);
			this->coord24->TabIndex = 21;
			// 
			// coord_picture24
			// 
			this->coord_picture24->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture24->Location = System::Drawing::Point(4, 5);
			this->coord_picture24->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture24->Name = L"coord_picture24";
			this->coord_picture24->Size = System::Drawing::Size(92, 91);
			this->coord_picture24->TabIndex = 24;
			this->coord_picture24->TabStop = false;
			this->coord_picture24->Click += gcnew System::EventHandler(this, &Form1::coord_picture24_Click);
			// 
			// coord14
			// 
			this->coord14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord14->BackColor = System::Drawing::SystemColors::Info;
			this->coord14->Controls->Add(this->coord_picture14);
			this->coord14->Location = System::Drawing::Point(110, 328);
			this->coord14->Name = L"coord14";
			this->coord14->Size = System::Drawing::Size(100, 100);
			this->coord14->TabIndex = 22;
			// 
			// coord_picture14
			// 
			this->coord_picture14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture14->Location = System::Drawing::Point(4, 5);
			this->coord_picture14->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture14->Name = L"coord_picture14";
			this->coord_picture14->Size = System::Drawing::Size(92, 91);
			this->coord_picture14->TabIndex = 24;
			this->coord_picture14->TabStop = false;
			this->coord_picture14->Click += gcnew System::EventHandler(this, &Form1::coord_picture14_Click);
			// 
			// coord62
			// 
			this->coord62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord62->BackColor = System::Drawing::SystemColors::Info;
			this->coord62->Controls->Add(this->coord_picture62);
			this->coord62->Location = System::Drawing::Point(639, 540);
			this->coord62->Name = L"coord62";
			this->coord62->Size = System::Drawing::Size(100, 100);
			this->coord62->TabIndex = 10;
			// 
			// coord_picture62
			// 
			this->coord_picture62->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture62->Location = System::Drawing::Point(4, 5);
			this->coord_picture62->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture62->Name = L"coord_picture62";
			this->coord_picture62->Size = System::Drawing::Size(92, 91);
			this->coord_picture62->TabIndex = 24;
			this->coord_picture62->TabStop = false;
			this->coord_picture62->Click += gcnew System::EventHandler(this, &Form1::coord_picture62_Click);
			// 
			// coord43
			// 
			this->coord43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord43->BackColor = System::Drawing::SystemColors::Info;
			this->coord43->Controls->Add(this->coord_picture43);
			this->coord43->Location = System::Drawing::Point(428, 434);
			this->coord43->Name = L"coord43";
			this->coord43->Size = System::Drawing::Size(100, 100);
			this->coord43->TabIndex = 19;
			// 
			// coord_picture43
			// 
			this->coord_picture43->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture43->Location = System::Drawing::Point(4, 5);
			this->coord_picture43->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture43->Name = L"coord_picture43";
			this->coord_picture43->Size = System::Drawing::Size(92, 91);
			this->coord_picture43->TabIndex = 24;
			this->coord_picture43->TabStop = false;
			this->coord_picture43->Click += gcnew System::EventHandler(this, &Form1::coord_picture43_Click);
			// 
			// coord70
			// 
			this->coord70->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord70->BackColor = System::Drawing::SystemColors::Info;
			this->coord70->Controls->Add(this->coord_picture70);
			this->coord70->Location = System::Drawing::Point(746, 752);
			this->coord70->Name = L"coord70";
			this->coord70->Size = System::Drawing::Size(100, 100);
			this->coord70->TabIndex = 1;
			// 
			// coord_picture70
			// 
			this->coord_picture70->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture70->Location = System::Drawing::Point(4, 5);
			this->coord_picture70->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture70->Name = L"coord_picture70";
			this->coord_picture70->Size = System::Drawing::Size(92, 91);
			this->coord_picture70->TabIndex = 24;
			this->coord_picture70->TabStop = false;
			this->coord_picture70->Click += gcnew System::EventHandler(this, &Form1::coord_picture70_Click);
			// 
			// coord33
			// 
			this->coord33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord33->BackColor = System::Drawing::SystemColors::Info;
			this->coord33->Controls->Add(this->coord_picture33);
			this->coord33->Location = System::Drawing::Point(321, 434);
			this->coord33->Name = L"coord33";
			this->coord33->Size = System::Drawing::Size(100, 100);
			this->coord33->TabIndex = 20;
			// 
			// coord_picture33
			// 
			this->coord_picture33->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture33->Location = System::Drawing::Point(4, 5);
			this->coord_picture33->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture33->Name = L"coord_picture33";
			this->coord_picture33->Size = System::Drawing::Size(92, 91);
			this->coord_picture33->TabIndex = 24;
			this->coord_picture33->TabStop = false;
			this->coord_picture33->Click += gcnew System::EventHandler(this, &Form1::coord_picture33_Click);
			// 
			// coord52
			// 
			this->coord52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord52->BackColor = System::Drawing::SystemColors::Info;
			this->coord52->Controls->Add(this->coord_picture52);
			this->coord52->Location = System::Drawing::Point(532, 540);
			this->coord52->Name = L"coord52";
			this->coord52->Size = System::Drawing::Size(100, 100);
			this->coord52->TabIndex = 11;
			// 
			// coord_picture52
			// 
			this->coord_picture52->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture52->Location = System::Drawing::Point(4, 5);
			this->coord_picture52->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture52->Name = L"coord_picture52";
			this->coord_picture52->Size = System::Drawing::Size(92, 91);
			this->coord_picture52->TabIndex = 24;
			this->coord_picture52->TabStop = false;
			this->coord_picture52->Click += gcnew System::EventHandler(this, &Form1::coord_picture52_Click);
			// 
			// coord23
			// 
			this->coord23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord23->BackColor = System::Drawing::SystemColors::Info;
			this->coord23->Controls->Add(this->coord_picture23);
			this->coord23->Location = System::Drawing::Point(214, 434);
			this->coord23->Name = L"coord23";
			this->coord23->Size = System::Drawing::Size(100, 100);
			this->coord23->TabIndex = 21;
			// 
			// coord_picture23
			// 
			this->coord_picture23->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture23->Location = System::Drawing::Point(4, 5);
			this->coord_picture23->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture23->Name = L"coord_picture23";
			this->coord_picture23->Size = System::Drawing::Size(92, 91);
			this->coord_picture23->TabIndex = 24;
			this->coord_picture23->TabStop = false;
			this->coord_picture23->Click += gcnew System::EventHandler(this, &Form1::coord_picture23_Click);
			// 
			// coord13
			// 
			this->coord13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord13->BackColor = System::Drawing::SystemColors::Info;
			this->coord13->Controls->Add(this->coord_picture13);
			this->coord13->Location = System::Drawing::Point(110, 434);
			this->coord13->Name = L"coord13";
			this->coord13->Size = System::Drawing::Size(100, 100);
			this->coord13->TabIndex = 22;
			// 
			// coord_picture13
			// 
			this->coord_picture13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture13->Location = System::Drawing::Point(4, 5);
			this->coord_picture13->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture13->Name = L"coord_picture13";
			this->coord_picture13->Size = System::Drawing::Size(92, 91);
			this->coord_picture13->TabIndex = 24;
			this->coord_picture13->TabStop = false;
			this->coord_picture13->Click += gcnew System::EventHandler(this, &Form1::coord_picture13_Click);
			// 
			// coord61
			// 
			this->coord61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord61->BackColor = System::Drawing::SystemColors::Info;
			this->coord61->Controls->Add(this->coord_picture61);
			this->coord61->Location = System::Drawing::Point(639, 646);
			this->coord61->Name = L"coord61";
			this->coord61->Size = System::Drawing::Size(100, 100);
			this->coord61->TabIndex = 3;
			// 
			// coord_picture61
			// 
			this->coord_picture61->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture61->Location = System::Drawing::Point(4, 5);
			this->coord_picture61->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture61->Name = L"coord_picture61";
			this->coord_picture61->Size = System::Drawing::Size(92, 91);
			this->coord_picture61->TabIndex = 24;
			this->coord_picture61->TabStop = false;
			this->coord_picture61->Click += gcnew System::EventHandler(this, &Form1::coord_picture61_Click);
			// 
			// coord42
			// 
			this->coord42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord42->BackColor = System::Drawing::SystemColors::Info;
			this->coord42->Controls->Add(this->coord_picture42);
			this->coord42->Location = System::Drawing::Point(428, 540);
			this->coord42->Name = L"coord42";
			this->coord42->Size = System::Drawing::Size(100, 100);
			this->coord42->TabIndex = 12;
			// 
			// coord_picture42
			// 
			this->coord_picture42->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture42->Location = System::Drawing::Point(4, 5);
			this->coord_picture42->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture42->Name = L"coord_picture42";
			this->coord_picture42->Size = System::Drawing::Size(92, 91);
			this->coord_picture42->TabIndex = 24;
			this->coord_picture42->TabStop = false;
			this->coord_picture42->Click += gcnew System::EventHandler(this, &Form1::coord_picture42_Click);
			// 
			// coord60
			// 
			this->coord60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord60->BackColor = System::Drawing::SystemColors::Info;
			this->coord60->Controls->Add(this->coord_picture60);
			this->coord60->Location = System::Drawing::Point(639, 752);
			this->coord60->Name = L"coord60";
			this->coord60->Size = System::Drawing::Size(100, 100);
			this->coord60->TabIndex = 1;
			// 
			// coord_picture60
			// 
			this->coord_picture60->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture60->Location = System::Drawing::Point(4, 5);
			this->coord_picture60->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture60->Name = L"coord_picture60";
			this->coord_picture60->Size = System::Drawing::Size(92, 91);
			this->coord_picture60->TabIndex = 24;
			this->coord_picture60->TabStop = false;
			this->coord_picture60->Click += gcnew System::EventHandler(this, &Form1::coord_picture60_Click);
			// 
			// coord32
			// 
			this->coord32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord32->BackColor = System::Drawing::SystemColors::Info;
			this->coord32->Controls->Add(this->coord_picture32);
			this->coord32->Location = System::Drawing::Point(321, 540);
			this->coord32->Name = L"coord32";
			this->coord32->Size = System::Drawing::Size(100, 100);
			this->coord32->TabIndex = 13;
			// 
			// coord_picture32
			// 
			this->coord_picture32->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture32->Location = System::Drawing::Point(4, 5);
			this->coord_picture32->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture32->Name = L"coord_picture32";
			this->coord_picture32->Size = System::Drawing::Size(92, 91);
			this->coord_picture32->TabIndex = 24;
			this->coord_picture32->TabStop = false;
			this->coord_picture32->Click += gcnew System::EventHandler(this, &Form1::coord_picture32_Click);
			// 
			// coord51
			// 
			this->coord51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord51->BackColor = System::Drawing::SystemColors::Info;
			this->coord51->Controls->Add(this->coord_picture51);
			this->coord51->Location = System::Drawing::Point(532, 646);
			this->coord51->Name = L"coord51";
			this->coord51->Size = System::Drawing::Size(100, 100);
			this->coord51->TabIndex = 4;
			// 
			// coord_picture51
			// 
			this->coord_picture51->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture51->Location = System::Drawing::Point(4, 5);
			this->coord_picture51->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture51->Name = L"coord_picture51";
			this->coord_picture51->Size = System::Drawing::Size(92, 91);
			this->coord_picture51->TabIndex = 24;
			this->coord_picture51->TabStop = false;
			this->coord_picture51->Click += gcnew System::EventHandler(this, &Form1::coord_picture51_Click);
			// 
			// coord22
			// 
			this->coord22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord22->BackColor = System::Drawing::SystemColors::Info;
			this->coord22->Controls->Add(this->coord_picture22);
			this->coord22->Location = System::Drawing::Point(214, 540);
			this->coord22->Name = L"coord22";
			this->coord22->Size = System::Drawing::Size(100, 100);
			this->coord22->TabIndex = 14;
			// 
			// coord_picture22
			// 
			this->coord_picture22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture22->BackColor = System::Drawing::SystemColors::Info;
			this->coord_picture22->Location = System::Drawing::Point(4, 5);
			this->coord_picture22->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture22->Name = L"coord_picture22";
			this->coord_picture22->Size = System::Drawing::Size(92, 91);
			this->coord_picture22->TabIndex = 24;
			this->coord_picture22->TabStop = false;
			this->coord_picture22->Click += gcnew System::EventHandler(this, &Form1::coord_picture22_Click);
			// 
			// coord50
			// 
			this->coord50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord50->BackColor = System::Drawing::SystemColors::Info;
			this->coord50->Controls->Add(this->coord_picture50);
			this->coord50->Location = System::Drawing::Point(532, 752);
			this->coord50->Name = L"coord50";
			this->coord50->Size = System::Drawing::Size(100, 100);
			this->coord50->TabIndex = 1;
			// 
			// coord_picture50
			// 
			this->coord_picture50->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture50->Location = System::Drawing::Point(4, 5);
			this->coord_picture50->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture50->Name = L"coord_picture50";
			this->coord_picture50->Size = System::Drawing::Size(92, 91);
			this->coord_picture50->TabIndex = 24;
			this->coord_picture50->TabStop = false;
			this->coord_picture50->Click += gcnew System::EventHandler(this, &Form1::coord_picture50_Click);
			// 
			// coord12
			// 
			this->coord12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord12->BackColor = System::Drawing::SystemColors::Info;
			this->coord12->Controls->Add(this->coord_picture12);
			this->coord12->Location = System::Drawing::Point(110, 540);
			this->coord12->Name = L"coord12";
			this->coord12->Size = System::Drawing::Size(100, 100);
			this->coord12->TabIndex = 15;
			// 
			// coord_picture12
			// 
			this->coord_picture12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture12->Location = System::Drawing::Point(4, 5);
			this->coord_picture12->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture12->Name = L"coord_picture12";
			this->coord_picture12->Size = System::Drawing::Size(92, 91);
			this->coord_picture12->TabIndex = 24;
			this->coord_picture12->TabStop = false;
			this->coord_picture12->Click += gcnew System::EventHandler(this, &Form1::coord_picture12_Click);
			// 
			// coord41
			// 
			this->coord41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord41->BackColor = System::Drawing::SystemColors::Info;
			this->coord41->Controls->Add(this->coord_picture41);
			this->coord41->Location = System::Drawing::Point(428, 646);
			this->coord41->Name = L"coord41";
			this->coord41->Size = System::Drawing::Size(100, 100);
			this->coord41->TabIndex = 5;
			// 
			// coord_picture41
			// 
			this->coord_picture41->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture41->Location = System::Drawing::Point(4, 5);
			this->coord_picture41->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture41->Name = L"coord_picture41";
			this->coord_picture41->Size = System::Drawing::Size(92, 91);
			this->coord_picture41->TabIndex = 24;
			this->coord_picture41->TabStop = false;
			this->coord_picture41->Click += gcnew System::EventHandler(this, &Form1::coord_picture41_Click);
			// 
			// coord40
			// 
			this->coord40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord40->BackColor = System::Drawing::SystemColors::Info;
			this->coord40->Controls->Add(this->coord_picture40);
			this->coord40->Location = System::Drawing::Point(428, 752);
			this->coord40->Name = L"coord40";
			this->coord40->Size = System::Drawing::Size(100, 100);
			this->coord40->TabIndex = 1;
			// 
			// coord_picture40
			// 
			this->coord_picture40->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture40->Location = System::Drawing::Point(4, 5);
			this->coord_picture40->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture40->Name = L"coord_picture40";
			this->coord_picture40->Size = System::Drawing::Size(92, 91);
			this->coord_picture40->TabIndex = 24;
			this->coord_picture40->TabStop = false;
			this->coord_picture40->Click += gcnew System::EventHandler(this, &Form1::coord_picture40_Click);
			// 
			// coord31
			// 
			this->coord31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord31->BackColor = System::Drawing::SystemColors::Info;
			this->coord31->Controls->Add(this->coord_picture31);
			this->coord31->Location = System::Drawing::Point(321, 646);
			this->coord31->Name = L"coord31";
			this->coord31->Size = System::Drawing::Size(100, 100);
			this->coord31->TabIndex = 6;
			// 
			// coord_picture31
			// 
			this->coord_picture31->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture31->Location = System::Drawing::Point(4, 5);
			this->coord_picture31->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture31->Name = L"coord_picture31";
			this->coord_picture31->Size = System::Drawing::Size(92, 91);
			this->coord_picture31->TabIndex = 24;
			this->coord_picture31->TabStop = false;
			this->coord_picture31->Click += gcnew System::EventHandler(this, &Form1::coord_picture31_Click);
			// 
			// coord30
			// 
			this->coord30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord30->BackColor = System::Drawing::SystemColors::Info;
			this->coord30->Controls->Add(this->coord_picture30);
			this->coord30->Location = System::Drawing::Point(321, 752);
			this->coord30->Name = L"coord30";
			this->coord30->Size = System::Drawing::Size(100, 100);
			this->coord30->TabIndex = 1;
			// 
			// coord_picture30
			// 
			this->coord_picture30->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture30->Location = System::Drawing::Point(4, 5);
			this->coord_picture30->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture30->Name = L"coord_picture30";
			this->coord_picture30->Size = System::Drawing::Size(92, 91);
			this->coord_picture30->TabIndex = 24;
			this->coord_picture30->TabStop = false;
			this->coord_picture30->Click += gcnew System::EventHandler(this, &Form1::coord_picture30_Click);
			// 
			// coord21
			// 
			this->coord21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord21->BackColor = System::Drawing::SystemColors::Info;
			this->coord21->Controls->Add(this->coord_picture21);
			this->coord21->Location = System::Drawing::Point(214, 646);
			this->coord21->Name = L"coord21";
			this->coord21->Size = System::Drawing::Size(100, 100);
			this->coord21->TabIndex = 7;
			// 
			// coord_picture21
			// 
			this->coord_picture21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture21->Location = System::Drawing::Point(4, 5);
			this->coord_picture21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture21->Name = L"coord_picture21";
			this->coord_picture21->Size = System::Drawing::Size(92, 91);
			this->coord_picture21->TabIndex = 24;
			this->coord_picture21->TabStop = false;
			this->coord_picture21->Click += gcnew System::EventHandler(this, &Form1::coord_picture21_Click);
			// 
			// coord20
			// 
			this->coord20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord20->BackColor = System::Drawing::SystemColors::Info;
			this->coord20->Controls->Add(this->coord_picture20);
			this->coord20->Location = System::Drawing::Point(214, 752);
			this->coord20->Name = L"coord20";
			this->coord20->Size = System::Drawing::Size(100, 100);
			this->coord20->TabIndex = 1;
			// 
			// coord_picture20
			// 
			this->coord_picture20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture20->Location = System::Drawing::Point(4, 5);
			this->coord_picture20->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture20->Name = L"coord_picture20";
			this->coord_picture20->Size = System::Drawing::Size(92, 91);
			this->coord_picture20->TabIndex = 24;
			this->coord_picture20->TabStop = false;
			this->coord_picture20->Click += gcnew System::EventHandler(this, &Form1::coord_picture20_Click);
			// 
			// coord10
			// 
			this->coord10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord10->BackColor = System::Drawing::SystemColors::Info;
			this->coord10->Controls->Add(this->coord_picture10);
			this->coord10->Location = System::Drawing::Point(110, 752);
			this->coord10->Name = L"coord10";
			this->coord10->Size = System::Drawing::Size(100, 100);
			this->coord10->TabIndex = 1;
			this->coord10->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::coord10_Paint);
			// 
			// coord_picture10
			// 
			this->coord_picture10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture10->Location = System::Drawing::Point(4, 5);
			this->coord_picture10->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture10->Name = L"coord_picture10";
			this->coord_picture10->Size = System::Drawing::Size(92, 91);
			this->coord_picture10->TabIndex = 24;
			this->coord_picture10->TabStop = false;
			this->coord_picture10->Click += gcnew System::EventHandler(this, &Form1::coord_picture10_Click);
			// 
			// coord07
			// 
			this->coord07->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord07->BackColor = System::Drawing::SystemColors::Info;
			this->coord07->Controls->Add(this->coord_picture07);
			this->coord07->Location = System::Drawing::Point(3, 9);
			this->coord07->Name = L"coord07";
			this->coord07->Size = System::Drawing::Size(100, 100);
			this->coord07->TabIndex = 1;
			// 
			// coord_picture07
			// 
			this->coord_picture07->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture07->Location = System::Drawing::Point(4, 5);
			this->coord_picture07->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture07->Name = L"coord_picture07";
			this->coord_picture07->Size = System::Drawing::Size(92, 91);
			this->coord_picture07->TabIndex = 24;
			this->coord_picture07->TabStop = false;
			this->coord_picture07->Click += gcnew System::EventHandler(this, &Form1::coord_picture07_Click);
			// 
			// coord06
			// 
			this->coord06->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord06->BackColor = System::Drawing::SystemColors::Info;
			this->coord06->Controls->Add(this->coord_picture06);
			this->coord06->Location = System::Drawing::Point(3, 115);
			this->coord06->Name = L"coord06";
			this->coord06->Size = System::Drawing::Size(100, 100);
			this->coord06->TabIndex = 1;
			// 
			// coord_picture06
			// 
			this->coord_picture06->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture06->Location = System::Drawing::Point(4, 5);
			this->coord_picture06->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture06->Name = L"coord_picture06";
			this->coord_picture06->Size = System::Drawing::Size(92, 91);
			this->coord_picture06->TabIndex = 24;
			this->coord_picture06->TabStop = false;
			this->coord_picture06->Click += gcnew System::EventHandler(this, &Form1::coord_picture06_Click);
			// 
			// coord05
			// 
			this->coord05->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord05->BackColor = System::Drawing::SystemColors::Info;
			this->coord05->Controls->Add(this->coord_picture05);
			this->coord05->Location = System::Drawing::Point(3, 222);
			this->coord05->Name = L"coord05";
			this->coord05->Size = System::Drawing::Size(100, 100);
			this->coord05->TabIndex = 1;
			// 
			// coord_picture05
			// 
			this->coord_picture05->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture05->Location = System::Drawing::Point(4, 5);
			this->coord_picture05->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture05->Name = L"coord_picture05";
			this->coord_picture05->Size = System::Drawing::Size(92, 91);
			this->coord_picture05->TabIndex = 24;
			this->coord_picture05->TabStop = false;
			this->coord_picture05->Click += gcnew System::EventHandler(this, &Form1::coord_picture05_Click);
			// 
			// coord04
			// 
			this->coord04->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord04->BackColor = System::Drawing::SystemColors::Info;
			this->coord04->Controls->Add(this->coord_picture04);
			this->coord04->Location = System::Drawing::Point(3, 328);
			this->coord04->Name = L"coord04";
			this->coord04->Size = System::Drawing::Size(100, 100);
			this->coord04->TabIndex = 1;
			// 
			// coord_picture04
			// 
			this->coord_picture04->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture04->Location = System::Drawing::Point(4, 5);
			this->coord_picture04->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture04->Name = L"coord_picture04";
			this->coord_picture04->Size = System::Drawing::Size(92, 91);
			this->coord_picture04->TabIndex = 24;
			this->coord_picture04->TabStop = false;
			this->coord_picture04->Click += gcnew System::EventHandler(this, &Form1::coord_picture04_Click);
			// 
			// coord03
			// 
			this->coord03->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord03->BackColor = System::Drawing::SystemColors::Info;
			this->coord03->Controls->Add(this->coord_picture03);
			this->coord03->Location = System::Drawing::Point(3, 434);
			this->coord03->Name = L"coord03";
			this->coord03->Size = System::Drawing::Size(100, 100);
			this->coord03->TabIndex = 1;
			// 
			// coord_picture03
			// 
			this->coord_picture03->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture03->Location = System::Drawing::Point(4, 5);
			this->coord_picture03->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture03->Name = L"coord_picture03";
			this->coord_picture03->Size = System::Drawing::Size(92, 91);
			this->coord_picture03->TabIndex = 24;
			this->coord_picture03->TabStop = false;
			this->coord_picture03->Click += gcnew System::EventHandler(this, &Form1::coord_picture03_Click);
			// 
			// coord02
			// 
			this->coord02->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord02->BackColor = System::Drawing::SystemColors::Info;
			this->coord02->Controls->Add(this->coord_picture02);
			this->coord02->Location = System::Drawing::Point(3, 540);
			this->coord02->Name = L"coord02";
			this->coord02->Size = System::Drawing::Size(100, 100);
			this->coord02->TabIndex = 1;
			// 
			// coord_picture02
			// 
			this->coord_picture02->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture02->Location = System::Drawing::Point(4, 5);
			this->coord_picture02->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture02->Name = L"coord_picture02";
			this->coord_picture02->Size = System::Drawing::Size(92, 91);
			this->coord_picture02->TabIndex = 24;
			this->coord_picture02->TabStop = false;
			this->coord_picture02->Click += gcnew System::EventHandler(this, &Form1::coord_picture02_Click);
			// 
			// coord01
			// 
			this->coord01->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord01->BackColor = System::Drawing::SystemColors::Info;
			this->coord01->Controls->Add(this->coord_picture01);
			this->coord01->Location = System::Drawing::Point(3, 646);
			this->coord01->Name = L"coord01";
			this->coord01->Size = System::Drawing::Size(100, 100);
			this->coord01->TabIndex = 1;
			// 
			// coord_picture01
			// 
			this->coord_picture01->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture01->BackColor = System::Drawing::SystemColors::Info;
			this->coord_picture01->Location = System::Drawing::Point(4, 5);
			this->coord_picture01->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->coord_picture01->Name = L"coord_picture01";
			this->coord_picture01->Size = System::Drawing::Size(92, 91);
			this->coord_picture01->TabIndex = 23;
			this->coord_picture01->TabStop = false;
			this->coord_picture01->Click += gcnew System::EventHandler(this, &Form1::coord_picture01_Click_1);
			// 
			// coord00
			// 
			this->coord00->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->coord00->BackColor = System::Drawing::SystemColors::Info;
			this->coord00->Controls->Add(this->coord_picture00);
			this->coord00->Location = System::Drawing::Point(3, 752);
			this->coord00->Name = L"coord00";
			this->coord00->Size = System::Drawing::Size(100, 100);
			this->coord00->TabIndex = 0;
			// 
			// coord_picture00
			// 
			this->coord_picture00->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->coord_picture00->BackColor = System::Drawing::SystemColors::Highlight;
			this->coord_picture00->Location = System::Drawing::Point(4, 5);
			this->coord_picture00->Name = L"coord_picture00";
			this->coord_picture00->Size = System::Drawing::Size(92, 90);
			this->coord_picture00->TabIndex = 0;
			this->coord_picture00->TabStop = false;
			this->coord_picture00->Click += gcnew System::EventHandler(this, &Form1::coord_picture00_Click);
			// 
			// SettingsPanel
			// 
			this->SettingsPanel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			this->SettingsPanel->BackColor = System::Drawing::SystemColors::ControlDark;
			this->SettingsPanel->Controls->Add(this->Histiry_ListBox);
			this->SettingsPanel->Controls->Add(this->ResetGameButton);
			this->SettingsPanel->Controls->Add(this->StopGameButton);
			this->SettingsPanel->Controls->Add(this->textBox2);
			this->SettingsPanel->Controls->Add(this->textBox1);
			this->SettingsPanel->Controls->Add(this->StartGameButton);
			this->SettingsPanel->Location = System::Drawing::Point(1006, 12);
			this->SettingsPanel->Name = L"SettingsPanel";
			this->SettingsPanel->Size = System::Drawing::Size(200, 854);
			this->SettingsPanel->TabIndex = 1;
			// 
			// Histiry_ListBox
			// 
			this->Histiry_ListBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Histiry_ListBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->Histiry_ListBox->FormattingEnabled = true;
			this->Histiry_ListBox->ItemHeight = 20;
			this->Histiry_ListBox->Location = System::Drawing::Point(3, 143);
			this->Histiry_ListBox->Name = L"Histiry_ListBox";
			this->Histiry_ListBox->Size = System::Drawing::Size(194, 704);
			this->Histiry_ListBox->TabIndex = 5;
			// 
			// ResetGameButton
			// 
			this->ResetGameButton->Location = System::Drawing::Point(3, 42);
			this->ResetGameButton->Name = L"ResetGameButton";
			this->ResetGameButton->Size = System::Drawing::Size(194, 31);
			this->ResetGameButton->TabIndex = 4;
			this->ResetGameButton->Text = L"Reset";
			this->ResetGameButton->UseVisualStyleBackColor = true;
			// 
			// StopGameButton
			// 
			this->StopGameButton->Location = System::Drawing::Point(100, 5);
			this->StopGameButton->Name = L"StopGameButton";
			this->StopGameButton->Size = System::Drawing::Size(98, 31);
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
			this->textBox1->Location = System::Drawing::Point(3, 78);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(194, 26);
			this->textBox1->TabIndex = 1;
			// 
			// StartGameButton
			// 
			this->StartGameButton->Location = System::Drawing::Point(3, 5);
			this->StartGameButton->Name = L"StartGameButton";
			this->StartGameButton->Size = System::Drawing::Size(98, 31);
			this->StartGameButton->TabIndex = 0;
			this->StartGameButton->Text = L"Start";
			this->StartGameButton->UseVisualStyleBackColor = true;
			this->StartGameButton->Click += gcnew System::EventHandler(this, &Form1::StartGameButton_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1218, 878);
			this->Controls->Add(this->SettingsPanel);
			this->Controls->Add(this->MainPanel);
			this->MinimumSize = System::Drawing::Size(502, 324);
			this->Name = L"Form1";
			this->Text = L"шахматы";
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
			this->MainPanel->ResumeLayout(false);
			this->coord11->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture11))->EndInit();
			this->coord77->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture77))->EndInit();
			this->coord76->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture76))->EndInit();
			this->coord67->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture67))->EndInit();
			this->coord75->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture75))->EndInit();
			this->coord57->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture57))->EndInit();
			this->coord66->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture66))->EndInit();
			this->coord47->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture47))->EndInit();
			this->coord74->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture74))->EndInit();
			this->coord37->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture37))->EndInit();
			this->coord56->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture56))->EndInit();
			this->coord27->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture27))->EndInit();
			this->coord17->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture17))->EndInit();
			this->coord65->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture65))->EndInit();
			this->coord46->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture46))->EndInit();
			this->coord73->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture73))->EndInit();
			this->coord36->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture36))->EndInit();
			this->coord55->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture55))->EndInit();
			this->coord26->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture26))->EndInit();
			this->coord16->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture16))->EndInit();
			this->coord64->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture64))->EndInit();
			this->coord45->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture45))->EndInit();
			this->coord72->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture72))->EndInit();
			this->coord35->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture35))->EndInit();
			this->coord54->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture54))->EndInit();
			this->coord25->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture25))->EndInit();
			this->coord15->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture15))->EndInit();
			this->coord63->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture63))->EndInit();
			this->coord44->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture44))->EndInit();
			this->coord71->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture71))->EndInit();
			this->coord34->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture34))->EndInit();
			this->coord53->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture53))->EndInit();
			this->coord24->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture24))->EndInit();
			this->coord14->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture14))->EndInit();
			this->coord62->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture62))->EndInit();
			this->coord43->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture43))->EndInit();
			this->coord70->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture70))->EndInit();
			this->coord33->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture33))->EndInit();
			this->coord52->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture52))->EndInit();
			this->coord23->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture23))->EndInit();
			this->coord13->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture13))->EndInit();
			this->coord61->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture61))->EndInit();
			this->coord42->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture42))->EndInit();
			this->coord60->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture60))->EndInit();
			this->coord32->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture32))->EndInit();
			this->coord51->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture51))->EndInit();
			this->coord22->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture22))->EndInit();
			this->coord50->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture50))->EndInit();
			this->coord12->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture12))->EndInit();
			this->coord41->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture41))->EndInit();
			this->coord40->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture40))->EndInit();
			this->coord31->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture31))->EndInit();
			this->coord30->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture30))->EndInit();
			this->coord21->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture21))->EndInit();
			this->coord20->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture20))->EndInit();
			this->coord10->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture10))->EndInit();
			this->coord07->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture07))->EndInit();
			this->coord06->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture06))->EndInit();
			this->coord05->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture05))->EndInit();
			this->coord04->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture04))->EndInit();
			this->coord03->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture03))->EndInit();
			this->coord02->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture02))->EndInit();
			this->coord01->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture01))->EndInit();
			this->coord00->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->coord_picture00))->EndInit();
			this->SettingsPanel->ResumeLayout(false);
			this->SettingsPanel->PerformLayout();
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
	textBox1->Text = (sender->ToString());
}
private: System::Void coord10_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void coord_picture00_Click(System::Object^ sender, System::EventArgs^ e) {
	coord00->BackColor = System::Drawing::Color::Green;
	checkCoord(0, 0);

}
private: System::Void coord_picture01_Click_1(System::Object^ sender, System::EventArgs^ e) {
	coord01->BackColor = System::Drawing::Color::Green;
	checkCoord(0, 1);
}
private: System::Void coord_picture02_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(0, 2);
}
private: System::Void coord_picture03_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(0, 3);
}
private: System::Void coord_picture04_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(0, 4);
}
private: System::Void coord_picture05_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(0, 5);
}
private: System::Void coord_picture06_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(0, 6);
}
private: System::Void coord_picture07_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(0, 7);
}
private: System::Void coord_picture10_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 0);
}
private: System::Void coord_picture11_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 1);
}
private: System::Void coord_picture12_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 2);
}
private: System::Void coord_picture13_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 3);
}
private: System::Void coord_picture14_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 4);
}
private: System::Void coord_picture15_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 5);
}
private: System::Void coord_picture16_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 6);
}
private: System::Void coord_picture17_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(1, 7);
}
private: System::Void coord_picture20_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 0);
}
private: System::Void coord_picture21_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 1);
}
private: System::Void coord_picture22_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 2);
}
private: System::Void coord_picture23_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 3);
}
private: System::Void coord_picture24_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 4);
}
private: System::Void coord_picture25_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 5);
}
private: System::Void coord_picture26_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 6);
}
private: System::Void coord_picture27_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(2, 7);
}
private: System::Void coord_picture30_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 0);
}
private: System::Void coord_picture31_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 1);
}
private: System::Void coord_picture32_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 2);
}
private: System::Void coord_picture33_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 3);
}
private: System::Void coord_picture34_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 4);
}
private: System::Void coord_picture35_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 5);
}
private: System::Void coord_picture36_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 6);
}
private: System::Void coord_picture37_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(3, 7);
}
private: System::Void coord_picture40_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 0);
}
private: System::Void coord_picture41_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 1);
}
private: System::Void coord_picture42_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 2);
}
private: System::Void coord_picture43_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 3);
}
private: System::Void coord_picture44_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 4);
}
private: System::Void coord_picture45_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 5);
}
private: System::Void coord_picture46_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 6);
}
private: System::Void coord_picture47_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(4, 7);
}
private: System::Void coord_picture50_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 0);
}
private: System::Void coord_picture51_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 1);
}
private: System::Void coord_picture52_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 2);
}
private: System::Void coord_picture53_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 3);
}
private: System::Void coord_picture54_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 4);
}
private: System::Void coord_picture55_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 5);
}
private: System::Void coord_picture56_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 6);
}
private: System::Void coord_picture57_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(5, 7);
}
private: System::Void coord_picture60_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 0);
}
private: System::Void coord_picture61_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 1);
}
private: System::Void coord_picture62_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 2);
}
private: System::Void coord_picture63_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 3);
}
private: System::Void coord_picture64_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 4);
}
private: System::Void coord_picture65_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 5);
}
private: System::Void coord_picture66_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 6);
}
private: System::Void coord_picture67_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(6, 7);
}
private: System::Void coord_picture70_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 0);
}
private: System::Void coord_picture71_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 1);
}
private: System::Void coord_picture72_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 2);
}
private: System::Void coord_picture73_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 3);
}
private: System::Void coord_picture74_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 4);
}
private: System::Void coord_picture75_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 5);
}
private: System::Void coord_picture76_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 6);
}
private: System::Void coord_picture77_Click(System::Object^ sender, System::EventArgs^ e) {
	checkCoord(7, 7);
}
};
}
