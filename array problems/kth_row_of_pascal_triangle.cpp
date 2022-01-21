#include<bits/stdc++.h>
using namespace std;
    
void findKthRow(int A){

    vector<int> ans(0,A+1);
    for(int i=0;i<=A;i++){
        vector<int> tmp;
        tmp = ans;
        ans.clear();
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                ans.push_back(1);
            }else{
                ans.push_back(tmp[j]+tmp[j-1]);
            }
        }
    }
     for(int j=0;j<ans.size();j++){
            cout << ans[j]<<" ";
        }
        cout<<endl;
        }
    int main()
    {
        
    findKthRow(2);
        return 0;
    }