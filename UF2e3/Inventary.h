#pragma once
#include "Items.h"

struct Inventary{
	int slots;
	vector<Item> items;

	void Initialize();
	string PrintItems();
	bool AddItem(Item newItem);
	void RemaveItem(int index);

};