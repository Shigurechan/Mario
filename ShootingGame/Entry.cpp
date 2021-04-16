#include "Entry.hpp"
#include "Input.hpp"
#include "Fps.hpp"
#include "Game.hpp"
#include "DxLib.h"

Entry::Entry()
{
	input = std::make_shared<Input>();
	game = std::make_shared<Game>(this);
	fps = std::make_shared<Fps>();

}


Entry::~Entry()
{

}



void Entry::Update()
{
	input->Update();
	fps->Update();



	game->Update();




	//‹­§I—¹
	if (input->getKeyDown(KEY_INPUT_ESCAPE) == true)
	{
		exit(0);
	}

	fps->Wait();
}

void Entry::Draw()
{
	game->Draw();

}

