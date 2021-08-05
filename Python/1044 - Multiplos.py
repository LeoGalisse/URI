x = input().split()
if int(x[1]) > int(x[0]):
    if int(x[1]) % int(x[0]) == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")
else:
    if int(x[0]) % int(x[1]) == 0:
        print("Sao Multiplos")
    else:
        print("Nao sao Multiplos")