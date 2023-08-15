#对于有参数的类，我们需要自己传参数，python不会自动传值
class CLanguage:
    def info(self):
        print("正在学习python")

#按下面这样子写一定会报错，因为没有self值
#CLanguage.info()


#对于info需要传值，我们只要传值即可，不需要指定传什么值
Clanguage = CLanguage()
CLanguage.info(Clanguage)
