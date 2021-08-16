from tkinter import *

root = Tk()
root.title("Nado GUI") # 제목
root.geometry("640x480") # 가로 * 세로

frame = Frame(root)
frame.pack()

# 1. scrollbar 추가 | fill = "y" 로 프레임 상단하단에 꽉차게 조정
scrollbar = Scrollbar(frame)
scrollbar.pack(side="right", fill = "y")

# 2. yscrollcommand = scrollbar.set로 설정
# set 이 없으면 스크롤을 내려도 다시 올라옴
listbox = Listbox(frame, selectmode="extended", height=10, yscrollcommand = scrollbar.set)
for i in range(1, 32): # 1 ~ 31일
    listbox.insert(END, str(i) + "일") # 1일, 2일, ...
listbox.pack(side="left")

# 3. scrollbar의 움직임을 업데이트 해줌
scrollbar.config(command=listbox.yview)
root.mainloop()
