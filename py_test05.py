class CLanguage:
    def __init__(self):
        self.name = "C语言"
        self.add = "https://baidu.www.com"
    def say(self):
        print("正在学习python")


clang = CLanguage()
print(hasattr(clang,"name"))
print(hasattr(clang,"add"))
print(hasattr(clang,"say"))