from tkinter import *

root = Tk()
root.title("Nado GUI") # 제목
root.geometry("640x480") # 가로 * 세로

# 텍스트창 만들기
txt = Text(root, width=30, height=5)
txt.pack()

txt.insert(END, "글자를 입력하세요") # 텍스트 창에 미리 글 입력

# 엔트리: 한줄로만 입력 받을 때 사용
e = Entry(root, width=30)
e.pack()
e.insert(0, "한 줄만 입력해요")

# 버튼으로 텍스트와 엔트리값 변경

def btncmd():
    # 내용 출력
    print(txt.get("1.0", END)) # 1: 첫번째 라인, 0 : 9번째 COLUMN 위치
    print(e.get())

    # 내용 삭제
    txt.delete("1.0", END)
    e.delete(0, END)

btn = Button(root, text="클릭", command=btncmd)
btn.pack()
root.mainloop()
