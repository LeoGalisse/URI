#include <iostream>

using namespace std;

int main()
{
	int n; //quantidade de videos
	double video[100]; //quantidade de visualizacoes
	int i; //variavel contadora
	int mais; //video com mais de 10m
	int menos; // video com menos de 10m
	
	mais = 0;
	menos = 0;
	
	//Quantidade de videos analisados
	cin >> n;
	
	//Analisar a quantidade de visualizacao de cada video
	for (i = 0; i < n; i++)
	{
		cin >> video[i]; //armazenar cada visualizacao
		if (video[i] < 10000000)
			menos++;
		else
			mais++;
	}
	
	cout << mais << " video(s) com mais de 10M views\n";
	cout << menos << " video(s) com menos de 10M views" << endl; 
	
	return 0;
}