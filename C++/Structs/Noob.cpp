#include <iostream>
#include <iomanip>

using namespace std;

struct dados
{
    int matricula; // numero de matricula
    float nota1; // primeira nota
    float nota2; // segunda nota
    float media; // media ponderada
};

int main()
{
    dados aluno;
    
    //receber os dados de matricula e nota
    cin >> aluno.matricula >> aluno.nota1 >> aluno.nota2;
    
    aluno.media = ((aluno.nota1 * 2) + (aluno.nota2 * 3)) / 5; // calculo da media ponderada
    
    // saida dos dados apresentados do aluno
    cout << "Matricula do aluno: " << aluno.matricula << endl;
    cout << fixed << setprecision(2) << "Nota da primeira prova: " << aluno.nota1 << endl;
    cout << fixed << setprecision(2) << "Nota da segunda prova: " << aluno.nota2 << endl;
    cout << fixed << setprecision(2) << "Media: " << aluno.media << endl;
    
    return 0;
}