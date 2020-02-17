# Enter your code here. Read input from STDIN. Print output to STDOUT
n=int(input())
for i in range(n):
    str=input()
    for j in range(len(str)):
        if j%2==0:
            print(str[j],end="")
    print(" ",end="")
    for j in range(len(str)):
        if j%2!=0:
            print(str[j],end="")
    print()
