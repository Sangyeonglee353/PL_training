import tkinter.ttk as ttk # 콤보박스를 위해 추가
from tkinter import *

root = Tk()
root.title("Nado GUI") # 제목
root.geometry("640x480") # 가로 * 세로

# 콤보 박스: 리스트 박스와 비슷하나 조금 다르다, height: 목록이 보여지는 수 | values: 출력할 목록
values = [ str(i) + "일" for i in range(1, 32)] # 1 ~ 31 까지의 숫자
combobox = ttk.Combobox(root, height=5, values=values) 
combobox.pack()
combobox.set("카드 결제일") # 최초 목록 제목 설정

# 콤보 박스에 값 입력 불가: state="readonly"
readonly_combobox = ttk.Combobox(root, height=10, values=values, state="readonly")
readonly_combobox.current(0) # 0번째 인덱스 값 선택
readonly_combobox.pack()


def btncmd():
    print(combobox.get()) # 선택된 값 표시
    print(readonly_combobox.get())

btn = Button(root, text="선택", command=btncmd)
btn.pack()

root.mainloop()
