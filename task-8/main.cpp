#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int inventorySize;
//using a vector because its size can be changed at runtime. Arrays cannot be initialised with a non-constant number at runtime.
vector <int> inventory;
bool looping = true;

string itemList[]{ "Empty", "Potion", "Sword", "Bread", "AnimalHide", "RawMeat", "Wood", "Stone"};


//sends all commands to console
void commands()
{
	cout << "Commands:\n view (number)\n show_all\n set (itemSlot, itemIndex)\n items\n exit\n";
}

//view command
void view(string slotStr)
{
	int itemSlot = stoi(slotStr);
	//handles numbers outside of inventory size range
	if (itemSlot < 0 || itemSlot > inventorySize) cout << "Invalid inventory slot. Please enter a valid inventory slot from 0 to " +
			to_string(inventorySize) + "\n";
	else cout << " - Slot " + to_string(itemSlot) + ":\nName: " + itemList[inventory[itemSlot]] + "\n";
}
void showAll()
{
	//goes through every item in inventory and outputs it

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << " - Slot " + to_string(i) + ": " + itemList[inventory[i]] + "\n";
	}
}

//
void set(vector <string> input)
{
	int inventorySlot;
	int itemIndex;

	//looking at the second and third part of the users input for the inventory slot and item index respectively
	inventorySlot = stoi(input[1]);
	itemIndex = stoi(input[2]);

	//checks if either number is invalid or out of bounds of the inventory or item lists
	if (itemIndex < 0 || itemIndex > sizeof(itemList) / sizeof(itemList[0])) cout << "Invalid item. Please enter a valid item number from 0 to " +
		to_string(sizeof(itemList) / sizeof(itemList[0])) + "\n";
	else if (inventorySlot < 0 || inventorySlot > inventorySize) cout << "Invalid inventory slot. Please enter a valid inventory slot from 0 to " +
		to_string(inventorySize) + "\n";
	else 
	{
		inventory[inventorySlot] = itemIndex;
		cout << " - Slot " + to_string(inventorySlot) + " set to " + itemList[itemIndex] + "\n";
	}
}

//lists every item in the items array
void items()
{
	for (int i = 0; i < sizeof(itemList) / sizeof(itemList[0]); i++)
	{
		cout << " - " + to_string(i) + ": " + itemList[i] + "\n";
	}
}

void main()
{
	bool inventorySelected = false;
	cout << "Enter inventory size: ";
	//loops until valid input is found
	while (inventorySize > 16 || inventorySize < 1) 
	{
		if (inventorySelected) cout << "Invalid inventory size, please enter a number between 1 and 16: ";
		cin >> inventorySize;
		inventorySelected = true;
	}

	//sets the inventory to the new size (thank you vectors i love you)
	inventory.resize(inventorySize, 0);
	//outputs commands
	commands();
	string input;
	//loops until the user uses the exit command
	while (looping) 
	{
	    getline(cin, input);
		string s;
		stringstream ss(input);
		vector <string> userInput;
		//uses whitespace characters to split the user's input into separate items in a vector so they can be looked at individually
		while (getline(ss, s, ' ')) {
			userInput.push_back(s);
		}
		//looks at the first section of the users input for a command word.
		if (userInput[0] == "view") view(userInput[1]);
		else if (userInput[0] == "show_all") showAll();
		else if (userInput[0] == "set") set(userInput);
		else if (userInput[0] == "items") items();
		else if (userInput[0] == "commands") commands();
		else if (userInput[0] == "exit") looping = false;
	}
}