#pragma once
#include"Header.h"

namespace My3Lab {

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
	private: System::Windows::Forms::DataGridView^ mathDecision;
	protected:
	private: System::Windows::Forms::DataGridView^ numericDecision;
	private: System::Windows::Forms::TextBox^ getNmax;
	private: System::Windows::Forms::TextBox^ getEps;
	private: System::Windows::Forms::Label^ enterNmx;
	private: System::Windows::Forms::Label^ enterEps;
	private: System::Windows::Forms::Button^ CalculateTask;
	private: System::Windows::Forms::Label^ conclusion;
	private: System::Windows::Forms::Label^ Conclus;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->mathDecision = (gcnew System::Windows::Forms::DataGridView());
			this->numericDecision = (gcnew System::Windows::Forms::DataGridView());
			this->getNmax = (gcnew System::Windows::Forms::TextBox());
			this->getEps = (gcnew System::Windows::Forms::TextBox());
			this->enterNmx = (gcnew System::Windows::Forms::Label());
			this->enterEps = (gcnew System::Windows::Forms::Label());
			this->CalculateTask = (gcnew System::Windows::Forms::Button());
			this->conclusion = (gcnew System::Windows::Forms::Label());
			this->Conclus = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mathDecision))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericDecision))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// mathDecision
			// 
			this->mathDecision->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->mathDecision->Location = System::Drawing::Point(64, 52);
			this->mathDecision->Name = L"mathDecision";
			this->mathDecision->Size = System::Drawing::Size(644, 155);
			this->mathDecision->TabIndex = 0;
			// 
			// numericDecision
			// 
			this->numericDecision->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->numericDecision->Location = System::Drawing::Point(64, 267);
			this->numericDecision->Name = L"numericDecision";
			this->numericDecision->Size = System::Drawing::Size(644, 155);
			this->numericDecision->TabIndex = 1;
			// 
			// getNmax
			// 
			this->getNmax->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->getNmax->Location = System::Drawing::Point(836, 92);
			this->getNmax->Name = L"getNmax";
			this->getNmax->Size = System::Drawing::Size(100, 22);
			this->getNmax->TabIndex = 2;
			this->getNmax->Text = L"1000";
			// 
			// getEps
			// 
			this->getEps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->getEps->Location = System::Drawing::Point(836, 196);
			this->getEps->Name = L"getEps";
			this->getEps->Size = System::Drawing::Size(100, 22);
			this->getEps->TabIndex = 3;
			this->getEps->Text = L"0,00001";
			// 
			// enterNmx
			// 
			this->enterNmx->AutoSize = true;
			this->enterNmx->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enterNmx->Location = System::Drawing::Point(832, 52);
			this->enterNmx->Name = L"enterNmx";
			this->enterNmx->Size = System::Drawing::Size(120, 20);
			this->enterNmx->TabIndex = 4;
			this->enterNmx->Text = L"Введите Nmax";
			// 
			// enterEps
			// 
			this->enterEps->AutoSize = true;
			this->enterEps->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->enterEps->Location = System::Drawing::Point(832, 155);
			this->enterEps->Name = L"enterEps";
			this->enterEps->Size = System::Drawing::Size(108, 20);
			this->enterEps->TabIndex = 5;
			this->enterEps->Text = L"Введите Eps";
			// 
			// CalculateTask
			// 
			this->CalculateTask->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CalculateTask->Location = System::Drawing::Point(836, 247);
			this->CalculateTask->Name = L"CalculateTask";
			this->CalculateTask->Size = System::Drawing::Size(133, 62);
			this->CalculateTask->TabIndex = 6;
			this->CalculateTask->Text = L"Вычислить!";
			this->CalculateTask->UseVisualStyleBackColor = true;
			this->CalculateTask->Click += gcnew System::EventHandler(this, &MyForm::CalculateTask_Click);
			// 
			// conclusion
			// 
			this->conclusion->AutoSize = true;
			this->conclusion->Location = System::Drawing::Point(64, 492);
			this->conclusion->Name = L"conclusion";
			this->conclusion->Size = System::Drawing::Size(0, 13);
			this->conclusion->TabIndex = 7;
			// 
			// Conclus
			// 
			this->Conclus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Conclus->Location = System::Drawing::Point(64, 518);
			this->Conclus->Name = L"Conclus";
			this->Conclus->Size = System::Drawing::Size(888, 51);
			this->Conclus->TabIndex = 8;
			this->Conclus->Text = L"Вывод: ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(744, 336);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(251, 157);
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(64, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(302, 20);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Точное решение задачи в узлах сетки:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(60, 226);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(332, 20);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Численное решение задачи в узлах сетки:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(832, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 12;
			this->label3->Text = L"Сетка (4,4)";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(995, 659);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Conclus);
			this->Controls->Add(this->conclusion);
			this->Controls->Add(this->CalculateTask);
			this->Controls->Add(this->enterEps);
			this->Controls->Add(this->enterNmx);
			this->Controls->Add(this->getEps);
			this->Controls->Add(this->getNmax);
			this->Controls->Add(this->numericDecision);
			this->Controls->Add(this->mathDecision);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mathDecision))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericDecision))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CalculateTask_Click(System::Object^ sender, System::EventArgs^ e) {
		mathDecision->Rows->Clear();
		mathDecision->Columns->Clear();
		numericDecision->Rows->Clear();
		numericDecision->Columns->Clear();
		Conclus->Text = "Вывод: ";
		int Nmax = Convert::ToInt32(getNmax->Text);
		double eps = Convert::ToDouble(getEps->Text);
		int S = 0;
		double MaxEps;

		vector<vector<double>>v = getResult(Nmax, eps,&S, &MaxEps);
		int n = 4, m = 4;//размерность сетки
		double a = -1, b = 1, c = -1, d = 1;
		double h = (b - a) / n; // ненулевые элементы матрицы (-A)
		double k = (d - c) / m;
		vector<double> xs(n + 1);
		vector<double> ys(m + 1);
		xs[0] = a;
		for (int i = 1; i < n + 1; i++) {
			xs[i] = xs[i - 1] + h;
		}
		ys[0] = c;
		for (int j = 1; j < m + 1; j++) {
			ys[j] = ys[j - 1] + k;
		}
		vector<vector<double>>u(n+1);
		for (int i = 0; i < n + 1; i++) {
			vector<double>t(m + 1);
			u[i] = t;
		}
		for (int i = 0; i < n + 1; i++) {
			for (int j = 0; j < m + 1; j++) {
				u[i][j] = 1 - pow(xs[i], 2) - pow(ys[j], 2);
			}
		}

		mathDecision->Columns->Add(" ", " ");
		for (int i = 0; i < n + 1; i++) {
			mathDecision->Columns->Add(" ","x"+Convert::ToString(i));
		}
		for (int i = 0; i < n + 1; i++) {
			mathDecision->Rows->Add();
			mathDecision->Rows[i]->Cells[0]->Value = "y" + Convert::ToString(i);
			for (int j = 0; j < m + 1; j++) {
				mathDecision->Rows[i]->Cells[j+1]->Value = u[i][j];
			}
		}

		numericDecision->Columns->Add(" ", " ");
		for (int i = 0; i < n + 1; i++) {
			numericDecision->Columns->Add(" ", "x" + Convert::ToString(i));
		}
		for (int i = 0; i < n + 1; i++) {
			numericDecision->Rows->Add();
			numericDecision->Rows[i]->Cells[0]->Value = "y" + Convert::ToString(i);
			for (int j = 0; j < m + 1; j++) {
				numericDecision->Rows[i]->Cells[j+1]->Value = v[i][j];
			}
		}
		Conclus->Text += "при решении разностной схемы с помощью метода"+
			" Зейделя с параметрами Nmax = "+Convert::ToString(Nmax)+ " и eps = " + Convert::ToString(eps) + ", за S = "
			+ Convert::ToString(S) + " итераций получено численное решение, обеспечивающее точность eps_max = " 
			+ Convert::ToString(MaxEps);
	}
};
}
