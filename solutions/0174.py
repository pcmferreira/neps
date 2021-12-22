def factorial(N):
    return 1 if N <= 1 else N * factorial(N - 1)

N = int(input())
print(factorial(N))
