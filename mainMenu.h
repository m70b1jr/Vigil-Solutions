#pragma once


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
	private: System::Windows::Forms::Button^  newClient;
	private: System::Windows::Forms::Button^  editClient;
	private: System::Windows::Forms::Button^  genSurvey;
	private: System::Windows::Forms::Button^  editSurvey;
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
			this->newClient = (gcnew System::Windows::Forms::Button());
			this->editClient = (gcnew System::Windows::Forms::Button());
			this->genSurvey = (gcnew System::Windows::Forms::Button());
			this->editSurvey = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// newClient
			// 
			this->newClient->BackColor = System::Drawing::SystemColors::ControlDark;
			this->newClient->Location = System::Drawing::Point(47, 44);
			this->newClient->Name = L"newClient";
			this->newClient->Size = System::Drawing::Size(201, 118);
			this->newClient->TabIndex = 0;
			this->newClient->Text = L"Add New Client";
			this->newClient->UseVisualStyleBackColor = false;
			// 
			// editClient
			// 
			this->editClient->BackColor = System::Drawing::SystemColors::ControlDark;
			this->editClient->Location = System::Drawing::Point(367, 44);
			this->editClient->Name = L"editClient";
			this->editClient->Size = System::Drawing::Size(190, 113);
			this->editClient->TabIndex = 1;
			this->editClient->Text = L"Edit Existing Client";
			this->editClient->UseVisualStyleBackColor = false;
			// 
			// genSurvey
			// 
			this->genSurvey->BackColor = System::Drawing::SystemColors::ControlDark;
			this->genSurvey->Location = System::Drawing::Point(47, 215);
			this->genSurvey->Name = L"genSurvey";
			this->genSurvey->Size = System::Drawing::Size(201, 123);
			this->genSurvey->TabIndex = 2;
			this->genSurvey->Text = L"Generate Survey";
			this->genSurvey->UseVisualStyleBackColor = false;
			// 
			// editSurvey
			// 
			this->editSurvey->BackColor = System::Drawing::SystemColors::ControlDark;
			this->editSurvey->Location = System::Drawing::Point(367, 215);
			this->editSurvey->Name = L"editSurvey";
			this->editSurvey->Size = System::Drawing::Size(190, 123);
			this->editSurvey->TabIndex = 3;
			this->editSurvey->Text = L"Edit Existing Survey";
			this->editSurvey->UseVisualStyleBackColor = false;
			// 
			// mainMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->ClientSize = System::Drawing::Size(604, 437);
			this->Controls->Add(this->editSurvey);
			this->Controls->Add(this->genSurvey);
			this->Controls->Add(this->editClient);
			this->Controls->Add(this->newClient);
			this->Name = L"mainMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Main Menu";
			this->Load += gcnew System::EventHandler(this, &mainMenu::mainMenu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void mainMenu_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
