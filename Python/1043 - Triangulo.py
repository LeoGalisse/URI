v = list(map(float, input().split()))

if abs(v[1] - v[2]) < v[0] and v[0] < v[1] + v[2] and abs(v[0] - v[2]) < v[1] and v[1] < v[0] + v[2] and abs(v[0] - v[1]) < v[2] and v[2] < v[0] + v[1]:
    print(f"Perimetro = {(v[0] + v[1] + v[2]):.1f}")
else:
    print(f"Area = {((v[0] + v[1]) * v[2]) / 2:.1f}")
