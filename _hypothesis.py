from itertools import product

def logic_fixed_pref(n,h,k,a):
    tmp=[(0,0)]*n
    for i in range(n):
        itx=max(a[i:])
        itn=min(a[:i+1])
        tmp[i]=(itx,itn)
    s=sum(a)
    cy=h//s
    t=cy*n+max(0,cy-1)*k
    if h%s==0:
        return t
    if cy>0:
        t+=k
    rem=h%s
    pref=[0]*(n+1)
    for i in range(n):
        pref[i+1]=pref[i]+a[i]
    for i in range(1,n+1):
        hobe=pref[i]-tmp[i-1][1]+tmp[i-1][0]
        if hobe>=rem:
            return t+1
        t+=1
    return None

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
        tt=0
        p=0
        while hp>0:
            hp-=b[p]
            tt+=1
            p+=1
            if hp<=0: break
            if p==n:
                tt+=k
                p=0
        best=min(best,tt)
    return best

for n in range(2,8):
    for h in range(1,90):
        for k in range(1,12):
            for a in product(range(1,9), repeat=n):
                g=logic_fixed_pref(n,h,k,list(a))
                b=brute(n,h,k,list(a))
                if g!=b:
                    print('mismatch',n,h,k,a,g,b)
                    raise SystemExit
print('no mismatch in searched range')
