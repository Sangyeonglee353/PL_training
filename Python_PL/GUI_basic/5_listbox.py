from tkinter import *

root = Tk()
root.title("Nado GUI") # 제목
root.geometry("640x480") # 가로 * 세로

# 옵션 목록 표시하기
# selectmode = "singled" : 하나만 선택, "extended" : 여러개 선택, height="리스트 표시 개수"
listbox = Listbox(root, selectmode="extended", height=0)
listbox.insert(0, "사과")
listbox.insert(1, "딸기")
listbox.insert(2, "바나나")
listbox.insert(END, "수박")
listbox.insert(END, "포도")
listbox.pack()

def btncmd():
    # 삭제
    #listbox.delete(0) # 맨 뒤에 항목을 삭제: END | 첫 번째 항목을 삭제 : 0

    # 갯수 확인
    #print("리스트에는", listbox.size(), "개가 있어요")

    # 항목 확인 (시작 idx, 끝 idx)
    #print("1번째부터 3번째까지의 항목 : ", listbox.get(0, 2))

    # 선택된 항목 확인 (위치로 반환 (ex) (1, 2, 3))
    print("선택된 항목 : ", listbox.curselection()) # idx 값을 반환

btn = Button(root, text="클릭", command=btncmd)
btn.pack()


root.mainloop()
