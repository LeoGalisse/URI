#include <iostream>

using namespace std;

struct dados // armazenar os dados de cada atleta
{
	char nome[100];
	int n1;
	int n2;
	int n3;
	int n4;
		
};

//soma dos pontos para ver quem é o vencedor
int strongest(dados atletas[], int nAtletas)
{
	int i = 0; // contadora
	int ven[12]; // soma dos pontos dos atletas
	int maior; // maior ponto
	int i2 = 0; // contadora
	
	for (i = 0; i < nAtletas; i++)
	{
		ven[i] = atletas[i].n1 + atletas[i].n2 + atletas[i].n3 + atletas[i].n4;
	}
	
	maior = ven[0];
	
	for (i = 0; i < nAtletas; i++)
	{
		if (ven[i] > maior)
		{
			maior = ven[i];
			i2 = i;
		}
	}
	
	return i2;
}

int main()
{
	int i; // contadora
	int n; // numero de atletas
	dados atleta[12]; // dados dos atletas a serem armazenados
	int vencedor; // vencedor da competicao
	
	cin >> n;
	cin.ignore();
	// armazenar os dados na struct
	for (i = 0; i < n; i++)
	{
		cin.getline(atleta[i].nome, 100);
		cin >> atleta[i].n1 >> atleta[i].n2 >> atleta[i].n3 >> atleta[i].n4;
		cin.ignore();
	}
	
	vencedor = strongest(atleta, n); // verificar o vencedor
	
	cout << "Vencedor: " << atleta[vencedor].nome << endl;
	
	return 0;
}