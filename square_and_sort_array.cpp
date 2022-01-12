#include<bits/stdc++.h>
using namespace std;

void sqSort(vector<int> A,int n){
 vector<int> negsq;
   int k =0;

    while(A[k]<0){
        negsq.push_back(pow(A[k],2));
        k++;
    }

    for(int i=0;i<A.size();i++){
        if(k >= A.size()){
            A[i] = negsq.back();
            negsq.pop_back();
        }else if(negsq.size() > 0 && negsq.back() < pow(A[k],2)){
                A[i] = negsq.back();
                negsq.pop_back();
            }else{
                A[i] = pow(A[k++],2);
            }
        }
    

    for(int i=0;i<A.size();i++){
        cout<< A[i]<<" ";
    }
}
int main()
{
// vector<int> a = {-9, -8, 7};
 vector<int> a = {-855, -847, -747, -708, -701, -667, -666, -618, -609, -536, -533, -509, -500, -396, -336, -297, -284, -229, -173, -173, -132, -38, -5, 35, 141, 169, 281, 322, 358, 421, 436, 447, 478, 538, 547, 644, 667, 673, 705, 711, 718, 724, 726, 811, 869, 894, 895, 902, 912, 942, 961};
sqSort(a,a.size());
    return 0;
}