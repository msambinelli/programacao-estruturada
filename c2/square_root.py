ERRO = 1e-12


def square_root(x):
    y = x
    erro_pequeno = False
    while not erro_pequeno:
        anterior = y
        y = (y + x / y) / 2
        if abs(anterior - y) <= ERRO:
            erro_pequeno = True
    return y


print("Entre com o numero:")
x = float(input())
print("Raiz quadrada:", square_root(x))
