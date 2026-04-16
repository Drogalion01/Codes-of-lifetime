from itertools import product

def buggy(n,h,k,a):
    tmp=[(0,0)]*n
    for i in range(n):
        mx=max(a[i:])
        idx=a.index(mx, i)
        tmp[i]=(mx,idx)
    s=sum(a)
    if s==0:
        return None
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

def correct(n,h,k,a):
    s=sum(a)
    if s==0:
        return None
    full=(h-1)//s
    t=full*n+full*k
    rem=h-full*s
    pref=0
    for i,x in enumerate(a,1):
        pref+=x
        if pref>=rem:
            return t+i
    return None

# search for cases where buggy is exactly one larger and specifically 3 vs 2
for n in range(1,7):
    for h in range(1,80):
        for k in range(0,8):
            for a in product(range(1,8), repeat=n):
                b=buggy(n,h,k,list(a))
                c=correct(n,h,k,list(a))
                if b==3 and c==2:
                    print('FOUND', n,h,k,a,'buggy',b,'correct',c)
                    raise SystemExit
print('none')
