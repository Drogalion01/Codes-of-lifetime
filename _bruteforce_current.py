import random, subprocess, itertools, os

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

# compile exact current file
os.system('g++ -std=c++17 -O2 -o _gun_test "C_All_in_one_Gun.cpp"')

for n in range(2,8):
    for h in range(1,80):
        for k in range(1,12):
            for a in itertools.product(range(1,8), repeat=n):
                inp='1\n{} {} {}\n{}\n'.format(n,h,k,' '.join(map(str,a)))
                got=int(subprocess.check_output(['_gun_test.exe'], input=inp.encode()).decode().strip())
                exp=brute(n,h,k,list(a))
                if got!=exp:
                    print('MISMATCH', n,h,k,a,got,exp)
                    raise SystemExit
print('no mismatch in searched range')
