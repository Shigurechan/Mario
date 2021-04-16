#ifndef ___ANIMATION_HPP
#define ___ANIMATION_HPP

class Entry;

class Animation
{
public:
	Animation(int anim,Entry* entry);	//�R���X�g���N�^
	~Animation();						//�f�X�g���N�^

	bool AnimStart(int& anim, int speed);	//��񂾂��Đ�
	int AnimLoop(int speed);				//�A�j���[�V�����𖳌����[�v�Đ�
	void Reset();							//���Z�b�g
private:


	
	int animClipMax;	//�N���b�v��
	int animPrevSpeed;	//�O�̃A�j���[�V�������x
	bool isChangeSpeed;	//���x�ύX
	int nowAnim;		//���݂̃N���b�v
	bool isAnim;		//�Đ��������ǂ����H
	bool isStart;		//�Đ����n�߂�
	int nextAnimFrame;	//���̃A�j���[�V�����t���[��





	Entry* owner;
};

#endif
