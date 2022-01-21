#include<bits/stdc++.h>
using namespace std;

void addOne(vector<int> A){
    int n = A.size();
    vector<int> ans;
    bool zero_out = false;
    if(A[n-1]<=8){
        A[n-1]++;
        } else{
            int j=n-1;
            while(A[j]==9){
                A[j]=0;
                j--;
            }
            if(j<0){
                ans.push_back(1);
                zero_out = true;
            }else{
                 A[j]++;
            }
    }

    int z = 0;
    while(A[z]==0 && !zero_out){
        cout<<"z "<<z<<endl;
        z++;
    }
    for(int i=z;i<n;i++){
                ans.push_back(A[i]);
            }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }

            

}
int main()
{
vector<int> a = {0,1,2,3,4};
// vector<int> a = {0,0,9,9,9,9};
// vector<int> a = {9,9,9,9};

addOne(a);
    return 0;
}