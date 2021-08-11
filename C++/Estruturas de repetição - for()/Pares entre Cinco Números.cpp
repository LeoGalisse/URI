#include <iostream>

using namespace std;

int main()
{
	int x, i, n, saida;
	n = 5;
	saida = 0;
	
	for (i = 0; i < n; i++)
	{
		cin >> x;
		if(x % 2 == 0)
			saida += 1;
	}
	
	cout << saida << " valores pares" << endl;
	
	return 0;
}
