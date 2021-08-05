import requests
url = "http://nadocoding.tistory.com"
headers = {"User-Agent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.131 Safari/537.36"}
res = requests.get(url, headers=headers)
# res.raise_for_status()
with open("nadocoding.html", "w", encoding="utf8") as f:
    f.write(res.text)

# user agent 검색 방법
# 1. google에 user agent string 검색
# 2. whatismyuseragent를 클릭해서 가져오기
