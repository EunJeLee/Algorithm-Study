N = int(input())
T = []
for i in range(N+1):
    T.append(0)
for i in range(N):
    n = (int(input()))
    if T[n] == 1:
        print(n+1)
    elif n>1 and not T[n-1]:
        print(n-1)
        T[n-1] = 1
        T[n] = 2
    else:
        print(n)
        T[n]= 1