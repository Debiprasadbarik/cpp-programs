a=int(input("enter a no:\n"))
count=0
while a!=0:
    rem=a%2
    if rem==1:
        count+=1
    a=a//2
print(count)