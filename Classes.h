#pragma once
#include <string>
#include <vector>

using namespace std;
class Flower
{
	double height, size, price, number, deliveryRate;
	string Name, colour;
public:
	Flower();
	~Flower() {};
	string getName();
	double getPrice();
	double getNumber();
};

class Flowershop
{
	vector<Flower> Assortment;
public:
	Flowershop() {};
	~Flowershop() {};
	friend void AddFlowerToAssortment(Flowershop*,int);
	void DeleteFlower();
	void TopX(int);
	int getAssortmentSize();
};

class Bouquet
{
	vector<Flower> Flowers;
public:
	Bouquet() {};
	~Bouquet() {};
	friend void AddFlowerToBouquet(Bouquet*, int);
	friend double CalcFullCost(Bouquet*);
};

