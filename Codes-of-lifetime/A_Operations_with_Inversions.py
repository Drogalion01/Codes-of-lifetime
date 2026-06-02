import sys
import math
from collections import deque, Counter, defaultdict
from heapq import heappush, heappop, heapify
from bisect import bisect_left, bisect_right
from itertools import permutations, combinations, accumulate

# Increase recursion depth for deep recursive calls
sys.setrecursionlimit(20000)

def solve():
    # Read n and array
    n = int(sys.stdin.readline())
    arr = list(map(int, sys.stdin.readline().split()))
    
    cnt = 0
    current_max = -1
    
    for x in arr:
        if x < current_max:
            # If current element is smaller than the max seen so far,
            # it can be removed by that max element.
            cnt += 1
        else:
            # Update max if we find a larger or equal element
            current_max = x
            
    print(cnt)

def main():
    input = sys.stdin.readline
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
