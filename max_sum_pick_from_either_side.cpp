#include<bits/stdc++.h>
using namespace std;

void segregateElements(vector<int> &A, int B){
    int sum = 0;
    for(int i=0;i<B;i++){
        sum+=A[i];
    }
    
    int temp = sum;
    for(int i=0;i<B;i++){
        int front = A[B-1-i];
        int back = A[A.size()-1-i];
        temp = temp - front + back;
        if(temp>sum){
            sum = temp;
        }
    }
    cout<< sum;
    // return sum;
}
int main()
{
    
vector<int> a = {-533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322, -667, 673, -336, 141, 711, -747, -132, 547, 644, -338, -243, -963, -141, -277, 741, 529, -222, -684, 35};
segregateElements(a,48);
    return 0;
}