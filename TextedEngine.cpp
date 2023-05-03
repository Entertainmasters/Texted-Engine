/*
	TextedEngine.cpp
	This file contains the GameEngine

	Copyright Entertainmasters 2022 - 2023.

	Author(s):
	~~~~~~~~~~~~~~~~~~~~~~~~
	Copy05 (https://github.com/Copy05)
*/

#include "TextedEngine.h"

TextedEngine::TextedEngine(std::string Friend) {
	this->Friend = Friend;
	Configuration();
}

TextedEngine::TextedEngine(std::string Player, std::string Friend)
{
	this->Player = Player;
	this->Friend = Friend;
}

TextedEngine::~TextedEngine()
{
	exit(0);
}

void TextedEngine::Configuration()
{
	Flush();
	std::string PlayerName;
	std::cout << "Please Enter your name: ";
	std::getline(std::cin, PlayerName);
	this->Player = PlayerName;
}

void TextedEngine::YourMessage(std::string str, int interval)
{
	SetConsoleTextAttribute(h, 12);
	std::cout << Player << ": ";
	SetConsoleTextAttribute(h, 15);
	std::cout << str << std::endl;
	Sleep(interval * 1000);
}

void TextedEngine::FriendsMessage(std::string str, int interval)
{
	SetConsoleTextAttribute(h, 9);
	std::cout << Friend << ": ";
	SetConsoleTextAttribute(h, 15);
	std::cout << str << std::endl;
	Sleep(interval * 1000);
}

void TextedEngine::PrintChoices(std::string choice1, std::string choice2, std::string choice3)
{
	std::cout << "[1] " + choice1 << "\n[2] " + choice2 << "\n[3] " + choice3 << std::endl;
}

void TextedEngine::SimpleChoice(std::string choice1, std::string choice2, std::string choice3, std::string res1, std::string res2, std::string res3, std::string failchoice, std::string failres)
{
	int choice;
	PrintChoices(choice1, choice2, choice3);
	std::cin >> choice;

	switch (choice) {
	case 1:
		YourMessage(choice1, 2);
		FriendsMessage(res1, 1);
		break;
	case 2:
		YourMessage(choice2, 2);
		FriendsMessage(res2, 1);
		break;
	case 3:
		YourMessage(choice3, 2);
		FriendsMessage(res3, 1);
		break;
	default:
		YourMessage(failchoice, 1);
		FriendsMessage(failres, 1);
		break;
	}
	Flush();
}

int TextedEngine::ReturnIntChoice(std::string choice1, std::string choice2, std::string choice3, int choiceInt)
{
	PrintChoices(choice1, choice2, choice3);
	std::cin >> choiceInt;
	return choiceInt;
}

int TextedEngine::ReturnIntChoice(std::string choice1, std::string choice2, std::string choice3)
{
	int choiceInt;
	PrintChoices(choice1, choice2, choice3);
	std::cin >> choiceInt;
	return choiceInt;
}
