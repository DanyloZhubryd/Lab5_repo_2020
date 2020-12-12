#include "Bouquet.h"

double calcFullCost(Bouquet* YourBouquet)
{
	double fullCost = 0;
	for (int i = 0; i < YourBouquet->flowers.size(); i++)
	{
		fullCost += YourBouquet->flowers.at(i).getPrice() * YourBouquet->flowers.at(i).getNumber();
	}
	return fullCost;
}

void addFlowerToBouquet(Bouquet* ShopName, int amount_of_flowers_to_add)
{
	for (int i = 0; i < amount_of_flowers_to_add; i++)
	{
		ShopName->flowers.push_back(Flower());
	}
}