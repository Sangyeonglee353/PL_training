# 05-2 | 함수의 활용 확인문제 1
# 리스트 평탄화

def flatten(data):
    output = []
    for item  in data:
        if type(item) == list:
            output += flatten(item)
        else:
            output.append(item)
    return output

example = [[1, 2, 3], [4, [5, 6], 7, [8, 9]]]
print("원본:", example)
print("변환:", flatten(example))
