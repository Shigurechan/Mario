#include "Fps.hpp"
#define RESET 6000

int Fps::count = 0;
int Fps::startCount = 0;

Fps::Fps()
{
	startTime = 0;
	count = 0;
	
}

//�X�V
void Fps::Update() 
{

	startCount++;

	if (startCount > RESET)
	{
		startCount = 1;
	}


	//1�t���[���ڂȂ玞�����L��
	if (count == 0) 
	{ 
		startTime = GetNowCount();
	}

	//60�t���[���ڂȂ畽�ς��v�Z����
	if (count == N) 
	{ 
		startTime = GetNowCount();
		count = 0;
	}

	count++;
	
}

//���݂̃t���[�����擾
int Fps::getFrame() 
{
	return count;
}

//�o�߃t���[�����擾
int Fps::getElapsed(int add,int *result)
{

	//�o�߃t���[��
	if (startCount + add >= RESET)
	{
		if (result != NULL) {
			*result = startCount + add - RESET;
		}
		startCount = 1;
	}
	else 
	{
		if (result != NULL) {
			*result = startCount + add;
		}
	}

	return startCount;
}



//�ҋ@
void Fps::Wait() 
{
	int tookTime = GetNowCount() - startTime;		//������������
	int waitTime = (count * 1000 / FPS) - tookTime;	//�҂ׂ�����

	if (waitTime > 0)
	{
		Sleep(waitTime);	//�ҋ@
	}

	
}