#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
      
    Difference(vector<int> x)
    {
        elements=x;
    }
	// Add your code here
    void computeDifference()
    {
        int M=elements[0],m=elements[0];
        for(int i=0; i<elements.size(); i++)
        {
            if(m>elements[i])
                m=elements[i];
            if(M<elements[i])
                M=elements[i];
        }
        maximumDifference=abs(M-m);
        // return maximumDifference;
    }
    
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}