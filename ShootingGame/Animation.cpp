#include "Animation.hpp"
#include "Fps.hpp"
#include "Entry.hpp"

//コンストラクタ
Animation::Animation(int anim, Entry* entry)
{

	owner = entry;			//Entryクラス
	animClipMax = anim;		//クリップ数
	nowAnim = 0;			//現在のクリップ
	isAnim = false;			//再生したかどうか？
	isStart = false;		//再生を始める
	isChangeSpeed = false;	//速度変更
	animPrevSpeed = 0;		
}





//一回だけ再生
/*
* true 再生済み
* false 再生中
*/
bool Animation::AnimStart(int& anim,int speed)
{
	if (isAnim == false)
	{
		if (isStart == false)
		{
			owner->fps->getElapsed(speed, &nextAnimFrame);
			isStart = true;
		}
		else if (nextAnimFrame == owner->fps->getElapsed())
		{
			nowAnim++;
			owner->fps->getElapsed(speed, &nextAnimFrame);
			if (nowAnim > animClipMax)
			{
				isAnim = true;
				nowAnim = animClipMax;
			}
		}
	}

	anim = nowAnim;
	return isAnim;
}




//アニメーションを無限ループ再生
int Animation::AnimLoop(int speed)
{
	//速度が変わった場合
	if (animPrevSpeed != speed)
	{
		isChangeSpeed = false;
	}

	if (isChangeSpeed == false)
	{
		owner->fps->getElapsed(speed, &nextAnimFrame);
		isChangeSpeed = true;
	}
	
	if (nextAnimFrame == owner->fps->getElapsed())
	{
		nowAnim++;
		if (nowAnim > animClipMax)
		{
			nowAnim = 0;
		}

		owner->fps->getElapsed(speed, &nextAnimFrame);

	}




	animPrevSpeed = speed;
	return nowAnim;
}








//リセット
void Animation::Reset()
{
	nowAnim = 0;
	isAnim = false;
}



//デストラクタ
Animation::~Animation()
{

}

