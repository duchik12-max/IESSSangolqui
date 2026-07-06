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
	/// Resumen de busquedaHorariosForm
	/// </summary>
	public ref class busquedaHorariosForm : public System::Windows::Forms::Form
	{
	public:
		busquedaHorariosForm(void)
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
		~busquedaHorariosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnBuscar;
	private: System::Windows::Forms::TextBox^ txtNombre;



	private: System::Windows::Forms::DataGridView^ dgvHorarios;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ btnHorarios;
	private: System::Windows::Forms::ComboBox^ cbDia;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtApellido;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(busquedaHorariosForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->txtApellido = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->cbDia = (gcnew System::Windows::Forms::ComboBox());
			this->btnBuscar = (gcnew System::Windows::Forms::Button());
			this->txtNombre = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->dgvHorarios = (gcnew System::Windows::Forms::DataGridView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->btnHorarios = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHorarios))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->txtApellido);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->cbDia);
			this->panel1->Controls->Add(this->btnBuscar);
			this->panel1->Controls->Add(this->txtNombre);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(687, 246);
			this->panel1->TabIndex = 0;
			// 
			// txtApellido
			// 
			this->txtApellido->Location = System::Drawing::Point(359, 126);
			this->txtApellido->Name = L"txtApellido";
			this->txtApellido->Size = System::Drawing::Size(149, 22);
			this->txtApellido->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(293, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(57, 16);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Apellido";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(46, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(28, 16);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Día";
			// 
			// cbDia
			// 
			this->cbDia->FormattingEnabled = true;
			this->cbDia->Location = System::Drawing::Point(122, 182);
			this->cbDia->Name = L"cbDia";
			this->cbDia->Size = System::Drawing::Size(121, 24);
			this->cbDia->TabIndex = 6;
			// 
			// btnBuscar
			// 
			this->btnBuscar->Location = System::Drawing::Point(396, 182);
			this->btnBuscar->Name = L"btnBuscar";
			this->btnBuscar->Size = System::Drawing::Size(112, 50);
			this->btnBuscar->TabIndex = 5;
			this->btnBuscar->Text = L"Buscar";
			this->btnBuscar->UseVisualStyleBackColor = true;
			this->btnBuscar->Click += gcnew System::EventHandler(this, &busquedaHorariosForm::btnBuscar_Click);
			// 
			// txtNombre
			// 
			this->txtNombre->Location = System::Drawing::Point(122, 126);
			this->txtNombre->Name = L"txtNombre";
			this->txtNombre->Size = System::Drawing::Size(141, 22);
			this->txtNombre->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 126);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 16);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Nombre";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(223, 78);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Busqueda Específica";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(537, 78);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(127, 128);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 69);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(253, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(164, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Busqueda General";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->dgvHorarios);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->btnHorarios);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(15, 280);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(684, 432);
			this->panel2->TabIndex = 1;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(290, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 16);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Resultado(s)";
			// 
			// dgvHorarios
			// 
			this->dgvHorarios->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvHorarios->Location = System::Drawing::Point(24, 100);
			this->dgvHorarios->Name = L"dgvHorarios";
			this->dgvHorarios->RowHeadersWidth = 51;
			this->dgvHorarios->RowTemplate->Height = 24;
			this->dgvHorarios->Size = System::Drawing::Size(637, 228);
			this->dgvHorarios->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(24, 358);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(146, 50);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Cancelar";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &busquedaHorariosForm::button3_Click);
			// 
			// btnHorarios
			// 
			this->btnHorarios->Location = System::Drawing::Point(487, 358);
			this->btnHorarios->Name = L"btnHorarios";
			this->btnHorarios->Size = System::Drawing::Size(174, 50);
			this->btnHorarios->TabIndex = 5;
			this->btnHorarios->Text = L"Ver Horarios";
			this->btnHorarios->UseVisualStyleBackColor = true;
			this->btnHorarios->Click += gcnew System::EventHandler(this, &busquedaHorariosForm::btnHorarios_Click);
			// 
			// busquedaHorariosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(711, 724);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"busquedaHorariosForm";
			this->Text = L"busquedaHorariosForm";
			this->Load += gcnew System::EventHandler(this, &busquedaHorariosForm::busquedaHorariosForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvHorarios))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnBuscar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtNombre->Text->Trim()->Equals("") ||txtApellido->Text->Trim()->Equals(""))
		{
			MessageBox::Show("Debe ingresaar nombre y apellido","Campos incompletos", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		//obtencion y conversion del nombre y apellido
		String^ txNombre = txtNombre->Text->Trim();
		String^ txApellido = txtApellido->Text->Trim();

		string nombre = msclr::interop::marshal_as<string>(txNombre);
		string apellido = msclr::interop::marshal_as<string>(txApellido);
		string dia = msclr::interop::marshal_as<string>(cbDia->SelectedItem->ToString());
		//ruta del CSV aca ya ni lo intento, siempre cambiaar
		string rutaCsv = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\horarios.csv";

		Controlador::ControladorTrabajador controlador(rutaCsv);
		Modelo::Trabajador* encontrado = controlador.buscarHorario(nombre, apellido, dia);

		//limpiar DataGridView
		dgvHorarios->Rows->Clear();
		dgvHorarios->Columns->Clear();

		if (encontrado == nullptr)
		{
			MessageBox::Show("No hay coincidencias.", "Sin resultados",MessageBoxButtons::OK, MessageBoxIcon::Information);
			return;
		}

		// Definir columnas
		dgvHorarios->Columns->Add("colNombre", "Nombre");
		dgvHorarios->Columns->Add("colApellido", "Apellido");
		dgvHorarios->Columns->Add("colEdad", "Edad");
		dgvHorarios->Columns->Add("colHoraInicio", "Hora Inicio");
		dgvHorarios->Columns->Add("colHoraFin", "Hora Fin");
		dgvHorarios->Columns->Add("colDia", "Dia");
		dgvHorarios->Columns->Add("colArea", "Area");

		String^ nom = msclr::interop::marshal_as<String^>(encontrado->getNombre());
		String^ ape = msclr::interop::marshal_as<String^>(encontrado->getApellido());
		String^ edad = encontrado->getEdad().ToString();
		String^ hi = msclr::interop::marshal_as<String^>(encontrado->getHoraInicio());
		String^ hf = msclr::interop::marshal_as<String^>(encontrado->getHoraFin());
		String^ d = msclr::interop::marshal_as<String^>(encontrado->getDia());
		String^ ar = msclr::interop::marshal_as<String^>(encontrado->getArea());

		dgvHorarios->Rows->Add(nom, ape, edad, hi, hf, d, ar);

		delete encontrado;
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void busquedaHorariosForm_Load(System::Object^ sender, System::EventArgs^ e) {
	cbDia->Items->Add("Lunes");
	cbDia->Items->Add("Martes");
	cbDia->Items->Add("Miercoles");
	cbDia->Items->Add("Jueves");
	cbDia->Items->Add("Viernes");
	cbDia->Items->Add("Sabado");
	cbDia->Items->Add("Domingo");
	cbDia->SelectedIndex = 0;
}
private: System::Void btnHorarios_Click(System::Object^ sender, System::EventArgs^ e) {
	//ruta del CSV, siempre cambiaar
	string rutaCsv = "C:\\Users\\PC\\Documents\\Salesiana\\Segundo Semestre\\POO\\Proyectos_Visual\\ProyHospitalKD\\IESSSangolqui\\Archivos\\horarios.csv";

	Controlador::ControladorTrabajador controlador(rutaCsv);
	vector<Modelo::Trabajador> lista = controlador.cargarTrabajadores();

	// limpiar DataGridView
	dgvHorarios->Rows->Clear();
	dgvHorarios->Columns->Clear();

	if (lista.empty())
	{
		MessageBox::Show("No hay horarios registrados.", "Sin datos",MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	// Definir columnas
	dgvHorarios->Columns->Add("colNombre", "Nombre");
	dgvHorarios->Columns->Add("colApellido", "Apellido");
	dgvHorarios->Columns->Add("colEdad", "Edad");
	dgvHorarios->Columns->Add("colHoraInicio", "Hora Inicio");
	dgvHorarios->Columns->Add("colHoraFin", "Hora Fin");
	dgvHorarios->Columns->Add("colDia", "Dia");
	dgvHorarios->Columns->Add("colArea", "Area");

	for (const Modelo::Trabajador& t : lista)
	{
		String^ nom = msclr::interop::marshal_as<String^>(t.getNombre());
		String^ ape = msclr::interop::marshal_as<String^>(t.getApellido());
		String^ edad = t.getEdad().ToString();
		String^ hi = msclr::interop::marshal_as<String^>(t.getHoraInicio());
		String^ hf = msclr::interop::marshal_as<String^>(t.getHoraFin());
		String^ d = msclr::interop::marshal_as<String^>(t.getDia());
		String^ ar = msclr::interop::marshal_as<String^>(t.getArea());

		dgvHorarios->Rows->Add(nom, ape, edad, hi, hf, d, ar);
	}
}
};
}
