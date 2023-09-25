print("Digite 10 números")
lista = []
for i in range(10):
    lista.append(int(input()))
print("Positivos")
for x in lista:
    if x > 0:
        print(x)
