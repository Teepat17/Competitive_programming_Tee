n = int(input())
arr = []
avg = 0
sd = 0
for i in range(n) :
    cur = float(input())
    arr.append(cur)
    avg += cur

avg = avg/n

for i in arr :
    sd += (i-avg)**2

sd = (sd/n)**(1/2)



print(f"average = {round(avg,5)} sd = {round(sd ,5)}")