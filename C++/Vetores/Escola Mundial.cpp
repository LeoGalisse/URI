#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main() 
{
    int n; //numero de alunos
    int nota[100]; //nota dos alunos
    int i; //variavel contadora
    int abaixo; //notas abaixo da media
    int acima; // notas acima de media
    float media; // media da nota
    
    cin >> n; 
    
    acima = 0;
    abaixo = 0;
    media = 0;
    
    //receber a nota dos alunos e armazenar nos vetor
    for (i = 0; i < n; i++)
    {
        cin >> nota[i];
        media = nota[i] + media;
    }
    
    media = media/n; //calcular a media
    
    //checar quantos alunos estao dentro ou fora da media
    for (i = 0; i < n; i++)
    {
        if (nota[i] >= media)
            acima++;
        else
            abaixo++;
    }
    
    //saida do programa
    cout << fixed << setprecision(2) << "Media da turma: " << media << endl;
    cout << "Alunos com nota acima da media: " << acima << endl;
    cout << "Alunos com nota abaixo da media: " << abaixo << endl;
    
 
    return 0;
}