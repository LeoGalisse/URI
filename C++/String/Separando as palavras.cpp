#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char str[50];
	char *pch; //* - indicacao de ponteiro
	
	cin.getline(str, 50);
	
	pch = strtok (str, "");
	while (pch != NULL)
	{
		cout << pch << endl;
		pch = strtok (NULL, "");
	}
	
	return 0;
}