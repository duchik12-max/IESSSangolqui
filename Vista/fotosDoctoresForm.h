#pragma once
#include "../Controlador/ControladorDoctor.h"
#include "../Modelo/ArchivoNoEncontradoException.h"
#include "../Modelo/ArchivoCorruptoException.h"
#include <msclr/marshal_cppstd.h>
namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de fotosDoctoresForm
	/// </summary>
	public ref class fotosDoctoresForm : public System::Windows::Forms::Form
	{
	public:
		fotosDoctoresForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			rutaFotoSeleccionada = "";
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~fotosDoctoresForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ btnCancelar;
	protected:


	private: System::Windows::Forms::Button^ btnBuscar;



	private: System::Windows::Forms::TextBox^ txtNombre;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ picFoto;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::ComboBox^ cmbEspecialidad;
	private: System::Windows::Forms::Label^ label5;

		String^ rutaFotoSeleccionada;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(fotosDoctoresForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->cmbEspecialidad = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picFoto = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picFoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->cmbEspecialidad);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->btnGuardar);
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->btnBuscar);
			this->panel1->Controls->Add(this->txtNombre);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->picFoto);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(634, 515);
			this->panel1->TabIndex = 0;
			// 
			// cmbEspecialidad
			// 
			this->cmbEspecialidad->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbEspecialidad->FormattingEnabled = true;
			this->cmbEspecialidad->Location = System::Drawing::Point(52, 269);
			this->cmbEspecialidad->Name = L"cmbEspecialidad";
			this->cmbEspecialidad->Size = System::Drawing::Size(196, 24);
			this->cmbEspecialidad->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(163, 94);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(285, 22);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Datos Adicionales de Doctores";
			// 
			// btnGuardar
			// 
			this->btnGuardar->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->btnGuardar->Location = System::Drawing::Point(429, 436);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(134, 50);
			this->btnGuardar->TabIndex = 9;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &fotosDoctoresForm::btnGuardar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(52, 436);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(134, 50);
			this->btnCancelar->TabIndex = 8;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &fotosDoctoresForm::btnCancelar_Click);
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(482, 148);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(91, 34);
			this->btnBuscar->TabIndex = 7;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &fotosDoctoresForm::btnBuscar_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(52, 179);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(196, 22);
			this->txtNombre->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(404, 157);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 16);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Foto (jpg)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(49, 234);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(87, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Especialidad";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nombre:";
			// 
			// picFoto
			// 
			this->picFoto->Location = System::Drawing::Point(407, 234);
			this->picFoto->Name = L"picFoto";
			this->picFoto->Size = System::Drawing::Size(166, 183);
			this->picFoto->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->picFoto->TabIndex = 1;
			this->picFoto->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(628, 88);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(440, 198);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(105, 16);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Previsualización";
			// 
			// fotosDoctoresForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(658, 539);
			this->Controls->Add(this->panel1);
			this->Name = L"fotosDoctoresForm";
			this->Text = L"fotosDoctoresForm";
			this->Load += gcnew System::EventHandler(this, &fotosDoctoresForm::fotosDoctoresForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picFoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenFileDialog^ dialogo = gcnew OpenFileDialog();
	dialogo->Title = "Seleccionar foto del doctor";
	dialogo->Filter = "Imagenes JPG (*.jpg;*.jpeg)|*.jpg;*.jpeg";
	dialogo->Multiselect = false;

	if (dialogo->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		rutaFotoSeleccionada = dialogo->FileName;
		// Previsualizar con proteccion por si el archivo no es imagen valida
		try
		{
			// Cargar en memoria para liberar el archivo inmediatamente
			System::IO::FileStream^ fs = gcnew System::IO::FileStream(rutaFotoSeleccionada, System::IO::FileMode::Open, System::IO::FileAccess::Read);
			cli::array<System::Byte>^ bytes = gcnew cli::array<System::Byte>(safe_cast<int>(fs->Length));
			fs->Read(bytes, 0, bytes->Length);
			fs->Close();
			fs->~FileStream();

			System::IO::MemoryStream^ ms = gcnew System::IO::MemoryStream(bytes);
			picFoto->Image = Image::FromStream(ms);
		}
		catch (Exception^)
		{
			picFoto->Image = nullptr;
			/** Inavilitado para que la excepcion sea visible
			MessageBox::Show("El archivo seleccionado no es una imagen JPG valida.","Archivo invalido", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			rutaFotoSeleccionada = "";
			/**/
		}
	}
}
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	// Validacion de campos vacios
	if (txtNombre->Text->Trim()->Equals("") ||
		cmbEspecialidad->SelectedItem == nullptr ||
		rutaFotoSeleccionada->Equals(""))
	{
		MessageBox::Show("Debe completar todos los campos y seleccionar una foto.","Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Conversion String^ -> std::string
	String^ textoNombre = txtNombre->Text->Trim();
	String^ textoEspecialidad = cmbEspecialidad->SelectedItem->ToString();

	string nombre = msclr::interop::marshal_as<string>(textoNombre);
	string especialidad = msclr::interop::marshal_as<string>(textoEspecialidad);
	String^ textoRutaFoto = rutaFotoSeleccionada;
	string rutaFoto = msclr::interop::marshal_as<string>(textoRutaFoto);

	//carpeta Archivos en la raiz de la solucion o editar la ruta
	String^ rutaBase = System::IO::Path::Combine(Application::StartupPath, "..\\..\\..\\Archivos");

	string rutaCsv = msclr::interop::marshal_as<string>(System::IO::Path::Combine(rutaBase, "doctores.csv"));
	string carpetaFotos = msclr::interop::marshal_as<string>(System::IO::Path::Combine(rutaBase, "Fotos"));

	// Crear carpeta Fotos si no existe
	if (!System::IO::Directory::Exists(System::IO::Path::Combine(rutaBase, "Fotos")))
		System::IO::Directory::CreateDirectory(System::IO::Path::Combine(rutaBase, "Fotos"));

	try
	{
		Controlador::ControladorDoctor controlador(rutaCsv, carpetaFotos);
		controlador.guardarDoctor(nombre, especialidad, rutaFoto);

		MessageBox::Show("Doctor guardado correctamente.", "Exito",MessageBoxButtons::OK, MessageBoxIcon::Information);

		// Limpiar formulario
		txtNombre->Text = "";
		cmbEspecialidad->SelectedItem = nullptr;
		picFoto->Image = nullptr;
		rutaFotoSeleccionada = "";
	}
	catch (Modelo::ArchivoNoEncontradoException & ex)
	{
		string msg = ex.what();
		MessageBox::Show(msclr::interop::marshal_as<String^>(msg),"Archivo no encontrado", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Modelo::ArchivoCorruptoException& ex)
	{
		string msg = ex.what();
		MessageBox::Show(msclr::interop::marshal_as<String^>(msg),"Archivo invalido", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void fotosDoctoresForm_Load(System::Object^ sender, System::EventArgs^ e) {
	cmbEspecialidad->Items->Add("Medicina de Emergencia");
	cmbEspecialidad->Items->Add("Radiologia");
	cmbEspecialidad->Items->Add("Psiquiatria");
	cmbEspecialidad->Items->Add("Medicina Familiar");
	cmbEspecialidad->Items->Add("Analisis Clinico");
	cmbEspecialidad->Items->Add("Cirugia General");
	cmbEspecialidad->SelectedIndex = 0;
}
};
}
