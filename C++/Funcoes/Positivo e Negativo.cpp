#include <iostream>
#include <cstring>

using namespace std;

// verificar se o numero é positivo, negativo ou zero
int sinal (int n)
{
	int y;
	if (n < 0)
		y = -1;
	else if (n > 0)
		y = 1;
	else
		y = 0;
	
	return y;
}

int main()
{
	int x; // numero a definir em sinal
	int result; // resultado
	char pos_neg[10]; // resultado final
	
	cin >> x;
	
	result = sinal (x);
	
	// conferido o resultado inteiro e colocando em char
	if (result < 0)
		strcpy(pos_neg, "Negativo");
	else if (result > 0)
		strcpy(pos_neg, "Positivo");
	else
		strcpy(pos_neg, "Zero");
	
	cout << pos_neg << endl;
	
	return 0;
}