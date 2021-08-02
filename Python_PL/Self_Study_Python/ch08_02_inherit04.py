# 자식 클래스로써 부모에 없는 새로운 함수 정의하기

# 사용자 정의 예외를 생성합니다.
class CustomException(Exception):
    def __init__(self, message, value):
        Exception.__init__(self)
        self.message = message
        self.value = value
    
    def __str__(self):
        return self.message
    
    def print(self):
        print("##### 오류 정보 #####")
        print("메시지:", self.message)
        print("값:", self.value)

# 예외를 발생시켜 봅니다.
try:
    raise CustomException("딱히 이유 없음", 273)
except CustomException as e:
    e.print()