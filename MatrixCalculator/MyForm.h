#pragma once

namespace MatrixCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ matrixInputInitial;
	private: System::Windows::Forms::DataGridView^ matrixInputExtra;
	protected:

	protected:

	private: System::Windows::Forms::GroupBox^ inputGroup;
	private: System::Windows::Forms::Button^ addRowColumnInitialButton;

	private: System::Windows::Forms::Button^ removeColumnInitialButton;

	private: System::Windows::Forms::Button^ addColumnInitialButton;

	private: System::Windows::Forms::Button^ removeRowInitialButton;

	private: System::Windows::Forms::Button^ addRowInitialButton;

	private: System::Windows::Forms::Label^ vectorLabel;
	private: System::Windows::Forms::Label^ initialMatrixLabel;
	private: System::Windows::Forms::TextBox^ inputInitialErrorProvider;

	private: System::Windows::Forms::Button^ addRowColumnExtraButton;

	private: System::Windows::Forms::Button^ removeColumnExtraButton;

	private: System::Windows::Forms::Button^ addColumnExtraButton;

	private: System::Windows::Forms::Button^ removeRowExtraButton;

	private: System::Windows::Forms::Button^ addRowExtraButton;
	private: System::Windows::Forms::TextBox^ inputExtraErrorProvider;
	private: System::Windows::Forms::GroupBox^ actionsGroup;
	private: System::Windows::Forms::Button^ rankButton;
	private: System::Windows::Forms::Button^ determinateButton;
	private: System::Windows::Forms::Button^ transposeButton;
	private: System::Windows::Forms::Button^ vectorMultiplyButton;
	private: System::Windows::Forms::Button^ scalarMultiplyButton;
	private: System::Windows::Forms::Button^ diffButton;
	private: System::Windows::Forms::Button^ sumButton;
	private: System::Windows::Forms::Button^ matrixMultiplyButton;
	private: System::Windows::Forms::GroupBox^ outputGroup;
	private: System::Windows::Forms::TextBox^ outputErrorProvider;
	private: System::Windows::Forms::Label^ outputMatrixLabel;
	private: System::Windows::Forms::DataGridView^ matrixOutput;



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
			this->matrixInputInitial = (gcnew System::Windows::Forms::DataGridView());
			this->matrixInputExtra = (gcnew System::Windows::Forms::DataGridView());
			this->inputGroup = (gcnew System::Windows::Forms::GroupBox());
			this->inputExtraErrorProvider = (gcnew System::Windows::Forms::TextBox());
			this->addRowColumnExtraButton = (gcnew System::Windows::Forms::Button());
			this->removeColumnExtraButton = (gcnew System::Windows::Forms::Button());
			this->addColumnExtraButton = (gcnew System::Windows::Forms::Button());
			this->removeRowExtraButton = (gcnew System::Windows::Forms::Button());
			this->addRowExtraButton = (gcnew System::Windows::Forms::Button());
			this->inputInitialErrorProvider = (gcnew System::Windows::Forms::TextBox());
			this->addRowColumnInitialButton = (gcnew System::Windows::Forms::Button());
			this->removeColumnInitialButton = (gcnew System::Windows::Forms::Button());
			this->addColumnInitialButton = (gcnew System::Windows::Forms::Button());
			this->removeRowInitialButton = (gcnew System::Windows::Forms::Button());
			this->addRowInitialButton = (gcnew System::Windows::Forms::Button());
			this->vectorLabel = (gcnew System::Windows::Forms::Label());
			this->initialMatrixLabel = (gcnew System::Windows::Forms::Label());
			this->actionsGroup = (gcnew System::Windows::Forms::GroupBox());
			this->rankButton = (gcnew System::Windows::Forms::Button());
			this->determinateButton = (gcnew System::Windows::Forms::Button());
			this->transposeButton = (gcnew System::Windows::Forms::Button());
			this->vectorMultiplyButton = (gcnew System::Windows::Forms::Button());
			this->scalarMultiplyButton = (gcnew System::Windows::Forms::Button());
			this->diffButton = (gcnew System::Windows::Forms::Button());
			this->sumButton = (gcnew System::Windows::Forms::Button());
			this->matrixMultiplyButton = (gcnew System::Windows::Forms::Button());
			this->outputGroup = (gcnew System::Windows::Forms::GroupBox());
			this->outputErrorProvider = (gcnew System::Windows::Forms::TextBox());
			this->outputMatrixLabel = (gcnew System::Windows::Forms::Label());
			this->matrixOutput = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputInitial))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputExtra))->BeginInit();
			this->inputGroup->SuspendLayout();
			this->actionsGroup->SuspendLayout();
			this->outputGroup->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOutput))->BeginInit();
			this->SuspendLayout();
			// 
			// matrixInputInitial
			// 
			this->matrixInputInitial->AllowUserToAddRows = false;
			this->matrixInputInitial->AllowUserToDeleteRows = false;
			this->matrixInputInitial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixInputInitial->Location = System::Drawing::Point(23, 56);
			this->matrixInputInitial->Name = L"matrixInputInitial";
			this->matrixInputInitial->Size = System::Drawing::Size(384, 294);
			this->matrixInputInitial->TabIndex = 0;
			// 
			// matrixInputExtra
			// 
			this->matrixInputExtra->AllowUserToAddRows = false;
			this->matrixInputExtra->AllowUserToDeleteRows = false;
			this->matrixInputExtra->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixInputExtra->Location = System::Drawing::Point(576, 56);
			this->matrixInputExtra->Name = L"matrixInputExtra";
			this->matrixInputExtra->Size = System::Drawing::Size(386, 294);
			this->matrixInputExtra->TabIndex = 1;
			// 
			// inputGroup
			// 
			this->inputGroup->Controls->Add(this->inputExtraErrorProvider);
			this->inputGroup->Controls->Add(this->addRowColumnExtraButton);
			this->inputGroup->Controls->Add(this->removeColumnExtraButton);
			this->inputGroup->Controls->Add(this->addColumnExtraButton);
			this->inputGroup->Controls->Add(this->removeRowExtraButton);
			this->inputGroup->Controls->Add(this->addRowExtraButton);
			this->inputGroup->Controls->Add(this->inputInitialErrorProvider);
			this->inputGroup->Controls->Add(this->addRowColumnInitialButton);
			this->inputGroup->Controls->Add(this->removeColumnInitialButton);
			this->inputGroup->Controls->Add(this->addColumnInitialButton);
			this->inputGroup->Controls->Add(this->removeRowInitialButton);
			this->inputGroup->Controls->Add(this->addRowInitialButton);
			this->inputGroup->Controls->Add(this->vectorLabel);
			this->inputGroup->Controls->Add(this->initialMatrixLabel);
			this->inputGroup->Controls->Add(this->matrixInputInitial);
			this->inputGroup->Controls->Add(this->matrixInputExtra);
			this->inputGroup->Location = System::Drawing::Point(23, 22);
			this->inputGroup->Name = L"inputGroup";
			this->inputGroup->Size = System::Drawing::Size(1148, 411);
			this->inputGroup->TabIndex = 2;
			this->inputGroup->TabStop = false;
			this->inputGroup->Text = L"Ввод данных";
			// 
			// inputExtraErrorProvider
			// 
			this->inputExtraErrorProvider->Enabled = false;
			this->inputExtraErrorProvider->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputExtraErrorProvider->Location = System::Drawing::Point(576, 360);
			this->inputExtraErrorProvider->Name = L"inputExtraErrorProvider";
			this->inputExtraErrorProvider->Size = System::Drawing::Size(549, 32);
			this->inputExtraErrorProvider->TabIndex = 15;
			// 
			// addRowColumnExtraButton
			// 
			this->addRowColumnExtraButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->addRowColumnExtraButton->Location = System::Drawing::Point(968, 300);
			this->addRowColumnExtraButton->Name = L"addRowColumnExtraButton";
			this->addRowColumnExtraButton->Size = System::Drawing::Size(157, 50);
			this->addRowColumnExtraButton->TabIndex = 14;
			this->addRowColumnExtraButton->Text = L"Увеличить";
			this->addRowColumnExtraButton->UseVisualStyleBackColor = true;
			this->addRowColumnExtraButton->Click += gcnew System::EventHandler(this, &MyForm::addRowColumnExtraButton_Click);
			// 
			// removeColumnExtraButton
			// 
			this->removeColumnExtraButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->removeColumnExtraButton->Location = System::Drawing::Point(968, 241);
			this->removeColumnExtraButton->Name = L"removeColumnExtraButton";
			this->removeColumnExtraButton->Size = System::Drawing::Size(157, 50);
			this->removeColumnExtraButton->TabIndex = 13;
			this->removeColumnExtraButton->Text = L"Удалить столбец";
			this->removeColumnExtraButton->UseVisualStyleBackColor = true;
			this->removeColumnExtraButton->Click += gcnew System::EventHandler(this, &MyForm::removeColumnExtraButton_Click);
			// 
			// addColumnExtraButton
			// 
			this->addColumnExtraButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->addColumnExtraButton->Location = System::Drawing::Point(968, 180);
			this->addColumnExtraButton->Name = L"addColumnExtraButton";
			this->addColumnExtraButton->Size = System::Drawing::Size(157, 50);
			this->addColumnExtraButton->TabIndex = 12;
			this->addColumnExtraButton->Text = L"Добавить столбец";
			this->addColumnExtraButton->UseVisualStyleBackColor = true;
			this->addColumnExtraButton->Click += gcnew System::EventHandler(this, &MyForm::addColumnExtraButton_Click);
			// 
			// removeRowExtraButton
			// 
			this->removeRowExtraButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->removeRowExtraButton->Location = System::Drawing::Point(968, 119);
			this->removeRowExtraButton->Name = L"removeRowExtraButton";
			this->removeRowExtraButton->Size = System::Drawing::Size(157, 50);
			this->removeRowExtraButton->TabIndex = 11;
			this->removeRowExtraButton->Text = L"Удалить строку";
			this->removeRowExtraButton->UseVisualStyleBackColor = true;
			this->removeRowExtraButton->Click += gcnew System::EventHandler(this, &MyForm::removeRowExtraButton_Click);
			// 
			// addRowExtraButton
			// 
			this->addRowExtraButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addRowExtraButton->Location = System::Drawing::Point(968, 56);
			this->addRowExtraButton->Name = L"addRowExtraButton";
			this->addRowExtraButton->Size = System::Drawing::Size(157, 50);
			this->addRowExtraButton->TabIndex = 10;
			this->addRowExtraButton->Text = L"Добавить строку";
			this->addRowExtraButton->UseVisualStyleBackColor = true;
			this->addRowExtraButton->Click += gcnew System::EventHandler(this, &MyForm::addRowExtraButton_Click);
			// 
			// inputInitialErrorProvider
			// 
			this->inputInitialErrorProvider->Enabled = false;
			this->inputInitialErrorProvider->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->inputInitialErrorProvider->Location = System::Drawing::Point(24, 360);
			this->inputInitialErrorProvider->Name = L"inputInitialErrorProvider";
			this->inputInitialErrorProvider->Size = System::Drawing::Size(546, 32);
			this->inputInitialErrorProvider->TabIndex = 9;
			// 
			// addRowColumnInitialButton
			// 
			this->addRowColumnInitialButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->addRowColumnInitialButton->Location = System::Drawing::Point(413, 300);
			this->addRowColumnInitialButton->Name = L"addRowColumnInitialButton";
			this->addRowColumnInitialButton->Size = System::Drawing::Size(157, 50);
			this->addRowColumnInitialButton->TabIndex = 8;
			this->addRowColumnInitialButton->Text = L"Увеличить";
			this->addRowColumnInitialButton->UseVisualStyleBackColor = true;
			this->addRowColumnInitialButton->Click += gcnew System::EventHandler(this, &MyForm::addRowColumnInitialButton_Click);
			// 
			// removeColumnInitialButton
			// 
			this->removeColumnInitialButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->removeColumnInitialButton->Location = System::Drawing::Point(413, 241);
			this->removeColumnInitialButton->Name = L"removeColumnInitialButton";
			this->removeColumnInitialButton->Size = System::Drawing::Size(157, 50);
			this->removeColumnInitialButton->TabIndex = 7;
			this->removeColumnInitialButton->Text = L"Удалить столбец";
			this->removeColumnInitialButton->UseVisualStyleBackColor = true;
			this->removeColumnInitialButton->Click += gcnew System::EventHandler(this, &MyForm::removeColumnInitialButton_Click);
			// 
			// addColumnInitialButton
			// 
			this->addColumnInitialButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->addColumnInitialButton->Location = System::Drawing::Point(413, 180);
			this->addColumnInitialButton->Name = L"addColumnInitialButton";
			this->addColumnInitialButton->Size = System::Drawing::Size(157, 50);
			this->addColumnInitialButton->TabIndex = 6;
			this->addColumnInitialButton->Text = L"Добавить столбец";
			this->addColumnInitialButton->UseVisualStyleBackColor = true;
			this->addColumnInitialButton->Click += gcnew System::EventHandler(this, &MyForm::addColumnInitialButton_Click);
			// 
			// removeRowInitialButton
			// 
			this->removeRowInitialButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->removeRowInitialButton->Location = System::Drawing::Point(413, 119);
			this->removeRowInitialButton->Name = L"removeRowInitialButton";
			this->removeRowInitialButton->Size = System::Drawing::Size(157, 50);
			this->removeRowInitialButton->TabIndex = 5;
			this->removeRowInitialButton->Text = L"Удалить строку";
			this->removeRowInitialButton->UseVisualStyleBackColor = true;
			this->removeRowInitialButton->Click += gcnew System::EventHandler(this, &MyForm::removeRowInitialButton_Click);
			// 
			// addRowInitialButton
			// 
			this->addRowInitialButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->addRowInitialButton->Location = System::Drawing::Point(413, 56);
			this->addRowInitialButton->Name = L"addRowInitialButton";
			this->addRowInitialButton->Size = System::Drawing::Size(157, 50);
			this->addRowInitialButton->TabIndex = 4;
			this->addRowInitialButton->Text = L"Добавить строку";
			this->addRowInitialButton->UseVisualStyleBackColor = true;
			this->addRowInitialButton->Click += gcnew System::EventHandler(this, &MyForm::addRowInitialButton_Click);
			// 
			// vectorLabel
			// 
			this->vectorLabel->AutoSize = true;
			this->vectorLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->vectorLabel->Location = System::Drawing::Point(571, 28);
			this->vectorLabel->Name = L"vectorLabel";
			this->vectorLabel->Size = System::Drawing::Size(259, 25);
			this->vectorLabel->TabIndex = 3;
			this->vectorLabel->Text = L"Дополнительная матрица";
			// 
			// initialMatrixLabel
			// 
			this->initialMatrixLabel->AutoSize = true;
			this->initialMatrixLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->initialMatrixLabel->Location = System::Drawing::Point(18, 28);
			this->initialMatrixLabel->Name = L"initialMatrixLabel";
			this->initialMatrixLabel->Size = System::Drawing::Size(187, 25);
			this->initialMatrixLabel->TabIndex = 2;
			this->initialMatrixLabel->Text = L"Исходная матрица";
			// 
			// actionsGroup
			// 
			this->actionsGroup->Controls->Add(this->rankButton);
			this->actionsGroup->Controls->Add(this->determinateButton);
			this->actionsGroup->Controls->Add(this->transposeButton);
			this->actionsGroup->Controls->Add(this->vectorMultiplyButton);
			this->actionsGroup->Controls->Add(this->scalarMultiplyButton);
			this->actionsGroup->Controls->Add(this->diffButton);
			this->actionsGroup->Controls->Add(this->sumButton);
			this->actionsGroup->Controls->Add(this->matrixMultiplyButton);
			this->actionsGroup->Location = System::Drawing::Point(23, 448);
			this->actionsGroup->Name = L"actionsGroup";
			this->actionsGroup->Size = System::Drawing::Size(1148, 100);
			this->actionsGroup->TabIndex = 3;
			this->actionsGroup->TabStop = false;
			this->actionsGroup->Text = L"Действия";
			// 
			// rankButton
			// 
			this->rankButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->rankButton->Location = System::Drawing::Point(996, 30);
			this->rankButton->Name = L"rankButton";
			this->rankButton->Size = System::Drawing::Size(140, 46);
			this->rankButton->TabIndex = 7;
			this->rankButton->Text = L"Ранг";
			this->rankButton->UseVisualStyleBackColor = true;
			// 
			// determinateButton
			// 
			this->determinateButton->Enabled = false;
			this->determinateButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->determinateButton->Location = System::Drawing::Point(850, 30);
			this->determinateButton->Name = L"determinateButton";
			this->determinateButton->Size = System::Drawing::Size(140, 46);
			this->determinateButton->TabIndex = 6;
			this->determinateButton->Text = L"Определитель";
			this->determinateButton->UseVisualStyleBackColor = true;
			// 
			// transposeButton
			// 
			this->transposeButton->Enabled = false;
			this->transposeButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->transposeButton->Location = System::Drawing::Point(704, 30);
			this->transposeButton->Name = L"transposeButton";
			this->transposeButton->Size = System::Drawing::Size(140, 46);
			this->transposeButton->TabIndex = 5;
			this->transposeButton->Text = L"Транспонировать";
			this->transposeButton->UseVisualStyleBackColor = true;
			this->transposeButton->Click += gcnew System::EventHandler(this, &MyForm::transposeButton_Click);
			// 
			// vectorMultiplyButton
			// 
			this->vectorMultiplyButton->Enabled = false;
			this->vectorMultiplyButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->vectorMultiplyButton->Location = System::Drawing::Point(567, 30);
			this->vectorMultiplyButton->Name = L"vectorMultiplyButton";
			this->vectorMultiplyButton->Size = System::Drawing::Size(131, 46);
			this->vectorMultiplyButton->TabIndex = 4;
			this->vectorMultiplyButton->Text = L"Векторное произведение";
			this->vectorMultiplyButton->UseVisualStyleBackColor = true;
			// 
			// scalarMultiplyButton
			// 
			this->scalarMultiplyButton->Enabled = false;
			this->scalarMultiplyButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->scalarMultiplyButton->Location = System::Drawing::Point(430, 30);
			this->scalarMultiplyButton->Name = L"scalarMultiplyButton";
			this->scalarMultiplyButton->Size = System::Drawing::Size(131, 46);
			this->scalarMultiplyButton->TabIndex = 3;
			this->scalarMultiplyButton->Text = L"Скалярное произведение";
			this->scalarMultiplyButton->UseVisualStyleBackColor = true;
			// 
			// diffButton
			// 
			this->diffButton->Enabled = false;
			this->diffButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->diffButton->Location = System::Drawing::Point(150, 30);
			this->diffButton->Name = L"diffButton";
			this->diffButton->Size = System::Drawing::Size(131, 46);
			this->diffButton->TabIndex = 2;
			this->diffButton->Text = L"Разность";
			this->diffButton->UseVisualStyleBackColor = true;
			// 
			// sumButton
			// 
			this->sumButton->Enabled = false;
			this->sumButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->sumButton->Location = System::Drawing::Point(10, 30);
			this->sumButton->Name = L"sumButton";
			this->sumButton->Size = System::Drawing::Size(131, 46);
			this->sumButton->TabIndex = 1;
			this->sumButton->Text = L"Сумма";
			this->sumButton->UseVisualStyleBackColor = true;
			this->sumButton->Click += gcnew System::EventHandler(this, &MyForm::sumButton_Click);
			// 
			// matrixMultiplyButton
			// 
			this->matrixMultiplyButton->Enabled = false;
			this->matrixMultiplyButton->Font = (gcnew System::Drawing::Font(L"Cambria", 11));
			this->matrixMultiplyButton->Location = System::Drawing::Point(291, 30);
			this->matrixMultiplyButton->Name = L"matrixMultiplyButton";
			this->matrixMultiplyButton->Size = System::Drawing::Size(131, 46);
			this->matrixMultiplyButton->TabIndex = 0;
			this->matrixMultiplyButton->Text = L"Матричное произведение";
			this->matrixMultiplyButton->UseVisualStyleBackColor = true;
			// 
			// outputGroup
			// 
			this->outputGroup->Controls->Add(this->outputErrorProvider);
			this->outputGroup->Controls->Add(this->outputMatrixLabel);
			this->outputGroup->Controls->Add(this->matrixOutput);
			this->outputGroup->Location = System::Drawing::Point(1197, 22);
			this->outputGroup->Name = L"outputGroup";
			this->outputGroup->Size = System::Drawing::Size(434, 411);
			this->outputGroup->TabIndex = 4;
			this->outputGroup->TabStop = false;
			this->outputGroup->Text = L"Вывод данных";
			// 
			// outputErrorProvider
			// 
			this->outputErrorProvider->Enabled = false;
			this->outputErrorProvider->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outputErrorProvider->Location = System::Drawing::Point(24, 360);
			this->outputErrorProvider->Name = L"outputErrorProvider";
			this->outputErrorProvider->Size = System::Drawing::Size(383, 32);
			this->outputErrorProvider->TabIndex = 9;
			// 
			// outputMatrixLabel
			// 
			this->outputMatrixLabel->AccessibleDescription = L"";
			this->outputMatrixLabel->AutoSize = true;
			this->outputMatrixLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->outputMatrixLabel->Location = System::Drawing::Point(18, 28);
			this->outputMatrixLabel->Name = L"outputMatrixLabel";
			this->outputMatrixLabel->Size = System::Drawing::Size(262, 25);
			this->outputMatrixLabel->TabIndex = 2;
			this->outputMatrixLabel->Text = L"Результирующая матрица";
			// 
			// matrixOutput
			// 
			this->matrixOutput->AllowUserToAddRows = false;
			this->matrixOutput->AllowUserToDeleteRows = false;
			this->matrixOutput->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixOutput->Location = System::Drawing::Point(23, 56);
			this->matrixOutput->Name = L"matrixOutput";
			this->matrixOutput->Size = System::Drawing::Size(384, 294);
			this->matrixOutput->TabIndex = 0;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1657, 573);
			this->Controls->Add(this->outputGroup);
			this->Controls->Add(this->actionsGroup);
			this->Controls->Add(this->inputGroup);
			this->Name = L"MyForm";
			this->Text = L"MatrixCalculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputInitial))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputExtra))->EndInit();
			this->inputGroup->ResumeLayout(false);
			this->inputGroup->PerformLayout();
			this->actionsGroup->ResumeLayout(false);
			this->outputGroup->ResumeLayout(false);
			this->outputGroup->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixOutput))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: void CheckControls() {
		this->sumButton->Enabled = false;
		this->diffButton->Enabled = false;
		this->matrixMultiplyButton->Enabled = false;
		this->scalarMultiplyButton->Enabled = false;
		this->vectorMultiplyButton->Enabled = false;
		this->transposeButton->Enabled = false;
		this->determinateButton->Enabled = false;

		Int32 matrixInputInitialRows = this->matrixInputInitial->RowCount;
		Int32 matrixInputInitialColumns = this->matrixInputInitial->ColumnCount;
		Int32 matrixInputExtraRows = this->matrixInputExtra->RowCount;
		Int32 matrixInputExtraColumns = this->matrixInputExtra->ColumnCount;

		if (matrixInputInitialRows == 0 || matrixInputInitialColumns == 0) {
			return;
		}
		else {
			this->transposeButton->Enabled = true;
		}

		if ((matrixInputInitialRows == matrixInputExtraRows) &&
			(matrixInputInitialColumns == matrixInputExtraColumns)) {
			this->sumButton->Enabled = true;
			this->diffButton->Enabled = true;
		}

		if ((matrixInputInitialColumns == matrixInputExtraRows) ||
			((matrixInputExtraRows == 1) && (matrixInputExtraColumns == 1)) ||
			((matrixInputExtraRows == matrixInputInitialRows) && (matrixInputExtraColumns == 1))) {
			this->matrixMultiplyButton->Enabled = true;
		}

		if ((matrixInputInitialRows == matrixInputExtraRows) &&
			(matrixInputInitialColumns == matrixInputExtraColumns) &&
			(matrixInputInitialColumns == 1)) {
			this->scalarMultiplyButton->Enabled = true;
		}

		if (matrixInputInitialRows == matrixInputInitialColumns) {
			this->determinateButton->Enabled = true;
		}

		if ((matrixInputInitialRows == matrixInputExtraRows) &&
			(matrixInputInitialRows == matrixInputExtraColumns) &&
			(matrixInputInitialRows == matrixInputInitialColumns) &&
			(matrixInputInitialRows == 3)) {
			this->vectorMultiplyButton->Enabled = true;
		}
	}

	private: void ClearAll() {
		CheckControls();
		this->inputInitialErrorProvider->Text = "";
		this->inputExtraErrorProvider->Text = "";
		this->outputErrorProvider->Text = "";
	}

	// Initial Matrix
	private: System::Void addRowInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (this->matrixInputInitial->ColumnCount) {
			this->matrixInputInitial->Rows->Add(1);
		}
		else {
			this->inputInitialErrorProvider->Text = "Сначала добавьте столбец";
		}
		CheckControls();
	}

	private: System::Void removeRowInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (!this->matrixInputInitial->RowCount) {
			this->inputInitialErrorProvider->Text = "Нет строк для удаления";
			CheckControls();
			return;
		}
		if (this->matrixInputInitial->SelectedRows->Count > 0) {
			for (int i = 0; i < this->matrixInputInitial->SelectedRows->Count; i++) {
				int index = this->matrixInputInitial->SelectedRows[i]->Index;
				try {
					this->matrixInputInitial->Rows->RemoveAt(index);
				}
				catch (...) {
					this->inputInitialErrorProvider->Text = "Не удалось удалить строку " + index;
					CheckControls();
					return;
				}
			}
		}
		else {
			int index;
			try { index = this->matrixInputInitial->CurrentCell->RowIndex; }
			catch (...) {}
			if (index != -1) {
				try {
					this->matrixInputInitial->Rows->RemoveAt(index);
				}
				catch (...) {
					this->inputInitialErrorProvider->Text = "Не удалось удалить строку " + index;
					CheckControls();
					return;
				}
			}
			else	this->inputInitialErrorProvider->Text = "Ошибка удаления строк";
		}
		CheckControls();
	}

	private: System::Void addColumnInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		this->matrixInputInitial->Columns->Add("", "");
		CheckControls();
	}

	private: System::Void removeColumnInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		try {
			int index = this->matrixInputInitial->ColumnCount - 1;
			this->matrixInputInitial->Columns->RemoveAt(index);
		}
		catch (...) {
			this->inputInitialErrorProvider->Text = "Не удалось удалить столбец";
		}
		finally {
			CheckControls();
		}
	}

	private: System::Void addRowColumnInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		addColumnInitialButton_Click(sender, e);
		addRowInitialButton_Click(sender, e);
		CheckControls();
	}

	// Extra Matrix
	private: System::Void addRowExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (this->matrixInputExtra->ColumnCount) {
			this->matrixInputExtra->Rows->Add(1);
		}
		else {
			this->inputExtraErrorProvider->Text = "Сначала добавьте столбец";
		}
		CheckControls();
	}

	private: System::Void removeRowExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if (!this->matrixInputExtra->RowCount) {
			this->inputExtraErrorProvider->Text = "Нет строк для удаления";
			CheckControls();
			return;
		}
		if (this->matrixInputExtra->SelectedRows->Count > 0) {
			for (int i = 0; i < this->matrixInputExtra->SelectedRows->Count; i++) {
				int index = this->matrixInputExtra->SelectedRows[i]->Index;
				try {
					this->matrixInputExtra->Rows->RemoveAt(index);
				}
				catch (...) {
					this->inputExtraErrorProvider->Text = "Не удалось удалить строку " + index;
					CheckControls();
					return;
				}
			}
		}
		else {
			int index;
			try { index = this->matrixInputExtra->CurrentCell->RowIndex; }
			catch (...) {}
			if (index != -1) {
				try {
					this->matrixInputExtra->Rows->RemoveAt(index);
				}
				catch (...) {
					this->inputExtraErrorProvider->Text = "Не удалось удалить строку " + index;
					CheckControls();
					return;
				}
			}
			else	this->inputExtraErrorProvider->Text = "Ошибка удаления строк";
		}
	}

	private: System::Void addColumnExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		this->matrixInputExtra->Columns->Add("", "");
		CheckControls();
	}

	private: System::Void removeColumnExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		try {
			int index = this->matrixInputExtra->ColumnCount - 1;
			this->matrixInputExtra->Columns->RemoveAt(index);
		}
		catch (...) {
			this->inputExtraErrorProvider->Text = "Не удалось удалить столбец";
		}
		finally {
			CheckControls();
		}
	}

	private: System::Void addRowColumnExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		addColumnExtraButton_Click(sender, e);
		addRowExtraButton_Click(sender, e);
		CheckControls();
	}

	// Actions
	private: System::Void sumButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		if ((this->matrixInputInitial->ColumnCount != this->matrixInputExtra->ColumnCount) ||
			(this->matrixInputInitial->RowCount != this->matrixInputExtra->RowCount)) {
			this->outputErrorProvider->Text = "Матрицы разных размеров!";
		}
	}

	private: System::Void transposeButton_Click(System::Object^ sender, System::EventArgs^ e) {
		ClearAll();
		this->matrixOutput->RowCount = this->matrixInputInitial->ColumnCount;
		this->matrixOutput->ColumnCount = this->matrixInputInitial->RowCount;
		for (int j = 0; j < this->matrixInputInitial->ColumnCount; ++j) {
			for (int i = 0; i < this->matrixInputInitial->RowCount; ++i) {
				int value;
				if (Int32::TryParse(System::Convert::ToString(this->matrixInputInitial->Rows[matrixInputInitial->RowCount - i - 1]->Cells[j]->Value), value)) {
					this->matrixOutput->Rows[j]->Cells[matrixInputInitial->RowCount - i - 1]->Value = value;
				}
				else {
					this->inputInitialErrorProvider->Text = "В матрице есть не целые числа!";
					return;
				}
			}
		}
	}
};
}
