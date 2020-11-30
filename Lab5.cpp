#include "Classes.h"
#include <iostream>

int main()
{
	Flowershop A;
	Bouquet B;
	cout << "Flowershop:\n";
	AddFlowerToAssortment(&A, 2);
	cout << "Bouquet:\n";
	AddFlowerToBouquet(&B, 2);
	cout << '\n' << CalcFullCost(&B);
	A.TopX(2);
	A.DeleteFlower();
	cout << '\n' << A.getAssortmentSize();
}