#ifndef ___COLLISION_HPP
#define ___COLLISION_HPP

#include "glm/glm.hpp"




//��`�̓����蔻��
class BoxCollision
{
public:

	BoxCollision();
	~BoxCollision();


	void setMax(glm::vec2 pos);	//�ő�l��ݒ�
	void setMin(glm::vec2 pos);	//�ŏ��l��ݒ�

	bool Intersect();	//��������

	glm::vec2 getMax();	//�ő�l���擾
	glm::vec2 getMin();	//�ŏ��l���擾


private:

	glm::vec max;	//�ő�l
	glm::vec min;	//�ŏ��l



};