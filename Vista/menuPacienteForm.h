#pragma once

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de menuPacienteForm
	/// </summary>
	public ref class menuPacienteForm : public System::Windows::Forms::Form
	{
	public:
		menuPacienteForm(void)
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
		~menuPacienteForm()
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
	private: System::Windows::Forms::ToolStripMenuItem^ historiaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ tratamientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ agendarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(menuPacienteForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->historiaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tratamientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->agendarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(153, 46);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(452, 179);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(302, 301);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(173, 179);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(324, 254);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(131, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Bienvenido Paciente";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->historiaToolStripMenuItem,
					this->tratamientoToolStripMenuItem, this->agendarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(747, 28);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// historiaToolStripMenuItem
			// 
			this->historiaToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"historiaToolStripMenuItem.Image")));
			this->historiaToolStripMenuItem->Name = L"historiaToolStripMenuItem";
			this->historiaToolStripMenuItem->Size = System::Drawing::Size(95, 24);
			this->historiaToolStripMenuItem->Text = L"Historia";
			// 
			// tratamientoToolStripMenuItem
			// 
			this->tratamientoToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tratamientoToolStripMenuItem.Image")));
			this->tratamientoToolStripMenuItem->Name = L"tratamientoToolStripMenuItem";
			this->tratamientoToolStripMenuItem->Size = System::Drawing::Size(123, 24);
			this->tratamientoToolStripMenuItem->Text = L"Tratamiento";
			// 
			// agendarToolStripMenuItem
			// 
			this->agendarToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"agendarToolStripMenuItem.Image")));
			this->agendarToolStripMenuItem->Name = L"agendarToolStripMenuItem";
			this->agendarToolStripMenuItem->Size = System::Drawing::Size(100, 24);
			this->agendarToolStripMenuItem->Text = L"Agendar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"salirToolStripMenuItem.Image")));
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(72, 24);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &menuPacienteForm::salirToolStripMenuItem_Click);
			// 
			// menuPacienteForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(747, 535);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"menuPacienteForm";
			this->Text = L"menuPacienteForm";
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
};
}
