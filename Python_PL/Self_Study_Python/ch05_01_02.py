# 05-2 | 함수 만들기 확인문제 2

def mul(*values):
    num = 1
    for value in values:
        num *= value
    return num

print(mul(5, 7, 9, 10))