#pragma once
#include "addApplicant.h"
#include "surveyResults.h"

namespace CSC400CLR2
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for mainMenu
	/// </summary>

	public ref class mainMenu : public System::Windows::Forms::Form
	{
	public:
		mainMenu(void)
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
		~mainMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::VScrollBar^  vScrollBar1;
	private: System::Windows::Forms::Button^  settings;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  addApplicantBtn;

	private: System::Windows::Forms::Button^  genSurvey;
	private: System::Windows::Forms::Button^  editSurvey;
	private: System::Windows::Forms::Button^  exportInfo;








	protected:

	protected:




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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(mainMenu::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->vScrollBar1 = (gcnew System::Windows::Forms::VScrollBar());
			this->settings = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addApplicantBtn = (gcnew System::Windows::Forms::Button());
			this->genSurvey = (gcnew System::Windows::Forms::Button());
			this->editSurvey = (gcnew System::Windows::Forms::Button());
			this->exportInfo = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->textBox1->Location = System::Drawing::Point(335, 1);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(686, 20);
			this->textBox1->TabIndex = 0;
			// 
			// vScrollBar1
			// 
			this->vScrollBar1->Location = System::Drawing::Point(1005, 25);
			this->vScrollBar1->Name = L"vScrollBar1";
			this->vScrollBar1->Size = System::Drawing::Size(15, 540);
			this->vScrollBar1->TabIndex = 1;
			// 
			// settings
			// 
			this->settings->BackColor = System::Drawing::Color::Transparent;
			this->settings->FlatAppearance->BorderSize = 0;
			this->settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->settings->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->settings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->settings->Location = System::Drawing::Point(25, 522);
			this->settings->Name = L"settings";
			this->settings->Size = System::Drawing::Size(100, 25);
			this->settings->TabIndex = 2;
			this->settings->Text = L"Settings";
			this->settings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->settings->UseVisualStyleBackColor = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(30, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 100);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(30, 490);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 16);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Username";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// addApplicantBtn
			// 
			this->addApplicantBtn->BackColor = System::Drawing::Color::Transparent;
			this->addApplicantBtn->FlatAppearance->BorderSize = 0;
			this->addApplicantBtn->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->addApplicantBtn->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->addApplicantBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->addApplicantBtn->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->addApplicantBtn->Location = System::Drawing::Point(30, 140);
			this->addApplicantBtn->Name = L"addApplicantBtn";
			this->addApplicantBtn->Size = System::Drawing::Size(110, 25);
			this->addApplicantBtn->TabIndex = 5;
			this->addApplicantBtn->Text = L"Add Applicant";
			this->addApplicantBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->addApplicantBtn->UseVisualStyleBackColor = false;
			this->addApplicantBtn->Click += gcnew System::EventHandler(this, &mainMenu::addApplicant_Click);
			// 
			// genSurvey
			// 
			this->genSurvey->BackColor = System::Drawing::Color::Transparent;
			this->genSurvey->FlatAppearance->BorderSize = 0;
			this->genSurvey->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->genSurvey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->genSurvey->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->genSurvey->Location = System::Drawing::Point(30, 170);
			this->genSurvey->Name = L"genSurvey";
			this->genSurvey->Size = System::Drawing::Size(130, 25);
			this->genSurvey->TabIndex = 6;
			this->genSurvey->Text = L"Generate Survey";
			this->genSurvey->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->genSurvey->UseVisualStyleBackColor = false;
			this->genSurvey->Click += gcnew System::EventHandler(this, &mainMenu::genSurvey_Click);
			// 
			// editSurvey
			// 
			this->editSurvey->BackColor = System::Drawing::Color::Transparent;
			this->editSurvey->FlatAppearance->BorderSize = 0;
			this->editSurvey->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->editSurvey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->editSurvey->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->editSurvey->Location = System::Drawing::Point(30, 200);
			this->editSurvey->Name = L"editSurvey";
			this->editSurvey->Size = System::Drawing::Size(95, 25);
			this->editSurvey->TabIndex = 7;
			this->editSurvey->Text = L"Edit Survey";
			this->editSurvey->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->editSurvey->UseVisualStyleBackColor = false;
			// 
			// exportInfo
			// 
			this->exportInfo->BackColor = System::Drawing::Color::Transparent;
			this->exportInfo->FlatAppearance->BorderSize = 0;
			this->exportInfo->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->exportInfo->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->exportInfo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->exportInfo->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exportInfo->Location = System::Drawing::Point(30, 230);
			this->exportInfo->Name = L"exportInfo";
			this->exportInfo->Size = System::Drawing::Size(75, 25);
			this->exportInfo->TabIndex = 8;
			this->exportInfo->Text = L"Export";
			this->exportInfo->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->exportInfo->UseVisualStyleBackColor = false;
			// 
			// mainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1024, 576);
			this->Controls->Add(this->exportInfo);
			this->Controls->Add(this->editSurvey);
			this->Controls->Add(this->genSurvey);
			this->Controls->Add(this->addApplicantBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->settings);
			this->Controls->Add(this->vScrollBar1);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"mainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &mainMenu::mainMenu_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void addApplicant_Click(System::Object^  sender, System::EventArgs^  e)
{
	Form^ aa = gcnew addApplicant;
	aa->Show();
}

private: System::Void genSurvey_Click(System::Object^  sender, System::EventArgs^  e)
{
	Form^ sr = gcnew surveyResults;
	sr->Show();
}


};
}
