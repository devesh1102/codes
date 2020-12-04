######################################################
############Created by Devesh Kumar###################
#############devesh1102@gmail.com####################
##########For CodeForces(Devesh1102)#################
#####################2020#############################
######################################################
 
 
 
import sys 
import heapq 
import copy
import math
import decimal
input = sys.stdin.readline

def inp():
    return(int(input()))
def inlt(): 
    return(list(map(int,input().split())))
def insr():
    s = input()
    return(list(s[:len(s) - 1]))
def insr2():
    s = input()
    s = list(s[:len(s) - 1])
    s = [ord(s[i]) - ord("a") for i in range(len(s))]
    return s
def invr():
    return(map(int,input().split()))
############ ---- Input Functions ---- #######End
# #####   
 
 
ans = 0
def pr_list(a):
    print( *a , sep=" ")
 
def swap(a,b):
    temp = a
    a = b
    b = temp
    return [ a,b]
    # return [b,a]
mod = 1000000007
def pri(a,b):
    s = "? " + str(a) + " " + str(b)
    print(s)
    sys.stdout.flush()
def solve():
    n =inp()
    grid = []
    for i in range(n):
        # dum = inlt() 
        dum =  insr()    
        for i in range(n):
            dum[i] = int(dum[i])
        grid.append(dum)
    ans = [0 for i in range(10)]
    top = [sys.maxsize for i in range(11)]
    left = [sys.maxsize for i in range(11)]
    right = [-1 for i in range(11)]
    bottom = [-1 for i in range(11)]
    for  i in range(n):
        for j in range(n):
            top[grid[i][j]] = min(top[grid[i][j]] ,i)
            bottom[grid[i][j]] = max(bottom[grid[i][j] ],i)
            left[grid[i][j]] = min(left[grid[i][j] ],j)
            right[grid[i][j]] = max(right[grid[i][j]] ,j)
    for i in range(11):
        if top[i] == sys.maxsize:
            top[i]  = -1
        if left[i] == sys.maxsize:
            left[i]  = -1
    print(top,bottom ,left,right)
    for i in range(n):
        for j in range(n):
            digit= grid[i][j]
            type1 = 0
            if left[digit] != -1:
                area = abs(j - left[digit]) * (max(i,n-1))
                type1 = max(type1,area)
            if right[digit] != -1:
                area = abs(j - right[digit]) * (max(i,n-1))
                type1 = max(type1,area)
            type2 = 0
            if top[digit] != -1:
                area = abs( i - top[digit]) * (max(i,n-1))
                type2 = max(type2,area)

            if bottom[digit] != -1:
                area = abs( i - bottom[digit]) * (max(i,n-1))
                type2 = max(type2,area)
            ans[digit] = max(ans[digit],type1,type2)
    # ans.pop(0)
    pr_list(ans)
def main():
    test=  1
    test = inp()
    for i in range(test):
        solve()

















                
if __name__== "__main__":
    main()