#include<bits/stdc++.h>
using namespace std;

int coverPoints(vector<int> &A, vector<int> &B) {
    int n = 0;
    int steps = 0;
    while(n<A.size()-1){
   
      // find dist between pairs and proceed..
    
        steps+= max(abs(A[n+1]-A[n]),abs(B[n+1]-B[n]));
        n++;

    }
    return steps;

    }
int main()
{
    // vector<int> a = { -7, -13 };
    // vector<int> b = { 1, -5,};
    vector<int> a = { -4,   1, -4, 8, -11, -12, -13, -3, -4, -4, -14, 7, -2, -2, -5, 5,   -1, 0};
    vector<int> b = { -8, -15, -4, 3,   11, 8,   -15, 4, 1,    7, 3,  9, -9, -9, -13, 10,-14, -8 };
    int ans = coverPoints(a,b);
    cout<<ans<<endl;
    return 0;
}