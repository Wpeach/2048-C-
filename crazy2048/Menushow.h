#pragma once

namespace crazy2048 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Menushow 摘要
	/// </summary>
	public ref class Menushow : public System::Windows::Forms::Form
	{
	public:
		Menushow(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Menushow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  closebtn;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  tryagain;
	private: System::Windows::Forms::Label^  quitbtn;
	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->closebtn = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tryagain = (gcnew System::Windows::Forms::Label());
			this->quitbtn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label1->Location = System::Drawing::Point(28, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(233, 250);
			this->label1->TabIndex = 0;
			this->label1->Text = L"菜单";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// closebtn
			// 
			this->closebtn->BackColor = System::Drawing::Color::YellowGreen;
			this->closebtn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->closebtn->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->closebtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->closebtn->Location = System::Drawing::Point(259, 0);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Size = System::Drawing::Size(40, 36);
			this->closebtn->TabIndex = 6;
			this->closebtn->Text = L"x";
			this->closebtn->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->closebtn->Click += gcnew System::EventHandler(this, &Menushow::closebtn_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(57, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(183, 10);
			this->label2->TabIndex = 7;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label3->Location = System::Drawing::Point(57, 247);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(183, 10);
			this->label3->TabIndex = 8;
			// 
			// tryagain
			// 
			this->tryagain->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->tryagain->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tryagain->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->tryagain->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->tryagain->Location = System::Drawing::Point(101, 145);
			this->tryagain->Name = L"tryagain";
			this->tryagain->Size = System::Drawing::Size(93, 27);
			this->tryagain->TabIndex = 9;
			this->tryagain->Text = L"再来一局";
			this->tryagain->Click += gcnew System::EventHandler(this, &Menushow::tryagain_Click);
			// 
			// quitbtn
			// 
			this->quitbtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->quitbtn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->quitbtn->Font = (gcnew System::Drawing::Font(L"微软雅黑", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->quitbtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->quitbtn->Location = System::Drawing::Point(101, 192);
			this->quitbtn->Name = L"quitbtn";
			this->quitbtn->Size = System::Drawing::Size(93, 28);
			this->quitbtn->TabIndex = 10;
			this->quitbtn->Text = L"退出";
			this->quitbtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->quitbtn->Click += gcnew System::EventHandler(this, &Menushow::quitbtn_Click);
			// 
			// Menushow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(298, 316);
			this->ControlBox = false;
			this->Controls->Add(this->quitbtn);
			this->Controls->Add(this->tryagain);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->closebtn);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->KeyPreview = true;
			this->MaximizeBox = false;
			this->Name = L"Menushow";
			this->ShowIcon = false;
			this->Text = L"Menushow";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void closebtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}

private: System::Void tryagain_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
private: System::Void quitbtn_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();
}
};
}
