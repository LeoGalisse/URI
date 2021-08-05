x = list(map(int, input().split()))
if x[1] > x[2] and x[3] > x[0] and x[2] + x[3] > x[0] + x[1] and x[2] > 0 and x[3] > 0 and x[0] % 2 == 0:
    print("Valores aceitos")
else:
    print("Valores nao aceitos")
    