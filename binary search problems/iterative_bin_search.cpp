#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>A, int x){
    int low = 0;
    int high = A.size()-1;

    while(low<=high){
        int mid = low+ (high-low)/2;

        if(A[mid] > x ) {
            high = mid-1;
        }else if (A[mid] < x) { 
            low = mid+1;
        }else{
            return mid;
        }
    }

    return -1;

}

int main(){
    vector<int> a = {1,2,3,4,5,6,7,8};
    int x = binarySearch(a,2);
    cout<<x<<endl;
    return 0;
}