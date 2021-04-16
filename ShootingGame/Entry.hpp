#ifndef ___ENTRY_HPP
#define ___ENTRY_HPP

#include <iostream>

class Input;
class Game;
class Fps;

class Entry
{
public:

	std::shared_ptr<Input> input;

	Entry();
	~Entry();


	void Update();
	void Draw();

	std::shared_ptr<Game> game;
	std::shared_ptr<Fps> fps;

private:


	
};
#endif
