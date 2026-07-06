#pragma once
#include "../Controlador/ControladorDoctor.h"
#include <msclr/marshal_cppstd.h>
namespace Vista {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de busquedaFotosForm
	/// </summary>
	public ref class busquedaFotosForm : public System::Windows::Forms::Form
	{
	public:
		busquedaFotosForm(void)
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
		~busquedaFotosForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ btnCancelar;

	private: System::Windows::Forms::Button^ btnDatos;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(busquedaFotosForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnDatos = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->btnDatos);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(857, 468);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(682, 3);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(149, 149);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// btnCancelar
			// 
			this->btnCancelar->Location = System::Drawing::Point(19, 394);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(125, 62);
			this->btnCancelar->TabIndex = 4;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = true;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &busquedaFotosForm::btnCancelar_Click);
			// 
			// btnDatos
			// 
			this->btnDatos->Location = System::Drawing::Point(720, 394);
			this->btnDatos->Name = L"btnDatos";
			this->btnDatos->Size = System::Drawing::Size(124, 62);
			this->btnDatos->TabIndex = 3;
			this->btnDatos->Text = L"Ver Datos";
			this->btnDatos->UseVisualStyleBackColor = true;
			this->btnDatos->Click += gcnew System::EventHandler(this, &busquedaFotosForm::btnDatos_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(323, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Fotos Registradas";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(3, 158);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(851, 221);
			this->dataGridView1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(663, 81);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// busquedaFotosForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(881, 492);
			this->Controls->Add(this->panel1);
			this->Name = L"busquedaFotosForm";
			this->Text = L"busquedaFotosForm";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnDatos_Click(System::Object^ sender, System::EventArgs^ e) {
		// Rutas
		String^ rutaBase = System::IO::Path::Combine(Application::StartupPath, "..\\..\\..\\Archivos");

		string rutaCsv = msclr::interop::marshal_as<string>(System::IO::Path::Combine(rutaBase, "doctores.csv"));
		string carpetaFotos = msclr::interop::marshal_as<string>(System::IO::Path::Combine(rutaBase, "Fotos"));

		Controlador::ControladorDoctor controlador(rutaCsv, carpetaFotos);
		vector<Modelo::Doctor> doctores = controlador.cargarDoctores();

		// Limpiar el DataGridView antes de cargar
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();

		// Definir columnas
		dataGridView1->Columns->Add("colNombre", "Nombre");
		dataGridView1->Columns->Add("colEspecialidad", "Especialidad");

		// Columna de imagen
		DataGridViewImageColumn^ colFoto = gcnew DataGridViewImageColumn();
		colFoto->Name = "colFoto";
		colFoto->HeaderText = "Foto";
		colFoto->ImageLayout = DataGridViewImageCellLayout::Zoom;
		dataGridView1->Columns->Add(colFoto);

		// Ajustar alto de filas para que la imagen sea visible
		dataGridView1->RowTemplate->Height = 80;

		for (const Modelo::Doctor& doc : doctores)
		{
			String^ nombre = msclr::interop::marshal_as<String^>(doc.getNombre());
			String^ especialidad = msclr::interop::marshal_as<String^>(doc.getEspecialidad());
			String^ rutaFoto = msclr::interop::marshal_as<String^>(doc.getRutaFoto());

			// Cargar imagen 
			System::Drawing::Image^ imagen = nullptr;
			if (System::IO::File::Exists(rutaFoto))
			{
				try { imagen = System::Drawing::Image::FromFile(rutaFoto); }
				catch (...) { imagen = nullptr; }
			}

			dataGridView1->Rows->Add(nombre, especialidad, imagen);
		}

		if (doctores.empty())
		{
			MessageBox::Show("No hay doctores registrados.", "Sin datos",MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
