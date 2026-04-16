import random, subprocess, os, textwrap, itertools

def brute(n,h,k,a):
    best=10**18
    idxs=[(-1,-1)]
    for i in range(n):
        for j in range(i+1,n):
            idxs.append((i,j))
    for i,j in idxs:
        b=a[:]
        if i!=-1:
            b[i],b[j]=b[j],b[i]
        hp=h
        t=0
        ptr=0
        while hp>0:
            hp-=b[ptr]
            t+=1
            ptr+=1
            if hp<=0:
                break
            if ptr==n:
                t+=k
                ptr=0
        best=min(best,t)
    return best

# compile once
os.system('g++ -std=c++17 -O2 -o _gun_test "C_All_in_one_Gun.cpp"')

for _ in range(300):
    n=random.randint(2,8)
    h=random.randint(1,80)
    k=random.randint(1,8)
    a=[random.randint(1,10) for _ in range(n)]

    inp='1\n{} {} {}\n{}\n'.format(n,h,k,' '.join(map(str,a)))
    out=subprocess.check_output(['_gun_test.exe'], input=inp.encode()).decode().strip()
    got=int(out)
    exp=brute(n,h,k,a)
    if got!=exp:
        print('Mismatch')
        print(n,h,k)
        print(a)
        print('got',got,'exp',exp)
        raise SystemExit

print('stress-ok')
