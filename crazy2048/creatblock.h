#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace crazy2048 {

	/// <summary>
	/// creatblock 摘要
	/// </summary>
	public ref class creatblock : public System::Windows::Forms::UserControl
	{
	public:
		creatblock(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
		creatblock(int num)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			this->lable_num->Text = num.ToString();
			switch (num)
			{
			case 0:
			//	this->lable_num->Hide();
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
					static_cast<System::Int32>(static_cast<System::Byte>(140)));
				break;
			case 2:
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				break;
			case 4:
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
					static_cast<System::Int32>(static_cast<System::Byte>(255)));
				break;
			case 8:
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(242)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
					static_cast<System::Int32>(static_cast<System::Byte>(121)));
				break;
			case 16:
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
					static_cast<System::Int32>(static_cast<System::Byte>(83)));
				break;
			case 32:
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)), static_cast<System::Int32>(static_cast<System::Byte>(124)),
					static_cast<System::Int32>(static_cast<System::Byte>(95)));
				break;
			default:
				break;
			}
		}
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~creatblock()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^  lable_num;
	protected:

	protected:

	protected:

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
			this->lable_num = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lable_num
			// 
			this->lable_num->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lable_num->AutoEllipsis = true;
			this->lable_num->Font = (gcnew System::Drawing::Font(L"微软雅黑", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lable_num->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->lable_num->Location = System::Drawing::Point(0, 0);
			this->lable_num->Margin = System::Windows::Forms::Padding(3);
			this->lable_num->MaximumSize = System::Drawing::Size(90, 90);
			this->lable_num->Name = L"lable_num";
			this->lable_num->Size = System::Drawing::Size(90, 90);
			this->lable_num->TabIndex = 0;
			this->lable_num->Text = L"2";
			this->lable_num->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// creatblock
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PeachPuff;
			this->Controls->Add(this->lable_num);
			this->Margin = System::Windows::Forms::Padding(0);
			this->Name = L"creatblock";
			this->Size = System::Drawing::Size(90, 90);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
