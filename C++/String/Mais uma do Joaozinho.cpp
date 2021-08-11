#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n; // numero de aluno
	char nome[50]; //nome de cada aluno
	// 4 notas dos alunos
	int n1;
	int n2;
	int n3;
	int n4;
	int i; // variavel contadora
	float media; // media das 4 notas
	
	cin >> n;
	
	//loop para mostrar a media de cada aluno
	for (i = 0; i < n; i++)
	{
		cin.ignore();
		cin.getline(nome, 50);
		cin >> n1 >> n2 >> n3 >> n4;
		media = (n1 + 2.00 * n2 + 3.00 * n3 + 4.00 * n4) / 10;
		
		cout << nome << ": " << fixed << setprecision(2) << media << endl;
	}
	
	return 0;
}