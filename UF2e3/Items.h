#pragma once
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<string>
#include<vector>
#include<map>
using namespace std;

enum Type {ARMOR, HELMET, GLOVES, BOOTS, WEAPON, SHILED, POTION, SPELL};

extern map<Type, int > itemSize;

struct Item {

	Type type;
	string name;
	int points;

	void Datos();
};