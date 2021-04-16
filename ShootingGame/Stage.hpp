#ifndef ___STAGE_HPP
#define ___STAGE_HPP

class Entry;
class BoxCollision;

class Stage
{
public:
	Stage(Entry* entry);	//コンストラクタ
	~Stage();	//デストラクタ

	void Update();		//更新
	void Draw();		//描画


	void CollisionPlayer(std::shared_ptr<Player> player);

private:

	//スプライト
	int mHandleBlock_;




	Entry* owner;
};




#endif;
