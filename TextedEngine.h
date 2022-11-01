#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

typedef short Choice; // Choices
typedef bool StoryPoint;

// The Texted Engine which contains all functions for the Story Making
class TextedEngine
{
public:
	typedef std::string ChatName;
	ChatName Player, Friend;

	TextedEngine(std::string Player, std::string Friend);
	~TextedEngine();

	void YourMessage(std::string str, int interval);
	void FriendsMessage(std::string str, int interval);

	void PrintChoices(std::string choice1, std::string choice2, std::string choice3);

private:
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
};

