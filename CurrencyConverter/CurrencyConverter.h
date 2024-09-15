#pragma once

#include <msclr/marshal_cppstd.h>


namespace CurrencyConverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CurrencyConverter
	/// </summary>
	public ref class CurrencyConverter : public System::Windows::Forms::Form
	{
	public:
		CurrencyConverter(void)
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
		~CurrencyConverter()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ title;
	protected:


	private: System::Windows::Forms::ComboBox^ convertTo;
	private: System::Windows::Forms::ComboBox^ convertFrom;




	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;
	private: System::Windows::Forms::Button^ convertButton;
	private: System::Windows::Forms::Button^ resetButton;


	private: System::Windows::Forms::Label^ amount;
	private: System::Windows::Forms::Label^ convertedAmount;


	private: System::Windows::Forms::TextBox^ amountInput;
	private: System::Windows::Forms::TextBox^ amountOutput;
	private: System::ComponentModel::IContainer^ components;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		double usdToInr = 83.98;   // Conversion rate from USD to INR
		double inrToUsd = 1 / 83.98; // Conversion rate from INR to USD
		double euroToInr = 92.55;  // Conversion rate from EUR to INR
		double euroToUsd = 1.10;   // Conversion rate from EUR to USD
	private: System::Windows::Forms::ToolTip^ toolTip1;
		   double usdToEuro = 1 / 1.10; // Conversion rate from USD to EUR

		double convert(double amount, const std::string& fromCurrency, const std::string& toCurrency){
			if (fromCurrency == "USD" && toCurrency == "INR") {
				return amount * usdToInr;
			}
			else if (fromCurrency == "INR" && toCurrency == "USD") {
				return amount * inrToUsd;
			}
			else if (fromCurrency == "EUR" && toCurrency == "INR") {
				return amount * euroToInr;
			}
			else if (fromCurrency == "EUR" && toCurrency == "USD") {
				return amount * euroToUsd;
			}
			else if (fromCurrency == "USD" && toCurrency == "EUR") {
				return amount * usdToEuro;
			}
			else {
				return 0.0;
			}
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CurrencyConverter::typeid));
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->title = (gcnew System::Windows::Forms::Label());
			this->convertTo = (gcnew System::Windows::Forms::ComboBox());
			this->convertFrom = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->convertButton = (gcnew System::Windows::Forms::Button());
			this->resetButton = (gcnew System::Windows::Forms::Button());
			this->amount = (gcnew System::Windows::Forms::Label());
			this->convertedAmount = (gcnew System::Windows::Forms::Label());
			this->amountInput = (gcnew System::Windows::Forms::TextBox());
			this->amountOutput = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->tableLayoutPanel1->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 1;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->title, 0, 0);
			this->tableLayoutPanel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableLayoutPanel1->Location = System::Drawing::Point(0, 0);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 100)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(570, 100);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// title
			// 
			this->title->AutoSize = true;
			this->title->Dock = System::Windows::Forms::DockStyle::Fill;
			this->title->Font = (gcnew System::Drawing::Font(L"Dutch801 XBd BT", 20, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::Black;
			this->title->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"title.Image")));
			this->title->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->title->Location = System::Drawing::Point(3, 0);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(564, 100);
			this->title->TabIndex = 0;
			this->title->Text = L"CURRENCY CONVERTER";
			this->title->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// convertTo
			// 
			this->convertTo->Dock = System::Windows::Forms::DockStyle::Fill;
			this->convertTo->Font = (gcnew System::Drawing::Font(L"Georgia", 14));
			this->convertTo->FormattingEnabled = true;
			this->convertTo->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"USD", L"INR", L"EUR" });
			this->convertTo->Location = System::Drawing::Point(289, 6);
			this->convertTo->Name = L"convertTo";
			this->convertTo->Size = System::Drawing::Size(275, 40);
			this->convertTo->TabIndex = 1;
			this->convertTo->Text = L"Convert To....";
			this->toolTip1->SetToolTip(this->convertTo, L"Select the currency you want to convert to.");
			// 
			// convertFrom
			// 
			this->convertFrom->Font = (gcnew System::Drawing::Font(L"Georgia", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convertFrom->FormattingEnabled = true;
			this->convertFrom->ItemHeight = 32;
			this->convertFrom->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"USD", L"INR", L"EUR" });
			this->convertFrom->Location = System::Drawing::Point(6, 6);
			this->convertFrom->Name = L"convertFrom";
			this->convertFrom->Size = System::Drawing::Size(274, 40);
			this->convertFrom->TabIndex = 0;
			this->convertFrom->Text = L"Convert From....";
			this->toolTip1->SetToolTip(this->convertFrom, L"Select the currency you want to convert from.");
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tableLayoutPanel2.BackgroundImage")));
			this->tableLayoutPanel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->tableLayoutPanel2->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetDouble;
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel2->Controls->Add(this->convertFrom, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->convertTo, 1, 0);
			this->tableLayoutPanel2->Controls->Add(this->convertButton, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->resetButton, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->amount, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->convertedAmount, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->amountInput, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->amountOutput, 1, 3);
			this->tableLayoutPanel2->Location = System::Drawing::Point(0, 100);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 84)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 80)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 84)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 68)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(570, 327);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// convertButton
			// 
			this->convertButton->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->convertButton->Font = (gcnew System::Drawing::Font(L"High Tower Text", 16, System::Drawing::FontStyle::Bold));
			this->convertButton->Location = System::Drawing::Point(6, 176);
			this->convertButton->Name = L"convertButton";
			this->convertButton->Size = System::Drawing::Size(274, 78);
			this->convertButton->TabIndex = 2;
			this->convertButton->Text = L"CONVERT";
			this->toolTip1->SetToolTip(this->convertButton, L"Click to convert the entered amount.");
			this->convertButton->UseVisualStyleBackColor = false;
			this->convertButton->Click += gcnew System::EventHandler(this, &CurrencyConverter::convertButton_Click);
			// 
			// resetButton
			// 
			this->resetButton->BackColor = System::Drawing::Color::Red;
			this->resetButton->Font = (gcnew System::Drawing::Font(L"High Tower Text", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->resetButton->Location = System::Drawing::Point(289, 176);
			this->resetButton->Name = L"resetButton";
			this->resetButton->Size = System::Drawing::Size(275, 78);
			this->resetButton->TabIndex = 3;
			this->resetButton->Text = L"RESET";
			this->toolTip1->SetToolTip(this->resetButton, L"Click to reset all fields.");
			this->resetButton->UseVisualStyleBackColor = false;
			this->resetButton->Click += gcnew System::EventHandler(this, &CurrencyConverter::resetButton_Click);
			// 
			// amount
			// 
			this->amount->AutoSize = true;
			this->amount->Dock = System::Windows::Forms::DockStyle::Fill;
			this->amount->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amount->Location = System::Drawing::Point(6, 90);
			this->amount->Name = L"amount";
			this->amount->Size = System::Drawing::Size(274, 80);
			this->amount->TabIndex = 4;
			this->amount->Text = L"AMOUNT";
			this->amount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// convertedAmount
			// 
			this->convertedAmount->AutoSize = true;
			this->convertedAmount->Dock = System::Windows::Forms::DockStyle::Fill;
			this->convertedAmount->Font = (gcnew System::Drawing::Font(L"Arial Rounded MT Bold", 11, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->convertedAmount->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"convertedAmount.Image")));
			this->convertedAmount->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->convertedAmount->Location = System::Drawing::Point(6, 260);
			this->convertedAmount->Name = L"convertedAmount";
			this->convertedAmount->Size = System::Drawing::Size(274, 68);
			this->convertedAmount->TabIndex = 5;
			this->convertedAmount->Text = L"CONVERTED AMOUNT";
			this->convertedAmount->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// amountInput
			// 
			this->amountInput->Dock = System::Windows::Forms::DockStyle::Fill;
			this->amountInput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amountInput->Location = System::Drawing::Point(289, 93);
			this->amountInput->Name = L"amountInput";
			this->amountInput->Size = System::Drawing::Size(275, 44);
			this->amountInput->TabIndex = 6;
			this->amountInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTip1->SetToolTip(this->amountInput, L"Enter the amount to be converted.");
			// 
			// amountOutput
			// 
			this->amountOutput->Dock = System::Windows::Forms::DockStyle::Fill;
			this->amountOutput->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16));
			this->amountOutput->Location = System::Drawing::Point(289, 263);
			this->amountOutput->Name = L"amountOutput";
			this->amountOutput->Size = System::Drawing::Size(275, 44);
			this->amountOutput->TabIndex = 7;
			this->amountOutput->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->toolTip1->SetToolTip(this->amountOutput, L"Displays the converted amount after conversion.");
			// 
			// CurrencyConverter
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(570, 427);
			this->Controls->Add(this->tableLayoutPanel2);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(592, 483);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(592, 483);
			this->Name = L"CurrencyConverter";
			this->ShowInTaskbar = false;
			this->Text = L"CurrencyConverter";
			this->Load += gcnew System::EventHandler(this, &CurrencyConverter::CurrencyConverter_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void convertButton_Click(System::Object^ sender, System::EventArgs^ e) {

		String^ input_currency_type = this->convertFrom->Text;
		String^ input_amount_string = this->amountInput->Text;
		String^ output_currency_type = this->convertTo->Text;

		std::string fromCurrency = msclr::interop::marshal_as<std::string>(input_currency_type);
		std::string toCurrency = msclr::interop::marshal_as<std::string>(output_currency_type);

		double input_currency = System::Convert::ToDouble(input_amount_string);

		double convertedCurrency = convert(input_currency, fromCurrency, toCurrency);

			if (convertedCurrency > 0) {
				String^ result = System::Convert::ToString(convertedCurrency);
				this->amountOutput->Text = result;
			}
			else {
				this->amountOutput->Text = "Unsupported conversion.";
			}
	}
		private: System::Void resetButton_Click(System::Object^ sender, System::EventArgs^ e) {
			this->convertFrom->Text = " Convert From....";
			this->amountInput->Text = " ";
			this->convertTo->Text = " Convert To....";
			this->amountOutput->Text = " ";
		}
		private: System::Void CurrencyConverter_Load(System::Object^ sender, System::EventArgs^ e) {
			this->amountInput->Text = " ";
			this->amountOutput->Text = " ";
		}
};
};