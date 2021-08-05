from selenium import webdriver

# 백그라운드에서 돌리는 방법
options = webdriver.ChromeOptions()
options.headless= True
options.add_argument("windows-size=1920x1080")
# headless를 막을 때 user-ageent를 넣어주는 방법
options.add_argument("user-agent=Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/92.0.4515.131 Safari/537.36")

# 백그라운드 돌리기 위해 optons=options 추가
browser = webdriver.Chrome(options=options)
browser.maximize_window()

url = "https://www.whatismybrowser.com/detect/what-is-my-user-agent"
browser.get(url)

detected_value = browser.find_element_by_id("detected_value")
print(detected_value.text)
browser.quit()

# 추가 참고 사이트: selenium with python
