#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
	char nome[100]; // nome do Padawan
	int pontos; // pontos do Padawan
};

int main()
{
	dados padawan[1000]; //armazenar os dados de todos os Padawans
	int n; // numero de Padawan a ser analisado
	float media; // media de pontos
	int i; // contadora
	int i2; // contadora
	int maior; // maior numero de pontos
	
	cin >> n; 
	cin.ignore();
	
	media = 0; //inicializando variavel
	
	// receber o nome e ponto de cada Padawan e fazer a media
	for (i = 0; i < n; i++)
	{
		cin.getline(padawan[i].nome, 100);
		cin >> padawan[i].pontos;
		cin.ignore();
		media += padawan[i].pontos;
	}
	
	media = media / n * 1.00; // calculo da media
	
	// inicializando variavel
	maior = padawan[0].pontos; 
	i2 = 0;
	
	// armazenar o padawan que mais teve ponto
	for (i = 0; i < n; i++)
	{
		if (padawan[i].pontos > maior)
		{
			maior = padawan[i].pontos;
			i2 = i;
		}
	}
	
	// saida de dados
	cout << "Padawan com mais pontos: " << padawan[i2].nome << endl;
	cout << "Pontos: " << padawan[i2].pontos << endl;
	cout << fixed << setprecision(2) << "Media da turma: " << media << " pontos" << endl;
	
	return 0;
}