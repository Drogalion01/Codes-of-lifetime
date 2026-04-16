from itertools import product

def current(n,h,k,a):
    tmp=[(0,0)]*n
    idx=[(0,0)]*n
    for i in range(n):
        itx=max(a[i:])
        itn=min(a[:i+1])
        idx[i]=(a.index(itx,i), a.index(itn,0,i+1))
        tmp[i]=(itx,itn)
    s=sum(a)
    cy=h//s
    time=cy*n+max(0,cy-1)*k
    if h%s==0:
        return time
    if cy>0:
        time+=k
    rem=h%s
    pref=[0]*(n+1)
    for i in range(n):
        pref[i+1]=pref[i]+a[i]
    for i in range(1,n+1):
        if idx[i-1][0]==i-1:
            time+=1
            continue
        hobe=pref[i]-tmp[i-1][1]+tmp[i-1][0]
        if hobe>=rem:
            time+=1
            return time
        time+=1
    return time

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
    for h in range(1,140):
        for k in range(1,15):
            for a in product(range(1,9), repeat=n):
                c=current(n,h,k,list(a))
                b=brute(n,h,k,list(a))
                if c!=b:
                    print('mismatch',n,h,k,a,'current',c,'brute',b)
                    raise SystemExit
print('no mismatch in searched range')
