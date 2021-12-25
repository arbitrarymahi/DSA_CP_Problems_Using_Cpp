#include <iostream>
#include <vector>
using namespace std;

void printMat(vector<vector<int>> matrix){

    int matrix_size = matrix.size() * matrix[0].size();
    int r = matrix.size();
    int c = matrix[0].size();
    int rstrt = 0;
    int cstrt = 0;
    int rend = r-1;
    int cend = c-1;
    int total_el = r*c;
    vector<int> op;
    int added = 0;


    while(added < total_el){
        for(int i=cstrt;i<=cend;i++){
            op.push_back(matrix[rstrt][i]);
            added++;
        }
        
        rstrt++;
        if(added >= total_el) {
            break;
        }
        for(int i = rstrt;i<=rend;i++){
                op.push_back(matrix[i][cend]);
                added++;
        }
        cend--;
        if(added >= total_el) {
            break;
        }
        for(int i=cend;i>=cstrt;i--){
            op.push_back(matrix[rend][i]);
            added++;
        }
        rend--;
        if(added >= total_el) {
            break;
        }
        for(int i = rend;i>=rstrt;i--){
                op.push_back(matrix[i][cstrt]);
                added++;
        }
        cstrt++;
            }

    
    // for printing the spiral view.
    for(int i=0; i<total_el;i++){
        cout << op[i] <<" ";
    }
    cout << endl;
   
}

int main() {
    vector<vector<int>> mat;
    // Following statement will "create" a n x m  vector and fill it with zeroes
    int n;
    int m;
    n = 4;
    m = 6;

    // Generating a random matrix
     for ( size_t i = 0; i < n; i++) {
         vector<int> temp_v;
        for (size_t j = 0; j < m; j++) {
            temp_v.push_back(i+j);
        }
        mat.push_back(temp_v);
        
    }
    cout << endl;
    printMat(mat);

}
