#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int inventorySize;
vector <int> inventory;
bool looping = true;

string itemList[]{ "Empty", "Potion", "Sword", "Bread", "AnimalHide", "RawMeat", "Wood", "Stone"};


void commands()
{
	cout << "Commands:\n view (number)\n show_all\n set (itemSlot, itemIndex)\n items\n exit\n";
}

void view(string slotStr)
{
	int itemSlot = stoi(slotStr);
	if (itemSlot < 0 || itemSlot > inventorySize) cout << "Invalid inventory slot. Please enter a valid inventory slot from 0 to " +
			to_string(inventorySize) + "\n";
	else cout << " - Slot " + to_string(itemSlot) + ":\nName: " + itemList[inventory[itemSlot]] + "\n";
}
void showAll()
{
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << " - Slot " + to_string(i) + ": " + itemList[inventory[i]] + "\n";
	}
}

void set(vector <string> input)
{
	int inventorySlot;
	int itemIndex;

	inventorySlot = stoi(input[1]);
	itemIndex = stoi(input[2]);

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
	while (inventorySize > 16 || inventorySize < 1) 
	{
		if (inventorySelected) cout << "Invalid inventory size, please enter a number between 1 and 16: ";
		cin >> inventorySize;
		inventorySelected = true;
	}

	cin.ignore();

	inventory.resize(inventorySize, 0);
	commands();
	string input;
	while (looping) 
	{
	    getline(cin, input);
		string s;
		stringstream ss(input);
		vector <string> userInput;
		while (getline(ss, s, ' ')) {
			userInput.push_back(s);
		}
		if (userInput[0] == "view") view(userInput[1]);
		else if (userInput[0] == "show_all") showAll();
		else if (userInput[0] == "set") set(userInput);
		else if (userInput[0] == "items") items();
		else if (userInput[0] == "commands") commands();
		else if (userInput[0] == "exit") looping = false;
	}
}