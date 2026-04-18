import random

def user(a):
    n=len(a)
    t=a[0]
    rem=0
    for i in range(n-1):
        if(i+2==n and rem!=a[i+1]):
            return False
        if(t*2 > a[i+1]-rem):
            if(i+2==n and t==a[i+1]):
                break
            return False
        tmp=a[i+1]-rem
        rem=t
        t=tmp-2*t
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
    return a[n-2]==0 and a[n-1]==0

for n in range(3,9):
    for _ in range(200000):
        a=[random.randint(0,20) for __ in range(n)]
        if user(a)!=correct(a):
            print('mismatch',n,a,user(a),correct(a))
            raise SystemExit
print('no mismatch in random search')
