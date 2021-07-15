# 04-2 | 딕셔너리와 반복문 확인문제 3

# 딕셔너리 선언
numbers = [1, 2, 3, 5, 7, 9, 2, 1, 2, 4, 5, 7, 8, 4, 5]
counter = {}

for number in numbers:
    if number in counter:
        counter[number] = counter[number] + 1
    else:
        counter[number] = 1

print(counter)