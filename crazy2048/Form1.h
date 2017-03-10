#pragma once
#include <stdio.h>
#include <time.h>
#include <string.h>
#include<stdlib.h>
#include<WINDOWS.H>//引用控制台变量，获取系统时间等函数
#include "creatblock.h"
#include "about.h"
#include "Menushow.h"
#include <conio.h>
#include <ctype.h>
SYSTEMTIME sys;//获取系统时间



namespace crazy2048 {

	using namespace System;
	using namespace std;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Form1 摘要
	/// </summary>
/*	public struct MARGINS
	{
		public int Right;
		public int left;
		public int Top;
		public int Buttom;

	};*/
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TableLayoutPanel^  gametable;
	protected:
		array<creatblock ^, 2> ^ TabBox = gcnew array<creatblock ^, 2>(4, 4);
		array<int, 2> ^ TabArray= gcnew array<int, 2>(4, 4);
		about a;
		Menushow ms;
		int count;
		int is_moved;//标志变量，指示是否移动过
	public: System::Windows::Forms::Label^  icon;
	public: System::Windows::Forms::Label^  score;
	private: System::Windows::Forms::Label^  historyscore;
	public:
	public: System::Windows::Forms::Label^  score_now;
	private:
	private: System::Windows::Forms::Label^  label1;
	public:
	private: System::Windows::Forms::Label^  menu;
	private: System::Windows::Forms::Label^  aboutbtn;

	private: System::Windows::Forms::Label^  explain;



		

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->gametable = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->icon = (gcnew System::Windows::Forms::Label());
			this->score = (gcnew System::Windows::Forms::Label());
			this->historyscore = (gcnew System::Windows::Forms::Label());
			this->score_now = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menu = (gcnew System::Windows::Forms::Label());
			this->aboutbtn = (gcnew System::Windows::Forms::Label());
			this->explain = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// gametable
			// 
			this->gametable->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->gametable->BackColor = System::Drawing::Color::Khaki;
			this->gametable->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::Inset;
			this->gametable->ColumnCount = 4;
			this->gametable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->GrowStyle = System::Windows::Forms::TableLayoutPanelGrowStyle::FixedSize;
			this->gametable->Location = System::Drawing::Point(20, 163);
			this->gametable->Name = L"gametable";
			this->gametable->RowCount = 4;
			this->gametable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 25)));
			this->gametable->Size = System::Drawing::Size(360, 360);
			this->gametable->TabIndex = 0;
			// 
			// icon
			// 
			this->icon->BackColor = System::Drawing::Color::Orange;
			this->icon->Font = (gcnew System::Drawing::Font(L"微软雅黑", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->icon->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->icon->Location = System::Drawing::Point(20, 20);
			this->icon->Name = L"icon";
			this->icon->Size = System::Drawing::Size(91, 90);
			this->icon->TabIndex = 1;
			this->icon->Text = L"2048";
			this->icon->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// score
			// 
			this->score->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->score->AutoEllipsis = true;
			this->score->BackColor = System::Drawing::Color::Tan;
			this->score->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->score->ImageAlign = System::Drawing::ContentAlignment::TopRight;
			this->score->Location = System::Drawing::Point(155, 20);
			this->score->Name = L"score";
			this->score->Size = System::Drawing::Size(100, 58);
			this->score->TabIndex = 2;
			this->score->Text = L"分数";
			this->score->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// historyscore
			// 
			this->historyscore->BackColor = System::Drawing::Color::Tan;
			this->historyscore->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->historyscore->Location = System::Drawing::Point(280, 20);
			this->historyscore->Name = L"historyscore";
			this->historyscore->Size = System::Drawing::Size(100, 58);
			this->historyscore->TabIndex = 3;
			this->historyscore->Text = L"历史最高成绩";
			this->historyscore->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// score_now
			// 
			this->score_now->BackColor = System::Drawing::Color::Tan;
			this->score_now->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->score_now->Location = System::Drawing::Point(156, 45);
			this->score_now->Name = L"score_now";
			this->score_now->Size = System::Drawing::Size(98, 25);
			this->score_now->TabIndex = 4;
			this->score_now->Text = L"0";
			this->score_now->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Tan;
			this->label1->Font = (gcnew System::Drawing::Font(L"微软雅黑", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(281, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 25);
			this->label1->TabIndex = 5;
			this->label1->Text = L"112682";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// menu
			// 
			this->menu->BackColor = System::Drawing::Color::Coral;
			this->menu->Font = (gcnew System::Drawing::Font(L"微软雅黑", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->menu->Location = System::Drawing::Point(155, 82);
			this->menu->Name = L"menu";
			this->menu->Size = System::Drawing::Size(100, 28);
			this->menu->TabIndex = 6;
			this->menu->Text = L"菜单";
			this->menu->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->menu->Click += gcnew System::EventHandler(this, &Form1::menu_Click);
			// 
			// aboutbtn
			// 
			this->aboutbtn->BackColor = System::Drawing::Color::Coral;
			this->aboutbtn->Location = System::Drawing::Point(280, 83);
			this->aboutbtn->Name = L"aboutbtn";
			this->aboutbtn->Size = System::Drawing::Size(100, 28);
			this->aboutbtn->TabIndex = 7;
			this->aboutbtn->Text = L"关于我们";
			this->aboutbtn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->aboutbtn->Click += gcnew System::EventHandler(this, &Form1::about_Click);
			this->aboutbtn->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::about_MouseDown);
			// 
			// explain
			// 
			this->explain->AutoSize = true;
			this->explain->Font = (gcnew System::Drawing::Font(L"微软雅黑", 10.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->explain->ForeColor = System::Drawing::Color::Chocolate;
			this->explain->Location = System::Drawing::Point(18, 130);
			this->explain->Name = L"explain";
			this->explain->Size = System::Drawing::Size(278, 20);
			this->explain->TabIndex = 8;
			this->explain->Text = L"【 ←↓ → ↑开始游戏  A重新开始 Esc退出 】";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnableAllowFocusChange;
			this->BackColor = System::Drawing::Color::LemonChiffon;
			this->ClientSize = System::Drawing::Size(400, 550);
			this->Controls->Add(this->explain);
			this->Controls->Add(this->aboutbtn);
			this->Controls->Add(this->menu);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->score_now);
			this->Controls->Add(this->historyscore);
			this->Controls->Add(this->score);
			this->Controls->Add(this->icon);
			this->Controls->Add(this->gametable);
			this->Font = (gcnew System::Drawing::Font(L"宋体", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(134)));
			this->ForeColor = System::Drawing::SystemColors::ControlDarkDark;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"MainFrom";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyUp);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		
				 int i, j;
				 for ( i = 0; i < 4; i++){
					 for (j = 0; j < 4; j++){
						 TabArray[i, j] = 0;
						creatblock^ iniBlock = gcnew crazy2048::creatblock(0);
						TabBox[i, j] = iniBlock;
				
						 this->gametable->Controls->Add(TabBox[i,j], i, j);
					 }
				 }
				 randDete();
				 randDete();
				 count = 0;
				 printf_array();
				
	}
			private:void printf_array(){
						int i, j;
						is_moved = 0;
						score_now->Text = count.ToString();
						for (i = 0; i<4; i++){
							for (j = 0; j<4; j++){
								TabBox[i, j]->lable_num->Text = TabArray[i,j].ToString();
								switch (TabArray[i,j])
								{
								case 0:
								//	TabBox[i,j]->lable_num->Hide();
									    TabBox[i, j]->lable_num->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
										static_cast<System::Int32>(static_cast<System::Byte>(140)));
										TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(230)),
										static_cast<System::Int32>(static_cast<System::Byte>(140)));
									break;
								case 2:
									TabBox[i, j]->lable_num->ForeColor = System::Drawing::SystemColors::ControlLightLight;
										TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(153)), static_cast<System::Int32>(static_cast<System::Byte>(223)),
										static_cast<System::Int32>(static_cast<System::Byte>(0)));
									break;
								case 4:
									TabBox[i, j]->lable_num->ForeColor = System::Drawing::SystemColors::ControlLightLight;
										TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
										static_cast<System::Int32>(static_cast<System::Byte>(255)));
									break;
								case 8:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(2442)), static_cast<System::Int32>(static_cast<System::Byte>(177)),
										static_cast<System::Int32>(static_cast<System::Byte>(121)));
									break;
								case 16:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(236)), static_cast<System::Int32>(static_cast<System::Byte>(141)),
										static_cast<System::Int32>(static_cast<System::Byte>(83)));
									break;
								case 32:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(72)), static_cast<System::Int32>(static_cast<System::Byte>(61)),
										static_cast<System::Int32>(static_cast<System::Byte>(139)));
									break;
								case 64:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(50)), static_cast<System::Int32>(static_cast<System::Byte>(205)),
										static_cast<System::Int32>(static_cast<System::Byte>(50)));
									break;
								case 128:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(127)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
										static_cast<System::Int32>(static_cast<System::Byte>(0)));
									break;
								case 256:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
										static_cast<System::Int32>(static_cast<System::Byte>(209)));
									break;
								case 512:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)),
										static_cast<System::Int32>(static_cast<System::Byte>(169)));
									break;
								case 1024:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(210)), static_cast<System::Int32>(static_cast<System::Byte>(105)),
										static_cast<System::Int32>(static_cast<System::Byte>(30)));
									break;
								case 2048:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(186)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
										static_cast<System::Int32>(static_cast<System::Byte>(211)));
									break;
								case 4096:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(119)), static_cast<System::Int32>(static_cast<System::Byte>(136)),
										static_cast<System::Int32>(static_cast<System::Byte>(153)));
									break;
								case 8192:
									TabBox[i, j]->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(244)), static_cast<System::Int32>(static_cast<System::Byte>(164)),
										static_cast<System::Int32>(static_cast<System::Byte>(96)));
									break;
								default:
									break;
								}
							}
						}
			}
			//产生随机数
			 private:int randNum(int num){
						 Random^ Rdm = gcnew Random();
						 int randnum = Rdm->Next(0, num);
						  return randnum;
			 }
			//在随机空白格上随机出现2或4
			private: void randDete(){
						 int randRow = 0, randCol = 0, mak ;
						 mak = repeat_judge();
						 String ^msg = "你的分数为" + count.ToString();
						 if (mak == 0){
						 randRow = randNum(4);
						 randCol = randNum(4);
						 
						 
						 while (TabArray[randRow,randCol] != 0){
							 randRow = randNum(4);
							 randCol = randNum(4);

						 }
						 TabArray[randRow, randCol] = randChange();
						 }
						 else{
							 
							 System::Windows::Forms::MessageBox::Show(msg, "Game Over!", System::Windows::Forms::MessageBoxButtons::OK);
						 }
					 }
				//随机产生2或4
				private:int randChange(){
							int randC;
							randC = randNum(5);
							if (randC == 0 || randC == 2 || randC == 4)
								return 2;
							else
								return 4;
				}
				//查找4*4的格子中是否还有空白格
				private:int repeat_judge(){
							int i, j;
							for (i = 0; i<4; i++){
								for (j = 0; j<4; j++){
									if (TabArray[i,j] == 0)
										return 0;
								}
							}
							return 1;
						}
				private:void right_move(){
							right_move_zero();
							right_move_compare();
							right_move_zero();
						}
				private:void right_move_zero(){
							int i, j, k;
							int array_s;
							for (k = 0; k<3; k++){
								for (i = 0; i<4; i++){
									for (j = 3; j != 0; j--){
										if (TabArray[i,j] == 0){
											if (TabArray[i, j - 1] == 0)
												continue;
											else{
												array_s = TabArray[i, j];
												TabArray[i, j] = TabArray[i, j- 1];
												TabArray[i, j - 1] = array_s;
												is_moved = 1;
											}
										}
										else
											continue;
									}
								}
							}
						}

				private:void right_move_compare(){
							int i, j;
							for (i = 0; i<4; i++){
								for (j = 3; j != 0; j--){
									if (TabArray[i, j] == TabArray[i, j - 1]){
										TabArray[i, j] =2*TabArray[i,j];
										count = count + TabArray[i, j];
										TabArray[i, j - 1] = 0;
										is_moved = 1;
									}
									else
										continue;
								}
							}
						}
						//向下移
				private:void down_move(){
							int i, j, array_s;
							for (i = 0; i<4; i++){
								for (j = 0; j<4; j++){
									if (i == j)
										break;
									else{
										array_s = TabArray[i, j];
										TabArray[i, j] = TabArray[j, i];
										TabArray[j, i] = array_s;
										
									}
								}
							}
							right_move_zero();
							right_move_compare();
							right_move_zero();
							for (i = 0; i<4; i++){
								for (j = 0; j<4; j++){
									if (i == j)
										break;
									else{
										array_s = TabArray[i, j];
										TabArray[i, j] = TabArray[j,i];
										TabArray[j, i] = array_s;
									}
								}
							}
						}
						//左移
				private:void left_move(){
							left_move_zero();
							left_move_compare();
							left_move_zero();
						}
				private:void left_move_compare(){
							int i, j;
							for (i = 0; i<4; i++){
								for (j = 0; j<3; j++){
									if (TabArray[i, j] == TabArray[i, j + 1]){
										TabArray[i, j] = 2 * TabArray[i, j];
										count = count + TabArray[i, j];
										TabArray[i, j + 1] = 0;
										is_moved = 1;
									}
									else
										continue;
								}
							}
						}
				private:void left_move_zero(){
							int i, j, k;
							int array_l;
						//	array<int > ^ array_l = gcnew array<int >(1);
							for (k = 0; k<3; k++){
								for (i = 0; i<4; i++){
									for (j = 0; j<3; j++){
										if (TabArray[i, j] == 0){
											if (TabArray[i, j + 1] == 0)
												continue;
											else{
												array_l = TabArray[i, j];
												TabArray[i, j] = TabArray[i, j + 1];
												TabArray[i, j + 1] = array_l;
												is_moved = 1;
											}
										}
										else
											continue;
									}
								}
							}
						}
						//上移
				private:void up_move(){
							int i, j, array_s;
						//	array<int > ^ array_u = gcnew array<int >(1);
							for (i = 0; i<4; i++){
								for (j = 0; j<4; j++){
									if (i == j)
										break;
									else{
										array_s = TabArray[i, j];
										TabArray[i, j] = TabArray[j,i];
										TabArray[j, i] = array_s;
									}
								}
							}
							left_move_zero();
							left_move_compare();
							left_move_zero();
							for (i = 0; i<4; i++){
								for (j = 0; j<4; j++){
									if (i == j)
										break;
									else{
										array_s = TabArray[i, j];
										TabArray[i, j] = TabArray[j,i];
										TabArray[j, i] = array_s;
									}
								}
							}
						}
	
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			
			
		

}
private: System::Void Form1_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 switch (e->KeyCode){
			 case System::Windows::Forms::Keys::Up:
				 left_move();
				 if (is_moved == 1){
					 randDete();
				 }
				 printf_array();
				 break;
			 case System::Windows::Forms::Keys::Down:
				 right_move();
				 if (is_moved == 1){
					 randDete();
				 }
				 printf_array();
				 break;
			 case System::Windows::Forms::Keys::Left:
				 up_move();
				 if (is_moved == 1){
					 randDete();
				 }
				 printf_array();
				 break;
			 case System::Windows::Forms::Keys::Right:
				 down_move();
				 if (is_moved == 1){
					 randDete();
				 }
				 printf_array();
				 break;
			 case System::Windows::Forms::Keys::Escape:
				 this->Close();
				 break;
			 case System::Windows::Forms::Keys::A:
				 for (int i = 0; i<4; i++)
				 {
					 for (int j = 0; j<4; j++)
					 {
						 TabArray[i, j] = 0;
					 }
				 }
				 randDete();
				 randDete();
				 printf_array();
				 count = 0;
				 break;
			 default:
				 break;
			 }

}

		
private: System::Void about_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Opacity = 0.5;
			 a.ShowDialog(); 
			 this->Opacity = 1;
}

private: System::Void menu_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Opacity = 0.5;
			 ms.ShowDialog();
			 this->Opacity = 1;
}
};
}

