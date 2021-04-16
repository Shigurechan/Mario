#include "Game.hpp"
#include "Entry.hpp"
#include "Input.hpp"
#include "Player.hpp"
#include "Stage.hpp"
#include <iostream>
#include "DxLib.h"

Game::Game(Entry* entry)
{
	owner = entry;	//Entry ƒNƒ‰ƒX
	player = std::make_shared<Player>(entry);
	stage = std::make_shared<Stage>(entry);
}

//ŒvŽZ
void Game::Update()
{
	player->Update();
	stage->Update();

}

//•`‰æ
void Game::Draw()
{
	player->Draw();
	stage->Draw();
}

Game::~Game()
{

}
