#pragma once
#include <climits>

namespace HandlingDataGridView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для App
	/// </summary>
	public ref class App : public System::Windows::Forms::Form
	{
	public:
		App(void)
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
		~App()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ arrayGridView;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Массив;
	private: System::Windows::Forms::Label^ taskLabel;
	private: System::Windows::Forms::Label^ titleLabel2;
	private: System::Windows::Forms::Button^ addButton;
	private: System::Windows::Forms::Button^ countButton;
	private: System::Windows::Forms::TextBox^ outputOddSumTextBox;
	private: System::Windows::Forms::Button^ popButton;
	private: System::Windows::Forms::TextBox^ outputMinsTextBox;
	private: System::Windows::Forms::Label^ sumOddLabel;
	private: System::Windows::Forms::Label^ minsLabel;



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
			this->arrayGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Массив = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->taskLabel = (gcnew System::Windows::Forms::Label());
			this->titleLabel2 = (gcnew System::Windows::Forms::Label());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->countButton = (gcnew System::Windows::Forms::Button());
			this->outputOddSumTextBox = (gcnew System::Windows::Forms::TextBox());
			this->popButton = (gcnew System::Windows::Forms::Button());
			this->outputMinsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->sumOddLabel = (gcnew System::Windows::Forms::Label());
			this->minsLabel = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrayGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// arrayGridView
			// 
			this->arrayGridView->AllowUserToAddRows = false;
			this->arrayGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->arrayGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Массив });
			this->arrayGridView->Location = System::Drawing::Point(29, 119);
			this->arrayGridView->Name = L"arrayGridView";
			this->arrayGridView->Size = System::Drawing::Size(143, 402);
			this->arrayGridView->TabIndex = 0;
			// 
			// Массив
			// 
			this->Массив->HeaderText = L"Массив";
			this->Массив->Name = L"Массив";
			// 
			// taskLabel
			// 
			this->taskLabel->AutoSize = true;
			this->taskLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->taskLabel->Location = System::Drawing::Point(24, 24);
			this->taskLabel->Name = L"taskLabel";
			this->taskLabel->Size = System::Drawing::Size(634, 28);
			this->taskLabel->TabIndex = 1;
			this->taskLabel->Text = L"Найти сумму нечётных элементов с чётными индексами.";
			// 
			// titleLabel2
			// 
			this->titleLabel2->AutoSize = true;
			this->titleLabel2->Font = (gcnew System::Drawing::Font(L"Cambria", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->titleLabel2->Location = System::Drawing::Point(24, 62);
			this->titleLabel2->Name = L"titleLabel2";
			this->titleLabel2->Size = System::Drawing::Size(559, 28);
			this->titleLabel2->TabIndex = 2;
			this->titleLabel2->Text = L"Вывести номера минимальных чётных элементов";
			// 
			// addButton
			// 
			this->addButton->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addButton->Location = System::Drawing::Point(189, 176);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(337, 49);
			this->addButton->TabIndex = 3;
			this->addButton->Text = L"Добавить элемент";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &App::addElement);
			// 
			// countButton
			// 
			this->countButton->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->countButton->Location = System::Drawing::Point(189, 119);
			this->countButton->Name = L"countButton";
			this->countButton->Size = System::Drawing::Size(337, 51);
			this->countButton->TabIndex = 5;
			this->countButton->Text = L"Подсчитать";
			this->countButton->UseVisualStyleBackColor = true;
			this->countButton->Click += gcnew System::EventHandler(this, &App::countArray);
			// 
			// outputOddSumTextBox
			// 
			this->outputOddSumTextBox->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outputOddSumTextBox->Location = System::Drawing::Point(273, 452);
			this->outputOddSumTextBox->Name = L"outputOddSumTextBox";
			this->outputOddSumTextBox->ReadOnly = true;
			this->outputOddSumTextBox->Size = System::Drawing::Size(253, 26);
			this->outputOddSumTextBox->TabIndex = 6;
			// 
			// popButton
			// 
			this->popButton->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->popButton->Location = System::Drawing::Point(189, 231);
			this->popButton->Name = L"popButton";
			this->popButton->Size = System::Drawing::Size(337, 53);
			this->popButton->TabIndex = 7;
			this->popButton->Text = L"Удалить последний элемент";
			this->popButton->UseVisualStyleBackColor = true;
			this->popButton->Click += gcnew System::EventHandler(this, &App::popElement);
			// 
			// outputMinsTextBox
			// 
			this->outputMinsTextBox->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outputMinsTextBox->Location = System::Drawing::Point(273, 484);
			this->outputMinsTextBox->Name = L"outputMinsTextBox";
			this->outputMinsTextBox->ReadOnly = true;
			this->outputMinsTextBox->Size = System::Drawing::Size(253, 26);
			this->outputMinsTextBox->TabIndex = 8;
			// 
			// sumOddLabel
			// 
			this->sumOddLabel->AutoSize = true;
			this->sumOddLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sumOddLabel->Location = System::Drawing::Point(186, 452);
			this->sumOddLabel->Name = L"sumOddLabel";
			this->sumOddLabel->Size = System::Drawing::Size(60, 19);
			this->sumOddLabel->TabIndex = 9;
			this->sumOddLabel->Text = L"Сумма:";
			// 
			// minsLabel
			// 
			this->minsLabel->AutoSize = true;
			this->minsLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minsLabel->Location = System::Drawing::Point(186, 487);
			this->minsLabel->Name = L"minsLabel";
			this->minsLabel->Size = System::Drawing::Size(69, 19);
			this->minsLabel->TabIndex = 10;
			this->minsLabel->Text = L"Номера:";
			// 
			// App
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(674, 565);
			this->Controls->Add(this->minsLabel);
			this->Controls->Add(this->sumOddLabel);
			this->Controls->Add(this->outputMinsTextBox);
			this->Controls->Add(this->popButton);
			this->Controls->Add(this->outputOddSumTextBox);
			this->Controls->Add(this->countButton);
			this->Controls->Add(this->addButton);
			this->Controls->Add(this->titleLabel2);
			this->Controls->Add(this->taskLabel);
			this->Controls->Add(this->arrayGridView);
			this->MaximumSize = System::Drawing::Size(690, 604);
			this->MinimumSize = System::Drawing::Size(690, 604);
			this->Name = L"App";
			this->Text = L"Обработка табличных данных";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->arrayGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void countArray(System::Object^ sender, System::EventArgs^ e) {
	long long sum = 0;
	long long minEl = LLONG_MAX;
	
	String^ columnName = "Массив";
	String^ resultSum;
	String^ resultIdx;

	bool error = false;
	bool ifOdds = false;
	bool ifOddsOnEvenIdx = false;
	bool ifEvens = false;

	for (int i = 0; i < this->arrayGridView->RowCount; ++i) {
		long long val;
		Object^ cellValue = this->arrayGridView->Rows[i]->Cells[columnName]->Value;

		if (cellValue != nullptr) {
			try {
				val = Convert::ToInt64(cellValue);
				if (val % 2 != 0 && i % 2 == 0) {
					sum += Convert::ToInt64(cellValue);
					ifOddsOnEvenIdx = true;
					ifOdds = true;
				}
				else if (val % 2 != 0) ifOdds = true;
				else {
					ifEvens = true;
					if (val < minEl) {
						minEl = val;
						resultIdx = Convert::ToString(i);
					}
					else if (val == minEl) {
						resultIdx += ", " + Convert::ToString(i);
					}
				}
			}
			catch (FormatException ^ e) {
				resultSum = "В таблице есть не числа";
				resultIdx = resultSum;
				error = true;
				break;
			}
		}
	}

	if (!error) resultSum = Convert::ToString(sum);
	if (!error && !ifOddsOnEvenIdx) resultSum = "Таких элементов нет";
	if (!error && !ifOdds) resultSum = "Нечётных элементов нет";

	if (!error && !ifEvens) resultIdx = "Чётных элементов нет";

	this->outputOddSumTextBox->Text = resultSum;
	this->outputMinsTextBox->Text = resultIdx;
}

private: System::Void addElement(System::Object^ sender, System::EventArgs^ e) {
	this->arrayGridView->Rows->Add(1);
}

private: System::Void popElement(System::Object^ sender, System::EventArgs^ e) {
	if (this->arrayGridView->CurrentRow == nullptr) {
		return;
	}

	if (!this->arrayGridView->CurrentRow->IsNewRow) {
		int i = this->arrayGridView->CurrentRow->Index;
		this->arrayGridView->Rows->Remove(this->arrayGridView->Rows[i]);
	}
}
};
}
