#pragma once
#include "../Controlador/ControladorTrabajador.h"
#include <msclr/marshal_cppstd.h>
namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de horariosForm
	/// </summary>
	public ref class horariosForm : public System::Windows::Forms::Form
	{
	public:
		horariosForm(void)
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
		~horariosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Button^ btnGuardar;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ cbArea;

	private: System::Windows::Forms::ComboBox^ cbDia;

	private: System::Windows::Forms::ComboBox^ cbHoraFin;

	private: System::Windows::Forms::ComboBox^ cbHoraInicio;

	private: System::Windows::Forms::TextBox^ txtEdad;

	private: System::Windows::Forms::TextBox^ txtNombre;
	private: System::Windows::Forms::TextBox^ txtApellido;

	private: System::Windows::Forms::Label^ label8;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(horariosForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cbArea = (gcnew System::Windows::Forms::ComboBox());
			this->cbDia = (gcnew System::Windows::Forms::ComboBox());
			this->cbHoraFin = (gcnew System::Windows::Forms::ComboBox());
			this->cbHoraInicio = (gcnew System::Windows::Forms::ComboBox());
			this->txtEdad = (gcnew System::Windows::Forms::TextBox());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtApellido);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->btnGuardar);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->cbArea);
			this->panel1->Controls->Add(this->cbDia);
			this->panel1->Controls->Add(this->cbHoraFin);
			this->panel1->Controls->Add(this->cbHoraInicio);
			this->panel1->Controls->Add(this->txtEdad);
			this->panel1->Controls->Add(this->txtNombre);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(672, 505);
			this->panel1->TabIndex = 0;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(239, 173);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(153, 22);
			this->txtApellido->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(236, 132);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 16);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Apellido";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(569, 83);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 100);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 16;
			this->pictureBox2->TabStop = false;
			// 
			// btnGuardar
			// 
			this->btnGuardar->Location = System::Drawing::Point(522, 442);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(122, 49);
			this->btnGuardar->TabIndex = 15;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = true;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &horariosForm::btnGuardar_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 442);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(125, 49);
			this->button1->TabIndex = 14;
			this->button1->Text = L"Cancelar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &horariosForm::button1_Click);
			// 
			// cbArea
			// 
			this->cbArea->FormattingEnabled = true;
			this->cbArea->Location = System::Drawing::Point(509, 261);
			this->cbArea->Name = L"cbArea";
			this->cbArea->Size = System::Drawing::Size(135, 24);
			this->cbArea->TabIndex = 13;
			// 
			// cbDia
			// 
			this->cbDia->FormattingEnabled = true;
			this->cbDia->Location = System::Drawing::Point(353, 261);
			this->cbDia->Name = L"cbDia";
			this->cbDia->Size = System::Drawing::Size(115, 24);
			this->cbDia->TabIndex = 12;
			// 
			// cbHoraFin
			// 
			this->cbHoraFin->FormattingEnabled = true;
			this->cbHoraFin->Location = System::Drawing::Point(188, 261);
			this->cbHoraFin->Name = L"cbHoraFin";
			this->cbHoraFin->Size = System::Drawing::Size(105, 24);
			this->cbHoraFin->TabIndex = 11;
			// 
			// cbHoraInicio
			// 
			this->cbHoraInicio->FormattingEnabled = true;
			this->cbHoraInicio->Location = System::Drawing::Point(36, 261);
			this->cbHoraInicio->Name = L"cbHoraInicio";
			this->cbHoraInicio->Size = System::Drawing::Size(97, 24);
			this->cbHoraInicio->TabIndex = 10;
			// 
			// txtEdad
			// 
			this->txtEdad->Location = System::Drawing::Point(446, 173);
			this->txtEdad->Name = L"txtEdad";
			this->txtEdad->Size = System::Drawing::Size(96, 22);
			this->txtEdad->TabIndex = 9;
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(36, 173);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(151, 22);
			this->txtNombre->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(506, 224);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(36, 16);
			this->label7->TabIndex = 7;
			this->label7->Text = L"Área";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(350, 224);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(28, 16);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Día";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(185, 224);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(77, 16);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Hora de Fin";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Hora de Inicio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(443, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(40, 16);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Edad";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(33, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(233, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Registro de Horarios";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(666, 77);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// horariosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 529);
			this->Controls->Add(this->panel1);
			this->Name = L"horariosForm";
			this->Text = L"horariosForm";
			this->Load += gcnew System::EventHandler(this, &horariosForm::horariosForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void horariosForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//carga las horas del dia con el formato 00:00, en los combobox claro
	for (int h = 0; h < 24; h++)
	{
		String^ hora = (h < 10 ? "0" : "") + h.ToString() + ":00";
		cbHoraInicio->Items->Add(hora);
		cbHoraFin->Items->Add(hora);
	}
	cbHoraInicio->SelectedIndex = 0;
	cbHoraFin->SelectedIndex = 0;

	//dias de la semana en su combo box
	cbDia->Items->Add("Lunes");
	cbDia->Items->Add("Martes");
	cbDia->Items->Add("Miercoles");
	cbDia->Items->Add("Jueves");
	cbDia->Items->Add("Viernes");
	cbDia->Items->Add("Sabado");
	cbDia->Items->Add("Domingo");
	cbDia->SelectedIndex = 0;

	//areas del hospital en su combo box
	cbArea->Items->Add("Consulta");
	cbArea->Items->Add("Emergencias");
	cbArea->Items->Add("Laboratorio");
	cbArea->Items->Add("Cirugia");
	cbArea->Items->Add("Farmacia");
	cbArea->SelectedIndex = 0;
}
private: System::Void btnGuardar_Click(System::Object^ sender, System::EventArgs^ e) {
	//no vale dejar campos vacios
	if (txtNombre->Text->Trim()->Equals("") ||txtApellido->Text->Trim()->Equals("") ||
		txtEdad->Text->Trim()->Equals(""))
	{
		MessageBox::Show("Debe completar todos los campos", "Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	//conversion de string administrado a string nativo
	String^ txNombre = txtNombre->Text->Trim();
	String^ txApellido = txtApellido->Text->Trim();
	String^ txEdad = txtEdad->Text->Trim();

	string nombre = msclr::interop::marshal_as<string>(txNombre);
	string apellido = msclr::interop::marshal_as<string>(txApellido);
	string horaInicio = msclr::interop::marshal_as<string>(cbHoraInicio->SelectedItem->ToString());
	string horaFin = msclr::interop::marshal_as<string>(cbHoraFin->SelectedItem->ToString());
	string dia = msclr::interop::marshal_as<string>(cbDia->SelectedItem->ToString());
	string area = msclr::interop::marshal_as<string>(cbArea->SelectedItem->ToString());

	//conversion de edad y validacion
	int edad = 0;
	try { edad = int::Parse(txEdad); }
	catch (...)
	{
		MessageBox::Show("La edad debe ser un numero entero","Edad invalida", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Ruta del CSV
	//aca tampoco vale la ruta de defecto en la carpeta raiz
	/**nose ya ni pq le sigo intentando esta parte xd
	String^ rutaBase = System::IO::Path::Combine(Application::StartupPath, "..\\..\\..\\Archivos");
	string rutaCsv = msclr::interop::marshal_as<string>(System::IO::Path::Combine(rutaBase, "horarios.csv"));
	/**/
	//nuevamente recordar cambiar esto sino media buscando el error denuevo
	string rutaCsv = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\horarios.csv";
	Controlador::ControladorTrabajador controlador(rutaCsv);
	string error = controlador.guardarTrabajador(nombre, apellido, edad,horaInicio, horaFin, dia, area);
	if (!error.empty())
	{
		String^ msgError = msclr::interop::marshal_as<String^>(error);
		MessageBox::Show(msgError, "Error de validacion",MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	MessageBox::Show("Horario guardado", "Exito",MessageBoxButtons::OK, MessageBoxIcon::Information);

	//limpiar los campos
	txtNombre->Text = "";
	txtApellido->Text = "";
	txtEdad->Text = "";
	cbHoraInicio->SelectedIndex = 0;
	cbHoraFin->SelectedIndex = 0;
	cbDia->SelectedIndex = 0;
	cbArea->SelectedIndex = 0;
}
};
}
