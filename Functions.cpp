#include "Classes.h"
#include <iostream>

Flower::Flower()
{
	cout << "Type in name - ";
	cin >> Name;
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
	cin >> deliveryRate;
}

string Flower::getName()
{
	return Name;
}

double Flower::getPrice()
{
	return price;
}

double Flower::getNumber()
{
	return number;
}

void AddFlowerToBouquet(Bouquet* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		A->Flowers.push_back(Flower());
	}
}

void AddFlowerToAssortment(Flowershop* A, int n)
{
	for (int i = 0; i < n; i++)
	{
		A->Assortment.push_back(Flower());
	}
}

void Flowershop::DeleteFlower()
{
	string N;
	cout << "\nType in the name of flower u want to delete: ";
	cin >> N;
	for (int i = 0; i < Assortment.size(); i++)
	{
		if (Assortment.at(i).getName() == N) { Assortment.erase(Assortment.begin() + i); }
	}
}
void Flowershop::TopX(int x)
{
	double Temporary;
	vector<double> TempMas;
	for (int i = 0; i < Assortment.size(); i++)
		TempMas.push_back(Assortment.at(i).getPrice());
	for (int i = 0; i < Assortment.size(); i++)
	{
		for (int j = 0; j < Assortment.size(); j++)
		{
			if (TempMas[i] < TempMas[j])
			{
				Temporary = TempMas[i];
				TempMas[i] = TempMas[j];
				TempMas[j] = Temporary;
			}
		}
	}
	for (int i = 0; i < x; i++)
		cout << '\n' << i + 1 << " - " << TempMas.at(i);
}

double CalcFullCost(Bouquet* B)
{
	double sum = 0;
	for (int i = 0; i < B->Flowers.size(); i++)
	{
		sum += B->Flowers.at(i).getPrice() * B->Flowers.at(i).getNumber();
	}
	return sum;
}

int Flowershop::getAssortmentSize()
{
	return Assortment.size();
}
