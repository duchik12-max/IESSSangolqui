#pragma once

namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de opcionesAdminForm
	/// </summary>
	public ref class opcionesAdminForm : public System::Windows::Forms::Form
	{
	public:
		opcionesAdminForm(void)
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
		~opcionesAdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnCancel1;

	private: System::Windows::Forms::Button^ btnBloquear;

	private: System::Windows::Forms::Button^ btnRegistrar;

	private: System::Windows::Forms::ComboBox^ comboPerfil;
	private: System::Windows::Forms::TextBox^ txtCorreo;
	private: System::Windows::Forms::TextBox^ txtCedula;
	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnCancel2;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::TextBox^ txtBusquedaCedu;
	private: System::Windows::Forms::Label^ label5;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->btnCancel1 = (gcnew System::Windows::Forms::Button());
			this->btnBloquear = (gcnew System::Windows::Forms::Button());
			this->btnRegistrar = (gcnew System::Windows::Forms::Button());
			this->comboPerfil = (gcnew System::Windows::Forms::ComboBox());
			this->txtCorreo = (gcnew System::Windows::Forms::TextBox());
			this->txtCedula = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txtBusquedaCedu = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->btnCancel2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(12, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(623, 430);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->btnCancel1);
			this->tabPage1->Controls->Add(this->btnBloquear);
			this->tabPage1->Controls->Add(this->btnRegistrar);
			this->tabPage1->Controls->Add(this->comboPerfil);
			this->tabPage1->Controls->Add(this->txtCorreo);
			this->tabPage1->Controls->Add(this->txtCedula);
			this->tabPage1->Controls->Add(this->txtNombre);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(615, 401);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Registrar o Bloquear";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// btnCancel1
			// 
			this->btnCancel1->Location = System::Drawing::Point(458, 328);
			this->btnCancel1->Name = L"btnCancel1";
			this->btnCancel1->Size = System::Drawing::Size(139, 49);
			this->btnCancel1->TabIndex = 10;
			this->btnCancel1->Text = L"Cancelar";
			this->btnCancel1->UseVisualStyleBackColor = true;
			this->btnCancel1->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnCancel1_Click);
			// 
			// btnBloquear
			// 
			this->btnBloquear->Location = System::Drawing::Point(228, 328);
			this->btnBloquear->Name = L"btnBloquear";
			this->btnBloquear->Size = System::Drawing::Size(151, 49);
			this->btnBloquear->TabIndex = 9;
			this->btnBloquear->Text = L"Bloquear";
			this->btnBloquear->UseVisualStyleBackColor = true;
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->Location = System::Drawing::Point(30, 328);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(128, 49);
			this->btnRegistrar->TabIndex = 8;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = true;
			// 
			// comboPerfil
			// 
			this->comboPerfil->FormattingEnabled = true;
			this->comboPerfil->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Director", L"Personal", L"Paciente" });
			this->comboPerfil->Location = System::Drawing::Point(345, 70);
			this->comboPerfil->Name = L"comboPerfil";
			this->comboPerfil->Size = System::Drawing::Size(121, 24);
			this->comboPerfil->TabIndex = 7;
			// 
			// txtCorreo
			// 
			this->txtCorreo->Location = System::Drawing::Point(52, 221);
			this->txtCorreo->Name = L"txtCorreo";
			this->txtCorreo->Size = System::Drawing::Size(155, 22);
			this->txtCorreo->TabIndex = 6;
			// 
			// txtCedula
			// 
			this->txtCedula->Location = System::Drawing::Point(52, 145);
			this->txtCedula->Name = L"txtCedula";
			this->txtCedula->Size = System::Drawing::Size(155, 22);
			this->txtCedula->TabIndex = 5;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(52, 70);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(155, 22);
			this->txtNombre->TabIndex = 4;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(342, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 16);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Perfil";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(49, 187);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(48, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Correo";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Cédula";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(56, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nombre";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnCancel2);
			this->tabPage2->Controls->Add(this->btnBuscar);
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->txtBusquedaCedu);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(615, 401);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Buscar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 42);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Cédula";
			// 
			// txtBusquedaCedu
			// 
			this->txtBusquedaCedu->Location = System::Drawing::Point(193, 42);
			this->txtBusquedaCedu->Name = L"txtBusquedaCedu";
			this->txtBusquedaCedu->Size = System::Drawing::Size(195, 22);
			this->txtBusquedaCedu->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(23, 110);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(570, 150);
			this->dataGridView1->TabIndex = 2;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(32, 321);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(141, 50);
			this->btnBuscar->TabIndex = 3;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			// 
			// btnCancel2
			// 
			this->btnCancel2->Location = System::Drawing::Point(452, 321);
			this->btnCancel2->Name = L"btnCancel2";
			this->btnCancel2->Size = System::Drawing::Size(141, 50);
			this->btnCancel2->TabIndex = 4;
			this->btnCancel2->Text = L"Cancelar";
			this->btnCancel2->UseVisualStyleBackColor = true;
			this->btnCancel2->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnCancel2_Click);
			// 
			// opcionesAdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 454);
			this->Controls->Add(this->tabControl1);
			this->Name = L"opcionesAdminForm";
			this->Text = L"opcionesAdminForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancel1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnCancel2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
