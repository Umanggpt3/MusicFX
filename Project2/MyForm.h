#pragma once

namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	private: System::Windows::Forms::TrackBar^  trackBar1;

	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	public:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::TrackBar^  seekBar;
	private: System::Windows::Forms::Button^  forward;
	private: System::Windows::Forms::Button^  reverse;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Button^  next;
	private: System::Windows::Forms::Button^  previous;
	private: System::Windows::Forms::Button^  shuffle;
	private: System::Windows::Forms::Button^  repeat;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::ToolStripMenuItem^  openFolderToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  playistToolStripMenuItem;
	private: System::Windows::Forms::Button^  load;
	private: System::Windows::Forms::Button^  save;
	private: System::ComponentModel::IContainer^  components;
			   


	public:



	private:
		/// <summary>   
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFolderToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->playistToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seekBar = (gcnew System::Windows::Forms::TrackBar());
			this->forward = (gcnew System::Windows::Forms::Button());
			this->reverse = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->next = (gcnew System::Windows::Forms::Button());
			this->previous = (gcnew System::Windows::Forms::Button());
			this->shuffle = (gcnew System::Windows::Forms::Button());
			this->repeat = (gcnew System::Windows::Forms::Button());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->load = (gcnew System::Windows::Forms::Button());
			this->save = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seekBar))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.BackgroundImage")));
			this->button1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(289, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(49, 48);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(1, 27);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(623, 268);
			this->axWindowsMediaPlayer1->TabIndex = 3;
			this->axWindowsMediaPlayer1->PlayStateChange += gcnew AxWMPLib::_WMPOCXEvents_PlayStateChangeEventHandler(this, &MyForm::player_PlayStateChange);
			// 
			// trackBar1
			// 
			this->trackBar1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->trackBar1->AutoSize = false;
			this->trackBar1->Location = System::Drawing::Point(480, 301);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(113, 48);
			this->trackBar1->TabIndex = 4;
			this->trackBar1->TickStyle = System::Windows::Forms::TickStyle::None;
			this->trackBar1->Value = 100;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &MyForm::trackBar1_Scroll);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->playistToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->menuStrip1->Size = System::Drawing::Size(624, 24);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openToolStripMenuItem,
					this->openFolderToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->openToolStripMenuItem->Text = L"Open File/s";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// openFolderToolStripMenuItem
			// 
			this->openFolderToolStripMenuItem->Name = L"openFolderToolStripMenuItem";
			this->openFolderToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->openFolderToolStripMenuItem->Text = L"Open Folder";
			this->openFolderToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openFolderToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(139, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// playistToolStripMenuItem
			// 
			this->playistToolStripMenuItem->Name = L"playistToolStripMenuItem";
			this->playistToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->playistToolStripMenuItem->Text = L"Playlist";
			this->playistToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::playistToolStripMenuItem_Click);
			// 
			// seekBar
			// 
			this->seekBar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->seekBar->AutoSize = false;
			this->seekBar->Location = System::Drawing::Point(1, 250);
			this->seekBar->Maximum = 100;
			this->seekBar->Name = L"seekBar";
			this->seekBar->Size = System::Drawing::Size(624, 47);
			this->seekBar->TabIndex = 6;
			this->seekBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->seekBar->Scroll += gcnew System::EventHandler(this, &MyForm::seekBar_Scroll);
			// 
			// forward
			// 
			this->forward->BackColor = System::Drawing::Color::Transparent;
			this->forward->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"forward.BackgroundImage")));
			this->forward->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->forward->Cursor = System::Windows::Forms::Cursors::Hand;
			this->forward->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->forward->FlatAppearance->BorderSize = 0;
			this->forward->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->forward->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->forward->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->forward->Location = System::Drawing::Point(345, 296);
			this->forward->Name = L"forward";
			this->forward->Size = System::Drawing::Size(49, 48);
			this->forward->TabIndex = 0;
			this->forward->UseVisualStyleBackColor = false;
			this->forward->Click += gcnew System::EventHandler(this, &MyForm::forward_Click);
			// 
			// reverse
			// 
			this->reverse->BackColor = System::Drawing::Color::Transparent;
			this->reverse->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"reverse.BackgroundImage")));
			this->reverse->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->reverse->Cursor = System::Windows::Forms::Cursors::Hand;
			this->reverse->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->reverse->FlatAppearance->BorderSize = 0;
			this->reverse->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->reverse->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->reverse->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->reverse->Location = System::Drawing::Point(233, 296);
			this->reverse->Name = L"reverse";
			this->reverse->Size = System::Drawing::Size(49, 48);
			this->reverse->TabIndex = 7;
			this->reverse->UseVisualStyleBackColor = false;
			this->reverse->Click += gcnew System::EventHandler(this, &MyForm::reverse_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Electrolize", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(12, 363);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(600, 164);
			this->listBox1->TabIndex = 8;
			this->listBox1->Visible = false;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// next
			// 
			this->next->BackColor = System::Drawing::Color::Transparent;
			this->next->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"next.BackgroundImage")));
			this->next->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->next->Cursor = System::Windows::Forms::Cursors::Hand;
			this->next->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->next->FlatAppearance->BorderSize = 0;
			this->next->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->next->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->next->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->next->Location = System::Drawing::Point(396, 296);
			this->next->Name = L"next";
			this->next->Size = System::Drawing::Size(49, 48);
			this->next->TabIndex = 9;
			this->next->UseVisualStyleBackColor = false;
			this->next->Click += gcnew System::EventHandler(this, &MyForm::next_Click);
			// 
			// previous
			// 
			this->previous->BackColor = System::Drawing::Color::Transparent;
			this->previous->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"previous.BackgroundImage")));
			this->previous->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->previous->Cursor = System::Windows::Forms::Cursors::Hand;
			this->previous->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->previous->FlatAppearance->BorderSize = 0;
			this->previous->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->previous->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->previous->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->previous->Location = System::Drawing::Point(185, 296);
			this->previous->Name = L"previous";
			this->previous->Size = System::Drawing::Size(49, 48);
			this->previous->TabIndex = 10;
			this->previous->UseVisualStyleBackColor = false;
			this->previous->Click += gcnew System::EventHandler(this, &MyForm::previous_Click);
			// 
			// shuffle
			// 
			this->shuffle->BackColor = System::Drawing::Color::Transparent;
			this->shuffle->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"shuffle.BackgroundImage")));
			this->shuffle->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->shuffle->Cursor = System::Windows::Forms::Cursors::Hand;
			this->shuffle->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->shuffle->FlatAppearance->BorderSize = 0;
			this->shuffle->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->shuffle->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->shuffle->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->shuffle->Location = System::Drawing::Point(110, 296);
			this->shuffle->Name = L"shuffle";
			this->shuffle->Size = System::Drawing::Size(49, 48);
			this->shuffle->TabIndex = 11;
			this->shuffle->UseVisualStyleBackColor = false;
			this->shuffle->Click += gcnew System::EventHandler(this, &MyForm::shuffle_Click);
			// 
			// repeat
			// 
			this->repeat->BackColor = System::Drawing::Color::Transparent;
			this->repeat->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"repeat.BackgroundImage")));
			this->repeat->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->repeat->Cursor = System::Windows::Forms::Cursors::Hand;
			this->repeat->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->repeat->FlatAppearance->BorderSize = 0;
			this->repeat->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->repeat->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->repeat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->repeat->Location = System::Drawing::Point(30, 296);
			this->repeat->Name = L"repeat";
			this->repeat->Size = System::Drawing::Size(49, 48);
			this->repeat->TabIndex = 12;
			this->repeat->UseVisualStyleBackColor = false;
			this->repeat->Click += gcnew System::EventHandler(this, &MyForm::repeat_Click);
			// 
			// timer2
			// 
			this->timer2->Interval = 200;
			this->timer2->Tick += gcnew System::EventHandler(this, &MyForm::timer2_Tick);
			// 
			// load
			// 
			this->load->BackColor = System::Drawing::Color::SkyBlue;
			this->load->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->load->Font = (gcnew System::Drawing::Font(L"28 Days Later", 11.25F));
			this->load->Location = System::Drawing::Point(12, 535);
			this->load->Name = L"load";
			this->load->Size = System::Drawing::Size(303, 23);
			this->load->TabIndex = 13;
			this->load->Text = L"Load Playlist";
			this->load->UseVisualStyleBackColor = false;
			this->load->Visible = false;
			this->load->Click += gcnew System::EventHandler(this, &MyForm::load_Click);
			// 
			// save
			// 
			this->save->BackColor = System::Drawing::Color::SkyBlue;
			this->save->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save->Font = (gcnew System::Drawing::Font(L"28 Days Later", 11.25F));
			this->save->Location = System::Drawing::Point(321, 535);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(291, 23);
			this->save->TabIndex = 14;
			this->save->Text = L"Save Playlist";
			this->save->UseVisualStyleBackColor = false;
			this->save->Visible = false;
			this->save->Click += gcnew System::EventHandler(this, &MyForm::save_Click);
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSize = true;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(624, 353);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->next);
			this->Controls->Add(this->forward);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->reverse);
			this->Controls->Add(this->previous);
			this->Controls->Add(this->shuffle);
			this->Controls->Add(this->repeat);
			this->Controls->Add(this->seekBar);
			this->Controls->Add(this->save);
			this->Controls->Add(this->load);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MusicFX";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->seekBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		try
		{
			if (axWindowsMediaPlayer1->playState == WMPLib::WMPPlayState::wmppsPlaying) {
				axWindowsMediaPlayer1->Ctlcontrols->pause();
				button1->BackgroundImage = Image::FromFile(".\\Music App\\icons8-circled-play-48.png");
			}
			else {
				axWindowsMediaPlayer1->Ctlcontrols->play();
				button1->BackgroundImage = Image::FromFile(".\\Music App\\icons8-pause-button-48.png");
			}
		}
		catch (Win32Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->settings->volume = trackBar1->Value;
	}
	private: array<String^>^ paths = gcnew array<String^>(100);
			 array<String^>^ files = gcnew array<String^>(100);
			 
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->Multiselect = true;

		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			files->Clear;
			paths->Clear;
			listBox1->Items->Clear();
			String^ myfile;
			int i = 0;
			for each (String^ myfile in openFileDialog1->SafeFileNames)
			{
				files[i] = gcnew String(myfile);
				listBox1->Items->Add(files[i]);
				i++;
			}
			i = 0;
			for each (String^ myfile in openFileDialog1->FileNames)
			{
				paths[i] = gcnew String(myfile);
				i++;
			}
		}
		axWindowsMediaPlayer1->URL = paths[0];
		timer1->Start();
	}
	private: System::Void seekBar_Scroll(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->Ctlcontrols->currentPosition = seekBar->Value;
	}
	private: System::Void forward_Click(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->Ctlcontrols->currentPosition = axWindowsMediaPlayer1->Ctlcontrols->currentPosition + 3;
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		axWindowsMediaPlayer1->settings->volume = trackBar1->Value;
		int position = axWindowsMediaPlayer1->Ctlcontrols->currentPosition;
		int len = axWindowsMediaPlayer1->currentMedia->duration;
		seekBar->Maximum = len;
		seekBar->Value = position;
	}
	private: System::Void reverse_Click(System::Object^  sender, System::EventArgs^  e) {
		//System::Diagnostics::Debug::WriteLine(axWindowsMediaPlayer1->Ctlcontrols->currentPosition);
		axWindowsMediaPlayer1->Ctlcontrols->currentPosition = axWindowsMediaPlayer1->Ctlcontrols->currentPosition - 3;
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}

	private: static int counter = 0;
	private: System::Void next_Click(System::Object^  sender, System::EventArgs^  e) {
		//System::Diagnostics::Debug::WriteLine(listBox1->Items->Count);
		if (counter == listBox1->Items->Count - 1)
			counter = 0;
		else
			counter++;
		axWindowsMediaPlayer1->URL = paths[counter];
		listBox1->SetSelected(counter, true);
	}
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		counter = listBox1->SelectedIndex;
		axWindowsMediaPlayer1->URL = paths[counter];
	}

	private: System::Void previous_Click(System::Object^  sender, System::EventArgs^  e) {
		if (counter == 0)
			counter = listBox1->Items->Count - 1;
		else
			counter--;
		axWindowsMediaPlayer1->URL = paths[counter];
		listBox1->SetSelected(counter, true);
	}
	private: System::Void shuffle_Click(System::Object^  sender, System::EventArgs^  e) {
		Random^ randNum = gcnew Random();
		counter = randNum->Next(listBox1->Items->Count - 1);
		axWindowsMediaPlayer1->URL = paths[counter];
		axWindowsMediaPlayer1->Ctlcontrols->play();
	}
	private: System::Void repeat_Click(System::Object^  sender, System::EventArgs^  e) {
		if (flag)
			flag = 0;
		else
			flag = 1;
	}
	private: int flag = 1;
	private: System::Void player_PlayStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PlayStateChangeEvent^ e) {
		System::Diagnostics::Debug::WriteLine("State Changed");
		try
		{
			if(flag)
				if (e->newState == 8)
					timer2->Start();
			if(axWindowsMediaPlayer1->playState == WMPLib::WMPPlayState::wmppsPlaying)
				button1->BackgroundImage = Image::FromFile(".\\Music App\\icons8-pause-button-48.png");
			if (axWindowsMediaPlayer1->playState == WMPLib::WMPPlayState::wmppsPaused)
				button1->BackgroundImage = Image::FromFile(".\\Music App\\icons8-circled-play-48.png");
		}
		catch (System::Exception^ e)
		{
			System::Diagnostics::Debug::WriteLine(e->Message);
		}
	}
	private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
		timer2->Stop();
		if (counter == listBox1->Items->Count - 1)
			counter = 0;
		else
			counter++;
		axWindowsMediaPlayer1->URL = paths[counter];
	}
	private: array<String^>^ filenames = gcnew array<String^>(500);
	private: System::Void openFolderToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		FolderBrowserDialog^ folderBrowserDialog1 = gcnew FolderBrowserDialog;
		files->Clear;
		paths->Clear;
		listBox1->Items->Clear();
		filenames->Clear;

		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			filenames = Directory::GetFiles(folderBrowserDialog1->SelectedPath, "*.mp3", System::IO::SearchOption::TopDirectoryOnly);
			size_t i = 0;
			for each (String^ fileName in filenames)
			{
				files[i] = Path::GetFileNameWithoutExtension(fileName);
				paths[i] = fileName;
				listBox1->Items->Add(files[i]);
				i = i + 1;
			}
			counter = 0;
			axWindowsMediaPlayer1->URL = paths[0];
			//mergeSort(0,listBox1->Items->Count-1);
			timer1->Start();
		}
	}
	private: System::Void save_Click(System::Object^  sender, System::EventArgs^  e) {
		
		SaveFileDialog^ save_File = gcnew SaveFileDialog();
		save_File->Filter = "Text Files (*.txt)|*.txt";
		save_File->Title = "Save Your Playlist";
		if (save_File->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			StreamWriter^ write_File = gcnew StreamWriter(save_File->FileName);
			size_t i;
			for (size_t i = 0; i < files->Length; i++)
			{
				write_File->WriteLine(files[i]);
				write_File->WriteLine(paths[i]);
			}
			write_File->Close();
			MessageBox::Show("File Succesfully Created");
		}
	}
	private: System::Void load_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog;
		if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			String^ filename = openFileDialog2->FileName;
			size_t i = 0;
			try
			{
				StreamReader^ input_file = File::OpenText(filename);
				String^ str;
				int flg = 1;
				files->Clear;
				paths->Clear;
				listBox1->Items->Clear();
				while ((str = input_file->ReadLine()) != nullptr)
				{
					if (flg == 1)
					{
						files[i] = str;
						flg = 0;
						listBox1->Items->Add(files[i]);
					}
					else
					{
						paths[i] = str;
						flg = 1;
						i++;
					}
				}
				counter = 0;
				axWindowsMediaPlayer1->URL = paths[0];
				input_file->Close();
				timer1->Start();
			}
			catch (Exception^ e)
			{
				if (dynamic_cast<FileNotFoundException^>(e))
					Console::WriteLine("file '{0}' not found", filename);
				else
					Console::WriteLine("problem reading file '{0}'", filename);
			}
		}
	}
	private: int playList = 1;
	private: System::Void playistToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		if (playList)
		{
			ClientSize = System::Drawing::Size(624, 570);
			listBox1->Visible = "True";
			load->Visible = "True";
			save->Visible = "True";
			playList = 0;
		}
		else
		{
			ClientSize = System::Drawing::Size(624, 353);
			listBox1->Visible = "False";
			load->Visible = "False";
			save->Visible = "False";
			playList = 1;
		}
	}
};
}
