#pragma once

using namespace TransporteClass;
namespace SistemaRedTrafico {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Resumen de TraficoVentana
	/// </summary>
	public ref class TraficoVentana : public System::Windows::Forms::Form
	{
	public:
		GrafoTransporte^ grafoSistema;
		TraficoVentana(void)
		{
			InitializeComponent();
		  //public:
			grafoSistema = gcnew GrafoTransporte();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~TraficoVentana()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
    private: System::Windows::Forms::Label^ labelNombre;
    private: System::Windows::Forms::Label^ labelX;
	private: System::Windows::Forms::Label^ labelTitulo;



	//private:System::Windows::Forms::Label^ labelDistancia;
	//private:System::Windows::Forms::TextBox^ textBoxDistancia;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
           System::Windows::Forms::Panel^ panelMapa;
   // private: System::Windows::Forms::Label^ labelPeso;
		System::Windows::Forms::TextBox^ textBoxNombre;
		System::Windows::Forms::TextBox^ textBoxX;
		System::Windows::Forms::TextBox^ textBoxY;
		System::Windows::Forms::Button^ buttonAgregarEstacion;
		System::Windows::Forms::ListBox^ listBoxEstaciones;


		System::Windows::Forms::Button^ buttonAgregarRuta;
		System::Windows::Forms::ListBox^ listBoxRutas;
	private: System::Windows::Forms::Label^ labelUbicacion;


	private: System::Windows::Forms::TextBox^ textBoxUbicacion;

	private: System::Windows::Forms::Label^ labelY;
	private: System::Windows::Forms::Label^ labelCoordenadas;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ labelDistancia;

	private: System::Windows::Forms::TextBox^ textBoxDistancia;
	private: System::Windows::Forms::Label^ labelOrigen;
	private: System::Windows::Forms::Label^ labelDestino;



	private: System::Windows::Forms::TextBox^ textBoxOrigen;
	private: System::Windows::Forms::TextBox^ textBoxDestino;


	private: System::Windows::Forms::Button^ buttonEliminarEstacion;
	private: System::Windows::Forms::Button^ buttonBuscarEstacion;
	private: System::Windows::Forms::Button^ buttonEliminarRuta;
	private: System::Windows::Forms::Button^ buttonBuscarRuta;
	private: System::Windows::Forms::Button^ buttoncancelar;



		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)

		{
			this->panelMapa = (gcnew System::Windows::Forms::Panel());
			this->labelNombre = (gcnew System::Windows::Forms::Label());
			this->labelX = (gcnew System::Windows::Forms::Label());
			this->labelTitulo = (gcnew System::Windows::Forms::Label());
			this->textBoxNombre = (gcnew System::Windows::Forms::TextBox());
			this->textBoxX = (gcnew System::Windows::Forms::TextBox());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			this->buttonAgregarEstacion = (gcnew System::Windows::Forms::Button());
			this->listBoxEstaciones = (gcnew System::Windows::Forms::ListBox());
			this->buttonAgregarRuta = (gcnew System::Windows::Forms::Button());
			this->listBoxRutas = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonEliminarEstacion = (gcnew System::Windows::Forms::Button());
			this->buttonBuscarEstacion = (gcnew System::Windows::Forms::Button());
			this->labelCoordenadas = (gcnew System::Windows::Forms::Label());
			this->labelY = (gcnew System::Windows::Forms::Label());
			this->textBoxUbicacion = (gcnew System::Windows::Forms::TextBox());
			this->labelUbicacion = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonEliminarRuta = (gcnew System::Windows::Forms::Button());
			this->buttonBuscarRuta = (gcnew System::Windows::Forms::Button());
			this->labelDistancia = (gcnew System::Windows::Forms::Label());
			this->textBoxDistancia = (gcnew System::Windows::Forms::TextBox());
			this->labelOrigen = (gcnew System::Windows::Forms::Label());
			this->labelDestino = (gcnew System::Windows::Forms::Label());
			this->textBoxOrigen = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDestino = (gcnew System::Windows::Forms::TextBox());
			this->buttoncancelar = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelMapa
			// 
			this->panelMapa->BackColor = System::Drawing::Color::GhostWhite;
			this->panelMapa->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelMapa->Location = System::Drawing::Point(347, 34);
			this->panelMapa->Name = L"panelMapa";
			this->panelMapa->Size = System::Drawing::Size(293, 193);
			this->panelMapa->TabIndex = 10;
			this->panelMapa->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &TraficoVentana::panelMapa_Paint);
			// 
			// labelNombre
			// 
			this->labelNombre->AutoSize = true;
			this->labelNombre->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelNombre->Location = System::Drawing::Point(12, 25);
			this->labelNombre->Name = L"labelNombre";
			this->labelNombre->Size = System::Drawing::Size(62, 19);
			this->labelNombre->TabIndex = 0;
			this->labelNombre->Text = L"Nombre: ";
			// 
			// labelX
			// 
			this->labelX->AutoSize = true;
			this->labelX->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelX->Location = System::Drawing::Point(14, 138);
			this->labelX->Name = L"labelX";
			this->labelX->Size = System::Drawing::Size(17, 19);
			this->labelX->TabIndex = 3;
			this->labelX->Text = L"X";
			// 
			// labelTitulo
			// 
			this->labelTitulo->AutoSize = true;
			this->labelTitulo->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelTitulo->Location = System::Drawing::Point(206, -9);
			this->labelTitulo->Name = L"labelTitulo";
			this->labelTitulo->Size = System::Drawing::Size(245, 28);
			this->labelTitulo->TabIndex = 2;
			this->labelTitulo->Text = L"SISTEMA DE TRANSPORTE";
			// 
			// textBoxNombre
			// 
			this->textBoxNombre->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxNombre->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxNombre->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxNombre->Location = System::Drawing::Point(99, 26);
			this->textBoxNombre->MaxLength = 10;
			this->textBoxNombre->Multiline = true;
			this->textBoxNombre->Name = L"textBoxNombre";
			this->textBoxNombre->Size = System::Drawing::Size(119, 25);
			this->textBoxNombre->TabIndex = 16;
			// 
			// textBoxX
			// 
			this->textBoxX->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxX->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxX->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxX->Location = System::Drawing::Point(37, 138);
			this->textBoxX->Multiline = true;
			this->textBoxX->Name = L"textBoxX";
			this->textBoxX->Size = System::Drawing::Size(65, 25);
			this->textBoxX->TabIndex = 18;
			// 
			// textBoxY
			// 
			this->textBoxY->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxY->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxY->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxY->Location = System::Drawing::Point(150, 138);
			this->textBoxY->Multiline = true;
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(68, 25);
			this->textBoxY->TabIndex = 19;
			// 
			// buttonAgregarEstacion
			// 
			this->buttonAgregarEstacion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonAgregarEstacion->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonAgregarEstacion->Location = System::Drawing::Point(6, 175);
			this->buttonAgregarEstacion->Name = L"buttonAgregarEstacion";
			this->buttonAgregarEstacion->Size = System::Drawing::Size(75, 30);
			this->buttonAgregarEstacion->TabIndex = 3;
			this->buttonAgregarEstacion->Text = L"Agregar ";
			this->buttonAgregarEstacion->UseVisualStyleBackColor = true;
			this->buttonAgregarEstacion->Click += gcnew System::EventHandler(this, &TraficoVentana::buttonAgregarEstacion_Click);
			// 
			// listBoxEstaciones
			// 
			this->listBoxEstaciones->BackColor = System::Drawing::Color::Lavender;
			this->listBoxEstaciones->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxEstaciones->FormattingEnabled = true;
			this->listBoxEstaciones->ItemHeight = 20;
			this->listBoxEstaciones->Location = System::Drawing::Point(347, 233);
			this->listBoxEstaciones->Name = L"listBoxEstaciones";
			this->listBoxEstaciones->Size = System::Drawing::Size(293, 84);
			this->listBoxEstaciones->TabIndex = 4;
			// 
			// buttonAgregarRuta
			// 
			this->buttonAgregarRuta->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAgregarRuta->Location = System::Drawing::Point(6, 155);
			this->buttonAgregarRuta->Name = L"buttonAgregarRuta";
			this->buttonAgregarRuta->Size = System::Drawing::Size(75, 30);
			this->buttonAgregarRuta->TabIndex = 8;
			this->buttonAgregarRuta->Text = L"Agregar ";
			this->buttonAgregarRuta->UseVisualStyleBackColor = true;
			this->buttonAgregarRuta->Click += gcnew System::EventHandler(this, &TraficoVentana::buttonAgregarRuta_Click);
			// 
			// listBoxRutas
			// 
			this->listBoxRutas->BackColor = System::Drawing::Color::Lavender;
			this->listBoxRutas->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBoxRutas->FormattingEnabled = true;
			this->listBoxRutas->ItemHeight = 19;
			this->listBoxRutas->Location = System::Drawing::Point(347, 323);
			this->listBoxRutas->Name = L"listBoxRutas";
			this->listBoxRutas->Size = System::Drawing::Size(293, 80);
			this->listBoxRutas->TabIndex = 9;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->buttonEliminarEstacion);
			this->groupBox1->Controls->Add(this->buttonBuscarEstacion);
			this->groupBox1->Controls->Add(this->labelCoordenadas);
			this->groupBox1->Controls->Add(this->labelY);
			this->groupBox1->Controls->Add(this->textBoxUbicacion);
			this->groupBox1->Controls->Add(this->textBoxX);
			this->groupBox1->Controls->Add(this->labelUbicacion);
			this->groupBox1->Controls->Add(this->buttonAgregarEstacion);
			this->groupBox1->Controls->Add(this->labelNombre);
			this->groupBox1->Controls->Add(this->labelX);
			this->groupBox1->Controls->Add(this->textBoxNombre);
			this->groupBox1->Controls->Add(this->textBoxY);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(13, 34);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(266, 213);
			this->groupBox1->TabIndex = 41;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Estacion";
			// 
			// buttonEliminarEstacion
			// 
			this->buttonEliminarEstacion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonEliminarEstacion->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonEliminarEstacion->Location = System::Drawing::Point(186, 175);
			this->buttonEliminarEstacion->Name = L"buttonEliminarEstacion";
			this->buttonEliminarEstacion->Size = System::Drawing::Size(75, 30);
			this->buttonEliminarEstacion->TabIndex = 28;
			this->buttonEliminarEstacion->Text = L"Eliminar";
			this->buttonEliminarEstacion->UseVisualStyleBackColor = true;
			this->buttonEliminarEstacion->Click += gcnew System::EventHandler(this, &TraficoVentana::buttonEliminarEstacion_Click);
			// 
			// buttonBuscarEstacion
			// 
			this->buttonBuscarEstacion->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonBuscarEstacion->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->buttonBuscarEstacion->Location = System::Drawing::Point(97, 175);
			this->buttonBuscarEstacion->Name = L"buttonBuscarEstacion";
			this->buttonBuscarEstacion->Size = System::Drawing::Size(75, 30);
			this->buttonBuscarEstacion->TabIndex = 27;
			this->buttonBuscarEstacion->Text = L"Buscar";
			this->buttonBuscarEstacion->UseVisualStyleBackColor = true;
			this->buttonBuscarEstacion->Click += gcnew System::EventHandler(this, &TraficoVentana::buttonBuscarEstacion_Click);
			// 
			// labelCoordenadas
			// 
			this->labelCoordenadas->AutoSize = true;
			this->labelCoordenadas->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelCoordenadas->Location = System::Drawing::Point(83, 106);
			this->labelCoordenadas->Name = L"labelCoordenadas";
			this->labelCoordenadas->Size = System::Drawing::Size(89, 19);
			this->labelCoordenadas->TabIndex = 26;
			this->labelCoordenadas->Text = L"Coordenadas:";
			// 
			// labelY
			// 
			this->labelY->AutoSize = true;
			this->labelY->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelY->Location = System::Drawing::Point(127, 138);
			this->labelY->Name = L"labelY";
			this->labelY->Size = System::Drawing::Size(17, 19);
			this->labelY->TabIndex = 25;
			this->labelY->Text = L"Y";
			this->labelY->Click += gcnew System::EventHandler(this, &TraficoVentana::labelY_Click);
			// 
			// textBoxUbicacion
			// 
			this->textBoxUbicacion->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxUbicacion->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUbicacion->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxUbicacion->Location = System::Drawing::Point(99, 78);
			this->textBoxUbicacion->Multiline = true;
			this->textBoxUbicacion->Name = L"textBoxUbicacion";
			this->textBoxUbicacion->Size = System::Drawing::Size(119, 25);
			this->textBoxUbicacion->TabIndex = 22;
			// 
			// labelUbicacion
			// 
			this->labelUbicacion->AutoSize = true;
			this->labelUbicacion->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelUbicacion->Location = System::Drawing::Point(12, 77);
			this->labelUbicacion->Name = L"labelUbicacion";
			this->labelUbicacion->Size = System::Drawing::Size(71, 19);
			this->labelUbicacion->TabIndex = 21;
			this->labelUbicacion->Text = L"Ubicacion:";
			// 
			// groupBox2
			// 
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->buttoncancelar);
			this->groupBox3->Controls->Add(this->groupBox4);
			this->groupBox3->Controls->Add(this->labelTitulo);
			this->groupBox3->Controls->Add(this->groupBox1);
			this->groupBox3->Controls->Add(this->listBoxRutas);
			this->groupBox3->Controls->Add(this->listBoxEstaciones);
			this->groupBox3->Controls->Add(this->panelMapa);
			this->groupBox3->Location = System::Drawing::Point(10, 12);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(659, 460);
			this->groupBox3->TabIndex = 43;
			this->groupBox3->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->buttonEliminarRuta);
			this->groupBox4->Controls->Add(this->buttonBuscarRuta);
			this->groupBox4->Controls->Add(this->labelDistancia);
			this->groupBox4->Controls->Add(this->textBoxDistancia);
			this->groupBox4->Controls->Add(this->labelOrigen);
			this->groupBox4->Controls->Add(this->labelDestino);
			this->groupBox4->Controls->Add(this->buttonAgregarRuta);
			this->groupBox4->Controls->Add(this->textBoxOrigen);
			this->groupBox4->Controls->Add(this->textBoxDestino);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(2, 265);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(272, 189);
			this->groupBox4->TabIndex = 42;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Ruta";
			// 
			// buttonEliminarRuta
			// 
			this->buttonEliminarRuta->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonEliminarRuta->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEliminarRuta->Location = System::Drawing::Point(191, 153);
			this->buttonEliminarRuta->Name = L"buttonEliminarRuta";
			this->buttonEliminarRuta->Size = System::Drawing::Size(75, 30);
			this->buttonEliminarRuta->TabIndex = 29;
			this->buttonEliminarRuta->Text = L"Eliminar";
			this->buttonEliminarRuta->UseVisualStyleBackColor = true;
			this->buttonEliminarRuta->Click += gcnew System::EventHandler(this, &TraficoVentana::buttonEliminarRuta_Click);
			// 
			// buttonBuscarRuta
			// 
			this->buttonBuscarRuta->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buttonBuscarRuta->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonBuscarRuta->Location = System::Drawing::Point(98, 155);
			this->buttonBuscarRuta->Name = L"buttonBuscarRuta";
			this->buttonBuscarRuta->Size = System::Drawing::Size(75, 30);
			this->buttonBuscarRuta->TabIndex = 29;
			this->buttonBuscarRuta->Text = L"Buscar";
			this->buttonBuscarRuta->UseVisualStyleBackColor = true;
			this->buttonBuscarRuta->Click += gcnew System::EventHandler(this, &TraficoVentana::buttonBuscarRuta_Click);
			// 
			// labelDistancia
			// 
			this->labelDistancia->AutoSize = true;
			this->labelDistancia->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDistancia->Location = System::Drawing::Point(12, 41);
			this->labelDistancia->Name = L"labelDistancia";
			this->labelDistancia->Size = System::Drawing::Size(65, 19);
			this->labelDistancia->TabIndex = 24;
			this->labelDistancia->Text = L"Distancia";
			// 
			// textBoxDistancia
			// 
			this->textBoxDistancia->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxDistancia->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDistancia->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxDistancia->Location = System::Drawing::Point(99, 41);
			this->textBoxDistancia->Multiline = true;
			this->textBoxDistancia->Name = L"textBoxDistancia";
			this->textBoxDistancia->Size = System::Drawing::Size(119, 25);
			this->textBoxDistancia->TabIndex = 23;
			// 
			// labelOrigen
			// 
			this->labelOrigen->AutoSize = true;
			this->labelOrigen->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelOrigen->Location = System::Drawing::Point(14, 76);
			this->labelOrigen->Name = L"labelOrigen";
			this->labelOrigen->Size = System::Drawing::Size(49, 19);
			this->labelOrigen->TabIndex = 3;
			this->labelOrigen->Text = L"Origen";
			// 
			// labelDestino
			// 
			this->labelDestino->AutoSize = true;
			this->labelDestino->Font = (gcnew System::Drawing::Font(L"Sitka Heading", 9.749999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelDestino->Location = System::Drawing::Point(14, 111);
			this->labelDestino->Name = L"labelDestino";
			this->labelDestino->Size = System::Drawing::Size(54, 19);
			this->labelDestino->TabIndex = 4;
			this->labelDestino->Text = L"Destino";
			// 
			// textBoxOrigen
			// 
			this->textBoxOrigen->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxOrigen->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxOrigen->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBoxOrigen->Location = System::Drawing::Point(99, 76);
			this->textBoxOrigen->MaxLength = 10;
			this->textBoxOrigen->Multiline = true;
			this->textBoxOrigen->Name = L"textBoxOrigen";
			this->textBoxOrigen->Size = System::Drawing::Size(119, 25);
			this->textBoxOrigen->TabIndex = 20;
			// 
			// textBoxDestino
			// 
			this->textBoxDestino->BackColor = System::Drawing::SystemColors::InactiveBorder;
			this->textBoxDestino->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDestino->Location = System::Drawing::Point(99, 115);
			this->textBoxDestino->Multiline = true;
			this->textBoxDestino->Name = L"textBoxDestino";
			this->textBoxDestino->Size = System::Drawing::Size(119, 25);
			this->textBoxDestino->TabIndex = 6;
			// 
			// buttoncancelar
			// 
			this->buttoncancelar->BackColor = System::Drawing::Color::IndianRed;
			this->buttoncancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttoncancelar->Location = System::Drawing::Point(450, 420);
			this->buttoncancelar->Name = L"buttoncancelar";
			this->buttoncancelar->Size = System::Drawing::Size(96, 30);
			this->buttoncancelar->TabIndex = 47;
			this->buttoncancelar->Text = L"Cancelar";
			this->buttoncancelar->UseVisualStyleBackColor = false;
			this->buttoncancelar->Click += gcnew System::EventHandler(this, &TraficoVentana::buttoncancelar_Click);
			// 
			// TraficoVentana
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(682, 484);
			this->Controls->Add(this->groupBox3);
			this->Name = L"TraficoVentana";
			this->Text = L"TraficoVentana";
			this->Load += gcnew System::EventHandler(this, &TraficoVentana::TraficoVentana_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void TraficoVentana_Load(System::Object^ sender, System::EventArgs^ e) {
	}
    private: System::Void buttonAgregarEstacion_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ nombre = textBoxNombre->Text;
		String^ Ubicacion = textBoxUbicacion->Text;
		int x = Convert::ToInt32(textBoxX->Text);
		int y = Convert::ToInt32(textBoxY->Text);
		Estacion^ estacion = gcnew Estacion(nombre, Tuple::Create(x, y),Ubicacion);
		grafoSistema->AgregarEstacion(estacion);
		MessageBox::Show("Estacion agregada");
		listBoxEstaciones->Items->Add(" Estacion: "+nombre);
		listBoxEstaciones->Items->Add(" Ubicacion: " + Ubicacion);
		listBoxEstaciones->Items->Add(" Coordenadas: (" + x + "," + y + ")");

		//listBoxEstaciones->Items->Add(estacion->ToString());
		panelMapa->Invalidate();

		textBoxNombre->Clear();
		textBoxUbicacion->Clear();
		textBoxX->Clear();
		textBoxY->Clear();
    }
    private: System::Void buttonAgregarRuta_Click(System::Object^ sender, System::EventArgs^ e) {
        String^ origen = textBoxOrigen->Text;
        String^ destino = textBoxDestino->Text;
        Double distancia = Convert::ToDouble(textBoxDistancia->Text);
        Ruta^ ruta = gcnew Ruta(origen, destino, distancia);
        grafoSistema->AgregarRuta(ruta);
       // listBoxRutas->Items->Add(ruta->ToString());
		listBoxRutas->Items->Add(" Ruta: " + origen + " - " + destino);
		listBoxRutas->Items->Add(" Distancia: " + distancia);
		MessageBox::Show("Ruta agregada");
        panelMapa->Invalidate();

		textBoxOrigen->Clear();
		textBoxDestino->Clear();
		textBoxDistancia->Clear();
    }

    private: System::Void panelMapa_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
               Graphics^ g = e->Graphics;
               Pen^ pen = gcnew Pen(Color::Black);

               // Dibujar estaciones
               for each (Estacion ^ estacion in grafoSistema->GetEstaciones()) {
                   int x = estacion->coordenadas->Item1;
                   int y = estacion->coordenadas->Item2;
                   g->DrawEllipse(pen, x, y, 10, 10); // Dibuja la estación
                   g->DrawString(estacion->nombre, this->Font, Brushes::Black, static_cast<float>(x + 12), static_cast<float>(y)); // Dibuja el nombre de la estación
               }

               // Dibujar rutas
               for each (Ruta ^ ruta in grafoSistema->GetRutas()) {
                   Estacion^ origen = grafoSistema->GetEstacionPorNombre(ruta->origen);
                   Estacion^ destino = grafoSistema->GetEstacionPorNombre(ruta->destino);
                   if (origen != nullptr && destino != nullptr) {
                       int x1 = origen->coordenadas->Item1;
                       int y1 = origen->coordenadas->Item2;
                       int x2 = destino->coordenadas->Item1;
                       int y2 = destino->coordenadas->Item2;
                       g->DrawLine(pen, x1 + 5, y1 + 5, x2 + 5, y2 + 5); // Dibuja la ruta
                   }
               }
    }
	private: System::Void labelY_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void labelDestino_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void buttonEliminarEstacion_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ estacionEliminada = textBoxNombre->Text;
	if (estacionEliminada == "") {
		MessageBox::Show("Ingrese el nombre de la estacion a eliminar");
		return;
	}
	else {
		Estacion^ estacion = grafoSistema->GetEstacionPorNombre(estacionEliminada);
		if (estacion == nullptr) {
			MessageBox::Show("Estacion no encontrada");
			return;
		}
	}
	grafoSistema->EliminarEstacion(estacionEliminada);

	MessageBox::Show("Estacion eliminada");
	ActualizarListBoxEstaciones();
	panelMapa->Invalidate();
}

	   void ActualizarListBoxEstaciones() {
		   listBoxEstaciones->Items->Clear();
		   for each (Estacion ^ estacion in grafoSistema->estaciones) {
			   listBoxEstaciones->Items->Add("Estacion:"+estacion->nombre);
			   listBoxEstaciones->Items->Add("Ubicacion"+estacion->Ubicacion);
			   listBoxEstaciones->Items->Add("Coordenadas: (" + estacion->coordenadas->Item1.ToString() + ", " + estacion->coordenadas->Item2.ToString() + ")");
			   listBoxEstaciones->Items->Add(""); // Línea en blanco para separar
		   }
}
private: System::Void buttonEliminarRuta_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ rutaEliminada = textBoxOrigen->Text;
	if (rutaEliminada == "") {
		MessageBox::Show("Ingrese el nombre de la ruta a eliminar");
		return;
	}
	else {
		Ruta^ ruta = grafoSistema->GetRutaPorNombre(rutaEliminada);
		if (ruta == nullptr) {
			MessageBox::Show("Ruta no encontrada");
			return;
		}
	}
	grafoSistema->EliminarRuta(rutaEliminada);
	MessageBox::Show("Ruta eliminada");
	ActualizarListBoxRutas();
	panelMapa->Invalidate();
}

	   void ActualizarListBoxRutas() {
		   listBoxRutas->Items->Clear();
		   for each (Ruta ^ ruta in grafoSistema->GetRutas()) {
			   listBoxRutas->Items->Add(ruta->origen + " a " + ruta->destino);
		   }
}
private: System::Void buttonBuscarEstacion_Click(System::Object^ sender, System::EventArgs^ e) {
	listBoxEstaciones->Items->Clear();
	listBoxRutas->Items->Clear(); // Limpiar el ListBox de rutas también
	String^ estacionBuscada = textBoxNombre->Text; // Asume que textBoxNombreEstacion es donde el usuario ingresa el nombre de la estación a buscar

	if (estacionBuscada == "") {
		MessageBox::Show("Ingrese el nombre de la estación a buscar");
		return;
	}

	Estacion^ estacion = grafoSistema->GetEstacionPorNombre(estacionBuscada);
	if (estacion == nullptr) {
		MessageBox::Show("Estación no encontrada");
		return;
	}

	// Mostrar detalles de la estación en el ListBox de estaciones
	listBoxEstaciones->Items->Add("Nombre: " + estacion->nombre);
	listBoxEstaciones->Items->Add("Ubicación: " + estacion->Ubicacion);
	listBoxEstaciones->Items->Add("Coordenadas: (" + estacion->coordenadas->Item1.ToString() + ", " + estacion->coordenadas->Item2.ToString() + ")");
	listBoxEstaciones->Items->Add(""); // Línea en blanco para separar

	// Buscar y mostrar detalles de rutas asociadas en el ListBox de rutas
	for each (KeyValuePair<String^, List<Ruta^>^> ^ par in grafoSistema->rutas) {
		for each (Ruta ^ ruta in par->Value) {
			if (ruta->origen == estacionBuscada || ruta->destino == estacionBuscada) {
				listBoxRutas->Items->Add("Ruta:");
				listBoxRutas->Items->Add("Origen: " + ruta->origen);
				listBoxRutas->Items->Add("Destino: " + ruta->destino);
				listBoxRutas->Items->Add("Distancia: " + ruta->distancia.ToString());
				listBoxRutas->Items->Add(""); // Línea en blanco para separar
			}
		}
	}
}
private: System::Void buttonBuscarRuta_Click(System::Object^ sender, System::EventArgs^ e) {
	listBoxRutas->Items->Clear();
	String^ origenBuscado = textBoxOrigen->Text; // Asumiendo que se busca por origen

	if (origenBuscado == "") {
		MessageBox::Show("Ingrese el origen de la ruta a buscar");
		return;
	}
	else {
		// Asumiendo que tienes un método para buscar rutas por origen
		List<Ruta^>^ rutasEncontradas = grafoSistema->GetRutasPorOrigen(origenBuscado);
		if (rutasEncontradas == nullptr || rutasEncontradas->Count == 0) {
			MessageBox::Show("Rutas no encontradas");
			return;
		}
		// Mostrar detalles de las rutas en líneas separadas
		for each (Ruta ^ ruta in rutasEncontradas) {
			listBoxRutas->Items->Add("Origen: " + ruta->origen);
			listBoxRutas->Items->Add("Destino: " + ruta->destino);
			listBoxRutas->Items->Add("Distancia: " + ruta->distancia.ToString());
			listBoxRutas->Items->Add(""); // Línea en blanco para separar
		}
	}

	MessageBox::Show("Rutas encontradas");
}
private: System::Void buttoncancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};

}
