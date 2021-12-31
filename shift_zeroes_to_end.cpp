#include<bits/stdc++.h>
using namespace std;

void segregateElements(vector<int> A,int n){
       int zcount = 0;
    int nonzeroPointer = 0;
    // int n = A.size();
    for(int i=0;i<n;i++){
        if(A[i]==0){
            zcount++;
        }
    }

    for(int i=0;i<n;i++){
        if(A[i]!=0){
            A[nonzeroPointer++]=A[i];
        }
    }
    for(int i=nonzeroPointer;i<n;i++){
        A[i]=0;
    }
    // return A;
    
}
int main()
{
    
vector<int> a = {1, 6, 1, 0, 9, 6, 2, 5, 6, 2, 10, 2, 0, 6};
segregateElements(a,a.size());
    return 0;
}