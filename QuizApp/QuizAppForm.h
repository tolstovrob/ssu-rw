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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
		   System::Collections::Generic::List<Question^>^ questions;

	public:
		QuizAppForm(void)
		{
			InitializeComponent();

			questions = gcnew System::Collections::Generic::List<Question^>();

			// Radio
			System::Collections::Generic::List<System::String^>^ answers1 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers1 = gcnew System::Collections::Generic::List<System::String^>();

			answers1->Add("6");
			answers1->Add("8");
			answers1->Add("10");

			correctAnswers1->Add("6");

			questions->Add(gcnew Question(
				"Сколько ног у жука?",
				correctAnswers1, answers1));

			// Checkbox
			System::Collections::Generic::List<System::String^>^ answers2 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers2 = gcnew System::Collections::Generic::List<System::String^>();

			answers2->Add("Крылья");
			answers2->Add("Антенны");
			answers2->Add("Ноги");
			answers2->Add("Глаза");

			correctAnswers2->Add("Крылья");
			correctAnswers2->Add("Антенны");

			questions->Add(gcnew Question(
				"Какие органы чувств есть у жуков?",
				correctAnswers2, answers2));

			// Yes/no
			System::Collections::Generic::List<System::String^>^ answers3 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers3 = gcnew System::Collections::Generic::List<System::String^>();

			answers3->Add("Да");
			answers3->Add("Нет");

			correctAnswers3->Add("Да");

			questions->Add(gcnew Question(
				"У жуков есть сложные глаза?",
				correctAnswers3, answers3));

			// Textbox
			System::Collections::Generic::List<System::String^>^ answers4 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers4 = gcnew System::Collections::Generic::List<System::String^>();

			correctAnswers4->Add("Желудок");

			questions->Add(gcnew Question(
				"Как называется орган пищеварения у жуков?",
				correctAnswers4, answers4));

			// Radio
			System::Collections::Generic::List<System::String^>^ answers5 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers5 = gcnew System::Collections::Generic::List<System::String^>();

			answers5->Add("Головной");
			answers5->Add("Торакальный");
			answers5->Add("Брюшной");

			correctAnswers5->Add("Головной");

			questions->Add(gcnew Question(
				"Какой отдел тела жука содержит органы чувств?",
				correctAnswers5, answers5));

			// Checkbox
			System::Collections::Generic::List<System::String^>^ answers6 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers6 = gcnew System::Collections::Generic::List<System::String^>();

			answers6->Add("Крылья");
			answers6->Add("Ноги");
			answers6->Add("Щупики");
			answers6->Add("Хоботок");

			correctAnswers6->Add("Щупики");
			correctAnswers6->Add("Хоботок");

			questions->Add(gcnew Question(
				"Какие части тела жука участвуют в осязании?",
				correctAnswers6, answers6));

			// Yes/no
			System::Collections::Generic::List<System::String^>^ answers7 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers7 = gcnew System::Collections::Generic::List<System::String^>();

			answers7->Add("Да");
			answers7->Add("Нет");

			correctAnswers7->Add("Нет");

			questions->Add(gcnew Question(
				"У всех жуков есть хоботок?",
				correctAnswers7, answers7));

			// Textbox
			System::Collections::Generic::List<System::String^>^ answers8 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers8 = gcnew System::Collections::Generic::List<System::String^>();

			correctAnswers8->Add("Хитин");

			questions->Add(gcnew Question(
				"Из чего состоит экзоскелет жука?",
				correctAnswers8, answers8));

			// Radio
			System::Collections::Generic::List<System::String^>^ answers9 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers9 = gcnew System::Collections::Generic::List<System::String^>();

			answers9->Add("Личинка");
			answers9->Add("Кукла");
			answers9->Add("Взрослая особь");

			correctAnswers9->Add("Взрослая особь");

			questions->Add(gcnew Question(
				"Какой из этих этапов является взрослой формой жука?",
				correctAnswers9, answers9));

			// Checkbox
			System::Collections::Generic::List<System::String^>^ answers10 = gcnew System::Collections::Generic::List<System::String^>();
			System::Collections::Generic::List<System::String^>^ correctAnswers10 = gcnew System::Collections::Generic::List<System::String^>();

			answers10->Add("Брюшко");
			answers10->Add("Голова");
			answers10->Add("Торакс");
			answers10->Add("Крылья");

			correctAnswers10->Add("Брюшко");
			correctAnswers10->Add("Голова");

			questions->Add(gcnew Question(
				"Какие части тела относятся к основным отделам анатомии жука?",
				correctAnswers10, answers10));


			passed = 0;
			total = questions->Count;

			currentQuestion = GetNextQuestion();
			UpdateResults();
			UpdateQuesstionView();
		}

		Question^ GetNextQuestion() {
			if (questions->Count == 0) {
				String^ motivationText = passed / total > 0.85 ? "Сигма бой! Красавчик! Отлично справился!" : passed / total > 0.75 ? "Хорошая работа, так держать!" : passed / total > 0.5 ? "Ты прошел тест... но мог бы и постараться!" : "Как можно было так оплашаться?! Тест уровня семиклассника";
				MessageBox::Show("Тест завершён: " + passed + "/" + total + "\n" + motivationText);
				Application::Exit();
			}

			Random^ random = gcnew Random();
			int randomIndex = random->Next(0, questions->Count);

			Question^ res = questions[randomIndex];
			questions->RemoveAt(randomIndex);
			return res;
		}

		void UpdateQuesstionView() {
			this->questionLabel->Text = currentQuestion->Text;

			if ((currentQuestion->CorrectAnswers->Count == 1) && (currentQuestion->Answers->Count > 1)) {
				DisplayRadio();
				System::Collections::Generic::List<System::Windows::Forms::RadioButton^>^ radios = gcnew System::Collections::Generic::List<System::Windows::Forms::RadioButton^>();

				int yOffset = 20;
				for each (String ^ answer in currentQuestion->Answers) {
					RadioButton^ radioButton = gcnew RadioButton();
					radioButton->Text = answer;
					radioButton->Location = System::Drawing::Point(10, yOffset);
					radioButton->Size = System::Drawing::Size(300, 30);
					radioGroup->Controls->Add(radioButton);
					yOffset += 30;
				}
			}
			else if ((currentQuestion->CorrectAnswers->Count > 1) && (currentQuestion->Answers->Count > 1)) {
				DisplayCheck();
				System::Collections::Generic::List<System::Windows::Forms::CheckBox^>^ checks = gcnew System::Collections::Generic::List<System::Windows::Forms::CheckBox^>();

				int yOffset = 20;
				for each (String ^ answer in currentQuestion->Answers) {
					CheckBox^ checkBox = gcnew CheckBox();
					checkBox->Text = answer;
					checkBox->Location = System::Drawing::Point(10, yOffset);
					checkBox->Size = System::Drawing::Size(300, 30);
					checkGroup->Controls->Add(checkBox);
					yOffset += 30;
				}
			}
			else if ((currentQuestion->CorrectAnswers->Count == 1) && (currentQuestion->Answers->Count == 0)) {
				DisplayText();
			}
		}

		void UpdateResults() {
			this->progressLabel->Text = passed + "/" + total + ", осталось вопросов: " + (questions->Count + 1);
		}

		void DisplayRadio() {
			this->radioGroup->Controls->Clear();

			radioPanel->Visible = true;
			checkPanel->Visible = false;
			textPanel->Visible = false;
		}

		void DisplayCheck() {
			checkGroup->Controls->Clear();

			radioPanel->Visible = false;
			checkPanel->Visible = true;
			textPanel->Visible = false;
		}

		void DisplayText() {
			this->answerTextbox->Clear();

			radioPanel->Visible = false;
			checkPanel->Visible = false;
			textPanel->Visible = true;
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




	private: System::Windows::Forms::Panel^ checkPanel;
private: System::Windows::Forms::GroupBox^ checkGroup;






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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioGroup = (gcnew System::Windows::Forms::GroupBox());
			this->progressLabel = (gcnew System::Windows::Forms::Label());
			this->nextButton = (gcnew System::Windows::Forms::Button());
			this->checkPanel = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->checkGroup = (gcnew System::Windows::Forms::GroupBox());
			this->textPanel = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->answerTextbox = (gcnew System::Windows::Forms::TextBox());
			this->radioPanel->SuspendLayout();
			this->checkPanel->SuspendLayout();
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
			this->radioPanel->Controls->Add(this->label2);
			this->radioPanel->Controls->Add(this->radioGroup);
			this->radioPanel->Location = System::Drawing::Point(50, 200);
			this->radioPanel->Name = L"radioPanel";
			this->radioPanel->Size = System::Drawing::Size(760, 236);
			this->radioPanel->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(473, 54);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 44);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Выберите только один\r\nправильный ответ";
			// 
			// radioGroup
			// 
			this->radioGroup->Location = System::Drawing::Point(27, 22);
			this->radioGroup->Name = L"radioGroup";
			this->radioGroup->Size = System::Drawing::Size(417, 187);
			this->radioGroup->TabIndex = 1;
			this->radioGroup->TabStop = false;
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
			this->nextButton->Click += gcnew System::EventHandler(this, &QuizAppForm::nextButton_Click);
			// 
			// checkPanel
			// 
			this->checkPanel->Controls->Add(this->label3);
			this->checkPanel->Controls->Add(this->checkGroup);
			this->checkPanel->Location = System::Drawing::Point(50, 200);
			this->checkPanel->Name = L"checkPanel";
			this->checkPanel->Size = System::Drawing::Size(760, 233);
			this->checkPanel->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(473, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(253, 44);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Выберите все правильные\r\nответы";
			// 
			// checkGroup
			// 
			this->checkGroup->Location = System::Drawing::Point(37, 19);
			this->checkGroup->Name = L"checkGroup";
			this->checkGroup->Size = System::Drawing::Size(407, 187);
			this->checkGroup->TabIndex = 1;
			this->checkGroup->TabStop = false;
			// 
			// textPanel
			// 
			this->textPanel->Controls->Add(this->label1);
			this->textPanel->Controls->Add(this->groupBox2);
			this->textPanel->Location = System::Drawing::Point(50, 200);
			this->textPanel->Name = L"textPanel";
			this->textPanel->Size = System::Drawing::Size(760, 236);
			this->textPanel->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(34, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(110, 22);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ваш ответ:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->answerTextbox);
			this->groupBox2->Location = System::Drawing::Point(23, 122);
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
			this->Controls->Add(this->nextButton);
			this->Controls->Add(this->progressLabel);
			this->Controls->Add(this->radioPanel);
			this->Controls->Add(this->questionLabel);
			this->Controls->Add(this->checkPanel);
			this->Controls->Add(this->textPanel);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"QuizAppForm";
			this->Text = L"Отвратительный тест про жуков";
			this->radioPanel->ResumeLayout(false);
			this->radioPanel->PerformLayout();
			this->checkPanel->ResumeLayout(false);
			this->checkPanel->PerformLayout();
			this->textPanel->ResumeLayout(false);
			this->textPanel->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void nextButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::Collections::Generic::List<System::String^>^ answers = gcnew System::Collections::Generic::List<System::String^>();

		if ((currentQuestion->CorrectAnswers->Count == 1) && (currentQuestion->Answers->Count > 1)) {
			// radio

			for each (Control ^ control in this->radioGroup->Controls) {
				RadioButton^ radioButton = dynamic_cast<RadioButton^>(control);
				if (radioButton != nullptr && radioButton->Checked) {
					answers->Add(radioButton->Text);
					break;
				}
			}
		}
		else if ((currentQuestion->CorrectAnswers->Count > 1) && (currentQuestion->Answers->Count > 1)) {
			// check

			for each (Control ^ control in this->checkGroup->Controls) {
				CheckBox^ checkBox = dynamic_cast<CheckBox^>(control);
				if (checkBox != nullptr && checkBox->Checked) {
					answers->Add(checkBox->Text);
				}
			}
		}
		else if ((currentQuestion->CorrectAnswers->Count == 1) && (currentQuestion->Answers->Count == 0)) {
			answers->Add(this->answerTextbox->Text);
		}

		if (AreListsEqual(answers, currentQuestion->CorrectAnswers)) {
			passed++;
			MessageBox::Show("Молодец! Абсолютно верно! Ты супер прав! Да, точно в цель!");
		}
		else {
			MessageBox::Show("Нет! Абсолютно неверно! Ты супер неправ! В молоко!");
		}


		currentQuestion = GetNextQuestion();
		UpdateResults();
		UpdateQuesstionView();
	}

	bool AreListsEqual(System::Collections::Generic::List<String^>^ list1, System::Collections::Generic::List<String^>^ list2) {
		if (list1->Count != list2->Count) {
			return false;
		}

		list1->Sort();
		list2->Sort();

		for (int i = 0; i < list1->Count; i++) {
			if (list1[i] != list2[i]) {
				return false;
			}
		}

		return true;
	}
};
}
