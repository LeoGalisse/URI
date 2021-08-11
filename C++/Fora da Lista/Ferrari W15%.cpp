#include <iostream>

using namespace std;

struct dados
{
	int gp; // posicao que o piloto chegou
	int pontos; // pontuacao do piloto
};

int main()
{
	int g, p; // quantidade de grand premios e numero de pilotos
	dados piloto[105][105]; // primeiro vetor representa a corrida e o segundo o numero do piloto
	int s; // quantas series de pontuacao serao apresentadas
	int sp[15]; // quantas pontuacoes serao premiadas
	int pontos[15][15]; // armazenar os pontos
	// contadoras e auxiliares
	int l, c, x; 
	int i, i2, i3, j = 1;
	int v = 0, v2;
	int maior = 0; // armazenar a maior pontuacao
	int vencedor[105]; // armazenar o vencedor

	cin >> g >> p;

	while(g != 0 && p != 0)
	{
		for(l = 0; l < g; l++) // zerar todas as posicoes a serem usadas
		{
			for(c = 1; c <= p; c++)
			{
				piloto[l][c].gp = 0;
				piloto[l][c].pontos = 0;
			}
		}

		for(l = 0; l < g; l++) // armazenar a posicao que cada piloto chegou
		{
			for(c = 1; c <= p; c++)
			{
				cin >> piloto[l][c].gp;
			}
		}

		cin >> s;

		for(l = 0; l < s; l++) // armazenar as diferentes series de pontuacao
		{
			cin >> sp[l];
			for(c = 0; c < sp[l]; c++) // armazenar os pontos de acordo com a quantidade dada
			{
				cin >> pontos[l][c];
			}
		}

		// achar o vencedor
		for(i = 0; i < s; i++)
		{
			j = 1;
			
			//zerar os pontos para outras series de pontuacao
			if (i != 0) for(l = 0; l < g; l++)
				{
					for(c = 1; c <= p; c++)
					{
						piloto[l][c].pontos = 0;
					}
				}
				
			// designar os pontos para o piloto baseado em sua posicao de chegada	
			for (i3 = 0; i3 < g; i3++) // designar os pontos para cada corrida feita
			{
				for (i2 = 0; i2 < sp[i]; i2++) // designar os pontos de acordo com a quantidade dada
				{
					for(l = 0; l < g; l++) // percorrer todos os pilotos
					{
						for(c = 1; c <= p; c++)
						{
							if (piloto[i3][c].gp == j)
							{
								piloto[i3][c].pontos += pontos[i][i2];
								j++; // ir para outra posicao
								// ja encontrado, mova para a proxima posicao
								l = g;
								c = p;
							}
						}
					}
				}
				
				j = 1; // inicializar a variavel novamente para outras GPs
			}

			// fazer a soma dos pontos de todas as corridas em uma só linha da matriz
			for (v = 1; v < g; v++)
			{
				for (v2 = 1; v2 <= p; v2++)
				{
					for (x = 1; x < g; x++) // percorrer as colunas do piloto com base em seu desempenho em cada corrida
						piloto[0][v2].pontos += piloto[x][v2].pontos;
				}
			}
			
			// achar o piloto com mais pontos e determinar o vencedor
			for (v = 0; v < 1; v++)
			{
				x = 1; // auxiliar para caso de empate
				j = 0;
				maior = -1;

				for(v2 = 1; v2 <= p; v2++)
				{
					if (piloto[v][v2].pontos == maior && maior != 0) // para caso de empate
					{
						vencedor[x] = v2;
						x++;
					}
					else if (piloto[v][v2].pontos > maior) // descobrir a maior pontuacao
					{
						maior = piloto[v][v2].pontos;
						vencedor[0] = v2;
					}
				}

				if (x > 1) // caso haja empate, mostrar os vencedores empatados em ordem crescente
				{
					for (v = 0; v < x; v++)
						cout << vencedor[v] << " ";
				}
				else // caso ao contrario, apenas um vencedor
				{
					cout << vencedor[0];
				}

				cout << endl;
			}
		}

		cin >> g >> p; // comecar novamente até que a condicao do while seja quebrada
	}

	return 0;
}
