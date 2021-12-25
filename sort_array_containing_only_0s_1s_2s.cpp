#include <bits/stdc++.h>
using namespace std;

void sort012(int a[], int n){
    int count[3] = {0};
    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    int j = 0;
    for(int i=0;i<3;i++){
        while(count[i]>0){
            a[j]=i;
            count[i]--;
            j++;
        }
    }
    
}


int main() {

        int n;
        // initialize input array
        int a[] = {0 ,2, 1, 2,2, 0};   

        // calculating size of array
        n = sizeof(a)/sizeof(*a);

		sort012(a,n);

        // print op
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	
}