#include <iostream>

using namespace std;

void troca(int &X, int &Y) // inverter x e y de posicoes
{
	int z;
	
	z = Y;
	Y = X;
	X = z;
}

int main ()
{
	int x, y;
	
	cin >> x >> y;
	
	troca(x, y); // trocar x por y e vice versa
	
	cout << x << " " << y << endl;
	
	return 0;
}