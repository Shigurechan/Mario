#include "DxLib.h"

#include "Fps.hpp"
#include "Input.hpp"
#include "Entry.hpp"


#include <iostream>

//��ʃT�C�Y
#define SCREEN_WIDTH ((int)14 * 70)
#define SCREEN_HEIGHT ((int) 9 * 70)


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{

	//�R�}���h���C���\��
	AllocConsole();
	FILE* fp = NULL;
	freopen_s(&fp, "CONOUT$","w",stdout);
	freopen_s(&fp, "CONIN$","r", stdin);

	ChangeWindowMode(TRUE);								//�E�C���h�E���[�h
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, 32);		//�E�C���h�E�T�C�Y

	//Dxlib����������
	if (DxLib_Init() == -1)
	{
		return -1;
	}


	std::shared_ptr<Entry> entry = std::make_shared<Entry>();


	while (true)
	{
		
		SetDrawScreen(DX_SCREEN_BACK);





		entry->Update();	//�v�Z
		entry->Draw();		//�`��

		


		ScreenFlip();		//�X���b�v�o�b�t�@�[
		ClearDrawScreen();	//�N���A�X�N���[��	
		ProcessMessage();	//���b�Z�[�W����


	}





	
	DxLib_End();
	return 01;
}