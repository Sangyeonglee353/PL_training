from tkinter import *

root = Tk()
root.title("Nado GUI") # 제목
root.geometry("640x480")

# label은 기능은 따로 없고, 글자만 보여준다.
label1 = Label(root, text="안녕하세요")
label1.pack()

photo = PhotoImage(file="./img.png")
label2 = Label(root, image=photo)
label2.pack()

# 버튼 클릭시 레이블 값 변경
def change():
    label1.config(text="또 만나요")

    global photo2 # 전역변수로 실행해야됨, 사진인 경우
    photo2 = PhotoImage(file="./img2.png")
    label2.config(image=photo2)

btn = Button(root, text="클릭", command=change)
btn.pack()

root.mainloop()
