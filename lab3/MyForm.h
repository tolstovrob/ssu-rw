#pragma once

namespace RecursiveCalculation {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	double H(long long n, double x) {
		if (n == 0) return 1.0;
		if (n == 1) return 2 * x;
		return (2 * x * H(n - 1, x) - 2 * n * H(n - 2, x));
	} 

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
	private: System::Windows::Forms::Label^ mainTitle;
	protected:
	private: System::Windows::Forms::Label^ xLabel;
	private: System::Windows::Forms::Label^ nLabel;
	private: System::Windows::Forms::TextBox^ xTextBox;
	private: System::Windows::Forms::TextBox^ nTextBox;
	private: System::Windows::Forms::GroupBox^ inputGroup;
	private: System::Windows::Forms::GroupBox^ outputGroup;
	private: System::Windows::Forms::Label^ outputLabel;
	private: System::Windows::Forms::TextBox^ outputTextBox;





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
			this->mainTitle = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->nLabel = (gcnew System::Windows::Forms::Label());
			this->xTextBox = (gcnew System::Windows::Forms::TextBox());
			this->nTextBox = (gcnew System::Windows::Forms::TextBox());
			this->inputGroup = (gcnew System::Windows::Forms::GroupBox());
			this->outputGroup = (gcnew System::Windows::Forms::GroupBox());
			this->outputLabel = (gcnew System::Windows::Forms::Label());
			this->outputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->inputGroup->SuspendLayout();
			this->outputGroup->SuspendLayout();
			this->SuspendLayout();
			// 
			// mainTitle
			// 
			this->mainTitle->AutoSize = true;
			this->mainTitle->Font = (gcnew System::Drawing::Font(L"Cambria", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mainTitle->Location = System::Drawing::Point(64, 64);
			this->mainTitle->Name = L"mainTitle";
			this->mainTitle->Size = System::Drawing::Size(788, 57);
			this->mainTitle->TabIndex = 0;
			this->mainTitle->Text = L"Вычисление многочлена Эрмита";
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->xLabel->Location = System::Drawing::Point(24, 43);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(44, 28);
			this->xLabel->TabIndex = 1;
			this->xLabel->Text = L"x =";
			// 
			// nLabel
			// 
			this->nLabel->AutoSize = true;
			this->nLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->nLabel->Location = System::Drawing::Point(23, 108);
			this->nLabel->Name = L"nLabel";
			this->nLabel->Size = System::Drawing::Size(45, 28);
			this->nLabel->TabIndex = 2;
			this->nLabel->Text = L"n =";
			// 
			// xTextBox
			// 
			this->xTextBox->Location = System::Drawing::Point(74, 39);
			this->xTextBox->Name = L"xTextBox";
			this->xTextBox->Size = System::Drawing::Size(117, 36);
			this->xTextBox->TabIndex = 3;
			this->xTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::updateResult_TextBox);
			// 
			// nTextBox
			// 
			this->nTextBox->Location = System::Drawing::Point(74, 108);
			this->nTextBox->Name = L"nTextBox";
			this->nTextBox->Size = System::Drawing::Size(117, 36);
			this->nTextBox->TabIndex = 4;
			this->nTextBox->TextChanged += gcnew System::EventHandler(this, &MyForm::updateResult_TextBox);
			// 
			// inputGroup
			// 
			this->inputGroup->Controls->Add(this->nTextBox);
			this->inputGroup->Controls->Add(this->xLabel);
			this->inputGroup->Controls->Add(this->xTextBox);
			this->inputGroup->Controls->Add(this->nLabel);
			this->inputGroup->Location = System::Drawing::Point(74, 186);
			this->inputGroup->Name = L"inputGroup";
			this->inputGroup->Size = System::Drawing::Size(283, 170);
			this->inputGroup->TabIndex = 5;
			this->inputGroup->TabStop = false;
			this->inputGroup->Text = L"Что ввели,";
			// 
			// outputGroup
			// 
			this->outputGroup->Controls->Add(this->outputLabel);
			this->outputGroup->Controls->Add(this->outputTextBox);
			this->outputGroup->Location = System::Drawing::Point(388, 186);
			this->outputGroup->Name = L"outputGroup";
			this->outputGroup->Size = System::Drawing::Size(386, 170);
			this->outputGroup->TabIndex = 6;
			this->outputGroup->TabStop = false;
			this->outputGroup->Text = L"то и получили!";
			// 
			// outputLabel
			// 
			this->outputLabel->AutoSize = true;
			this->outputLabel->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->outputLabel->Location = System::Drawing::Point(24, 43);
			this->outputLabel->Name = L"outputLabel";
			this->outputLabel->Size = System::Drawing::Size(93, 28);
			this->outputLabel->TabIndex = 1;
			this->outputLabel->Text = L"Hₙ(x) = ";
			// 
			// outputTextBox
			// 
			this->outputTextBox->Font = (gcnew System::Drawing::Font(L"Cambria", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outputTextBox->ForeColor = System::Drawing::SystemColors::ControlText;
			this->outputTextBox->Location = System::Drawing::Point(123, 39);
			this->outputTextBox->Multiline = true;
			this->outputTextBox->Name = L"outputTextBox";
			this->outputTextBox->ReadOnly = true;
			this->outputTextBox->Size = System::Drawing::Size(239, 105);
			this->outputTextBox->TabIndex = 3;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 28);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(916, 438);
			this->Controls->Add(this->outputGroup);
			this->Controls->Add(this->inputGroup);
			this->Controls->Add(this->mainTitle);
			this->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->MaximumSize = System::Drawing::Size(932, 477);
			this->MinimumSize = System::Drawing::Size(932, 477);
			this->Name = L"MyForm";
			this->Text = L"Рекурсивные вычисления";
			this->inputGroup->ResumeLayout(false);
			this->inputGroup->PerformLayout();
			this->outputGroup->ResumeLayout(false);
			this->outputGroup->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion





private: System::Void updateResult_TextBox(System::Object^ sender, System::EventArgs^ e) {
	double xInput = 0;
	bool resultX = Double::TryParse(this->xTextBox->Text, xInput);

	long long nInput = 0;
	bool resultN = Int64::TryParse(this->nTextBox->Text, nInput);

	if (!resultX && !resultN) {
		this->outputTextBox->Text = "x - не число, n - не целое число";
	}
	else if (!resultX) {
		this->outputTextBox->Text = "x - не число";
	}
	else if (!resultN) {
		this->outputTextBox->Text = "n - не целое число";
	}
	else if (nInput < 0) {
		this->outputTextBox->Text = "Отрицательное число";
	}
	else {
		this->outputTextBox->Text = System::Convert::ToString(H(nInput, xInput));
	}
}
};
}
