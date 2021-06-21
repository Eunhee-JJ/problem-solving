# This is a sample Python script.

# Press ⌃R to execute it or replace it with your code.
# Press Double ⇧ to search everywhere for classes, files, tool windows, actions, and settings.


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
