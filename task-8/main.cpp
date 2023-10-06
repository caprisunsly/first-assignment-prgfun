#include <iostream>
#include <array>
#include <string>
#include <vector>

using namespace std;

int inventorySize;
vector <int> inventory;

string itemList[]{ "Empty", "Potion", "Sword", "Bread", "Animal Hide", "Raw Meat", "Wood", "Stone" };


void commands()
{
	cout << "Commands:\n view (number)\n show_all\n set (itemIndex)\n items\n exit\n";
}

void view(string input)
{
	int index = stoi(input.erase(0, 5));
	cout << " - Slot " + to_string(index) + ":\nName: " + itemList[inventory[index]];
}
void showAll()
{
	for (int i = 0; i < inventory.size(); i++)
	{
		cout << " - Slot " + to_string(i) + ": " + itemList[inventory[i]];
	}
}

void set(string input)
{
	int inventorySlot = stoi(input.erase(0, 4).erase(input.length(), 1));
	int itemIndex = stoi(to_string(input.back()));

	inventory[inventorySlot] = itemIndex;

	cout << " - Slot " + to_string(inventorySlot) + " set to " + itemList[itemIndex];
}

void items()
{
	for (int i = 0; i < itemList->size(); i++) 
	{
		cout << " - " + to_string(i) + ": " + itemList[i] + "\n";
	}
}
bool looping = true;

void main()
{
	cout << "Enter inventory size: ";
	cin >> inventorySize;
	cin.ignore();

	inventory.push_back(inventorySize);
	commands();
	string input;
	while (looping) 
	{
	    getline(cin, input);
		cout << "hfsjhgkwg";
		if (input.find("view ")) view(input);
		if (input == "show_all") showAll();
		if (input.find("set ")) set(input);
		if (input == "items") items();
		if (input == "commands") commands();
		if (input == "exit") looping = false;
	}
}