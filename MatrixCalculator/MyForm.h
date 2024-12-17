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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputInitial))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputExtra))->BeginInit();
			this->inputGroup->SuspendLayout();
			this->SuspendLayout();
			// 
			// matrixInputInitial
			// 
			this->matrixInputInitial->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->matrixInputInitial->Location = System::Drawing::Point(23, 56);
			this->matrixInputInitial->Name = L"matrixInputInitial";
			this->matrixInputInitial->Size = System::Drawing::Size(384, 294);
			this->matrixInputInitial->TabIndex = 0;
			// 
			// matrixInputExtra
			// 
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1196, 637);
			this->Controls->Add(this->inputGroup);
			this->Name = L"MyForm";
			this->Text = L"MatrixCalculator";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputInitial))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->matrixInputExtra))->EndInit();
			this->inputGroup->ResumeLayout(false);
			this->inputGroup->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	// Initial Matrix
	private: System::Void addRowInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputInitialErrorProvider->Text = "";
		if (this->matrixInputInitial->Columns->Count) {
			this->matrixInputInitial->Rows->Add(1);
		}
		else {
			this->inputInitialErrorProvider->Text = "Сначала добавьте столбец";
		}
	}

	private: System::Void removeRowInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputInitialErrorProvider->Text = "";
		if (!this->matrixInputInitial->RowCount) {
			this->inputInitialErrorProvider->Text = "Нет строк для удаления";
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
					return;
				}
			}
			else	this->inputInitialErrorProvider->Text = "Ошибка удаления строк";
		}
	}

	private: System::Void addColumnInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputInitialErrorProvider->Text = "";
		this->matrixInputInitial->Columns->Add("", "");
	}

	private: System::Void removeColumnInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputInitialErrorProvider->Text = "";
		try {
			int index = this->matrixInputInitial->Columns->Count - 1;
			this->matrixInputInitial->Columns->RemoveAt(index);
		}
		catch (...) {
			this->inputInitialErrorProvider->Text = "Не удалось удалить столбец";
		}
	}

	private: System::Void addRowColumnInitialButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputInitialErrorProvider->Text = "";
		addColumnInitialButton_Click(sender, e);
		addRowInitialButton_Click(sender, e);
	}

	// Extra Matrix
	private: System::Void addRowExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputExtraErrorProvider->Text = "";
		if (this->matrixInputExtra->Columns->Count) {
			this->matrixInputExtra->Rows->Add(1);
		}
		else {
			this->inputExtraErrorProvider->Text = "Сначала добавьте столбец";
		}
	}

	private: System::Void removeRowExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputExtraErrorProvider->Text = "";
		if (!this->matrixInputExtra->RowCount) {
			this->inputExtraErrorProvider->Text = "Нет строк для удаления";
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
					return;
				}
			}
			else	this->inputExtraErrorProvider->Text = "Ошибка удаления строк";
		}
	}

	private: System::Void addColumnExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputExtraErrorProvider->Text = "";
		this->matrixInputExtra->Columns->Add("", "");
	}

	private: System::Void removeColumnExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputExtraErrorProvider->Text = "";
		try {
			int index = this->matrixInputExtra->Columns->Count - 1;
			this->matrixInputExtra->Columns->RemoveAt(index);
		}
		catch (...) {
			this->inputExtraErrorProvider->Text = "Не удалось удалить столбец";
		}
	}

	private: System::Void addRowColumnExtraButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->inputExtraErrorProvider->Text = "";
		addColumnExtraButton_Click(sender, e);
		addRowExtraButton_Click(sender, e);
	}
};
}
