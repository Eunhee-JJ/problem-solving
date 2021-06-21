# 프로그래머스 레벨테스트 1단계 2번 - 배열 자르고, 정렬하고, 뽑고, 모으기


def solution(array, commands):
    answer = []

    for command in commands:
        new_array = []
        new_array = array[(command[0] - 1):(command[1])]
        new_array.sort()
        print(new_array)
        answer.append(new_array[command[2]-1])

    return answer

# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    solution([1, 5, 2, 6, 3, 7, 4], [[2, 5, 3], [4, 4, 1], [1, 7, 3]])

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
