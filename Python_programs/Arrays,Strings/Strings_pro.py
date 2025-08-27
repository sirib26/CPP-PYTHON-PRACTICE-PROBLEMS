arr=["QKFDKJFGS","SFDJDSKLFJDZ","ADJFHDKDJFQ"]

from collections import defaultdict

start_map=defaultdict(list)

for s in arr:
    start_map[s[0]].append(s)
print(start_map)

res=""
current_char='A'

while True:
    if current_char not in start_map or not start_map[current_char]:
        break
    
    s=start_map[current_char].pop(0)
    print(s)
    if res=="":
        res+=s
    else:
        res+=s[1:]
    current_char=s[-1]
print(res)