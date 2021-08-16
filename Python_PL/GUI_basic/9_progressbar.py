import time
import tkinter.ttk as ttk # progressbar를 위해 추가
from tkinter import *

root = Tk()
root.title("Nado GUI") # 제목
root.geometry("640x480") # 가로 * 세로

# progressbar : 현재 진행상태 표시 | 
# progressbar = ttk.Progressbar(root, maximum=100, mode="indeterminate") # mode : "indeterminate" > 언제 끝날지 정해지지 않은 경우
# progressbar = ttk.Progressbar(root, maximum=100, mode="determinate")
# progressbar.start(10) # 10 ms 마다 움직임
# progressbar.pack()

# def btncmd():
#     progressbar.stop() # 작동 중지

# btn = Button(root, text="중지", command=btncmd)
# btn.pack()

p_var2 = DoubleVar() # 실수 퍼센트 값으로 저장한다
progressbar2 = ttk.Progressbar(root, maximum=100, length=150, variable=p_var2)
progressbar2.pack()

def btncmd2():
    for i in range(1, 101):  # 1 ~ 100
        time.sleep(0.01) # 0.01 초 대기

        p_var2.set(i) # progress bar 의 값 설정
        progressbar2.update() # ui 업데이트, 중간중간 업데이트로 보여줌
        print(p_var2.get())
        
btn = Button(root, text="시작", command=btncmd2)
btn.pack()


root.mainloop()
