#include "Flower.h"
#include <iostream>

using namespace std;

Flower::Flower()
{
	cout << "Type in name - ";
	cin >> name;
	cout << "Type in height - ";
	cin >> height;
	cout << "Type in size - ";
	cin >> size;
	cout << "Type in price - ";
	cin >> price;
	cout << "Type in number - ";
	cin >> number;
	cout << "Type in colour - ";
	cin >> colour;
	cout << "Type in delivery rate - ";
	cin >> delivery_rate;
}

string Flower::getName()
{
	return name;
}

double Flower::getPrice()
{
	return price;
}

double Flower::getNumber()
{
	return number;
}