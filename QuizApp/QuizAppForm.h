#pragma once

#include "Question.h"

namespace QuizApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для QuizAppForm
	/// </summary>
	public ref class QuizAppForm : public System::Windows::Forms::Form
	{
	private:
		Question^ currentQuestion;
		int passed, total;
		System::Collections::Generic::List<Question^>^ questions;

	public:
		QuizAppForm(void)
		{
			InitializeComponent();

			questions = gcnew System::Collections::Generic::List<Question^>();

			// Radio
			System::Collections::Generic::List<System::String^>^ answers = gcnew System::Collections::Generic::List<System::String^>();
			answers->Add("2022");
			answers->Add("2023");
			answers->Add("2024");

			System::Collections::Generic::List<System::String^>^ correctAnswers = gcnew System::Collections::Generic::List<System::String^>();
			correctAnswers->Add("2023");

			questions->Add(gcnew Question(
				"В каком году легендарный Роберт поступил на КНиИТ?",
				correctAnswers, answers));

			// Checkbox
			answers = gcnew System::Collections::Generic::List<System::String^>();
			answers->Add("Zаряд Хакатон");
			answers->Add("Хакатон-хакатон-хакатон");
			answers->Add("Trashack");

			correctAnswers = gcnew System::Collections::Generic::List<System::String^>();
			correctAnswers->Add("Trashack");
			correctAnswers->Add("Zаряд Хакатон");

			questions->Add(gcnew Question(
				"В каких хакатонах Роберт побеждал?",
				correctAnswers, answers));

			// Yes/no
			answers = gcnew System::Collections::Generic::List<System::String^>();
			answers->Add("Да");
			answers->Add("Нет");

			correctAnswers = gcnew System::Collections::Generic::List<System::String^>();
			correctAnswers->Add("Да");

			questions->Add(gcnew Question(
				"Роберт крутой?",
				correctAnswers, answers));

			// Textbox
			answers = gcnew System::Collections::Generic::List<System::String^>();

			correctAnswers = gcnew System::Collections::Generic::List<System::String^>();
			correctAnswers->Add("Абоба");

			questions->Add(gcnew Question(
				"Любимый мем Роберта?",
				correctAnswers, answers));

			passed = 0;
			total = questions->Count;

			currentQuestion = GetNextQuestion();
			
			if ((currentQuestion->CorrectAnswers->Count == 1) && (currentQuestion->Answers->Count > 1)) {
				DisplayRadio();
			}
			else if ((currentQuestion->CorrectAnswers->Count > 1) && (currentQuestion->Answers->Count > 1)) {
				DisplayCheck();
			}
			else if ((currentQuestion->CorrectAnswers->Count == 1) && (currentQuestion->Answers->Count == 0)) {
				DisplayText();
			}
		}

	Question^ GetNextQuestion() {
		if (questions->Count == 0) {
			MessageBox::Show("Тест завершён: " + passed + "/" + total);
			Application::Exit();
		}

		Random^ random = gcnew Random();
		int randomIndex = random->Next(0, questions->Count);

		Question^ res = questions[randomIndex];
		questions->RemoveAt(randomIndex);
		return res;
	}

	void DisplayRadio() {
		radioPanel->Visible = true;
		checkPanel->Visible = false;

	}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~QuizAppForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ questionLabel;
	protected:
	private: System::Windows::Forms::Panel^ radioPanel;
	private: System::Windows::Forms::Label^ progressLabel;
	private: System::Windows::Forms::Button^ nextButton;
	private: System::Windows::Forms::GroupBox^ radioGroup;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Panel^ checkPanel;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Panel^ textPanel;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::TextBox^ answerTextbox;





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
			this->questionLabel = (gcnew System::Windows::Forms::Label());
			this->radioPanel = (gcnew System::Windows::Forms::Panel());
			this->progressLabel = (gcnew System::Windows::Forms::Label());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioGroup = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->checkPanel = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->textPanel = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->answerTextbox = (gcnew System::Windows::Forms::TextBox());
			this->radioPanel->SuspendLayout();
			this->radioGroup->SuspendLayout();
			this->checkPanel->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->textPanel->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// questionLabel
			// 
			this->questionLabel->AutoSize = true;
			this->questionLabel->Location = System::Drawing::Point(47, 46);
			this->questionLabel->Name = L"questionLabel";
			this->questionLabel->Size = System::Drawing::Size(75, 22);
			this->questionLabel->TabIndex = 0;
			this->questionLabel->Text = L"Вопрос";
			// 
			// radioPanel
			// 
			this->radioPanel->Controls->Add(this->radioGroup);
			this->radioPanel->Location = System::Drawing::Point(51, 143);
			this->radioPanel->Name = L"radioPanel";
			this->radioPanel->Size = System::Drawing::Size(760, 301);
			this->radioPanel->TabIndex = 1;
			// 
			// progressLabel
			// 
			this->progressLabel->AutoSize = true;
			this->progressLabel->Location = System::Drawing::Point(48, 489);
			this->progressLabel->Name = L"progressLabel";
			this->progressLabel->Size = System::Drawing::Size(21, 22);
			this->progressLabel->TabIndex = 2;
			this->progressLabel->Text = L"0";
			// 
			// nextButton
			// 
			this->nextButton->Location = System::Drawing::Point(598, 477);
			this->nextButton->Name = L"nextButton";
			this->nextButton->Size = System::Drawing::Size(214, 46);
			this->nextButton->TabIndex = 3;
			this->nextButton->Text = L"Далее";
			this->nextButton->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(6, 29);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(145, 26);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioGroup
			// 
			this->radioGroup->Controls->Add(this->radioButton4);
			this->radioGroup->Controls->Add(this->radioButton3);
			this->radioGroup->Controls->Add(this->radioButton2);
			this->radioGroup->Controls->Add(this->radioButton1);
			this->radioGroup->Location = System::Drawing::Point(37, 19);
			this->radioGroup->Name = L"radioGroup";
			this->radioGroup->Size = System::Drawing::Size(284, 250);
			this->radioGroup->TabIndex = 1;
			this->radioGroup->TabStop = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(6, 61);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(145, 26);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(6, 93);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(145, 26);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(6, 125);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(145, 26);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// checkPanel
			// 
			this->checkPanel->Controls->Add(this->groupBox1);
			this->checkPanel->Location = System::Drawing::Point(52, 140);
			this->checkPanel->Name = L"checkPanel";
			this->checkPanel->Size = System::Drawing::Size(760, 301);
			this->checkPanel->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->checkBox4);
			this->groupBox1->Controls->Add(this->checkBox3);
			this->groupBox1->Controls->Add(this->checkBox2);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Location = System::Drawing::Point(37, 19);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(284, 250);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(17, 30);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(123, 26);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(17, 65);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(123, 26);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(17, 97);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(123, 26);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(17, 129);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(123, 26);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// textPanel
			// 
			this->textPanel->Controls->Add(this->groupBox2);
			this->textPanel->Location = System::Drawing::Point(51, 304);
			this->textPanel->Name = L"textPanel";
			this->textPanel->Size = System::Drawing::Size(760, 137);
			this->textPanel->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->answerTextbox);
			this->groupBox2->Location = System::Drawing::Point(37, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(426, 87);
			this->groupBox2->TabIndex = 1;
			this->groupBox2->TabStop = false;
			// 
			// answerTextbox
			// 
			this->answerTextbox->Location = System::Drawing::Point(15, 29);
			this->answerTextbox->Name = L"answerTextbox";
			this->answerTextbox->Size = System::Drawing::Size(385, 30);
			this->answerTextbox->TabIndex = 0;
			// 
			// QuizAppForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 22);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 571);
			this->Controls->Add(this->checkPanel);
			this->Controls->Add(this->textPanel);
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->progressLabel);
			this->Controls->Add(this->radioPanel);
			this->Controls->Add(this->questionLabel);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"QuizAppForm";
			this->Text = L"QuizAppForm";
			this->radioPanel->ResumeLayout(false);
			this->radioGroup->ResumeLayout(false);
			this->radioGroup->PerformLayout();
			this->checkPanel->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->textPanel->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
