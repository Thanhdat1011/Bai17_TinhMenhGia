// Bai17_TinhMenhGia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int sotien, to500, to200, to100, to50, to20, to10, to1, soto500, soto200, soto100, soto50, soto10, soto1; 
	cout << "so to tien can rut ra:\n";
	cin >> sotien;

	to500 = sotien / 500;
	sotien = sotien % 500;
	cout << "\nsoto500:" << to500;

	to200 = sotien / 200;
	sotien = sotien % 200;
	cout << "\nsoto200:" << to200;

	to100 = sotien / 100;
	sotien = sotien % 100;
	cout << "\nsoto100:" << to100;

	to50 = sotien / 50;
	sotien = sotien % 50;
	cout << "\nsoto50:" << to50;

	to20 = sotien / 20;
	sotien = sotien % 20;
	cout << "\nsoto20:" << to20;

	to10 = sotien / 10;
	sotien = sotien % 10;
	cout << "\nsoto10:" << to10;

	to1 = sotien / 1;
	sotien = sotien % 1;
	cout << "\nsoto1:" << to1;
	return 0;
}
