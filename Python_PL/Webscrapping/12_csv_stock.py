import csv
import requests
from bs4 import BeautifulSoup

url = "https://finance.naver.com/sise/sise_market_sum.nhn?&page="

filename = "시가총액1-200.csv"
# 한글이 깨지면 utf8 > utf-8-sig로 수정
f = open(filename, "w", encoding="utf-8-sig", newline="")
writer = csv.writer(f)

title = "N	종목명	현재가	전일비	등락률	액면가	시가총액	상장주식수	외국인비율	거래량	PER	ROE	토론실".split("\t")
# ["N", "종목명", "현재가", ...]
# print(type(title)) # 리스트 형태인지 확인
writer.writerow(title) # 상단 열 추가

for page in range(1, 5):

    
    res = requests.get(url + str(page))
    res.raise_for_status()
    soup = BeautifulSoup(res.text, "lxml")

    data_rows = soup.find("table", attrs={"class":"type_2"}).find("tbody").find_all("tr")
    for row in data_rows:
        columns = row.find_all("td")
        if len(columns) <=1: # 의미 없는 데이터는 skip
            continue
        # 한줄 for
        data = [column.get_text().strip() for column in columns]
        #print(data)
        writer.writerow(data)