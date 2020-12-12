#include "Flowershop.h"
#include <vector>
#include <iostream> 

using namespace std;

int Flowershop::getAssortmentSize()
{
	return assortment.size();
}

void addFlowerToAssortment(Flowershop* ShopName, int amount_of_flowers_to_add)
{
	for (int i = 0; i < amount_of_flowers_to_add; i++)
	{
		ShopName->assortment.push_back(Flower());
	}
}

void Flowershop::topXFlowers(int x)
{
	vector<double> temp_vector;
	for (int i = 0; i < assortment.size(); i++)
		temp_vector.push_back(assortment.at(i).getPrice());
	for (int i = 0; i < assortment.size(); i++)
	{
		for (int j = 0; j < assortment.size(); j++)
		{
			if (temp_vector[i] < temp_vector[j])
			{
				swap(temp_vector[i], temp_vector[j]);
			}
		}
	}
	for (int i = 0; i < x; i++)
		cout << '\n' << i + 1 << " - " << temp_vector.at(i);
}

void Flowershop::deleteFlower()
{
	string name_of_flower;
	cout << "\nType in the name of flower you want to delete: ";
	cin >> name_of_flower;
	for (int i = 0; i < assortment.size(); i++)
	{
		if (assortment.at(i).getName() == name_of_flower) { assortment.erase(assortment.begin() + i); }
	}
}


