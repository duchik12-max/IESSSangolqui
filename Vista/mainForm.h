#pragma once
#include "loginForm.h"
namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de mainForm
	/// </summary>
	public ref class mainForm : public System::Windows::Forms::Form
	{
	public:
		mainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~mainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnIniciar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnIniciar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnIniciar);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(638, 376);
			this->panel1->TabIndex = 0;
			// 
			// btnIniciar
			// 
			this->btnIniciar->Location = System::Drawing::Point(517, 329);
			this->btnIniciar->Name = L"btnIniciar";
			this->btnIniciar->Size = System::Drawing::Size(118, 44);
			this->btnIniciar->TabIndex = 3;
			this->btnIniciar->Text = L"Iniciar";
			this->btnIniciar->UseVisualStyleBackColor = true;
			this->btnIniciar->Click += gcnew System::EventHandler(this, &mainForm::btnIniciar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 357);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Kevin Duchi";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(121, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(389, 29);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Hospital del Día IESS Sangolqui";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 42);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(632, 281);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// mainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(662, 400);
			this->Controls->Add(this->panel1);
			this->Name = L"mainForm";
			this->Text = L"mainForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIniciar_Click(System::Object^ sender, System::EventArgs^ e) {
		loginForm^ login1 = gcnew loginForm();
		login1->Show();
	}
};
}
