#pragma once
#include "fotosDoctoresForm.h"
#include "busquedaFotosForm.h"
namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuDirectorForm
	/// </summary>
	public ref class menuDirectorForm : public System::Windows::Forms::Form
	{
	public:
		menuDirectorForm(void)
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
		~menuDirectorForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^ informeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ asignarPersonalToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ gestionarInsumosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agregarDoctoresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ verDoctoresToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuDirectorForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->informeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->asignarPersonalToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gestionarInsumosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agregarDoctoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->verDoctoresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(169, 60);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(425, 192);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(294, 313);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(197, 196);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(291, 274);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Bienvenido Director de Médicos";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->informeToolStripMenuItem,
					this->asignarPersonalToolStripMenuItem, this->gestionarInsumosToolStripMenuItem, this->agregarDoctoresToolStripMenuItem, this->verDoctoresToolStripMenuItem,
					this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(874, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// informeToolStripMenuItem
			// 
			this->informeToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"informeToolStripMenuItem.Image")));
			this->informeToolStripMenuItem->Name = L"informeToolStripMenuItem";
			this->informeToolStripMenuItem->Size = System::Drawing::Size(95, 24);
			this->informeToolStripMenuItem->Text = L"Informe";
			// 
			// asignarPersonalToolStripMenuItem
			// 
			this->asignarPersonalToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"asignarPersonalToolStripMenuItem.Image")));
			this->asignarPersonalToolStripMenuItem->Name = L"asignarPersonalToolStripMenuItem";
			this->asignarPersonalToolStripMenuItem->Size = System::Drawing::Size(152, 24);
			this->asignarPersonalToolStripMenuItem->Text = L"Asignar Personal";
			// 
			// gestionarInsumosToolStripMenuItem
			// 
			this->gestionarInsumosToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"gestionarInsumosToolStripMenuItem.Image")));
			this->gestionarInsumosToolStripMenuItem->Name = L"gestionarInsumosToolStripMenuItem";
			this->gestionarInsumosToolStripMenuItem->Size = System::Drawing::Size(164, 24);
			this->gestionarInsumosToolStripMenuItem->Text = L"Gestionar Insumos";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirectorForm::salirToolStripMenuItem_Click);
			// 
			// agregarDoctoresToolStripMenuItem
			// 
			this->agregarDoctoresToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"agregarDoctoresToolStripMenuItem.Image")));
			this->agregarDoctoresToolStripMenuItem->Name = L"agregarDoctoresToolStripMenuItem";
			this->agregarDoctoresToolStripMenuItem->Size = System::Drawing::Size(161, 24);
			this->agregarDoctoresToolStripMenuItem->Text = L"Agregar Doctores";
			this->agregarDoctoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirectorForm::agregarDoctoresToolStripMenuItem_Click);
			// 
			// verDoctoresToolStripMenuItem
			// 
			this->verDoctoresToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"verDoctoresToolStripMenuItem.Image")));
			this->verDoctoresToolStripMenuItem->Name = L"verDoctoresToolStripMenuItem";
			this->verDoctoresToolStripMenuItem->Size = System::Drawing::Size(128, 24);
			this->verDoctoresToolStripMenuItem->Text = L"Ver Doctores";
			this->verDoctoresToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuDirectorForm::verDoctoresToolStripMenuItem_Click);
			// 
			// menuDirectorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 521);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuDirectorForm";
			this->Text = L"menuDirectorForm";
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
private: System::Void agregarDoctoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	fotosDoctoresForm^ fotosDoctores = gcnew fotosDoctoresForm();
	fotosDoctores->Show();
}
private: System::Void verDoctoresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	busquedaFotosForm^ busquedaFotos = gcnew busquedaFotosForm();
	busquedaFotos->Show();
}
};
}
