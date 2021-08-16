from tkinter import *

root = Tk()
root.title("Nado GUI") # 제목

btn1 = Button(root, text ="버튼1")
btn1.pack()

btn2 = Button(root, padx=5, pady=10, text="버튼2") # css의 padding 느낌 -> 여백 설정
btn2.pack()

btn3 = Button(root, padx=10, pady=5, text="버튼3")
btn3.pack()

btn4 = Button(root, width=10, height=3, text="버튼4") # 고정된 크기 설정
btn4.pack()

btn5 = Button(root, fg="red", bg="yellow", text="버튼5") # fg: 글자색, bg: 버튼 배경색
btn5.pack()

# 이미지 버튼
photo = PhotoImage(file="./img.png")
btn6 = Button(root, image=photo)
btn6.pack()

# 버튼에 기능 추가하기
def btncmd():
    print("버튼이 클릭되었어요")

btn7 = Button(root, text="동작하는 버튼", command=btncmd)
btn7.pack()

root.mainloop()
