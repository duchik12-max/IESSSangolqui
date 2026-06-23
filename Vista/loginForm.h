#pragma once
#include "../Controlador/ControladorLogin.h"
#include <msclr/marshal_cppstd.h>
#include "menuAdminForm.h"
#include "menuDirectorForm.h"
#include "menuPersonalForm.h"
#include "menuPacienteForm.h"



namespace Vista {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de loginForm
	/// </summary>
	public ref class loginForm : public System::Windows::Forms::Form
	{
	public:
		loginForm(void)
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
		~loginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Button^ btnIngresar;
	private: System::Windows::Forms::TextBox^ txtContra;
	private: System::Windows::Forms::TextBox^ txtUsuario;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loginForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnIngresar = (gcnew System::Windows::Forms::Button());
			this->txtContra = (gcnew System::Windows::Forms::TextBox());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnIngresar);
			this->panel1->Controls->Add(this->txtContra);
			this->panel1->Controls->Add(this->txtUsuario);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(572, 409);
			this->panel1->TabIndex = 0;
			// 
			// btnIngresar
			// 
			this->btnIngresar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnIngresar->Location = System::Drawing::Point(383, 336);
			this->btnIngresar->Name = L"btnIngresar";
			this->btnIngresar->Size = System::Drawing::Size(143, 58);
			this->btnIngresar->TabIndex = 7;
			this->btnIngresar->Text = L"Ingresar";
			this->btnIngresar->UseVisualStyleBackColor = false;
			this->btnIngresar->Click += gcnew System::EventHandler(this, &loginForm::btnIngresar_Click);
			// 
			// txtContra
			// 
			this->txtContra->Location = System::Drawing::Point(75, 274);
			this->txtContra->Name = L"txtContra";
			this->txtContra->PasswordChar = '*';
			this->txtContra->Size = System::Drawing::Size(163, 22);
			this->txtContra->TabIndex = 6;
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(75, 169);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(163, 22);
			this->txtUsuario->TabIndex = 5;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(3, 384);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 22);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(336, 128);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(193, 168);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(566, 98);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 2;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(72, 233);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Contraseña";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(72, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(54, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Usuario";
			// 
			// loginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(596, 433);
			this->Controls->Add(this->panel1);
			this->Name = L"loginForm";
			this->Text = L"loginForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnIngresar_Click(System::Object^ sender, System::EventArgs^ e) {
		// ---- Conversión String^ -> std::string (unica vez, al leer los controles) ----
		String^ textoUsuario = this->txtUsuario->Text;
		string usuarioIngresado = msclr::interop::marshal_as<string>(textoUsuario);

		String^ textoContra = this->txtContra->Text;
		string contrasenaIngresada = msclr::interop::marshal_as<string>(textoContra);

		// Ruta del JSON: ajusta los ".." segun la profundidad de tu carpeta bin/Debug
		string rutaJson = msclr::interop::marshal_as<string>(
			System::IO::Path::Combine(Application::StartupPath, "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\usuarios.json"));

		Controlador::ControladorLogin controlador(rutaJson);
		Controlador::ResultadoLogin* resultado = controlador.validarLogin(usuarioIngresado,
			contrasenaIngresada);

		if (!resultado->exitoso)
		{
			// ---- Conversión std::string -> String^ (para mostrar en MessageBox) ----
			String^ mensaje = msclr::interop::marshal_as<String^>(resultado->	mensajeError);
			MessageBox::Show(mensaje, "Error de acceso",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		// ---- Conversión std::string -> String^ (para mostrar el nombre en bienvenida) ----
		String^ nombreBienvenida = msclr::interop::marshal_as<String^>(resultado->nombreUsuario);
		MessageBox::Show("Bienvenido/a, " + nombreBienvenida, "Acceso correcto",
			MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Redireccion segun perfil (la comparacion se hace con std::string nativo)
		if (resultado->perfil == "Administrador")
		{
			menuAdminForm^ menu = gcnew menuAdminForm();
			menu->Show();
			this->Hide();
		}
		else if (resultado->perfil == "Director")
		{
			menuDirectorForm^ menu = gcnew menuDirectorForm();
			menu->Show();
			this->Hide();
		}
		else if (resultado->perfil == "Personal")
		{
			menuPersonalForm^ menu = gcnew menuPersonalForm();
			menu->Show();
			this->Hide();
		}
		else if (resultado->perfil == "Paciente")
		{
			menuPacienteForm^ menu = gcnew menuPacienteForm();
			menu->Show();
			this->Hide();
		}
		else
		{
			MessageBox::Show("Perfil no reconocido en el sistema.", "Error",
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
			
	}
};
}
