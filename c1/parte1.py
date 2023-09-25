'''L\tikz[remember picture]{\coordinate (ipf);}L'''def maximo(a, b):'''L\tikz[remember picture]{\coordinate (fpf);}L'''
    if a > b:
        return a
    else:
        return b

def potencia(a, b):
    prod = 1
    for i in range(b):
        prod = a * prod
    return prod

print("Entre com a e b")
a = int(input())
b = int(input())
maior = maximo(a, b)
pot = potencia(a, b)
print("Maior:", maior)
print("a^b:", pot)
