#include <iostream>
 
using namespace std;

int main ()
{
	double Dollar;
	double Peso;
	
	// get amount in USD
	cout << "Enter the amount of dollar\n";
	cin >>Dollar;
	
	// Calculate the peso amount
	Peso = 56.83 * Dollar;
	
	//Convert result 
	cout << "USD: " << Dollar << "\t\t" << " PhP: " << Peso << endl;
	
	return 0;
}
