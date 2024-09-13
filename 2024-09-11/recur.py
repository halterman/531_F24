import time


def pow2(n: int) -> int:
    return 1 << n

def T1(n: int) -> int:
    if n == 1:
        return 1
    else:
        return 2 * T1(n - 1) + 3

def T2(n: int) -> int:
    return pow2(n + 1) - 3


for i in range(1, 1000):
    print(f'{i:3}: {T1(i):10} {T2(i):10}')

print('\n===================\n')

#start = time.time()
#T1(1000)
#stop = time.time()
#print(stop - start)

start = time.time()
T2(10_000_000_000)
stop = time.time()
print(stop - start)
