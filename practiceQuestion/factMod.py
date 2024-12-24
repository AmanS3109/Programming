def factMod(n, x, m):
    x = 1
    for i in range(2, n+1):
        x = (x * i) % m
    return x

n = 5
m = 7
x = 1
print(factMod(n, x, m))