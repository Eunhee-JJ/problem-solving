# 백준 단계별 7단계(문자열) - 5. 단어 공부(1157번)
# 주어진 단어에서 가장 많이 사용된 알파벳을 출력하는 문제

def maxAlpha(w):
    counts = [0]*26

    # 알파벳 별 사용횟수를 배열에 저장
    for i in range(0, len(w)):
        if 'a' <= w[i] <= 'z':
            counts[ord(w[i]) - ord('a')] += 1
        elif 'A' <= w[i] <= 'Z':
            counts[ord(w[i]) - ord('A')] += 1

    # 사용횟수 최대값 찾기
    m = max(counts)
    ms = [i for i, v in enumerate(counts) if v == m] # 아래 링크 참고
    if len(ms) == 1:
        return chr(ms[0]+ord('A'))
    else:
        return '?'


if __name__ == '__main__':
    word = input()
    print(maxAlpha(word))


'''
1. 각 자리 탐색
2. 각 알파벳 탐색
3. 개수 배열에 저장
4. 개수 비교
5. 최대값 선정
6. 최대값 비교
7. 결과 출력
'''
# 참고
# 중복되는 최대값 모두 찾기: https://ming-jee.tistory.com/121

# 처음 틀린 이유: 시간 초과
# => 알파벳 별 탐색을 반복문 -> 조건문 + 인덱스에서 아스키 코드 연산으로 변경

# 40분
# 오래 걸린 이유: 위 방법이 비효율적이고 원시적이라고 생각해 더 효율적인 방법을 고민했으나, 못 찾아서 저 방법대로 했음.

# 더 효율적인 다른 사람 답안
'''
A=input().upper()
B=set(A)
n = []
m = []
for i in B:
    n.append(A.count(i))
    m.append(i)

num=0
for i in n:
    if i==max(n):
        num+=1
if num==1:
    print(m[n.index(max(n))])
else:
    print("?")
'''
