#include <iostream>

using namespace std;

int main()
{
	int x, y, z, gremio, inter, empate, h;
	
	z = 0; 
	gremio = 0;
	inter = 0;
	empate = 0;
	
	while(h != 2)
	{
		cin >> x >> y;
		
		if (y > x)
			gremio = 1 + gremio;
		else if (x > y)
			inter = 1 + inter;
		else
		{
			empate = empate + 1;
		}
		z++;
		
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> h;
	}
	
	cout << z << " grenais" << endl;
	cout << "Inter:" << inter << endl;
	cout << "Gremio:" << gremio << endl;
	cout << "Empates:" << empate << endl;
	
	if (inter > gremio)
		cout << "Inter venceu mais" << endl;
	else if(gremio > inter)
		cout << "Gremio venceu mais" << endl;
	
	return 0;
}