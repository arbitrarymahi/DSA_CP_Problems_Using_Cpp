#include<bits/stdc++.h>
using namespace std;

bool compFn(string a, string b){

    return (a+b > b+a);
}

void segregateElements(vector<int> A,int n){
    vector<string> result;
    string ans;
    for(int i=0;i<A.size();i++){
        if(A[i]>0)
        result.push_back(to_string(A[i]));
    }
    sort(result.begin(), result.end(), compFn);

    if(result.size()>0){
        for(int i=0;i<result.size();i++){
            ans+=result[i];
        }
    }else{
        ans='0';
    }

    cout<<ans<<endl;

}
int main()
{
    
vector<int> a = {98, 8, 9, 6, 4, 2};
// vector<int> a = {0,0,0,0,0};

segregateElements(a,a.size());
    return 0;
}