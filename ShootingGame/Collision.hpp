#ifndef ___COLLISION_HPP
#define ___COLLISION_HPP

#include "glm/glm.hpp"




//矩形の当たり判定
class BoxCollision
{
public:

	BoxCollision();
	~BoxCollision();


	void setMax(glm::vec2 pos);	//最大値を設定
	void setMin(glm::vec2 pos);	//最小値を設定

	bool Intersect();	//交差判定

	glm::vec2 getMax();	//最大値を取得
	glm::vec2 getMin();	//最小値を取得


private:

	glm::vec max;	//最大値
	glm::vec min;	//最小値



};