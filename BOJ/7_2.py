# 백준 단계별 7단계(문자열) - 2. 숫자의 합(11720번)
# N개의 숫자가 공백 없이 쓰여있다. 이 숫자를 모두 합해서 출력하는 프로그램을 작성하시오.

def sum(number, numbers):
    answer = 0
    for i in range(0,number):
        answer += int(numbers[i])

    print(answer)

if __name__ == '__main__':
    n = int(input())
    ns = str(input())
    sum(n, ns)

# 35분
# 오래 걸린 이유: 집중 못함, pycharm 파일 오류 때문에 헤맸음
# 파이썬에서 문자열 요소에 접근: 요소가 아닌 인덱스로 접근해야 함. 요소 접근은 불가능한 듯