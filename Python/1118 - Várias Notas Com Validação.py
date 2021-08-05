z = 0
while z != 2:
    X = 0
    y = 0
    media = 0
    while y != 2:
        x = float(input())
        if x >= 0.00 and x <= 10.00:
            media += x
            y += 1
        else:
            print("nota invalida")
    print(f"media = {media / 2:.2f}")
    while X != 1:
        print("novo calculo (1-sim 2-nao)")
        z = int(input())
        if z == 2 or z == 1:
            X = 1

