import random, subprocess

for _ in range(2000):
    n=random.randint(2,8)
    h=random.randint(1,140)
    k=random.randint(1,12)
    a=[random.randint(1,12) for __ in range(n)]
    inp='1\n{} {} {}\n{}\n'.format(n,h,k,' '.join(map(str,a)))
    out=subprocess.check_output(['_gun_test.exe'], input=inp.encode()).decode().strip()
    if out=='':
        print('EMPTY_OUTPUT_CASE')
        print(n,h,k)
        print(a)
        raise SystemExit
print('no-empty-found')
