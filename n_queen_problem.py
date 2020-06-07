#!/usr/bin/env python

# N queen problem: put n queen on an n*n chessboard such that no 2 queens attack each other.
# NOTE: Solutions are possible only for n>=4
# Here we build the solution step by step.
# We add a queen and check if it is under attack.
# if yes then backtrack else continue
# we are using a recursive approach.


def check(perm):
    i = len(perm) - 1
    for j in range(i):
        if i - j == abs(perm[i] - perm[j]):
            return False
    return True


def generate_permutations(perm,n):
    if len(perm) == n:
        print(perm)
        return            # To just generate one result we can replace return with exit()
    for i in range(n):
        if i not in perm:
            perm.append(i)
            if check(perm):
                generate_permutations(perm,n)
            perm.pop()

# Driver code
generate_permutations(perm = [], n = int(input()))