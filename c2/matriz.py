def le_matriz_quadrada(n):
    M = []
    for i in range(n):
        M.append([])
        for j in range(n):
            M[i].append(float(input()))
    return M

def multiplica_quadradas(A, B, n):
    C = [[0 for i in range(n)] for j in range(n)]
    for i in range(n):
        for j in range(n):
            for k in range(n):
                C[i][j] += A[i][k] * B[k][j]
    return C

def imprime_matriz_quadrada(M, n):
    for i in range(n):
        for j in range(n):
            print(M[i][j], end=' ')
        print("")

n = int(input())
A = le_matriz_quadrada(n)
B = le_matriz_quadrada(n)
C = multiplica_quadradas(A, B, n)
imprime_matriz_quadrada(C, n)
