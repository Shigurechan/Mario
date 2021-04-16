#include "Collision.hpp"


//�R���X�g���N�^
BoxCollision::BoxCollision()
{

}


//�ő�l��ݒ�
void BoxCollision::setMax(glm::vec2 pos)
{
	max = pos;
}


//�ŏ��l��ݒ�
void BoxCollision::setMin(glm::vec2 pos)
{
	min = pos;
}

//��������
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
	//����
	glm::vec2 boxSize = box.getMax() - box.getMin();
	glm::vec2 colSize = getMax() - getMin();

	glm::vec2 boxCenter = boxSize / 2;
	glm::vec2 colCenter = colSize / 2;

	*/







	
}


//�ő�l���擾
glm::vec2 BoxCollision::getMax()
{
	return max;
}


//�ŏ��l���擾
glm::vec2 BoxCollision::getMin()
{
	return min;
}

//�f�X�g���N�^
BoxCollision::~BoxCollision()
{

}
