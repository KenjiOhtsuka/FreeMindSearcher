#pragma once
#using <System.Web.Dll>

namespace FreeMindSearcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
  using namespace System::Web;
  using namespace System::Xml;
  using namespace System::Collections;

	/// <summary>
	/// Form1 の概要
	///
	/// 警告: このクラスの名前を変更する場合、このクラスが依存するすべての .resx ファイルに関連付けられた
	///          マネージ リソース コンパイラ ツールに対して 'Resource File Name' プロパティを
	///          変更する必要があります。この変更を行わないと、
	///          デザイナと、このフォームに関連付けられたローカライズ済みリソースとが、
	///          正しく相互に利用できなくなります。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクタ コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
  private: System::Windows::Forms::DataGridView^  hitList;
  protected: 

  private: System::Windows::Forms::Button^  searchButton;
  protected: 


  private: System::Windows::Forms::ComboBox^  wordsComboBox;

  private: System::Windows::Forms::Label^  label1;
  private: System::Windows::Forms::Label^  label2;
  private: System::Windows::Forms::FolderBrowserDialog^  targetDialog;
  private: System::Windows::Forms::Button^  folderBrowseButton;

  private: System::Windows::Forms::TextBox^  folderPath;

  private: System::Windows::Forms::DataGridViewLinkColumn^  fileName;
  private: System::Windows::Forms::DataGridViewTextBoxColumn^  text;
  private: System::Windows::Forms::DataGridViewLinkColumn^  directory;
  private: System::Windows::Forms::Button^  button1;

	private:
		/// <summary>
		/// 必要なデザイナ変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナ サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディタで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
      this->hitList = (gcnew System::Windows::Forms::DataGridView());
      this->fileName = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
      this->text = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
      this->directory = (gcnew System::Windows::Forms::DataGridViewLinkColumn());
      this->searchButton = (gcnew System::Windows::Forms::Button());
      this->wordsComboBox = (gcnew System::Windows::Forms::ComboBox());
      this->label1 = (gcnew System::Windows::Forms::Label());
      this->label2 = (gcnew System::Windows::Forms::Label());
      this->targetDialog = (gcnew System::Windows::Forms::FolderBrowserDialog());
      this->folderBrowseButton = (gcnew System::Windows::Forms::Button());
      this->folderPath = (gcnew System::Windows::Forms::TextBox());
      this->button1 = (gcnew System::Windows::Forms::Button());
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->hitList))->BeginInit();
      this->SuspendLayout();
      // 
      // hitList
      // 
      this->hitList->AllowUserToAddRows = false;
      this->hitList->AllowUserToDeleteRows = false;
      this->hitList->AllowUserToOrderColumns = true;
      this->hitList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
        | System::Windows::Forms::AnchorStyles::Left) 
        | System::Windows::Forms::AnchorStyles::Right));
      this->hitList->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
      this->hitList->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {this->fileName, this->text, 
        this->directory});
      this->hitList->Location = System::Drawing::Point(12, 56);
      this->hitList->Name = L"hitList";
      this->hitList->ReadOnly = true;
      this->hitList->RowTemplate->Height = 21;
      this->hitList->Size = System::Drawing::Size(736, 397);
      this->hitList->TabIndex = 0;
      // 
      // fileName
      // 
      this->fileName->HeaderText = L"FileName";
      this->fileName->Name = L"fileName";
      this->fileName->ReadOnly = true;
      // 
      // text
      // 
      this->text->HeaderText = L"Text";
      this->text->Name = L"text";
      this->text->ReadOnly = true;
      // 
      // directory
      // 
      this->directory->HeaderText = L"Directory";
      this->directory->Name = L"directory";
      this->directory->ReadOnly = true;
      // 
      // searchButton
      // 
      this->searchButton->Location = System::Drawing::Point(673, 4);
      this->searchButton->Name = L"searchButton";
      this->searchButton->Size = System::Drawing::Size(75, 46);
      this->searchButton->TabIndex = 1;
      this->searchButton->Text = L"&Search";
      this->searchButton->UseVisualStyleBackColor = true;
      this->searchButton->Click += gcnew System::EventHandler(this, &Form1::searchButton_Click);
      // 
      // wordsComboBox
      // 
      this->wordsComboBox->FormattingEnabled = true;
      this->wordsComboBox->Location = System::Drawing::Point(52, 6);
      this->wordsComboBox->Name = L"wordsComboBox";
      this->wordsComboBox->Size = System::Drawing::Size(615, 20);
      this->wordsComboBox->TabIndex = 3;
      // 
      // label1
      // 
      this->label1->AutoSize = true;
      this->label1->Location = System::Drawing::Point(10, 9);
      this->label1->Name = L"label1";
      this->label1->Size = System::Drawing::Size(36, 12);
      this->label1->TabIndex = 4;
      this->label1->Text = L"Words";
      // 
      // label2
      // 
      this->label2->AutoSize = true;
      this->label2->Location = System::Drawing::Point(10, 32);
      this->label2->Name = L"label2";
      this->label2->Size = System::Drawing::Size(52, 12);
      this->label2->TabIndex = 5;
      this->label2->Text = L"Directory";
      // 
      // targetDialog
      // 
      this->targetDialog->ShowNewFolderButton = false;
      // 
      // folderBrowseButton
      // 
      this->folderBrowseButton->Location = System::Drawing::Point(643, 27);
      this->folderBrowseButton->Name = L"folderBrowseButton";
      this->folderBrowseButton->Size = System::Drawing::Size(24, 23);
      this->folderBrowseButton->TabIndex = 6;
      this->folderBrowseButton->Text = L"...";
      this->folderBrowseButton->UseVisualStyleBackColor = true;
      this->folderBrowseButton->Click += gcnew System::EventHandler(this, &Form1::folderBrowseButton_Click);
      // 
      // folderPath
      // 
      this->folderPath->Location = System::Drawing::Point(68, 29);
      this->folderPath->Name = L"folderPath";
      this->folderPath->Size = System::Drawing::Size(575, 19);
      this->folderPath->TabIndex = 7;
      // 
      // button1
      // 
      this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
      this->button1->Location = System::Drawing::Point(673, 459);
      this->button1->Name = L"button1";
      this->button1->Size = System::Drawing::Size(75, 23);
      this->button1->TabIndex = 8;
      this->button1->Text = L"button1";
      this->button1->UseVisualStyleBackColor = true;
      // 
      // Form1
      // 
      this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
      this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
      this->ClientSize = System::Drawing::Size(760, 494);
      this->Controls->Add(this->button1);
      this->Controls->Add(this->folderPath);
      this->Controls->Add(this->folderBrowseButton);
      this->Controls->Add(this->label2);
      this->Controls->Add(this->label1);
      this->Controls->Add(this->wordsComboBox);
      this->Controls->Add(this->searchButton);
      this->Controls->Add(this->hitList);
      this->Name = L"Form1";
      this->Text = L"mainForm";
      (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->hitList))->EndInit();
      this->ResumeLayout(false);
      this->PerformLayout();

    }
#pragma endregion

#pragma region "Variable"
  private: System::Xml::XmlTextReader ^reader;
  private: ArrayList ^fileList;
#pragma endregion

#pragma region "Method"
  private: System::Boolean checkFolder(String ^targetDirectory) {
             if (System::IO::Directory::Exists(targetDirectory)) {
               return true;
             } else {
               return false;
             }
           }
  private: System::Void getMMFiles(String ^targetDirectory, ArrayList^ fileList) {
             array<String^>^ files = System::IO::Directory::GetFiles(targetDirectory, L"*.mm");
             for each (String ^file in files) {
               fileList->Add(file);
             }
             array<String^>^ directories = System::IO::Directory::GetDirectories(targetDirectory);
             for each (String^ directory in directories) {
               getMMFiles(directory, fileList);
             }
             return;
           }
  private: System::Void searchFile(String^ fileName, String^ words, Windows::Forms::DataGridView ^dataGrid) {
             String^ text = L"";
             //Windows::Forms::DataGridViewRow ^row;
             array<String^> ^rowValue;
             reader = gcnew XmlTextReader(fileName);
             while (reader->Read()) {
               if (reader->NodeType == XmlNodeType::Element && reader->Name == L"node") {
                 if (text = reader->GetAttribute(L"TEXT")) {
                   if (text->Contains(words)) {
                     /*
                       row = gcnew Windows::Forms::DataGridViewRow();
                       row->Cells[1]->Value = fileName;
                       row->Cells[2]->Value = text;
                       row->Cells[3]->Value = System::IO::Directory::GetDirectoryRoot(fileName);
                       hitList->Rows->Add(row);
                     */
                     rowValue = gcnew array<String^>(dataGrid->Columns->Count);
                     rowValue[0] = fileName;
                     rowValue[1] = text;
                     rowValue[2] = System::IO::Directory::GetParent(fileName)->FullName;
                     hitList->Rows->Add(rowValue);
                   }
                 }
               }
             }
             text = nullptr;
             reader->Close();
           }
#pragma endregion

#pragma region "Event"
  private: System::Void searchButton_Click(System::Object^  sender, System::EventArgs^  e) {
             String ^searchWord = wordsComboBox->Text;
             searchWord = System::Web::HttpUtility::HtmlEncode(searchWord);

             if (!checkFolder(folderPath->Text)) {
               MessageBox::Show(L"Target Folder doesn't Exist.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
               return;
             }
             hitList->Rows->Clear();
             fileList = gcnew ArrayList();
             getMMFiles(folderPath->Text, fileList);
             for each (String^ file in fileList) {
               searchFile(file, searchWord, hitList);
             }
             return;
           }
  private: System::Void folderBrowseButton_Click(System::Object^  sender, System::EventArgs^  e) {
             if (checkFolder(folderPath->Text)) {
               targetDialog->SelectedPath = folderPath->Text;
             }
             if (targetDialog->ShowDialog() == Windows::Forms::DialogResult::OK) {
               folderPath->Text = targetDialog->SelectedPath;
             }
           }
#pragma endregion
};
}

