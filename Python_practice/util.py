def find_max(x):
    mx = x[0]
    for i in x:
        if(mx < i):
            mx = i
    print(mx)