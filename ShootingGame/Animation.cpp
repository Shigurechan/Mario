#include "Animation.hpp"
#include "Fps.hpp"
#include "Entry.hpp"

//�R���X�g���N�^
Animation::Animation(int anim, Entry* entry)
{

	owner = entry;			//Entry�N���X
	animClipMax = anim;		//�N���b�v��
	nowAnim = 0;			//���݂̃N���b�v
	isAnim = false;			//�Đ��������ǂ����H
	isStart = false;		//�Đ����n�߂�
	isChangeSpeed = false;	//���x�ύX
	animPrevSpeed = 0;		
}





//��񂾂��Đ�
/*
* true �Đ��ς�
* false �Đ���
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




//�A�j���[�V�����𖳌����[�v�Đ�
int Animation::AnimLoop(int speed)
{
	//���x���ς�����ꍇ
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








//���Z�b�g
void Animation::Reset()
{
	nowAnim = 0;
	isAnim = false;
}



//�f�X�g���N�^
Animation::~Animation()
{

}

