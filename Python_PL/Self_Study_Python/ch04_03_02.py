# 04-3 | 반복문과 while 반복문 확인문제 2

key_list = ["name", "hp", "mp", "level"]
value_list = ["기사", 200, 30, 5]
character = {}

for i in range(0, len(key_list)):
    character[key_list[i]] = value_list[i]

print(character)