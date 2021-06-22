# 백준 단계별 7단계(문자열) - 4. 문자열 반복(2675번)
# 각 문자를 반복하여 출력하는 문제

def repeat(r, s):
    for i in range(0, len(s)):
        print(s[i] * r, end='')
    print()

if __name__ == '__main__':
    T = int(input())
    strs = []

    # 문자열 입력
    for i in range(0, T): # 간단한 반목문 작성법 찾아보기
        s = input()
        strs.append(s)

    # 각 문자열 처리
    for ss in strs:
        R, S = map(str, ss.split())
        R = int(R)
        repeat(R, S)

# 25분
# 처음에 틀린 이유
# : 문자열 여러 개를 입력 먼저 받고 -> 반복 출력을 해야하는데, 각 문자열이 입력되자마자 반복 출력 되었음.
#   => 문자열을 담는 2차원 리스트를 만들어주고, 문자열 입력과 출력 각각 다른 반복문으로 수행해서 해결