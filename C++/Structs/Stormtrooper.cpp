#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
	int id; // identificacao do stormtrooper
	float IM; // quao malvada é a unidade
	float FA; // proporcional ao numero de inimigos abatidos
	float GA; // grau de aptidao
};

int main()
{
	int i = 0; // contadora
	int i2; // contadora
	float maior; // maior GA
	int maiori; // contadora
	dados ST[100]; // dados de um stormtrooper

	// armazenar os dados do stormtrooper
	cin >> ST[i].id;
	while (ST[i].id != 0)
	{
		if (ST[i].id != 0)
		{
			cin >> ST[i].IM >> ST[i].FA;
			ST[i].GA = (ST[i].IM + ST[i].FA) / 2.00; // media do GA
			i++;
		}
		cin >> ST[i].id;
	}

	maior = ST[0].GA; // inicializando variavel

	// verificar qual ST tem a melhor GA
	for (i2 = 0; i2 <= i; i2++)
		if (ST[i2].GA > maior)
		{
			maiori = i2;
			maior = ST[i2].GA;
		}

    // saida do melhor ST com melhor GA
	cout << "Stormtrooper escolhido: " << ST[maiori].id << endl;
	cout << fixed << setprecision(2) << "GA = " << ST[maiori].GA << endl;

	return 0;
}
