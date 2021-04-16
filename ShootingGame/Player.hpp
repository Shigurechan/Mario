#ifndef ___PLAYER_HPP
#define ___PLAYER_HPP
#include "glm/glm.hpp"
#include <array>
#include "Animation.hpp"

//画面サイズ
#define SCREEN_WIDTH ((int)14 * 70)
#define SCREEN_HEIGHT ((int) 9 * 70)

#define PI ((float)3.14159265359)	//円周率
#define CELL ((float)48.0f)			//セル

//前方宣言
class Entry;

class Player
{
public:
	Player(Entry* entry);	//コンストラクタ
	~Player();				//デストラクタ

	void Update();	//更新
	void Draw();	//描画


private:

	//スプライト
	std::array<int,8> mHandlePlayer_;		//プレイヤー
	std::array<int,3> mHandlePlayer_Walk_;	//歩行
	int mHandlePlayer_GameOver_;			//ゲームオーバー
	int mHandlePlayer_Rev_;					//逆向き
	int mHandlePlayer_Jump_;				//ジャンプ
	int mHandlePlayer_Wait_;				//待機

	bool isJump;	//ジャンプ
	


	glm::vec2 position;	//座標
	float speed;		//速度
	float spd;			//

	float coeSpeed;		//速度係数
	Animation anim;






	Entry* owner;	//Entryクラス
};

#endif
