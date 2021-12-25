#include <bits/stdc++.h>
using namespace std;

void segregateElements(int arr[],int n){
    int last = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0]= last;
    }


int main() {

        int n = 8;
        int a[] = {9, 8, 7, 6, 4, 2, 1, 3};
		segregateElements(a,n);

        // call multiple times to rotate more
		// segregateElements(a,n);

        // print op
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	
}