n = int(input())
x = int(input())
m = int(input())
sum = x

if n == 0:
    print(0)
else:
    print(x)
    sum = x
    for i in range(n - 1):
        x = x * m
        print(x)
        sum += x
    print(sum)