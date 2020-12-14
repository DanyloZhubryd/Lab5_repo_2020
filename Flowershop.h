#pragma once
#include <vector>
#include "Flower.h"

class Flowershop
{
	std::vector<Flower> assortment;
public:
	Flowershop() {};
	~Flowershop() {};
	friend void addFlowerToAssortment(Flowershop*, int);
	void deleteFlower();
	void topXFlowers(int);
	int getAssortmentSize();
};
