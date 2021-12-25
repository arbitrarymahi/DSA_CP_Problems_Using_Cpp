#include <bits/stdc++.h>
using namespace std;

// moves -ve values at the end without changing relative order
void segregateElements(int a[],int n){
    int pos_index = 0;
    vector<int> neg_arr;
    for(int i=0; i<n;i++){
        if(a[i]>0){
            a[pos_index] = a[i];
            pos_index++;
        }else{
            neg_arr.push_back(a[i]);
        }
    }
    
    for(int i=0;i<neg_arr.size();i++){
        a[pos_index] = neg_arr[i];
        pos_index++;
    }
}


int main() {

        int n;
        int a[] = {9, -8, 7, 6, -4, 2, -1, 3};

        // calculating size of array
        n = sizeof(a)/sizeof(*a);

		segregateElements(a,n);

        // print op
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	
}