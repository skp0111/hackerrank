#Write your code here
class Calculator:
    def power(self,a,b):
        self.n=a
        self.p=b
        if a<0 or b<0:
            raise Exception("n and p should be non-negative")
        return a**b
myCalculator=Calculator()
T=int(input())
for i in range(T):
    n,p = map(int, input().split())
    try:
        ans=myCalculator.power(n,p)
        print(ans)
    except Exception as e:
        print(e)   