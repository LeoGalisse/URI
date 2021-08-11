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

// notas abaixo da media
int nAbaixo(int notas[], int nAlunos, double media)
{
	int i, i2 = 0;
	
	for (i = 0; i < nAlunos; i++)
	{
		if (notas[i] < media)
			i2++;
	}
	
	return i2;
}

// notas acima da media
int nAcima(int notas[], int nAlunos, double media)
{
	int i, i2 = 0;
	
	for (i = 0; i < nAlunos; i++)
	{
		if (notas[i] >= media)
			i2++;
	}
	
	return i2;
}

int main()
{
	int ava[102]; // nota das provas
	int n; // numero de alunos
	int i; // contadora
	double total = 0; // media dos alunos
	int mabaixo = 0; // notas abaixo da media
	int macima = 0; // notas acima da media
	
	cin >> n;
	
	// armazenar notas do alunos no vetor
	for (i = 0; i < n; i++)
	{
		cin >> ava[i];
	}
	
	total = media(ava, n); // calcular a media
	mabaixo = nAbaixo(ava, n, total); // calcula quantas notas foram abaixo da media
	macima = nAcima(ava, n, total); // calcula quantas notas foram acima da media
	
	cout << fixed << setprecision(2) << "Media da turma = " << total << endl;
	cout << "Alunos com nota abaixo da media: " << mabaixo << endl;
	cout << "Alunos com nota acima da media: " << macima << endl;
	
	return 0;
}