#pragma once
#include "busquedaHorariosForm.h"
namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuPersonalForm
	/// </summary>
	public ref class menuPersonalForm : public System::Windows::Forms::Form
	{
	public:
		menuPersonalForm(void)
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
		~menuPersonalForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ doctorToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ boticarioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ laboratorioToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ horariosDeTrabajoToolStripMenuItem;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPersonalForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->doctorToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boticarioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->laboratorioToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->horariosDeTrabajoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(223, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(429, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(328, 309);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(194, 208);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(380, 273);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(109, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Personal Médico";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->doctorToolStripMenuItem,
					this->boticarioToolStripMenuItem, this->laboratorioToolStripMenuItem, this->horariosDeTrabajoToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(807, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// doctorToolStripMenuItem
			// 
			this->doctorToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"doctorToolStripMenuItem.Image")));
			this->doctorToolStripMenuItem->Name = L"doctorToolStripMenuItem";
			this->doctorToolStripMenuItem->Size = System::Drawing::Size(89, 24);
			this->doctorToolStripMenuItem->Text = L"Doctor";
			// 
			// boticarioToolStripMenuItem
			// 
			this->boticarioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boticarioToolStripMenuItem.Image")));
			this->boticarioToolStripMenuItem->Name = L"boticarioToolStripMenuItem";
			this->boticarioToolStripMenuItem->Size = System::Drawing::Size(103, 24);
			this->boticarioToolStripMenuItem->Text = L"Boticario";
			// 
			// laboratorioToolStripMenuItem
			// 
			this->laboratorioToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"laboratorioToolStripMenuItem.Image")));
			this->laboratorioToolStripMenuItem->Name = L"laboratorioToolStripMenuItem";
			this->laboratorioToolStripMenuItem->Size = System::Drawing::Size(121, 24);
			this->laboratorioToolStripMenuItem->Text = L"Laboratorio";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPersonalForm::salirToolStripMenuItem_Click);
			// 
			// horariosDeTrabajoToolStripMenuItem
			// 
			this->horariosDeTrabajoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"horariosDeTrabajoToolStripMenuItem.Image")));
			this->horariosDeTrabajoToolStripMenuItem->Name = L"horariosDeTrabajoToolStripMenuItem";
			this->horariosDeTrabajoToolStripMenuItem->Size = System::Drawing::Size(173, 24);
			this->horariosDeTrabajoToolStripMenuItem->Text = L"Horarios de trabajo";
			this->horariosDeTrabajoToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPersonalForm::horariosDeTrabajoToolStripMenuItem_Click);
			// 
			// menuPersonalForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 535);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuPersonalForm";
			this->Text = L"menuPersonalForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void horariosDeTrabajoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	busquedaHorariosForm^ busquedaHorarios = gcnew busquedaHorariosForm();
	busquedaHorarios->Show();
}
};
}
