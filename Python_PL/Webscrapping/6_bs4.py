import requests
from bs4 import BeautifulSoup

url = "https://comic.naver.com/webtoon/weekday"
res = requests.get(url)
res.raise_for_status()

soup = BeautifulSoup(res.text, "lxml")
# print(soup.title) # soup의 모든 객체 중 타이틀 태그를 가져온다.
# print(soup.title.get_text()) # soup의 모든 객체 중 타이틀 태크의 문자열을 가져온다.
# print(soup.a) # 첫번째로 발견되는 a 태그를 가져온다.
# print(soup.a.attrs) # 첫번째로 발견되는 a태그의 속성을 가져온다.
# print(soup.a["href"]) # 첫번째로 발견되는 a태그의 속성 중 href의 값을 가져온다.

# print(soup.find("a", attrs={"class": "Nbtn_upload"})) # a 태그의 속성 중 class="Nbtn_up"인 값을 가져온다. 
# print(soup.find(attrs={"class": "Nbtn_upload"})) # 전체 태그의 속성 중에서 class="Nbtn_up"인 값을 가져온다. 

# print(soup.find("li", attrs={"class": "rank01"}))

# rank1 = soup.find("li", attrs={"class": "rank01"})

# print(rank1.a.get_text())
#print(rank1.next_sibling) # next_sibling 다음 형제 태그로 넘어간다.
# rank2 = rank1.next_sibling.next_sibling
# rank3 = rank2.next_sibling.next_sibling
# print(rank3.a.get_text())
# rank2 = rank3.previous_sibling.previous_sibling # previous_sibling 이전 형태 태그로 넘어간다.
# print(rank2.a.get_text())
# print(rank1.parent) # 부모 태그로 이동

# rank2 = rank1.find_next_sibling("li") # next_sibling은 개행 정보까지 포함하지만 이 경우, 개행 정보는 무시
# print(rank2.a.get_text())
# rank3 = rank2.find_next_sibling("li") 
# print(rank3.a.get_text())
# rank2 = rank3.find_previous_sibling("li")
# print(rank2.a.get_text())

# rank1.find_next_siblings("li") # li 속성 객체를 모두 가져온다.

webtoon = soup.find("a", text="더 복서-85화 전쟁(2)")
print(webtoon)

