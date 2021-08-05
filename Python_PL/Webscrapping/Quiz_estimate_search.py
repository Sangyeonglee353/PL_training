# Quiz) 부동산 매물(송파 헬리오시티) 정보를 스크래핑 하는 프로그램을 만드시오.

# [조회 조건]
# 1. http://daum.net 접속
# 2. '송파 헬리오시티' 검색
# 3. 다음 부동산 부분에 나오는 결과 정보

# [출력 결과]
# ======== 매물 1 ========
# 거래 : 매매
# 면적 : 84/59(공급/전용)
# 가격: 165,000 (만원)
# 동: 214동
# 층: 고/23
# ======== 매물 2 ========
# ...

# [주의 사항]
# - 실습하는 시점에 위 매물이 없다면 다른 곳으로 대체 가능

from selenium import webdriver
from selenium.webdriver.common.keys import Keys

browser = webdriver.Chrome()
browser.maximize_window()

# 1. 다음으로 이동
url = "http://daum.net"
browser.get(url)

# 2. '송파 헬리오시티' 검색
search_keyword = "송파 헬리오시티"
browser.find_element_by_id("q").send_keys(search_keyword)

# 2-1. 엔터 입력하기ㅏ
browser.find_element_by_id("q").send_keys(Keys.ENTER)

# 사이트 구조 변경으로 중단;
