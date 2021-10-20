#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input().strip())
    ans=""
    while(n>0):
        r=n%2
        if r==1:
            ans="1"+ans
        else:
            ans="0"+ans
        n=int(n/2)
    max=0
    c=0
    for i in ans:
        if i=="1":
            c=c+1
            if max<c:
                max=c
        else:
            c=0
    print(max)
