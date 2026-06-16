#pragma once
#include "opcionesAdminForm.h"
namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuAdminForm
	/// </summary>
	public ref class menuAdminForm : public System::Windows::Forms::Form
	{
	public:
		menuAdminForm(void)
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
		~menuAdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ bitácoraToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ opcionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salToolStripMenuItem;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuAdminForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->bitácoraToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opcionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(231, 182);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bienvenido Administrador";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->bitácoraToolStripMenuItem,
					this->opcionesToolStripMenuItem, this->salToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(677, 28);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// bitácoraToolStripMenuItem
			// 
			this->bitácoraToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bitácoraToolStripMenuItem.Image")));
			this->bitácoraToolStripMenuItem->Name = L"bitácoraToolStripMenuItem";
			this->bitácoraToolStripMenuItem->Size = System::Drawing::Size(98, 24);
			this->bitácoraToolStripMenuItem->Text = L"Bitácora";
			// 
			// opcionesToolStripMenuItem
			// 
			this->opcionesToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opcionesToolStripMenuItem.Image")));
			this->opcionesToolStripMenuItem->Name = L"opcionesToolStripMenuItem";
			this->opcionesToolStripMenuItem->Size = System::Drawing::Size(105, 24);
			this->opcionesToolStripMenuItem->Text = L"Opciones";
			this->opcionesToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuAdminForm::opcionesToolStripMenuItem_Click);
			// 
			// salToolStripMenuItem
			// 
			this->salToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salToolStripMenuItem.Image")));
			this->salToolStripMenuItem->Name = L"salToolStripMenuItem";
			this->salToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salToolStripMenuItem->Text = L"Salir";
			this->salToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuAdminForm::salToolStripMenuItem_Click);
			// 
			// menuAdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(677, 430);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuAdminForm";
			this->Text = L"menuAdminForm";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void opcionesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		opcionesAdminForm^ opcionesForm = gcnew opcionesAdminForm();
		opcionesForm->Show();
	}
private: System::Void salToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
