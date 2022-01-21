#include<bits/stdc++.h>
using namespace std;

void segregateElements(vector<int> A,vector<int> B){
    int carry = 0;
    vector<int> ans;
    int a = A.size()-1;
    int b = B.size()-1;
    int maxBound = max(a,b);
    while(a>=0 || b>=0){

        if(a>=0 && b>=0){
            ans.push_back((A[a]+B[b]+carry)%10);
            carry = (A[a--]+B[b--]+carry)/10;

        }else if(a>=0){
            ans.push_back((A[a]+carry)%10);
            carry = (A[a--]+carry)/10;

        }else{
            ans.push_back((B[b]+carry)%10);
            carry = (B[b--]+carry)/10;
        }
}
    if(carry>0){
        ans.push_back(carry);
    }
    reverse(ans.begin(), ans.end());
    for(int i = 0;i<ans.size();i++){
        cout<< ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    
vector<int> a = {4, 3, 6, 7, 9, 9, 1, 7, 8};
vector<int>  B = { 7, 5, 8, 9 };
segregateElements(a,B);
    return 0;
}