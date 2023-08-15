class WhoSay:
    def say(self,who):
        who.say()
    
class CLanguage:
    def say(self):
        print("正在调用CLanguage的say方法")

class CPython(CLanguage):
    def say(self):
        print("正在调用CPython的say方法")

class CLinux(CLanguage):
    def say(self):
        print("正在调用CLinux的say方法")


a = WhoSay()
a.say(CLanguage())
a.say(CPython())
a.say(CLinux())

