#include<bits/stdc++.h>
using namespace std;
    
void segregateElements(int A){
    vector<vector<int>> pt;


    for(int i=0;i<A;i++){   
        vector<int> currRow;
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                currRow.push_back(1);
            }else{
                currRow.push_back(pt[i-1][j]+pt[i-1][j-1]);
            }
        }
        pt.push_back(currRow);

    }

    for(int i=0;i<A;i++){
        for(int j=0;j<=i;j++){
            cout << pt[i][j]<<" ";
        }
        cout<<endl;
    }
    
    }
    int main()
    {
        
    // vector<vector<int> >a = {{1},{1,1},{1,2,1}};
    // for(int i=0;i<a.size();i++){
    //     for(int j=0;j<=i;j++){
    //         cout << a[i][j];
    //     }
    //     cout<<endl;
    // }
    segregateElements(5);
        return 0;
    }