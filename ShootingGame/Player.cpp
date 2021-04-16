#include "Player.hpp"
#include "DxLib.h"
#include "Entry.hpp"
#include "Input.hpp"


Player::Player(Entry* entry):anim(2,entry)
{
	owner = entry;	//owner


	//�X�v���C�g�ǂݍ���
	if (LoadDivGraph("Assets/Mario.png", 7, 7, 1, (int)CELL, (int)CELL, mHandlePlayer_.data()) == -1)
	{
		printf("Mario.png �ǂݍ��߂܂���\n");
	}


	//���s
	mHandlePlayer_Walk_.at(0) = mHandlePlayer_.at(2);
	mHandlePlayer_Walk_.at(1) = mHandlePlayer_.at(3);
	mHandlePlayer_Walk_.at(2) = mHandlePlayer_.at(4);

	mHandlePlayer_GameOver_ = mHandlePlayer_.at(1);		//�Q�[���I�[�o�[
	mHandlePlayer_Rev_ = mHandlePlayer_.at(5);			//�t����
	mHandlePlayer_Jump_ = mHandlePlayer_.at(6);			//�W�����v
	mHandlePlayer_Wait_ = mHandlePlayer_.at(0);			//�ҋ@






	position = glm::vec2(SCREEN_WIDTH / 2 - (CELL / 2) - 300 , SCREEN_HEIGHT / 2 - (CELL / 2));	//���W

	speed = 0;		//���x
	coeSpeed = 0;	//���x�W��

	isJump = false;	//�W�����v�����ǂ����H

}



void Player::Update()
{
#define PI_SPEED ((float)32.0f)
#define SIN_COE ((float)0.3f)


	if (owner->input->getKeyDownHold(KEY_INPUT_RIGHT) > 0)
	{
		coeSpeed += PI / PI_SPEED;
		if (coeSpeed > PI)
		{
			coeSpeed = PI;
		}
		speed += sin(coeSpeed) * SIN_COE;

		
	}
	else if (owner->input->getKeyDownHold(KEY_INPUT_LEFT) > 0)
	{
		coeSpeed += PI / PI_SPEED;
		if (coeSpeed > PI)
		{
			coeSpeed = PI;
		}
		speed += -sin(coeSpeed) * SIN_COE;

	}
	else 
	{
		speed = 0;
		coeSpeed = 0;
	}
	
	if (owner->input->getKeyDownHold(KEY_INPUT_SPACE) > 0)
	{

	}






	//printf("speed: %.2f\n",speed);
	position.x += speed;


}

void Player::Draw()
{
	int a = 0;
	
	if (speed != 0)
	{
		DrawGraph((int)position.x, (int)position.y, mHandlePlayer_Walk_.at(anim.AnimLoop(std::abs(speed))), true);
	}
	else {
		DrawGraph((int)position.x, (int)position.y, mHandlePlayer_Wait_, true);

	}

	

	
}




Player::~Player()
{
	
}
