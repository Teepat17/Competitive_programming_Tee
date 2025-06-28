n = int(input())
arr = []
found = False
for i in range(n) :
    arr.append(int(input()))

for i in range(0,n) :
    if i == 0 :
        if arr[(n-1)] > arr[i] and arr[i+1] > arr[i] :
            found = True
            print(i)
    elif i<n-1 :
        if arr[(i-1)] > arr[i] and arr[(i+1)] > arr[i] :
            found = True
            print(i)
    else :
        if arr[(i-1)] > arr[i] and arr[0] > arr[i] :
            found = True
            print(i)

if not found :
    print("No pits")
