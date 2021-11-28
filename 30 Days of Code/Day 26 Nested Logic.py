d1,m1,y1=map(int,input().split())
d2,m2,y2=map(int,input().split())
a=0
if y2<y1:
    a=10000
elif m2<m1 and y1==y2:
    a=500*(m1-m2)
elif d2<d1 and m2==m1 and y1==y2:
    a=15*(d1-d2)
else:
    a=0
print(a)