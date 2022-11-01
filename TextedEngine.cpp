#include "TextedEngine.h"

TextedEngine::TextedEngine(std::string Player, std::string Friend)
{
	this->Player = Player;
	this->Friend = Friend;
}

TextedEngine::~TextedEngine()
{
	exit(0);
}

void TextedEngine::YourMessage(std::string str, int interval)
{
	SetConsoleTextAttribute(h, 12);
	std::cout << Player << ": ";
	SetConsoleTextAttribute(h, 15);
	std::cout << str << std::endl;
	Sleep(interval);
}

void TextedEngine::FriendsMessage(std::string str, int interval)
{
	SetConsoleTextAttribute(h, 9);
	std::cout << Friend << ": ";
	SetConsoleTextAttribute(h, 15);
	std::cout << str << std::endl;
	Sleep(interval);
}

void TextedEngine::PrintChoices(std::string choice1, std::string choice2, std::string choice3)
{
	std::cout << "[1] " + choice1 << "\n[2] " + choice2 << "\n[3] " + choice3 << std::endl;
}
