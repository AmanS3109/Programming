# binet's formula to find fibonacci number

import math

def fibonacci(n):
    phi = (1 + math.sqrt(5)) / 2
    return round((math.pow(phi, n) - math.pow(-phi, -n)) / math.sqrt(5))

n = 10
print(fibonacci(n))