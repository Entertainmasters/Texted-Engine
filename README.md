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

void StoryClassName::StartStory(){

    TextedEngine te* = new TextedEngine("Emily");
	system("cls");
	Sleep(1000);

    // story...
}
``` 

**Choices**

```cpp
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
``` 