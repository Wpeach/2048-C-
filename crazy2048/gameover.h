#pragma once

namespace crazy2048 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// gameover 摘要
	/// </summary>
	public ref class gameover : public System::Windows::Forms::Form
	{
	public:
		gameover(void)
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
		~gameover()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  closebtn;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->closebtn = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->label1->Location = System::Drawing::Point(12, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(239, 102);
			this->label1->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(254)),
				static_cast<System::Int32>(static_cast<System::Byte>(99)));
			this->label2->Font = (gcnew System::Drawing::Font(L"微软雅黑", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->label2->Location = System::Drawing::Point(48, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(167, 64);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Game Over !";
			// 
			// closebtn
			// 
			this->closebtn->BackColor = System::Drawing::Color::YellowGreen;
			this->closebtn->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->closebtn->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->closebtn->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->closebtn->Location = System::Drawing::Point(231, -9);
			this->closebtn->Name = L"closebtn";
			this->closebtn->Size = System::Drawing::Size(32, 38);
			this->closebtn->TabIndex = 6;
			this->closebtn->Text = L"x";
			this->closebtn->Click += gcnew System::EventHandler(this, &gameover::closebtn_Click);
			// 
			// gameover
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::SandyBrown;
			this->ClientSize = System::Drawing::Size(263, 159);
			this->Controls->Add(this->closebtn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"gameover";
			this->Text = L"gameover";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void closebtn_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
	}
	};
}
