from itertools import product

def your_logic(n,h,k,a):
    tmp=[(0,0)]*n
    for i in range(n):
        mx=max(a[i:])
        idx=i+a[i:].index(mx)
        tmp[i]=(mx,idx)
    s=sum(a)
    cy=h//s
    t=cy*n+max(0,cy-1)*k
    if h%s==0:
        return t
    else:
        if cy>0:
            t+=k
        rem=h%s
        for i in range(n):
            if tmp[i][0]>=rem:
                t+=1
                return t
            else:
                rem-=a[i]
                t+=1
    return t

def brute(n,h,k,a):
    best=10**18
    cand=[a[:]]
    for i in range(n):
        for j in range(i+1,n):
            b=a[:]
            b[i],b[j]=b[j],b[i]
            cand.append(b)
    for b in cand:
        hp=h
        t=0
        p=0
        while hp>0:
            hp-=b[p]
            t+=1
            p+=1
            if hp<=0:
                break
            if p==n:
                t+=k
                p=0
        best=min(best,t)
    return best

for n in range(2,9):
    for h in range(1,120):
        for k in range(1,25):
            for a in product(range(1,11), repeat=n):
                y=your_logic(n,h,k,list(a))
                b=brute(n,h,k,list(a))
                if y!=b:
                    print('Mismatch found')
                    print('n h k =',n,h,k)
                    print('a =',a)
                    print('your =',y,'brute =',b)
                    raise SystemExit
print('No mismatch in searched range')
