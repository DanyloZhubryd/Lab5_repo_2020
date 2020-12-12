#pragma once
#include <string>

class Flower
{
	double height, size, price, number, delivery_rate;
	std::string name, colour;
public:
	Flower();
	~Flower() {};
	std::string getName();
	double getPrice();
	double getNumber();
};

