#include "Flowershop.h"
#include "Bouquet.h"
#include <iostream>

using namespace std;

int main()
{
	Flowershop A;
	Bouquet B;
	cout << "Flowershop:\n";
	addFlowerToAssortment(&A, 2);
	cout << "Bouquet:\n";
	addFlowerToBouquet(&B, 2);
	cout << '\n' << calcFullCost(&B);
	A.topXFlowers(2);
	A.deleteFlower();
	cout << '\n' << A.getAssortmentSize();
}