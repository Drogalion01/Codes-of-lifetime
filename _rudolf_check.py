import random

def user(a):
    n=len(a)
    t=a[0]
    rem=0
    for i in range(n-1):
        if t*2 > a[i+1]-rem:
            if i+1==n and t==a[i+1]:
                break
            return False
        if i+1==n and t!=a[i+1]:
            return False
        rem=t
        t=a[i+1]-2*t
    return True

def correct(a):
    a=a[:]
    n=len(a)
    for i in range(n-2):
        x=a[i]
        if x<0:
            return False
        a[i]-=x
        a[i+1]-=2*x
        a[i+2]-=x
        if a[i+1]<0 or a[i+2]<0:
            return False
    return a[n-1]==0 and a[n-2]==0

for n in range(3,9):
    for _ in range(20000):
        a=[random.randint(0,10) for __ in range(n)]
        u=user(a)
        c=correct(a)
        if u!=c:
            print('mismatch',n,a,u,c)
            raise SystemExit
print('no mismatch found in random search')
