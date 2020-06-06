#!/usr/bin/env python
def check(perm):
    i = len(perm) - 1
    for j in range(i):
        if i - j == abs(perm[i] - perm[j]):
            return False
    return True
def generate_permutations(perm,n):
    if len(perm) == n:
        print(perm)
        return 
    for i in range(n):
        if i not in perm:
            perm.append(i)
            if check(perm):
                generate_permutations(perm,n)
            perm.pop()

generate_permutations(perm = [], n = int(input()))