#include "Stage.hpp"
#include "DxLib.h"
#include "BoxCollision.hpp"





//コンストラクタ
Stage::Stage(Entry* entry)	
{
	mHandleBlock_ = LoadGraph("Assets/Block.png");

}

//更新
void Stage::Update()
{

}


//描画
void Stage::Draw()
{
	DrawGraph(0,0,mHandleBlock_,true);
}



//デストラクタ
Stage::~Stage()
{

}

