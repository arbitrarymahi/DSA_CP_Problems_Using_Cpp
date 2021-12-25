#include <bits/stdc++.h>
using namespace std;

void rotateElements(int arr[],int n){
    int last = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0]= last;
    }


int main() {

        int n;
        int a[] = {9, 8, 7, 6, 4, 2, 1, 3};

        // calculating size of array
        n = sizeof(a)/sizeof(*a);

		rotateElements(a,n);
        // call multiple times to rotate more
		// segregateElements(a,n);

        // print op
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	
}