# 04-4 | 문자열, 리스트, 딕셔너리와 관련된 기본함수 확인문제 1
# 리스트 내포, 1~100 사이에 있는 숫자 중 2진수로 변환했을 때 0이 하나만 포함된 숫자와 그 합 출력하기

output = [i for i in range(1, 100 + 1)
if "{:b}".format(i).count("0") == 1]

for i in output:
    print("{} : {}".format(i, "{:b}".format(i)))
print("합계:", sum(output))