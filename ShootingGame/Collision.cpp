#include "Collision.hpp"


//コンストラクタ
BoxCollision::BoxCollision()
{

}


//最大値を設定
void BoxCollision::setMax(glm::vec2 pos)
{
	max = pos;
}


//最小値を設定
void BoxCollision::setMin(glm::vec2 pos)
{
	min = pos;
}

//交差判定
bool BoxCollision::Intersect(BoxCollision box)
{
	if ((box.getMax().x > getMin().x) && (getMax().x > box.getMin().x) ||
		(box.getMax().y > getMin().y) && (getMax().y > box.getMin().y))
	{
		return true;
	}
	else {
		return false;
	}





	/*
	//相手
	glm::vec2 boxSize = box.getMax() - box.getMin();
	glm::vec2 colSize = getMax() - getMin();

	glm::vec2 boxCenter = boxSize / 2;
	glm::vec2 colCenter = colSize / 2;

	*/







	
}


//最大値を取得
glm::vec2 BoxCollision::getMax()
{
	return max;
}


//最小値を取得
glm::vec2 BoxCollision::getMin()
{
	return min;
}

//デストラクタ
BoxCollision::~BoxCollision()
{

}
