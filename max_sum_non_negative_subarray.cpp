#include<bits/stdc++.h>
using namespace std;

void segregateElements(vector<int> A,int n){
        vector<int> ans_vec;
        long int ans_sum = 0;
        vector<int> temp_vec;
        long int temp_sum = 0;

        for(int i=0;i<A.size();i++){
            // main logic
            if(A[i]>=0){
                cout<<"if"<<endl;
                temp_sum+=A[i];
                temp_vec.push_back(A[i]);
            }
            else{
                if(ans_sum<temp_sum || (ans_sum == temp_sum && ans_vec.size()<temp_vec.size())){
                    ans_vec.clear();
                    for(int i=0;i<temp_vec.size();i++){
                        ans_vec.push_back(temp_vec[i]);
                    }
                    temp_vec.clear();
                    ans_sum = temp_sum;
                }
                temp_vec.clear();
                temp_sum = 0;
            }
        }
            // when last element is positive. 
            if(ans_sum<temp_sum || (ans_sum == temp_sum && ans_vec.size()<temp_vec.size())){
                    ans_vec.clear();
                    for(int i=0;i<temp_vec.size();i++){
                        ans_vec.push_back(temp_vec[i]);
                    }
                    temp_vec.clear();
                    ans_sum = temp_sum;
                }
            // priint output
            for(int i=0; i<ans_vec.size();i++){
                cout<< ans_vec[i] << " , ";
            }
            cout<<endl;
            // return ans_vec;
}
int main()
{
// vector<int> a = {336465782, -278722862, -2145174067, 1101513929, 1315634022, -1369133069, 1059961393, 628175011, -1131176229, -859484421};
vector<int> a = {756898537, -1973594324, -2038664370, -184803526, 1424268980};
// vector<int> a = {0, 0, -1, 0};
    cout<<endl;
// n = sizeof(a)/sizeof(*a);
segregateElements(a,a.size());
    return 0;
}