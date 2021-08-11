#include <iostream>
#include <iomanip>

using namespace std;

// calculo da media das notas
float media (int notas[], int nAlunos)
{
	int i; // contadora
	double m = 0; // media dos alunos
	
	for (i = 0; i < nAlunos; i++)
	{
		m += notas[i];
	}
	
	m = m / (nAlunos * 1.00);
	
	return m;
}

int main()
{
	int ava[102]; // nota das provas
	int n; // numero de alunos
	int i; // contadora
	double total; // media dos alunos
	
	cin >> n;
	
	// armazenar notas do alunos no vetor
	for (i = 0; i < n; i++)
	{
		cin >> ava[i];
	}
	
	total = media(ava, n); // calcular a media
	
	cout << fixed << setprecision(2) << "Media da turma = " << total << endl;
	
	return 0;
}