#ifndef ___PLAYER_HPP
#define ___PLAYER_HPP
#include "glm/glm.hpp"
#include <array>
#include "Animation.hpp"

//��ʃT�C�Y
#define SCREEN_WIDTH ((int)14 * 70)
#define SCREEN_HEIGHT ((int) 9 * 70)

#define PI ((float)3.14159265359)	//�~����
#define CELL ((float)48.0f)			//�Z��

//�O���錾
class Entry;

class Player
{
public:
	Player(Entry* entry);	//�R���X�g���N�^
	~Player();				//�f�X�g���N�^

	void Update();	//�X�V
	void Draw();	//�`��


private:

	//�X�v���C�g
	std::array<int,8> mHandlePlayer_;		//�v���C���[
	std::array<int,3> mHandlePlayer_Walk_;	//���s
	int mHandlePlayer_GameOver_;			//�Q�[���I�[�o�[
	int mHandlePlayer_Rev_;					//�t����
	int mHandlePlayer_Jump_;				//�W�����v
	int mHandlePlayer_Wait_;				//�ҋ@

	bool isJump;	//�W�����v
	


	glm::vec2 position;	//���W
	float speed;		//���x
	float spd;			//

	float coeSpeed;		//���x�W��
	Animation anim;






	Entry* owner;	//Entry�N���X
};

#endif
