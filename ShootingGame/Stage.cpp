#include "Stage.hpp"
#include "DxLib.h"
#include "BoxCollision.hpp"





//�R���X�g���N�^
Stage::Stage(Entry* entry)	
{
	mHandleBlock_ = LoadGraph("Assets/Block.png");

}

//�X�V
void Stage::Update()
{

}


//�`��
void Stage::Draw()
{
	DrawGraph(0,0,mHandleBlock_,true);
}



//�f�X�g���N�^
Stage::~Stage()
{

}

