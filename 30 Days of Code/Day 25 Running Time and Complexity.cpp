#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,i,a,k=0;
    cin >>t;
    while(t--){
        cin >>a;
        k=0;
        for(i=2; i*i<=a; i++)
        if(a%i==0){
            k=1;
            break;
        }
        if(k==1 || a==1)
        cout <<"Not prime\n";
        else
        cout <<"Prime\n";
    }  
    return 0;
}
