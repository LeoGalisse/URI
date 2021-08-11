#include <iostream>
#include <iomanip>

using namespace std;

void converte(float F, float &C, float &K) // converter kelvin para C e F
{
	C = (5.00 / 9.00) * (F - 32.00);
	K = C + 273.00;
}

int main()
{
	float celsius, fahrenheit, kelvin;
	
	cin >> fahrenheit;
	
	converte(fahrenheit, celsius, kelvin); // conversao de temperatura
	
	cout << fixed << setprecision(2) << "Celsius: " << celsius << endl;
	cout << fixed << setprecision(2) << "Kelvin: " << kelvin << endl;
	
	return 0;
}