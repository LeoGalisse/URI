#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x, i, n;
	int s;
	
	cin >> x;
	n = floor(x/2);
	i = 0;
	s = 2;
	
	for (5 < x && x > 2000; i < n; i++)
	{
		cout << s << "^2 = " << s * s << endl;
		s = s + 2;
	}
	
	return 0;
}