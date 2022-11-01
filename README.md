# Texted Engine

The Texted Engine allows you to create **Console** visual novel games

# Init

```cpp
#include "UnexpectedFeelings.h"

TextedEngine engine("Player", "Friend of the Player");
Sleep(2000);
```

# Examples

**User can type its name**

```cpp
// Global Variable
std::string G_playerName;

void StoryClassName::StartStory(){

    std::string PlayerName;
	std::cout << "Please Enter your Screenname: ";
	std::cin >> PlayerName;

	TextedEngine engine(PlayerName, "Emily");
	G_playerName = PlayerName; // Global Variable
	system("cls");
	Sleep(1000);

    // story...
}
``` 

**Choices**

```cpp
    // can be found in the header file.
    Choice heychoice

    engine.PrintChoices("Hi", "Hi, " + engine.Friend, "hello");

	std::cin >> heychoice;

	if (heychoice == 1) {
		engine.YourMessage("Hi", 3000);
	}
	if (heychoice == 2) {
		engine.YourMessage("Hi, " + engine.Friend, 3000);
	}
	if (heychoice == 3) {
		engine.YourMessage("hello!", 3000);
		engine.FriendsMessage("it's possible.", 1000);
	}
	if (heychoice > 3 || !std::cin.good()) {
		engine.YourMessage("hello there", 1000);
	}
``` 