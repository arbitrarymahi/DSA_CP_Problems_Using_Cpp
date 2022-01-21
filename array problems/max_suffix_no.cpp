// find the max no ahead from given index 

#include<bits/stdc++.h>
using namespace std;

void maxSuffixNo(vector<int> a,int n){
    vector<int> b(n,0);
    b[n-1]=a[n-1];
    for(int k=n-2;k>=0;k--){
        b[k] = max(a[k],b[k+1]);
    }

    for(int j=0;j<n;j++){
        cout<<b[j]<<" ";
    }
cout<<endl;
}
int main()
{
    
vector<int> a = {19, 8, 7, 6, 14, 2, 12, 3};
maxSuffixNo(a,a.size());
    return 0;
}