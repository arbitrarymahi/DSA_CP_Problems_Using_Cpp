#include<bits/stdc++.h>
using namespace std;

vector<int> sortBin(vector<int> &A) {
    int zCount = 0;
    int oneCount = 0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            zCount++;
        }else{
            oneCount++;
        }
    }
    cout<<"z "<<zCount << "o "<<oneCount<<endl;
    int i=0;
    while(zCount>0){
        A[i] = 0;
        i++; zCount--;
    }
    while(oneCount>0){
        A[i] = 1;
        i++;oneCount--;
    }
    return A;
}
int main()
{
    
vector<int> a = {0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1 };
   vector<int> b =  sortBin(a);
 
    for(int i=0;i<b.size();i++){
        cout<<b[i]<<" "<<endl;
    }
    return 0;
}