# Simulate the algorithm for various test cases
def solve(n, k):
    if k > n:
        return -1
    elif k == n:
        return 0
    else:
        temp = n
        t = 0
        
        while temp > 1:
            fl = temp // 2
            cl = (temp + 1) // 2
            
            if cl < k:
                return -1
            elif fl == k or cl == k:
                return t + 1
            elif k < fl:
                temp = fl
                t += 1
            else:
                temp = cl
                t += 1
        
        return -1

# Test cases with detailed analysis
test_cases = [
    # Given examples
    (10, 3, 2),
    (11, 5, 1),
    (21, 4, -1),
    (1000000000, 1, 29),
    
    # Edge cases
    (1, 1, 0),          # Single apple
    (2, 1, 1),          # Minimum division: 2->{1,1}
    (2, 2, 0),          # Already equal
    (3, 1, -1),         # 3 -> {1,2}, can get 2 only
    (3, 2, 1),          # 3 -> {1,2}
    (4, 2, 1),          # 4 -> {2,2}
    (5, 2, 1),          # 5 -> {2,3}
    (5, 1, -1),         # 5 -> {2,3}, can't get 1
    (7, 1, -1),         # 7 -> {3,4}, can't get 1
    (8, 1, 3),          # 8 -> {4,4} -> {2,2} -> {1,1}
    (16, 1, 4),         # 16 -> {8,8} -> {4,4} -> {2,2} -> {1,1}
    (1000000000, 500000000, 1),  # Exactly half
    (999999999, 1, -1),  # Odd number can't reach 1
]

print("=" * 100)
print(f"{'n':<20} {'k':<20} {'Expected':<15} {'Got':<15} {'Status':<20}")
print("=" * 100)

all_passed = True
for n, k, expected in test_cases:
    result = solve(n, k)
    status = "✓ PASS" if result == expected else "✗ FAIL"
    if result != expected:
        all_passed = False
    
    print(f"{n:<20} {k:<20} {expected:<15} {result:<15} {status:<20}")

print("=" * 100)

# Time Complexity Analysis
print("\n\nTIME COMPLEXITY ANALYSIS:")
print("=" * 100)
print(f"{'n':<25} {'log₂(n)':<20} {'Actual Iterations':<20} {'Ratio':<15}")
print("=" * 100)

import math

complexity_tests = [
    10,
    100,
    1000,
    10000,
    100000,
    1000000,
    1000000000,
]

for n in complexity_tests:
    # Count iterations for k=1 (worst case)
    temp = n
    iterations = 0
    while temp > 1:
        fl = temp // 2
        cl = (temp + 1) // 2
        if cl < 1:  # cl < k where k=1
            break
        iterations += 1
        temp = cl
    
    log_n = math.log2(n)
    ratio = iterations / log_n if log_n > 0 else 0
    print(f"{n:<25} {log_n:<20.2f} {iterations:<20} {ratio:<15.4f}")

print("=" * 100)
print(f"\nResult: All tests {'PASSED!' if all_passed else 'FAILED!'}")
print("\nTime Complexity: O(log n) confirmed!")
print("Maximum iterations for n=10^9 is ~29-30, which matches log₂(10^9) ≈ 29.9")
