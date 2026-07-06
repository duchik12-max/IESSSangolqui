#pragma once
#include "../Controlador/ControladorUsuario.h"
#include <msclr/marshal_cppstd.h>
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
	private: System::Windows::Forms::DataGridView^ dgvUsuario;

	private: System::Windows::Forms::TextBox^ txtBusquedaCedu;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ lblPerfil;
	private: System::Windows::Forms::Label^ lblNombre;





	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboUsuario;
	private: System::Windows::Forms::Label^ labNombre;



	private: System::Windows::Forms::Button^ btnBloquear;
	private: System::Windows::Forms::Button^ btnCancel3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtContrasena;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ lblEstado;
	private: System::Windows::Forms::Label^ label13;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(opcionesAdminForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnCancel1 = (gcnew System::Windows::Forms::Button());
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCancel2 = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->dgvUsuario = (gcnew System::Windows::Forms::DataGridView());
			this->txtBusquedaCedu = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->lblEstado = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->lblPerfil = (gcnew System::Windows::Forms::Label());
			this->lblNombre = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboUsuario = (gcnew System::Windows::Forms::ComboBox());
			this->labNombre = (gcnew System::Windows::Forms::Label());
			this->btnBloquear = (gcnew System::Windows::Forms::Button());
			this->btnCancel3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuario))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(12, 101);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(623, 392);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &opcionesAdminForm::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->txtContrasena);
			this->tabPage1->Controls->Add(this->txtUsuario);
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->label11);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->btnCancel1);
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
			this->tabPage1->Size = System::Drawing::Size(615, 363);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Registrar";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &opcionesAdminForm::tabPage1_Click);
			// 
			// txtContrasena
			// 
			this->txtContrasena->Location = System::Drawing::Point(345, 220);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->PasswordChar = '*';
			this->txtContrasena->Size = System::Drawing::Size(135, 22);
			this->txtContrasena->TabIndex = 15;
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(345, 145);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(135, 22);
			this->txtUsuario->TabIndex = 14;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(342, 187);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(76, 16);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Contraseña";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(342, 114);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(54, 16);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Usuario";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(174, 3);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(292, 20);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Registro de Usuarios del Sistema";
			// 
			// btnCancel1
			// 
			this->btnCancel1->Location = System::Drawing::Point(52, 275);
			this->btnCancel1->Name = L"btnCancel1";
			this->btnCancel1->Size = System::Drawing::Size(155, 57);
			this->btnCancel1->TabIndex = 10;
			this->btnCancel1->Text = L"Cancelar";
			this->btnCancel1->UseVisualStyleBackColor = true;
			this->btnCancel1->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnCancel1_Click);
			// 
			// btnRegistrar
			// 
			this->btnRegistrar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnRegistrar->Location = System::Drawing::Point(418, 275);
			this->btnRegistrar->Name = L"btnRegistrar";
			this->btnRegistrar->Size = System::Drawing::Size(143, 57);
			this->btnRegistrar->TabIndex = 8;
			this->btnRegistrar->Text = L"Registrar";
			this->btnRegistrar->UseVisualStyleBackColor = false;
			this->btnRegistrar->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnRegistrar_Click);
			// 
			// comboPerfil
			// 
			this->comboPerfil->FormattingEnabled = true;
			this->comboPerfil->Location = System::Drawing::Point(345, 70);
			this->comboPerfil->Name = L"comboPerfil";
			this->comboPerfil->Size = System::Drawing::Size(135, 24);
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
			this->txtNombre->TextChanged += gcnew System::EventHandler(this, &opcionesAdminForm::txtNombre_TextChanged);
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
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->btnCancel2);
			this->tabPage2->Controls->Add(this->btnBuscar);
			this->tabPage2->Controls->Add(this->dgvUsuario);
			this->tabPage2->Controls->Add(this->txtBusquedaCedu);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(615, 363);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Buscar";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(217, 3);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(189, 20);
			this->label7->TabIndex = 5;
			this->label7->Text = L"Busqueda por Cédula";
			// 
			// btnCancel2
			// 
			this->btnCancel2->Location = System::Drawing::Point(23, 279);
			this->btnCancel2->Name = L"btnCancel2";
			this->btnCancel2->Size = System::Drawing::Size(141, 61);
			this->btnCancel2->TabIndex = 4;
			this->btnCancel2->Text = L"Cancelar";
			this->btnCancel2->UseVisualStyleBackColor = true;
			this->btnCancel2->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnCancel2_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnBuscar->Location = System::Drawing::Point(452, 279);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(141, 61);
			this->btnBuscar->TabIndex = 3;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = false;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnBuscar_Click);
			// 
			// dgvUsuario
			// 
			this->dgvUsuario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsuario->Location = System::Drawing::Point(23, 100);
			this->dgvUsuario->Name = L"dgvUsuario";
			this->dgvUsuario->RowHeadersWidth = 51;
			this->dgvUsuario->RowTemplate->Height = 24;
			this->dgvUsuario->Size = System::Drawing::Size(570, 150);
			this->dgvUsuario->TabIndex = 2;
			// 
			// txtBusquedaCedu
			// 
			this->txtBusquedaCedu->Location = System::Drawing::Point(160, 56);
			this->txtBusquedaCedu->Name = L"txtBusquedaCedu";
			this->txtBusquedaCedu->Size = System::Drawing::Size(195, 22);
			this->txtBusquedaCedu->TabIndex = 1;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(49, 56);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(50, 16);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Cédula";
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->lblEstado);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->lblPerfil);
			this->tabPage3->Controls->Add(this->lblNombre);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label9);
			this->tabPage3->Controls->Add(this->comboUsuario);
			this->tabPage3->Controls->Add(this->labNombre);
			this->tabPage3->Controls->Add(this->btnBloquear);
			this->tabPage3->Controls->Add(this->btnCancel3);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(615, 363);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Bloquear";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// lblEstado
			// 
			this->lblEstado->AutoSize = true;
			this->lblEstado->Location = System::Drawing::Point(451, 138);
			this->lblEstado->Name = L"lblEstado";
			this->lblEstado->Size = System::Drawing::Size(45, 16);
			this->lblEstado->TabIndex = 10;
			this->lblEstado->Text = L"Empty";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(451, 88);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 16);
			this->label13->TabIndex = 9;
			this->label13->Text = L"Estado:";
			// 
			// lblPerfil
			// 
			this->lblPerfil->AutoSize = true;
			this->lblPerfil->Location = System::Drawing::Point(163, 191);
			this->lblPerfil->Name = L"lblPerfil";
			this->lblPerfil->Size = System::Drawing::Size(45, 16);
			this->lblPerfil->TabIndex = 8;
			this->lblPerfil->Text = L"Empty";
			// 
			// lblNombre
			// 
			this->lblNombre->AutoSize = true;
			this->lblNombre->Location = System::Drawing::Point(163, 138);
			this->lblNombre->Name = L"lblNombre";
			this->lblNombre->Size = System::Drawing::Size(45, 16);
			this->lblNombre->TabIndex = 7;
			this->lblNombre->Text = L"Empty";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(74, 191);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 16);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Perfil";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(76, 88);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 16);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Usuario";
			// 
			// comboUsuario
			// 
			this->comboUsuario->FormattingEnabled = true;
			this->comboUsuario->Location = System::Drawing::Point(166, 88);
			this->comboUsuario->Name = L"comboUsuario";
			this->comboUsuario->Size = System::Drawing::Size(167, 24);
			this->comboUsuario->TabIndex = 4;
			this->comboUsuario->SelectedIndexChanged += gcnew System::EventHandler(this, &opcionesAdminForm::comboUsuario_SelectedIndexChanged);
			// 
			// labNombre
			// 
			this->labNombre->AutoSize = true;
			this->labNombre->Location = System::Drawing::Point(76, 138);
			this->labNombre->Name = L"labNombre";
			this->labNombre->Size = System::Drawing::Size(56, 16);
			this->labNombre->TabIndex = 3;
			this->labNombre->Text = L"Nombre";
			// 
			// btnBloquear
			// 
			this->btnBloquear->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnBloquear->Location = System::Drawing::Point(421, 273);
			this->btnBloquear->Name = L"btnBloquear";
			this->btnBloquear->Size = System::Drawing::Size(134, 63);
			this->btnBloquear->TabIndex = 2;
			this->btnBloquear->Text = L"Bloquear";
			this->btnBloquear->UseVisualStyleBackColor = false;
			this->btnBloquear->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnBloquear_Click);
			// 
			// btnCancel3
			// 
			this->btnCancel3->BackColor = System::Drawing::Color::Transparent;
			this->btnCancel3->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnCancel3->Location = System::Drawing::Point(58, 273);
			this->btnCancel3->Name = L"btnCancel3";
			this->btnCancel3->Size = System::Drawing::Size(120, 63);
			this->btnCancel3->TabIndex = 1;
			this->btnCancel3->Text = L"Cancelar";
			this->btnCancel3->UseVisualStyleBackColor = false;
			this->btnCancel3->Click += gcnew System::EventHandler(this, &opcionesAdminForm::btnCancel3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(197, 3);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(184, 20);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Bloqueo de Usuarios";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(619, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// opcionesAdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 505);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->tabControl1);
			this->Name = L"opcionesAdminForm";
			this->Text = L"opcionesAdminForm";
			this->Load += gcnew System::EventHandler(this, &opcionesAdminForm::opcionesAdminForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsuario))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancel1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnCancel2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void txtNombre_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnCancel3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void opcionesAdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
	comboPerfil->Items->Add("Personal");
	comboPerfil->Items->Add("Director");
	comboPerfil->Items->Add("Paciente");
	comboPerfil->SelectedIndex = 0;
}
private: System::Void btnRegistrar_Click(System::Object^ sender, System::EventArgs^ e) {
	// coversion de string administrado a string nativo 
	String^ txNombre = txtNombre->Text->Trim();
	String^ txCedula = txtCedula->Text->Trim();
	String^ txCorreo = txtCorreo->Text->Trim();
	String^ txPerfil = comboPerfil->SelectedItem->ToString();
	String^ txUsuario = txtUsuario->Text->Trim();
	String^ txContrasena = txtContrasena->Text->Trim();

	string nombre = msclr::interop::marshal_as<string>(txNombre);
	string cedula = msclr::interop::marshal_as<string>(txCedula);
	string correo = msclr::interop::marshal_as<string>(txCorreo);
	string perfil = msclr::interop::marshal_as<string>(txPerfil);
	string usuario = msclr::interop::marshal_as<string>(txUsuario);
	string contrasena = msclr::interop::marshal_as<string>(txContrasena);

	/** ruta base del JSON en la carpeta raiz nunca funciona jaja por eso mejor lo hago manualmente
	String^ rutaBase = System::IO::Path::Combine(Application::StartupPath, "..\\..\\..\\Archivos");
	string rutaJson = msclr::interop::marshal_as<string>(System::IO::Path::Combine(rutaBase, "usuarios.json"));
	/**/
	// ruta del archivo JSON nota mental: siempre cambiarla luego no vale
	string rutaJson = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\usuarios.json";

	Controlador::ControladorUsuario controlador(rutaJson);
	string error = controlador.registrarUsuario(nombre, cedula, correo,perfil, usuario, contrasena);
	if (!error.empty())
	{
		String^ msgError = msclr::interop::marshal_as<String^>(error);
		MessageBox::Show(msgError, "Error de validacion",MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	MessageBox::Show("El usuario ha sido registrado", "Exito",MessageBoxButtons::OK, MessageBoxIcon::Information);

	// Limpiar campos
	txtNombre->Text = "";
	txtCedula->Text = "";
	txtCorreo->Text = "";
	txtUsuario->Text = "";
	txtContrasena->Text = "";
	comboPerfil->SelectedIndex = 0;
}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	//tomo el campo de cedula y lo transformo
	String^ txCedula = txtBusquedaCedu->Text->Trim();
	string cedula = msclr::interop::marshal_as<string>(txCedula);

	if (cedula.empty())
	{
		MessageBox::Show("Debe ingresar una cedula para buscar.", "Campo vacio",MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// aca mejor ya ni intento la ruta base, ruta manual (siempre cambiarla)
	string rutaJson = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\usuarios.json";

	Controlador::ControladorUsuario controlador(rutaJson);
	Modelo::Usuario* encontrado = controlador.buscarPorCedula(cedula);

	dgvUsuario->Rows->Clear();
	dgvUsuario->Columns->Clear();

	if (encontrado == nullptr)
	{
		MessageBox::Show("Usuario no encontrado.", "Sin resultados",MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// Definir columnas
	dgvUsuario->Columns->Add("colNombre", "Nombre");
	dgvUsuario->Columns->Add("colCedula", "Cedula");
	dgvUsuario->Columns->Add("colCorreo", "Correo");
	dgvUsuario->Columns->Add("colUsuario", "Usuario");
	dgvUsuario->Columns->Add("colPerfil", "Perfil");
	dgvUsuario->Columns->Add("colEstado", "Estado");

	String^ nombre = msclr::interop::marshal_as<String^>(encontrado->getNombre());
	String^ ced = msclr::interop::marshal_as<String^>(encontrado->getCedula());
	String^ correo = msclr::interop::marshal_as<String^>(encontrado->getCorreo());
	String^ usuario = msclr::interop::marshal_as<String^>(encontrado->getUsuario());
	String^ perfil = msclr::interop::marshal_as<String^>(encontrado->getPerfil());
	String^ estado = encontrado->getEstado() ? "Activo" : "Bloqueado";

	dgvUsuario->Rows->Add(nombre, ced, correo, usuario, perfil, estado);

	delete encontrado;
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (tabControl1->SelectedIndex != 2)
		return;
	//aca tambien recordar
	string rutaJson = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\usuarios.json";

	Controlador::ControladorUsuario controlador(rutaJson);
	vector<Modelo::Usuario> lista = controlador.cargarUsuariosSinAdmin();

	comboUsuario->Items->Clear();
	for (const Modelo::Usuario& u : lista)
	{
		String^ nombreUsuario = msclr::interop::marshal_as<String^>(u.getUsuario());
		comboUsuario->Items->Add(nombreUsuario);
	}

	if (comboUsuario->Items->Count > 0)
		comboUsuario->SelectedIndex = 0;

	// Limpiar labels
	lblNombre->Text = "Empty";
	lblPerfil->Text = "Empty";
	lblEstado->Text = "Empty";
}
private: System::Void comboUsuario_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (comboUsuario->SelectedItem == nullptr)
		return;

	String^ txUsuario = comboUsuario->SelectedItem->ToString();
	string usuarioSeleccionado = msclr::interop::marshal_as<string>(txUsuario);

	//y aca
	string rutaJson = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\usuarios.json";

	Controlador::ControladorUsuario controlador(rutaJson);
	vector<Modelo::Usuario> lista = controlador.cargarUsuariosSinAdmin();

	for (const Modelo::Usuario& u : lista)
	{
		if (u.getUsuario() == usuarioSeleccionado)
		{
			lblNombre->Text = msclr::interop::marshal_as<String^>(u.getNombre());
			lblPerfil->Text = msclr::interop::marshal_as<String^>(u.getPerfil());
			lblEstado->Text = u.getEstado() ? "Activo" : "Bloqueado";
			break;
		}
	}
}
private: System::Void btnBloquear_Click(System::Object^ sender, System::EventArgs^ e) {
	if (comboUsuario->SelectedItem == nullptr)
	{
		MessageBox::Show("Seleccione un usuario.", "Sin seleccion",MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	String^ txUsuario = comboUsuario->SelectedItem->ToString();
	string usuarioSeleccionado = msclr::interop::marshal_as<string>(txUsuario);

	//y tambien aca, no cargo 1 vez pq en este form esta sujeto a cambio la informacion del JSON
	string rutaJson = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\usuarios.json";

	Controlador::ControladorUsuario controlador(rutaJson);
	int resultado = controlador.bloquearUsuario(usuarioSeleccionado);

	if (resultado == 0)
	{
		MessageBox::Show("Usuario Bloqueado.", "Exito",MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	else if (resultado == 1)
	{
		MessageBox::Show("El usuario ya estaba bloqueado.", "Aviso",MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}

	// Limpiar campos despues de cualquier mensaje
	comboUsuario->SelectedIndex = -1;
	lblNombre->Text = "Empty";
	lblPerfil->Text = "Empty";
	lblEstado->Text = "Empty";
}
};
}
