import itertools, subprocess, os

os.system('g++ -std=c++17 -O2 -o _gun_test "C_All_in_one_Gun.cpp"')

def run_one(n,h,k,a):
    inp='1\n{} {} {}\n{}\n'.format(n,h,k,' '.join(map(str,a)))
    return int(subprocess.check_output(['_gun_test.exe'], input=inp.encode()).decode().strip())

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
            if hp<=0: break
            if p==n:
                t+=k
                p=0
        best=min(best,t)
    return best

known=[(2,2,1,[1,2]),(3,5,1,[1,3,2]),(3,4,1,[1,2,2]),(3,2,1,[1,2,1])]
for n,h,k,a in known:
    g=run_one(n,h,k,a)
    e=brute(n,h,k,a)
    print('CASE',n,h,k,a,'got',g,'exp',e)

for n in range(2,7):
    for h in range(1,35):
        for k in range(1,8):
            for a in itertools.product(range(1,6), repeat=n):
                g=run_one(n,h,k,list(a))
                e=brute(n,h,k,list(a))
                if g!=e:
                    print('MISMATCH',n,h,k,a,g,e)
                    raise SystemExit
print('OK')
