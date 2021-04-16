#ifndef ___GAME_HPP
#define ___GAME_HPP
#include "glm/glm.hpp"
#include <iostream>
#include <array>



//画面サイズ
#define SCREEN_WIDTH ((int)14 * 70)
#define SCREEN_HEIGHT ((int) 9 * 70)

#define PI ((float)3.14159265359)	//円周率
#define CELL ((float)48.0f)			//セル


//前方宣言
class Entry;
class Player;
class Stage;

class Game
{
public:
	Game(Entry* entry);
	~Game();

	void Update();
	void Draw();


private:


	std::shared_ptr<Player> player;
	std::shared_ptr<Stage> stage;
	Entry* owner;	//Entryクラス
};

#endif
