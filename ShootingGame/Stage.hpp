#ifndef ___STAGE_HPP
#define ___STAGE_HPP

class Entry;
class BoxCollision;

class Stage
{
public:
	Stage(Entry* entry);	//�R���X�g���N�^
	~Stage();	//�f�X�g���N�^

	void Update();		//�X�V
	void Draw();		//�`��


	void CollisionPlayer(std::shared_ptr<Player> player);

private:

	//�X�v���C�g
	int mHandleBlock_;




	Entry* owner;
};




#endif;
