#pragma once
#include <sstream>

#include "Klient.h"
#include "Adres.h"
#include "Data.h"
#include "RachunekBiezacy.h"
#include "RachunekWalutowy.h"
#include "RachunekOszczednosciowy.h"
#include "RachunekLokaty.h"
#include "Wyjatki.h"

namespace Konto_bankowe {

	using namespace Czas;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MojeKontoBankowe
	/// </summary>

	public ref class MojeKontoBankowe : public System::Windows::Forms::Form
	{
	public:
		Klient *klient_a, *klient_b, *klient_c;
		RachunekBiezacy *rach_a, *rach_b, *rach_c;
		RachunekWalutowy *rach_w1, *rach_w2, *rach_w3;
		RachunekOszczednosciowy *rach_o1, *rach_o2, *rach_o3;
		RachunekLokaty *rach_l1, *rach_l2, *rach_l3;
		System::Int16 typ_rachunku;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label19;

	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::TextBox^  textBox1;

	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::GroupBox^  groupBox6;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::Label^  label18;
	public:
	private: System::Windows::Forms::GroupBox^  groupBox3;
	public:

	public:
		MojeKontoBankowe(void)
		{
			klient_a = new Klient("Anna", "Karkocha", 111222333, Czas::Data(2, 8, 1988),
				Adres("Polna", 2, 4, "08-180", "Gdañsk", "Polska"));
			klient_b = new Klient("Jan", "Kowalski", 223334567, Czas::Data(12, 6, 1978),
				Adres("Kwiatowa", 5, 14, "08-180", "Gdañsk", "Polska"));
			klient_c = new Klient("Zofia", "Nowak", 223337890, Czas::Data(9, 10, 1991),
				Adres("Zacna", 7, 1, "08-180", "Gdañsk", "Polska"));

			rach_a = new RachunekBiezacy("I oddzia³ w Gdañsku", "22 3333 4444 5555 6666 7777 2222", *klient_a, 1.2,
				Czas::Data(1, 1, 2016), 2.1, 100, true);
			rach_b = new RachunekBiezacy("II oddzia³ w Gdañsku", "22 6666 9900 3377 7788 8843 2222", *klient_b, 1,
				Czas::Data(1, 12, 2015), 1.5, 80, true);
			rach_c = new RachunekBiezacy("I oddzia³ w Gdyni", "22 4321 2453 3337 7788 8812 2222", *klient_c, 1.6,
				Czas::Data(1, 11, 2014), 0.5, 0, true);

			rach_w1 = new RachunekWalutowy("I oddzia³ w Gdañsku", "11 3333 4444 5555 6666 7777 1111", *klient_a, 1.2,
				"EUR", Czas::Data(1, 1, 2016), 2.1, 100, true);
			rach_w2 = new RachunekWalutowy("II oddzia³ w Gdañsku", "11 6666 9900 3377 7788 8843 1111", *klient_b, 1,
				"USD", Czas::Data(1, 12, 2015), 1.5, 80, true);
			rach_w3 = new RachunekWalutowy("I oddzia³ w Gdyni", "11 4321 2453 3337 7788 8812 1111", *klient_c, 1.6,
				"CHF", Czas::Data(1, 11, 2014), 0.5, 0, true);

			rach_o1 = new RachunekOszczednosciowy("I oddzia³ w Gdañsku", "33 3333 4444 5555 6666 7777 3333", *klient_a,
				Czas::Data(1, 1, 2016), 2.1, 100);
			rach_o2 = new RachunekOszczednosciowy("II oddzia³ w Gdañsku", "33 6666 9900 3377 7788 8843 3333", *klient_b,
				Czas::Data(1, 12, 2015), 1.5, 80);
			rach_o3 = new RachunekOszczednosciowy("I oddzia³ w Gdyni", "33 4321 2453 3337 7788 8812 3333", *klient_c,
				Czas::Data(1, 11, 2014), 0.5, 0);

			rach_l1 = new RachunekLokaty("I oddzia³ w Gdañsku", "44 3333 4444 5555 6666 7777 4444", *klient_a, 2.2,
				Czas::Data(1, 1, 2016), Czas::Data(1, 1, 2017), 2.1, 100, false);
			rach_l2 = new RachunekLokaty("II oddzia³ w Gdañsku", "44 6666 9900 3377 7788 8843 4444", *klient_b, 2.1,
				Czas::Data(1, 12, 2015), Czas::Data(1, 6, 2016), 1.5, 80, false);
			rach_l3 = new RachunekLokaty("I oddzia³ w Gdyni", "44 4321 2453 3337 7788 8812 4444", *klient_c, 2.6,
				Czas::Data(1, 11, 2014), Czas::Data(1, 1, 2016), 0.5, 0, false);

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MojeKontoBankowe()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  rachunkiToolStripMenuItem;










	private: System::Windows::Forms::ToolStripMenuItem^  ebankomatToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekWalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekLokatyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekOszczToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  przelewyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekBie¿¹cyToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekWalutowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekOszczêdnoœciowyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekBie¿¹cyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekWalutowyToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  rachunekOszczêdnoœciowyToolStripMenuItem1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  button1;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunkiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekWalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekLokatyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekOszczToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->przelewyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekBie¿¹cyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekWalutowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekOszczêdnoœciowyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ebankomatToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekBie¿¹cyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekWalutowyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->rachunekOszczêdnoœciowyToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->exitToolStripMenuItem,
					this->rachunkiToolStripMenuItem, this->przelewyToolStripMenuItem, this->ebankomatToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(590, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"Rachunki";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(107, 20);
			this->exitToolStripMenuItem->Text = L"&Wyszukaj Klienta";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::exitToolStripMenuItem_Click);
			// 
			// rachunkiToolStripMenuItem
			// 
			this->rachunkiToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->rachunekToolStripMenuItem,
					this->rachunekWalToolStripMenuItem, this->rachunekLokatyToolStripMenuItem, this->rachunekOszczToolStripMenuItem
			});
			this->rachunkiToolStripMenuItem->Name = L"rachunkiToolStripMenuItem";
			this->rachunkiToolStripMenuItem->Size = System::Drawing::Size(68, 20);
			this->rachunkiToolStripMenuItem->Text = L"&Rachunki";
			// 
			// rachunekToolStripMenuItem
			// 
			this->rachunekToolStripMenuItem->Name = L"rachunekToolStripMenuItem";
			this->rachunekToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->rachunekToolStripMenuItem->Text = L"R&achunek Bie¿¹cy";
			this->rachunekToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekToolStripMenuItem_Click);
			// 
			// rachunekWalToolStripMenuItem
			// 
			this->rachunekWalToolStripMenuItem->Name = L"rachunekWalToolStripMenuItem";
			this->rachunekWalToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->rachunekWalToolStripMenuItem->Text = L"R&achunek Walutowy";
			this->rachunekWalToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekWalToolStripMenuItem_Click);
			// 
			// rachunekLokatyToolStripMenuItem
			// 
			this->rachunekLokatyToolStripMenuItem->Name = L"rachunekLokatyToolStripMenuItem";
			this->rachunekLokatyToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->rachunekLokatyToolStripMenuItem->Text = L"R&achunek Lokaty";
			this->rachunekLokatyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekLokatyToolStripMenuItem_Click);
			// 
			// rachunekOszczToolStripMenuItem
			// 
			this->rachunekOszczToolStripMenuItem->Name = L"rachunekOszczToolStripMenuItem";
			this->rachunekOszczToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->rachunekOszczToolStripMenuItem->Text = L"R&achunek Oszczêdnoœciowy";
			this->rachunekOszczToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekOszczToolStripMenuItem_Click);
			// 
			// przelewyToolStripMenuItem
			// 
			this->przelewyToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->rachunekBie¿¹cyToolStripMenuItem1,
					this->rachunekWalutowyToolStripMenuItem, this->rachunekOszczêdnoœciowyToolStripMenuItem
			});
			this->przelewyToolStripMenuItem->Name = L"przelewyToolStripMenuItem";
			this->przelewyToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->przelewyToolStripMenuItem->Text = L"&Przelewy";
			// 
			// rachunekBie¿¹cyToolStripMenuItem1
			// 
			this->rachunekBie¿¹cyToolStripMenuItem1->Name = L"rachunekBie¿¹cyToolStripMenuItem1";
			this->rachunekBie¿¹cyToolStripMenuItem1->Size = System::Drawing::Size(222, 22);
			this->rachunekBie¿¹cyToolStripMenuItem1->Text = L"R&achunek Bie¿¹cy";
			this->rachunekBie¿¹cyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekBie¿¹cyToolStripMenuItem1_Click);
			// 
			// rachunekWalutowyToolStripMenuItem
			// 
			this->rachunekWalutowyToolStripMenuItem->Name = L"rachunekWalutowyToolStripMenuItem";
			this->rachunekWalutowyToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->rachunekWalutowyToolStripMenuItem->Text = L"R&achunek Walutowy";
			this->rachunekWalutowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekWalutowyToolStripMenuItem_Click);
			// 
			// rachunekOszczêdnoœciowyToolStripMenuItem
			// 
			this->rachunekOszczêdnoœciowyToolStripMenuItem->Name = L"rachunekOszczêdnoœciowyToolStripMenuItem";
			this->rachunekOszczêdnoœciowyToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->rachunekOszczêdnoœciowyToolStripMenuItem->Text = L"R&achunek Oszczêdnoœciowy";
			this->rachunekOszczêdnoœciowyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekOszczêdnoœciowyToolStripMenuItem_Click_1);
			// 
			// ebankomatToolStripMenuItem
			// 
			this->ebankomatToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->rachunekBie¿¹cyToolStripMenuItem,
					this->rachunekWalutowyToolStripMenuItem1, this->rachunekOszczêdnoœciowyToolStripMenuItem1
			});
			this->ebankomatToolStripMenuItem->Name = L"ebankomatToolStripMenuItem";
			this->ebankomatToolStripMenuItem->Size = System::Drawing::Size(84, 20);
			this->ebankomatToolStripMenuItem->Text = L"&E-bankomat";
			// 
			// rachunekBie¿¹cyToolStripMenuItem
			// 
			this->rachunekBie¿¹cyToolStripMenuItem->Name = L"rachunekBie¿¹cyToolStripMenuItem";
			this->rachunekBie¿¹cyToolStripMenuItem->Size = System::Drawing::Size(222, 22);
			this->rachunekBie¿¹cyToolStripMenuItem->Text = L"R&achunek Bie¿¹cy";
			this->rachunekBie¿¹cyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekBie¿¹cyToolStripMenuItem_Click);
			// 
			// rachunekWalutowyToolStripMenuItem1
			// 
			this->rachunekWalutowyToolStripMenuItem1->Name = L"rachunekWalutowyToolStripMenuItem1";
			this->rachunekWalutowyToolStripMenuItem1->Size = System::Drawing::Size(222, 22);
			this->rachunekWalutowyToolStripMenuItem1->Text = L"R&achunek Walutowy";
			this->rachunekWalutowyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekWalutowyToolStripMenuItem1_Click);
			// 
			// rachunekOszczêdnoœciowyToolStripMenuItem1
			// 
			this->rachunekOszczêdnoœciowyToolStripMenuItem1->Name = L"rachunekOszczêdnoœciowyToolStripMenuItem1";
			this->rachunekOszczêdnoœciowyToolStripMenuItem1->Size = System::Drawing::Size(222, 22);
			this->rachunekOszczêdnoœciowyToolStripMenuItem1->Text = L"R&achunek Oszczêdnoœciowy";
			this->rachunekOszczêdnoœciowyToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::rachunekOszczêdnoœciowyToolStripMenuItem1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(16, 38);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Imiê:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(16, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Data urodzenia:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 143);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Numer telefonu:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 118);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(103, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Adres zamieszkania:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Nazwisko:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(151, 38);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 13);
			this->label7->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(151, 91);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(0, 13);
			this->label8->TabIndex = 8;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(151, 143);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(0, 13);
			this->label9->TabIndex = 9;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(151, 67);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 10;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(151, 118);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(0, 13);
			this->label11->TabIndex = 11;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Location = System::Drawing::Point(184, 17);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(363, 176);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Dane osobowe:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 38);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(60, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->Text = L"Klient 1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 63);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(60, 17);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->Text = L"Klient 2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 91);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(60, 17);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->Text = L"Klient 3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->radioButton3);
			this->groupBox2->Controls->Add(this->radioButton1);
			this->groupBox2->Controls->Add(this->radioButton2);
			this->groupBox2->Location = System::Drawing::Point(27, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(91, 174);
			this->groupBox2->TabIndex = 16;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Wybierz Klienta:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(6, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Wybierz";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->groupBox2);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Location = System::Drawing::Point(14, 16);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(558, 205);
			this->groupBox3->TabIndex = 17;
			this->groupBox3->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->groupBox4);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(508, 226);
			this->panel1->TabIndex = 18;
			this->panel1->Visible = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBox1);
			this->groupBox4->Controls->Add(this->label30);
			this->groupBox4->Controls->Add(this->label29);
			this->groupBox4->Controls->Add(this->label28);
			this->groupBox4->Controls->Add(this->label27);
			this->groupBox4->Controls->Add(this->label26);
			this->groupBox4->Controls->Add(this->label25);
			this->groupBox4->Controls->Add(this->label24);
			this->groupBox4->Controls->Add(this->label23);
			this->groupBox4->Controls->Add(this->label22);
			this->groupBox4->Controls->Add(this->label21);
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label19);
			this->groupBox4->Controls->Add(this->label17);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label15);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Location = System::Drawing::Point(55, 29);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(483, 168);
			this->groupBox4->TabIndex = 0;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Dane rachunku:";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(160, 82);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 20;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(397, 133);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(0, 13);
			this->label30->TabIndex = 19;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(397, 110);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(0, 13);
			this->label29->TabIndex = 18;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(397, 82);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(0, 13);
			this->label28->TabIndex = 17;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(397, 58);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(0, 13);
			this->label27->TabIndex = 16;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(397, 36);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(0, 13);
			this->label26->TabIndex = 15;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(311, 133);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(42, 13);
			this->label25->TabIndex = 14;
			this->label25->Text = L"Op³aty:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(311, 110);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(49, 13);
			this->label24->TabIndex = 13;
			this->label24->Text = L"Prowizja:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(311, 83);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(88, 13);
			this->label23->TabIndex = 12;
			this->label23->Text = L"Oprocentowanie:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(311, 58);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(44, 13);
			this->label22->TabIndex = 11;
			this->label22->Text = L"Waluta:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(311, 36);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(85, 13);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Saldo rachunku:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(157, 133);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(0, 13);
			this->label20->TabIndex = 9;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(157, 110);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(0, 13);
			this->label19->TabIndex = 8;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(157, 58);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(0, 13);
			this->label17->TabIndex = 6;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(110, 36);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(0, 13);
			this->label16->TabIndex = 5;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(15, 133);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(137, 13);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Data zamkniêcia rachunku:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(15, 110);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(130, 13);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Data za³ozenia rachunku:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(15, 83);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(98, 13);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Karta do rachunku:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(15, 58);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(108, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"W³aœciciel rachunku:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 36);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Numer rachunku:";
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label18);
			this->groupBox5->Controls->Add(this->button2);
			this->groupBox5->Controls->Add(this->comboBox1);
			this->groupBox5->Controls->Add(this->textBox1);
			this->groupBox5->Controls->Add(this->label32);
			this->groupBox5->Location = System::Drawing::Point(52, 17);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(460, 164);
			this->groupBox5->TabIndex = 6;
			this->groupBox5->TabStop = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(104, 16);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(198, 15);
			this->label18->TabIndex = 6;
			this->label18->Text = L"BRAK ŒRODKÓW NA KONCIE!";
			this->label18->Visible = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Silver;
			this->button2->Location = System::Drawing::Point(330, 100);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(110, 50);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Wykonaj przelew";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(14, 82);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(265, 21);
			this->comboBox1->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(129, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 20);
			this->textBox1->TabIndex = 2;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(11, 54);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(85, 13);
			this->label32->TabIndex = 3;
			this->label32->Text = L"Kwota przelewu:";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->groupBox5);
			this->panel2->Location = System::Drawing::Point(3, 27);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(584, 223);
			this->panel2->TabIndex = 21;
			this->panel2->Visible = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->groupBox3);
			this->panel3->Location = System::Drawing::Point(6, 27);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(581, 234);
			this->panel3->TabIndex = 18;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->groupBox6);
			this->panel4->Location = System::Drawing::Point(3, 27);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(587, 226);
			this->panel4->TabIndex = 7;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->label36);
			this->groupBox6->Controls->Add(this->button4);
			this->groupBox6->Controls->Add(this->button3);
			this->groupBox6->Controls->Add(this->textBox2);
			this->groupBox6->Controls->Add(this->label35);
			this->groupBox6->Location = System::Drawing::Point(35, 16);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(322, 188);
			this->groupBox6->TabIndex = 6;
			this->groupBox6->TabStop = false;
			// 
			// label36
			// 
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label36->ForeColor = System::Drawing::Color::Red;
			this->label36->Location = System::Drawing::Point(60, 20);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(200, 23);
			this->label36->TabIndex = 6;
			this->label36->Text = L"Brak œrodków na koncie!";
			this->label36->Visible = false;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Silver;
			this->button4->Location = System::Drawing::Point(197, 136);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Wyp³ata";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Silver;
			this->button3->Location = System::Drawing::Point(63, 136);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Wp³ata";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MojeKontoBankowe::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(111, 65);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(32, 68);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(40, 13);
			this->label35->TabIndex = 3;
			this->label35->Text = L"Kwota:";
			// 
			// MojeKontoBankowe
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(590, 322);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MojeKontoBankowe";
			this->Text = L"MojeKontoBankowe";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox6->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel1->Visible = false;
		this->panel2->Visible = false;
		this->panel4->Visible = false;
		this->panel3->Visible = true;
	}
	private: System::Void uzupelnij_dane(Klient *klient) {
		String^ imie = gcnew String(klient->get_imie().c_str());
		this->label7->Text = imie;
		String^ nazwisko = gcnew String(klient->get_nazwisko().c_str());
		this->label10->Text = nazwisko;
		String^ data_urodzenia = gcnew String(klient->get_data_urodzenia().format_daty().c_str());
		this->label8->Text = data_urodzenia;
		String^ adres_zamieszkania = gcnew String(klient->get_adres_zamieszkania().format_adresu().c_str());
		this->label11->Text = adres_zamieszkania;
		int numer_tel = klient->get_nr_telefonu();
		stringstream format;
		format << numer_tel;
		String^ nr_telefonu = gcnew String(format.str().c_str());
		this->label9->Text = nr_telefonu;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->radioButton1->Checked == true) {
			this->uzupelnij_dane(klient_a);
		}
		if (this->radioButton2->Checked == true) {
			this->uzupelnij_dane(klient_b);
		}
		if (this->radioButton3->Checked == true) {
			this->uzupelnij_dane(klient_c);
		}
	}
	private: System::Void uzupelnij_rach(RachunekBiezacy *rach_biez) {
		String^ numer_rachunku = gcnew String(rach_biez->get_numer_rachunku().c_str());
		this->label16->Text = numer_rachunku;
		this->label17->Text = gcnew String(rach_biez->get_wlasciciel_rachunku().dane_klienta().c_str());
		float opr = rach_biez->get_oprocentowanie();
		stringstream format_opr;
		format_opr << opr;
		String^ oprocentowanie = gcnew String(format_opr.str().c_str());
		this->label28->Text = oprocentowanie;
		String^ domyslna_waluta = gcnew String(rach_biez->get_domyslna_waluta().c_str());
		this->label27->Text = domyslna_waluta;
		String^ data_zalozenia_rachunku = gcnew String(rach_biez->get_data_zalozenia_rachunku().format_daty().c_str());
		this->label19->Text = data_zalozenia_rachunku;
		if (rach_biez->get_data_zamkniecia_rachunku().get_rok() != 1900) {
			String^ data_zamkniecia_rachunku = gcnew String(rach_biez->get_data_zamkniecia_rachunku().format_daty().c_str());
			this->label20->Text = data_zamkniecia_rachunku;
		}
		else {
			this->label20->Text = L"";
		}
		float prow = rach_biez->get_prowizja();
		stringstream format_prow;
		format_prow << prow;
		String^ prowizja = gcnew String(format_prow.str().c_str());
		this->label29->Text = prowizja;
		float opl = rach_biez->get_oplaty();
		stringstream format_opl;
		format_opl << opl;
		String^ oplaty = gcnew String(format_opl.str().c_str());
		this->label30->Text = oplaty;
		bool karta = rach_biez->get_karta_do_rachunku();
		this->checkBox1->Checked = karta;
		float saldo = rach_biez->get_biezace_saldo_rachunku();
		stringstream format_salda;
		format_salda << saldo;
		String^ biezace_saldo_rachunku = gcnew String(format_salda.str().c_str());
		this->label26->Text = biezace_saldo_rachunku;
	}

	private: System::Void rachunekToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel2->Visible = false;
		this->panel3->Visible = false;
		this->panel4->Visible = false;
		this->panel1->Visible = true;

		if (this->radioButton1->Checked == true) {
			this->uzupelnij_rach(rach_a);
		}
		if (this->radioButton2->Checked == true) {
			this->uzupelnij_rach(rach_b);
		}
		if (this->radioButton3->Checked == true) {
			this->uzupelnij_rach(rach_c);
		}
	}
	private: System::Void rachunekWalToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel3->Visible = false;
		this->panel2->Visible = false;
		this->panel4->Visible = false;
		this->panel1->Visible = true;

		if (this->radioButton1->Checked == true) {
			this->uzupelnij_rach(rach_w1);
		}
		if (this->radioButton2->Checked == true) {
			this->uzupelnij_rach(rach_w2);
		}
		if (this->radioButton3->Checked == true) {
			this->uzupelnij_rach(rach_w3);
		}
	}
	private: System::Void rachunekOszczToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel3->Visible = false;
		this->panel2->Visible = false;
		this->panel4->Visible = false;
		this->panel1->Visible = true;

		if (this->radioButton1->Checked == true) {
			this->uzupelnij_rach(rach_o1);
		}
		if (this->radioButton2->Checked == true) {
			this->uzupelnij_rach(rach_o2);
		}
		if (this->radioButton3->Checked == true) {
			this->uzupelnij_rach(rach_o3);
		}
	}
	private: System::Void rachunekLokatyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->panel3->Visible = false;
		this->panel2->Visible = false;
		this->panel4->Visible = false;
		this->panel1->Visible = true;

		if (this->radioButton1->Checked == true) {
			this->uzupelnij_rach(rach_l1);
		}
		if (this->radioButton2->Checked == true) {
			this->uzupelnij_rach(rach_l2);
		}
		if (this->radioButton3->Checked == true) {
			this->uzupelnij_rach(rach_l3);
		}
	}

	private: System::Void rachunekBie¿¹cyToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->typ_rachunku = 0;
		this->label18->Visible = false;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel4->Visible = false;
		this->panel2->Visible = true;
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add(gcnew String(rach_w1->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_o1->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_w2->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_o2->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_w3->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_o3->dane_rach_klienta().c_str()));

		if (this->radioButton1->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_b->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_c->dane_rach_klienta().c_str()));
		}
		if (this->radioButton2->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_a->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_c->dane_rach_klienta().c_str()));
		}
		if (this->radioButton3->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_b->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_a->dane_rach_klienta().c_str()));
		}
	}
	private: System::Void rachunekWalutowyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->typ_rachunku = 1;
		this->label18->Visible = false;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel4->Visible = false;
		this->panel2->Visible = true;
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add(gcnew String(rach_a->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_o1->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_b->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_o2->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_c->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_o3->dane_rach_klienta().c_str()));

		if (this->radioButton1->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_w2->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_w3->dane_rach_klienta().c_str()));
		}
		if (this->radioButton2->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_w1->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_w3->dane_rach_klienta().c_str()));
		}
		if (this->radioButton3->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_w2->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_w1->dane_rach_klienta().c_str()));
		}
	}
	private: System::Void rachunekOszczêdnoœciowyToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->typ_rachunku = 2;
		this->label18->Visible = false;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel4->Visible = false;
		this->panel2->Visible = true;
		this->comboBox1->Items->Clear();
		this->comboBox1->Items->Add(gcnew String(rach_w1->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_a->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_w2->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_b->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_w3->dane_rach_klienta().c_str()));
		this->comboBox1->Items->Add(gcnew String(rach_c->dane_rach_klienta().c_str()));

		if (this->radioButton1->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_o2->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_o3->dane_rach_klienta().c_str()));
		}
		if (this->radioButton2->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_o1->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_o3->dane_rach_klienta().c_str()));
		}
		if (this->radioButton3->Checked == true) {
			this->comboBox1->Items->Add(gcnew String(rach_o2->dane_rach_klienta().c_str()));
			this->comboBox1->Items->Add(gcnew String(rach_o1->dane_rach_klienta().c_str()));
		}
	}
	private: System::Void rachunekBie¿¹cyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->label36->Visible = false;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel2->Visible = false;
		this->panel4->Visible = true;
		this->typ_rachunku = 0;
	}
	private: System::Void rachunekWalutowyToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->label36->Visible = false;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel2->Visible = false;
		this->panel4->Visible = true;
		this->typ_rachunku = 1;
	}
	private: System::Void rachunekOszczêdnoœciowyToolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->label36->Visible = false;
		this->panel1->Visible = false;
		this->panel3->Visible = false;
		this->panel2->Visible = false;
		this->panel4->Visible = true;
		this->typ_rachunku = 2;
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		this->label36->Visible = false;
		String^ kwota = textBox2->Text;
		float kwota_wplaty = (float)(Convert::ToDouble(kwota));
		if (this->radioButton1->Checked == true) {
			if (this->typ_rachunku == 0) {
				this->rach_a->wplata_gotowki(kwota_wplaty);
			}
			if (this->typ_rachunku == 1) {
				this->rach_w1->wplata_gotowki(kwota_wplaty);
			}
			if (this->typ_rachunku == 2) {
				this->rach_o1->wplata_gotowki(kwota_wplaty);
			}
			this->textBox2->Clear();
		}
		if (this->radioButton2->Checked == true) {
			if (this->typ_rachunku == 0) {
				this->rach_b->wplata_gotowki(kwota_wplaty);
			}
			if (this->typ_rachunku == 1) {
				this->rach_w2->wplata_gotowki(kwota_wplaty);
			}
			if (this->typ_rachunku == 2) {
				this->rach_o2->wplata_gotowki(kwota_wplaty);
			}
			this->textBox2->Clear();
		}
		if (this->radioButton3->Checked == true) {
			if (this->typ_rachunku == 0) {
				this->rach_c->wplata_gotowki(kwota_wplaty);
			}
			if (this->typ_rachunku == 1) {
				this->rach_w3->wplata_gotowki(kwota_wplaty);
			}
			if (this->typ_rachunku == 2) {
				this->rach_o3->wplata_gotowki(kwota_wplaty);
			}
			this->textBox2->Clear();
		}
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			this->label36->Visible = false;
			String^ kw = textBox2->Text;
			float kwota_wyplaty = (float)(Convert::ToDouble(kw));
			if (this->radioButton1->Checked == true) {
				if (this->typ_rachunku == 0) {
					this->rach_a->wyplata_gotowki(kwota_wyplaty);
				}
				if (this->typ_rachunku == 1) {
					this->rach_w1->wyplata_gotowki(kwota_wyplaty);
				}
				if (this->typ_rachunku == 2) {
					this->rach_o1->wyplata_gotowki(kwota_wyplaty);
				}
				this->textBox2->Clear();
			}
			if (this->radioButton2->Checked == true) {
				if (this->typ_rachunku == 0) {
					this->rach_b->wyplata_gotowki(kwota_wyplaty);
				}
				if (this->typ_rachunku == 1) {
					this->rach_w2->wyplata_gotowki(kwota_wyplaty);
				}
				if (this->typ_rachunku == 2) {
					this->rach_o2->wyplata_gotowki(kwota_wyplaty);
				}
				this->textBox2->Clear();
			}
			if (this->radioButton3->Checked == true) {
				if (this->typ_rachunku == 0) {
					this->rach_c->wyplata_gotowki(kwota_wyplaty);
				}
				if (this->typ_rachunku == 1) {
					this->rach_w3->wyplata_gotowki(kwota_wyplaty);
				}
				if (this->typ_rachunku == 2) {
					this->rach_o3->wyplata_gotowki(kwota_wyplaty);
				}
				this->textBox2->Clear();
			}
		}
		catch (BrakWystarczajacychSrodkowNaKoncie) {
			this->label36->Visible = true;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		RachunekBiezacy *rachunek_nadawcy = 0, *rachunek_odbiorcy = 0;
		int wybrany = this->comboBox1->SelectedIndex;
		this->label18->Visible = false;

		if (this->radioButton1->Checked == true) {
			if (this->typ_rachunku == 0) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_w1;
					break;
				case 1:
					rachunek_odbiorcy = rach_o1;
					break;
				case 2:
					rachunek_odbiorcy = rach_w2;
					break;
				case 3:
					rachunek_odbiorcy = rach_o2;
					break;
				case 4:
					rachunek_odbiorcy = rach_w3;
					break;
				case 5:
					rachunek_odbiorcy = rach_o3;
					break;
				case 6:
					rachunek_odbiorcy = rach_b;
					break;
				case 7:
					rachunek_odbiorcy = rach_c;
					break;
				}
				rachunek_nadawcy = rach_a;
			}
			if (this->typ_rachunku == 1) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_w1;
					break;
				case 1:
					rachunek_odbiorcy = rach_o1;
					break;
				case 2:
					rachunek_odbiorcy = rach_w2;
					break;
				case 3:
					rachunek_odbiorcy = rach_o2;
					break;
				case 4:
					rachunek_odbiorcy = rach_w3;
					break;
				case 5:
					rachunek_odbiorcy = rach_o3;
					break;
				case 6:
					rachunek_odbiorcy = rach_a;
					break;
				case 7:
					rachunek_odbiorcy = rach_c;
					break;
				}
				rachunek_nadawcy = rach_w1;
			}
			if (this->typ_rachunku == 2) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_w1;
					break;
				case 1:
					rachunek_odbiorcy = rach_o1;
					break;
				case 2:
					rachunek_odbiorcy = rach_w2;
					break;
				case 3:
					rachunek_odbiorcy = rach_o2;
					break;
				case 4:
					rachunek_odbiorcy = rach_w3;
					break;
				case 5:
					rachunek_odbiorcy = rach_o3;
					break;
				case 6:
					rachunek_odbiorcy = rach_b;
					break;
				case 7:
					rachunek_odbiorcy = rach_a;
					break;
				}
				rachunek_nadawcy = rach_o1;
			}
		}

		if (this->radioButton2->Checked == true) {
			if (this->typ_rachunku == 0) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_a;
					break;
				case 1:
					rachunek_odbiorcy = rach_o1;
					break;
				case 2:
					rachunek_odbiorcy = rach_b;
					break;
				case 3:
					rachunek_odbiorcy = rach_o2;
					break;
				case 4:
					rachunek_odbiorcy = rach_c;
					break;
				case 5:
					rachunek_odbiorcy = rach_o3;
					break;
				case 6:
					rachunek_odbiorcy = rach_w2;
					break;
				case 7:
					rachunek_odbiorcy = rach_w3;
					break;
				}
				rachunek_nadawcy = rach_b;
			}
			if (this->typ_rachunku == 1) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_a;
					break;
				case 1:
					rachunek_odbiorcy = rach_o1;
					break;
				case 2:
					rachunek_odbiorcy = rach_b;
					break;
				case 3:
					rachunek_odbiorcy = rach_o2;
					break;
				case 4:
					rachunek_odbiorcy = rach_c;
					break;
				case 5:
					rachunek_odbiorcy = rach_o3;
					break;
				case 6:
					rachunek_odbiorcy = rach_w1;
					break;
				case 7:
					rachunek_odbiorcy = rach_w3;
					break;
				}
				rachunek_nadawcy = rach_w2;
			}
			if (this->typ_rachunku == 2) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_a;
					break;
				case 1:
					rachunek_odbiorcy = rach_o1;
					break;
				case 2:
					rachunek_odbiorcy = rach_b;
					break;
				case 3:
					rachunek_odbiorcy = rach_o2;
					break;
				case 4:
					rachunek_odbiorcy = rach_c;
					break;
				case 5:
					rachunek_odbiorcy = rach_o3;
					break;
				case 6:
					rachunek_odbiorcy = rach_w2;
					break;
				case 7:
					rachunek_odbiorcy = rach_w1;
					break;
				}
				rachunek_nadawcy = rach_o2;
			}
		}

		if (this->radioButton3->Checked == true) {
			if (this->typ_rachunku == 0) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_w1;
					break;
				case 1:
					rachunek_odbiorcy = rach_a;
					break;
				case 2:
					rachunek_odbiorcy = rach_w2;
					break;
				case 3:
					rachunek_odbiorcy = rach_b;
					break;
				case 4:
					rachunek_odbiorcy = rach_w3;
					break;
				case 5:
					rachunek_odbiorcy = rach_c;
					break;
				case 6:
					rachunek_odbiorcy = rach_o2;
					break;
				case 7:
					rachunek_odbiorcy = rach_o3;
					break;
				}
				rachunek_nadawcy = rach_c;
			}
			if (this->typ_rachunku == 1) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_w1;
					break;
				case 1:
					rachunek_odbiorcy = rach_a;
					break;
				case 2:
					rachunek_odbiorcy = rach_w2;
					break;
				case 3:
					rachunek_odbiorcy = rach_b;
					break;
				case 4:
					rachunek_odbiorcy = rach_w3;
					break;
				case 5:
					rachunek_odbiorcy = rach_c;
					break;
				case 6:
					rachunek_odbiorcy = rach_o1;
					break;
				case 7:
					rachunek_odbiorcy = rach_o3;
					break;
				}
				rachunek_nadawcy = rach_w2;
			}
			if (this->typ_rachunku == 2) {
				switch (wybrany)
				{
				case 0:
					rachunek_odbiorcy = rach_w1;
					break;
				case 1:
					rachunek_odbiorcy = rach_a;
					break;
				case 2:
					rachunek_odbiorcy = rach_w2;
					break;
				case 3:
					rachunek_odbiorcy = rach_b;
					break;
				case 4:
					rachunek_odbiorcy = rach_w3;
					break;
				case 5:
					rachunek_odbiorcy = rach_c;
					break;
				case 6:
					rachunek_odbiorcy = rach_o2;
					break;
				case 7:
					rachunek_odbiorcy = rach_o1;
					break;
				}
				rachunek_nadawcy = rach_o2;
			}
		}
		try {
			String^ kwota = textBox1->Text;
			float kwota_wyplaty = (float)(Convert::ToDouble(kwota));
			rachunek_nadawcy->przelew_wychodzacy(kwota_wyplaty, rachunek_odbiorcy);
			this->textBox1->Clear();
			this->comboBox1->SelectedIndex = -1;
		}
		catch (BrakWystarczajacychSrodkowNaKoncie) {
			this->label18->Visible = true;
		}
	}
};
}