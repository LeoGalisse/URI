#include <iostream>

using namespace std;

int main()
{
	float x, y, media;
	
	while(y != 2)
	{
		cin >> x;
		if (x >= 0 && x <= 10)
		{
			media = media + x;
			y = y + 1;
		}
		else
		{
			cout << "nota invalida" << endl;
		}
	}
	cout << "media = " << media/y << endl;
	
	return 0;
}