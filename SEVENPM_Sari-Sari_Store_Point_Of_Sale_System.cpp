#include <iostream>

using namespace std;

int main()
{
	int sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	int sugarCostPhp, riceCostPhp, sardinesCostPhp, coffeeCostPhp, milkCostPhp;
	int sugarQty, riceQty, saridnesQty, coffeeQty, milkQty;
    float totalCostPhp;
	float usdToPhp, poundToPhp;
	
	//Item price 
	cout << "Sugar price\t\t:\t";
	cin >> sugarPriceUSD;
	cout << "Rice price\t\t:\t";
	cin >> ricePricePound;
	cout << "Sardines price\t\t:\t";
	cin >> sardinesPricePound;
	cout << "Coffee price\t\t:\t";
	cin >> coffeePriceUSD;
	cout << "Milk price\t\t:\t";
	cin >> milkPriceUSD;
	cout << "\n";
	
	//Item Quantity
	cout << "Sugar quantity\t\t:\t";
	cin >> sugarQty;
	cout << "Rice quantity\t\t:\t";
	cin >> riceQty;
	cout << "Sardines quantity\t:\t";
	cin >> saridnesQty;
	cout << "Coffee quantity\t\t:\t";
	cin >> coffeeQty;
	cout << "Milk quantity\t\t:\t";
	cin >> milkQty;
	cout << "\n";
	
	//Currency conversion
	
	cout << "Dollar to Peso\t\t:\t";
	cin >> usdToPhp;
	cout << "Pound to Peso\t\t:\t";
	cin >> poundToPhp;
	
	// Item price in php
	sugarCostPhp = (sugarPriceUSD * sugarQty) * usdToPhp;
	riceCostPhp = (ricePricePound * riceQty) * poundToPhp;
	sardinesCostPhp = (sardinesPricePound * saridnesQty) * poundToPhp;
	coffeeCostPhp = (coffeePriceUSD * coffeeQty) * usdToPhp;
	milkCostPhp = (milkPriceUSD * milkQty) * usdToPhp;
	
	totalCostPhp = sugarCostPhp + riceCostPhp + sardinesCostPhp + coffeeCostPhp + milkCostPhp;
	
	//Item name
	cout << "Sugar\n";
	cout << "Rice\n";
	cout << "Sardines\n";
	cout << "Coffee\n";
	cout << "Milk\n";
	
	//Item quantity
	cout << "Sugar =\t\t\t:\t " << sugarQty << "\n";
	cout << "Rice =\t\t\t:\t " << riceQty << "\n";
	cout << "Sardines =\t\t:\t " << saridnesQty << "\n";
	cout << "Coffee =\t\t:\t " << coffeeQty << "\n";
	cout << "Milk =\t\t\t:\t " << milkQty << "\n";
	
	//Item price per item
	cout << "Sugar\t\t\t:\t" << sugarPriceUSD * usdToPhp << "\n";
	cout << "Rice\t\t\t:\t" << ricePricePound * poundToPhp << "\n";
	cout << "Sardines\t\t:\t" << sardinesPricePound * poundToPhp << "\n";
	cout << "Coffee\t\t\t:\t" << coffeePriceUSD * usdToPhp << "\n";
	cout << "milk\t\t\t:\t" << milkPriceUSD * usdToPhp << "\n";
	
	//Item total cost
	cout << "Total cost of all item\t:\t" << totalCostPhp;
	
	return 0;
	
}
