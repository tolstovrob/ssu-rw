#pragma once

namespace DataGridView2 {

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
	private: System::Windows::Forms::DataGridView^ tableGrid;
	protected:
	private: System::Windows::Forms::Label^ tableInputLabel;
	private: System::Windows::Forms::Label^ xInputLabel;
	private: System::Windows::Forms::DataGridView^ xGrid;
	private: System::Windows::Forms::Button^ addRow;
	private: System::Windows::Forms::Button^ removeRow;
	private: System::Windows::Forms::Button^ addColumn;
	private: System::Windows::Forms::Button^ removeColumn;
	private: System::Windows::Forms::Button^ executeButton;
	private: System::Windows::Forms::DataGridView^ outputGridView;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ errorProvider;

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
			this->tableGrid = (gcnew System::Windows::Forms::DataGridView());
			this->tableInputLabel = (gcnew System::Windows::Forms::Label());
			this->xInputLabel = (gcnew System::Windows::Forms::Label());
			this->xGrid = (gcnew System::Windows::Forms::DataGridView());
			this->addRow = (gcnew System::Windows::Forms::Button());
			this->removeRow = (gcnew System::Windows::Forms::Button());
			this->addColumn = (gcnew System::Windows::Forms::Button());
			this->removeColumn = (gcnew System::Windows::Forms::Button());
			this->executeButton = (gcnew System::Windows::Forms::Button());
			this->outputGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->errorProvider = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xGrid))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// tableGrid
			// 
			this->tableGrid->AllowUserToAddRows = false;
			this->tableGrid->AllowUserToDeleteRows = false;
			this->tableGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableGrid->Location = System::Drawing::Point(17, 35);
			this->tableGrid->Name = L"tableGrid";
			this->tableGrid->Size = System::Drawing::Size(395, 206);
			this->tableGrid->TabIndex = 0;
			// 
			// tableInputLabel
			// 
			this->tableInputLabel->AutoSize = true;
			this->tableInputLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tableInputLabel->Location = System::Drawing::Point(12, 9);
			this->tableInputLabel->Name = L"tableInputLabel";
			this->tableInputLabel->Size = System::Drawing::Size(147, 25);
			this->tableInputLabel->TabIndex = 1;
			this->tableInputLabel->Text = L"Ввод таблицы";
			// 
			// xInputLabel
			// 
			this->xInputLabel->AutoSize = true;
			this->xInputLabel->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->xInputLabel->Location = System::Drawing::Point(12, 263);
			this->xInputLabel->Name = L"xInputLabel";
			this->xInputLabel->Size = System::Drawing::Size(75, 25);
			this->xInputLabel->TabIndex = 2;
			this->xInputLabel->Text = L"Ввод X";
			// 
			// xGrid
			// 
			this->xGrid->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->xGrid->Location = System::Drawing::Point(17, 291);
			this->xGrid->Name = L"xGrid";
			this->xGrid->Size = System::Drawing::Size(395, 47);
			this->xGrid->TabIndex = 3;
			// 
			// addRow
			// 
			this->addRow->Location = System::Drawing::Point(429, 35);
			this->addRow->Name = L"addRow";
			this->addRow->Size = System::Drawing::Size(93, 47);
			this->addRow->TabIndex = 4;
			this->addRow->Text = L"Добавить строку";
			this->addRow->UseVisualStyleBackColor = true;
			this->addRow->Click += gcnew System::EventHandler(this, &MyForm::addRow_Click);
			// 
			// removeRow
			// 
			this->removeRow->Location = System::Drawing::Point(429, 100);
			this->removeRow->Name = L"removeRow";
			this->removeRow->Size = System::Drawing::Size(93, 47);
			this->removeRow->TabIndex = 5;
			this->removeRow->Text = L"Удалить строку";
			this->removeRow->UseVisualStyleBackColor = true;
			this->removeRow->Click += gcnew System::EventHandler(this, &MyForm::removeRow_Click);
			// 
			// addColumn
			// 
			this->addColumn->Location = System::Drawing::Point(429, 164);
			this->addColumn->Name = L"addColumn";
			this->addColumn->Size = System::Drawing::Size(93, 47);
			this->addColumn->TabIndex = 6;
			this->addColumn->Text = L"Добавить столбец";
			this->addColumn->UseVisualStyleBackColor = true;
			this->addColumn->Click += gcnew System::EventHandler(this, &MyForm::addColumn_Click);
			// 
			// removeColumn
			// 
			this->removeColumn->Location = System::Drawing::Point(429, 229);
			this->removeColumn->Name = L"removeColumn";
			this->removeColumn->Size = System::Drawing::Size(93, 47);
			this->removeColumn->TabIndex = 7;
			this->removeColumn->Text = L"Удалить столбец";
			this->removeColumn->UseVisualStyleBackColor = true;
			// 
			// executeButton
			// 
			this->executeButton->Location = System::Drawing::Point(429, 291);
			this->executeButton->Name = L"executeButton";
			this->executeButton->Size = System::Drawing::Size(93, 47);
			this->executeButton->TabIndex = 8;
			this->executeButton->Text = L"Пересчитать";
			this->executeButton->UseVisualStyleBackColor = true;
			// 
			// outputGridView
			// 
			this->outputGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->outputGridView->Location = System::Drawing::Point(541, 35);
			this->outputGridView->Name = L"outputGridView";
			this->outputGridView->Size = System::Drawing::Size(395, 241);
			this->outputGridView->TabIndex = 9;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(536, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 25);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Вывод таблицы";
			// 
			// errorProvider
			// 
			this->errorProvider->Enabled = false;
			this->errorProvider->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->errorProvider->Location = System::Drawing::Point(541, 296);
			this->errorProvider->Name = L"errorProvider";
			this->errorProvider->Size = System::Drawing::Size(395, 32);
			this->errorProvider->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 354);
			this->Controls->Add(this->errorProvider);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->outputGridView);
			this->Controls->Add(this->executeButton);
			this->Controls->Add(this->removeColumn);
			this->Controls->Add(this->addColumn);
			this->Controls->Add(this->removeRow);
			this->Controls->Add(this->addRow);
			this->Controls->Add(this->xGrid);
			this->Controls->Add(this->xInputLabel);
			this->Controls->Add(this->tableInputLabel);
			this->Controls->Add(this->tableGrid);
			this->Name = L"MyForm";
			this->Text = L"Обработка сложных табличных данных";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->xGrid))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->outputGridView))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void addRow_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tableGrid->Rows->Add(1);
	}
	
	private: System::Void removeRow_Click(System::Object^ sender, System::EventArgs^ e) {
		/*if (!this->tableGrid->CurrentRow->IsNewRow) {
			int i = this->tableGrid->CurrentRow->Index;
			this->tableGrid->Rows->Remove(this->tableGrid->Rows[i]);
		}*/

		if (!this->tableGrid->RowCount) { 
			this->errorProvider->Text = "В таблице нет строк!";
			return;
		}
		if (this->tableGrid->SelectedRows->Count > 0) {
			for (int i = 0; i < this->tableGrid->SelectedRows->Count; i++) {
				int index = this->tableGrid->SelectedRows[i]->Index;
				try { this->tableGrid->Rows->RemoveAt(index); }
				catch (...) {
					this->errorProvider->Text = "Не могу удалить строку с индексом " + index;
					return;
				}
			}
		}
		else {
			int index;
			try { index = this->tableGrid->CurrentCell->RowIndex; }
			catch (...) {}
			if (index != -1) {
				try { this->tableGrid->Rows->RemoveAt(index); }
				catch (...) {
					this->errorProvider->Text = "Не могу удалить строку с индексом " + index; 
				return;
				}
			}
			else	this->errorProvider->Text = "Выберите строки/ячейку для удаления";
		}
	}

	private: System::Void addColumn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tableGrid->Columns->Add("", "");
	}
};
}
