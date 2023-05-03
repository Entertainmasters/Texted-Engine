/*
	TextedEngine.h
	This file contains the GameEngine

	Copyright Entertainmasters 2022 - 2023. 

	Author(s):
	~~~~~~~~~~~~~~~~~~~~~~~~
	Copy05 (https://github.com/Copy05)
*/

#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

struct Intervals {
	static const int AwaitingInput = 0;
	static const int Short = 1;
	static const int Normal = 2;
	static const int SLong = 3;
	static const int Long = 5;
	static const int VeryLong = 7;
	static const int XLong = 10;
	static const int DEBUG = 5;
};

struct Texted {
	double Version = 0.1;
	int BuildNumber = 3;
	std::string ProductName = "Texted";
	std::string Maintainer = "Entertainmasters";
	std::string GetFullVersion() { return "(c) Copyright " + Maintainer + " 2022 - 2023. " +  ProductName +" v" + std::to_string(Version); }
};

class TextedEngine
{
public:
	TextedEngine(std::string Player, std::string Friend);
	TextedEngine(std::string Friend);
	TextedEngine() : Player(0x00), Friend(0x00) {};
	~TextedEngine();
public:
	std::string Player, Friend;

	void Configuration();

	void Flush() {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
	}

	void SetPlayer(std::string name) { this->Player = name; }
	void SetFriend(std::string name) { this->Friend = name; }
	std::string GetPlayer() const { return this->Player; }
	std::string GetFriend() const { return this->Friend; }
	std::string GetPeople() const { return "Player: " + GetPlayer() + ", Friend: " + GetFriend(); }

	void YourMessage(std::string str, int interval);
	void FriendsMessage(std::string str, int interval);
	void PrintChoices(std::string choice1, std::string choice2, std::string choice3);
	void SimpleChoice(std::string choice1, std::string choice2, std::string choice3, std::string res1, std::string res2, std::string res3, std::string failchoice, std::string failres);
	int ReturnIntChoice(std::string choice1, std::string choice2, std::string choice3, int choiceInt);
	int ReturnIntChoice(std::string choice1, std::string choice2, std::string choice3);
public:
	friend std::ostream& operator<<(std::ostream& out, const TextedEngine& te);
private:
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
};

inline std::ostream& operator<<(std::ostream& out, const TextedEngine& te) { out << "Player: " << te.Player << ", Friend: "  << te.Friend; return out; };