#include <iostream>

using namespace std;

int main()
{
	int m[4][4];
	int i, j;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			cin >> m[i][j];
		}
	}
	
	if(m[0][0] == 1 && m[0][1] == 0)
		cout << "FEMININO" << endl;
	else
		cout << "MASCULINO" << endl;
	
	return 0;
}