# 04-3 | 반복문과 while 반복문 확인문제 4
# 1부터 100까지의 숫자 중, 둘이 곱했을 때 최대가 되는 숫자 찾기

max_value = 0
a = 0
b = 0

for i in range(1, 100 // 2 + 1):
    j = 100 - i

    # 최대값 구하기
    current = i * j
    if current > max_value:
        max_value = current
        a = i
        b = j

print("최대가 되는 경우: {} * {} = {}".format(a, b, max_value))