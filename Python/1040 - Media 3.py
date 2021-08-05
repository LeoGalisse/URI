x = list(map(float, input().split())) # armazenar dados em uma tupla

media = 0.0
media = (x[0] * 2 + x[1] * 3 + x[2] * 4 + x[3]) / 10.0 # calculo da media representado pelo exercicio

print(f"Media: {media:.1f}") # saida da media com precisao de 1 casa

# condicao para saber o status de aprovado do aluno
if media >= 7.0:
    print("Aluno aprovado.")
elif media < 5.0:
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    
    y = float(input()) # caso esteja de exame, nota do exame
    print("Nota do exame:", y)
    
    media = (media + y) / 2 # media do exame
    if media >= 5.0:
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    
    print(f"Media final: {media:.1f}") # media final com 1 casa de precisao
    

