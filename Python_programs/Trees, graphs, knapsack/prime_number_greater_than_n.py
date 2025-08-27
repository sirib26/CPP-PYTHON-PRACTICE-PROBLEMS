def is_prime(n):
    if n<2:
        return False
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False
    return True
"""def res(n):
    i=1
    while True:
        ch=n+i
        if is_prime(ch):
            return ch
        i+=1
n=int(input())
print(res(n))"""
n=int(input())
while True:
    n+=1
    if is_prime(n):
        print(n)
        break