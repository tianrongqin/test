class CLanguage:
    @staticmethod
    def info(name,add):
        print(name,add)

#直接使用类名
CLanguage.info("C语言","https://baidu.www.com")

#类对象调用静态方法
clanguage = CLanguage()
clanguage.info("python","http://c.biancheng.net/python")


    