# 05-3 | 함수 고급 확인문제 2

numbers = list(range(1, 10 + 1))

print("# 홀수만 추출하기")
print(list(filter(lambda x: x % 2 != 0, numbers)))
print()

print("# 3이상, 7미만 추출하기")
print(list(filter(lambda x: x>=3 and x<7, numbers)))
print()

print("# 제곱해서 50 미만 추출하기")
print(list(filter(lambda x: (x**2) < 50, numbers)))