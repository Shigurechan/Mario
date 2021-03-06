#include "DxLib.h"

#include "Fps.hpp"
#include "Input.hpp"
#include "Entry.hpp"


#include <iostream>

//画面サイズ
#define SCREEN_WIDTH ((int)14 * 70)
#define SCREEN_HEIGHT ((int) 9 * 70)


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	//コマンドライン表示
	AllocConsole();
	FILE* fp = NULL;
	freopen_s(&fp, "CONOUT$","w",stdout);
	freopen_s(&fp, "CONIN$","r", stdin);

	ChangeWindowMode(TRUE);								//ウインドウモード
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);		//ウインドウサイズ

	//Dxlib初期化処理
	if (DxLib_Init() == -1)
	{
		return -1;
	}


	std::shared_ptr<Entry> entry = std::make_shared<Entry>();


	while (true)
	{
		
		SetDrawScreen(DX_SCREEN_BACK);





		entry->Update();	//計算
		entry->Draw();		//描画

		


		ScreenFlip();		//スワップバッファー
		ClearDrawScreen();	//クリアスクリーン	
		ProcessMessage();	//メッセージ処理


	}





	
	DxLib_End();
	return 01;
}
