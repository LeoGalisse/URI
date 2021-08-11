#include <iostream>

using namespace std;

struct dadosx
{
	int n1; // numerador de x
	int d1; // denominador de x
};

struct dadosy
{
	int n2; // numerador de y
	int d2; // denominador de y
};

int main()
{
	dadosx operacaox[10000];
	dadosy operacaoy[10000];
	int n; // quantas operacoes serao feitas
	int i; // contadora
	int numerador; // numerador do racional
	int denominador; // denominador do racional
	char sinal[10000]; // operador a ser usado
	char inutil; // armazenar a barra (divisao) da operacao

	cin >> n;

	// recolher todos os dados oferecidos para fazermos as equacoes de racionais
	for (i = 0; i < n; i++)
	{
		cin >> operacaox[i].n1;
		cin >> inutil;
		cin >> operacaox[i].d1;
		cin >> sinal[i];
		cin >> operacaoy[i].n2;
		cin >> inutil;
		cin >> operacaoy[i].d2;
	}
	// verificar e realizar a operacao e simplificacao dos racionais
	for (i = 0; i < n; i++)
	{
		numerador = 0; // inicializando variavel
		denominador = 0; // inicializando variavel

		// verificando qual operador irá ser usado
		if (sinal[i] == '+')
		{
			numerador = (operacaox[i].n1 * operacaoy[i].d2) + (operacaoy[i].n2 * operacaox[i].d1);
			denominador = (operacaox[i].d1 * operacaoy[i].d2);
		}
		else if (sinal[i] == '-')
		{
			numerador = (operacaox[i].n1 * operacaoy[i].d2) - (operacaoy[i].n2 * operacaox[i].d1);
			denominador = (operacaox[i].d1 * operacaoy[i].d2);
		}
		else if (sinal[i] == '*')
		{
			numerador = operacaox[i].n1 * operacaoy[i].n2;
			denominador = operacaox[i].d1 * operacaoy[i].d2;
		}
		else if (sinal[i] == '/')
		{
			numerador = operacaox[i].n1 * operacaoy[i].d2;
			denominador = operacaoy[i].n2 * operacaox[i].d1;
		}
		
		// saida dos dados sem simplificacao
		cout << numerador << "/" << denominador << " = ";
		//simplificacao da razao
		while ((numerador % 2 == 0 && denominador % 2 == 0) || (numerador % 3 == 0 && denominador % 3 == 0) || (numerador % 5 == 0 && denominador % 5 == 0))
		{
			if (numerador % 2 == 0 && denominador % 2 == 0)
			{
				numerador = numerador / 2;
				denominador = denominador / 2;
			}
			else if (numerador % 3 == 0 && denominador % 3 == 0)
			{
				numerador = numerador / 3;
				denominador = denominador / 3;
			}
			else if (numerador % 5 == 0 && denominador % 5 == 0)
			{
				numerador = numerador / 5;
				denominador = denominador / 5;
			}
		}
		
		// simplificar a razao caso o numero seja primo
		while (numerador != 1 && (denominador % numerador == 0))
		{
			denominador = denominador / numerador;
			numerador = numerador / numerador;
		}
		
		// caso o denominador seja negativo, multiplicar tudo por -1
		if (denominador < 0)
		{
			numerador *= -1;
			denominador *= -1;
		}
		// saida dos dados com a simplificacao
		cout << numerador << "/" << denominador << endl;

	}

	return 0;
}
