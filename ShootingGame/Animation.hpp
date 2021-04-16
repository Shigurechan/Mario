#ifndef ___ANIMATION_HPP
#define ___ANIMATION_HPP

class Entry;

class Animation
{
public:
	Animation(int anim,Entry* entry);	//コンストラクタ
	~Animation();						//デストラクタ

	bool AnimStart(int& anim, int speed);	//一回だけ再生
	int AnimLoop(int speed);				//アニメーションを無限ループ再生
	void Reset();							//リセット
private:


	
	int animClipMax;	//クリップ数
	int animPrevSpeed;	//前のアニメーション速度
	bool isChangeSpeed;	//速度変更
	int nowAnim;		//現在のクリップ
	bool isAnim;		//再生したかどうか？
	bool isStart;		//再生を始める
	int nextAnimFrame;	//次のアニメーションフレーム





	Entry* owner;
};

#endif
