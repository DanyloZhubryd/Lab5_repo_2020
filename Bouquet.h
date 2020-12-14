#pragma once
#include <vector>
#include "Flower.h"

class Bouquet
{
	std::vector<Flower> flowers;
public:
	Bouquet() {};
	~Bouquet() {};
	friend void addFlowerToBouquet(Bouquet*, int);
	friend double calcFullCost(Bouquet*);
};


