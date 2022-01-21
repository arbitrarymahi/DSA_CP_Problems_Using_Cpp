#include<bits/stdc++.h>
using namespace std;

void diagonal(vector<vector<int> > &A) {
    int n = A[0].size();
    vector<vector<int>> ans(2*n-1);
    // ans[0]={2};
    // ans.push_back({1,2});
    // cout<<"size: "<<ans.size()<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            ans[i+j].push_back(A[i][j]);   
        }
    }

     for (vector<int> vect1D : ans)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }   
        cout << endl;
    }
}
int main()
{
    
vector<vector<int> > a = {{1,2,3},{4,5,6} , {7,8,9}};
diagonal(a);
    return 0;
}