numbers = [273, 103, 5, 32, 65, 9, 72, 800, 99]

for number in numbers:
    if number % 2 != 0:
        print(number,"는 홀수입니다.")
    else:
        print(number,"는 짝수입니다.")

for number in numbers:
    if int(number / 100) != 0:
        print(number," 3 자릿수입니다.")
    elif int(number / 10) != 0:
        print(number,"는 2 자릿수입니다.")
    else:
        print(number,"는 1 자릿수입니다.")
