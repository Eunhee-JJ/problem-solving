# 백준 단계별 7단계(문자열) - 3. 알파벳 찾기(10809번)
# 한 단어에서 각 알파벳이 처음 등장하는 위치를 찾는 문제

def alpha(s):
    where = [-1] * 26
    for a in range(ord('a'), ord('z')+1):
        for i in range(len(s)):
            if ord(s[i]) == a:
                where[a-ord('a')] = i
                break

    for i in range(0, len(where)):
        print(where[i], end=' ')


if __name__ == '__main__':
    str = input()
    alpha(str)

# 17분