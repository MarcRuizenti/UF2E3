#pragma once
#include "Items.h"

struct Inventary{
	int slots;
	vector<Item> items;

	Item* armor;
	Item* helmet;
	Item* glover;
	Item* boots;
	Item* weapon;
	Item* shield;

	void Initialize();
	string PrintItems();
	bool AddItem(Item newItem);
	void RemaveItem(int index);

};