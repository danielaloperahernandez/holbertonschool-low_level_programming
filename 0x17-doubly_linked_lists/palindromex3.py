#!/usr/bin/python3
def ispalindrome(n):
    string = str(n)
    return string == string[::-1]

list_num = []
for i in range (999,99,-1):
    for j in range (i, 99, -1):
        if ispalindrome(i * j):
            list_num.append(i * j)
print(max(list_num))