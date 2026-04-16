import random, subprocess, itertools

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

for _ in range(3000):
    n=random.randint(2,8)
    h=random.randint(1,200)
    k=random.randint(1,20)
    a=[random.randint(1,12) for __ in range(n)]
    inp='1\n{} {} {}\n{}\n'.format(n,h,k,' '.join(map(str,a)))
    out=subprocess.check_output(['_gun_test.exe'], input=inp.encode()).decode().strip()
    exp=brute(n,h,k,a)
    if out=='':
        print('EMPTY',n,h,k,a,'exp',exp)
        raise SystemExit
    got=int(out)
    if got!=exp:
        print('MISMATCH',n,h,k,a,'got',got,'exp',exp)
        raise SystemExit

print('stress-ok-3000')
