a = list(map(int, input()))
result = 1

for i in a:
    if i == 0: #1일 경우에도 더하기가 유리
        result += i
    else : result *= i

print(result)
        
