#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void raiz (int a, int b, float &res)
{
	res = sqrt(a * b);
}

int main()
{
	int x, y;
	float media = 0;
	
	cin >> x >> y;
	
	raiz(x, y, media);
	
	cout << fixed << setprecision(2) << "Media: " << media << endl;
	
	return 0;
}