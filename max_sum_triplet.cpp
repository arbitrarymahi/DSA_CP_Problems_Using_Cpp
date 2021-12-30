#include <bits/stdc++.h>
using namespace std;

int maxSumTriplet(vector<int> &A)
{
    int sum = 0;
    int maxno = 0;
    int n = A.size();

    for (int i = 0; i < n; i++)
    {
        maxno = max(maxno, A[i]);
    }
    // cout<<maxno<<endl;
    for (int i = 1; i < n - 1; i++)
    {
        int maxleft = 0;
        int maxright = 0;
        bool maxleftfound = false;
        bool maxrightfound = false;

        // optimization #1 most imp opti.
        if (A[i] - 1 + A[i] + maxno <= sum)
        {
            continue;
        }
        //   find left element
        maxleftfound = false;
        for (int j = i - 1; j >= 0; j--)
        {

            if (A[j] < A[i])
            {
                maxleftfound = true;
                maxleft = max(maxleft, A[j]);
            }
            // optimization #2 minor opti
            if (maxleft == A[i] - 1)
            {
                break;
            }
        }
        // find right element
        maxrightfound = false;
        for (int k = i + 1; k < n; k++)
        {
            if (A[k] > A[i])
            {
                maxrightfound = true;
                maxright = max(maxright, A[k]);
            }
            // optimization #3 minor opti
            if (A[k] == maxno)
            {
                break;
            }
        }
        if (maxleftfound && maxrightfound)
        {
            int tempsum = maxleft + maxright + A[i];
            sum = max(sum, tempsum);
            // cout<<i<<" "<<maxleft<<" "<<A[i]<<" "<<maxright<<" "<<sum<<endl;
        }
    }
    return sum;
}

int main()
{

    vector<int> a = {32592, 18763, 1656, 17411, 6360, 27625, 20538, 21549, 6484, 27596};
    // vector<int> a = {18468, 6335, 26501, 19170, 15725, 11479, 29359, 26963, 24465, 5706, 28146, 23282, 16828, 9962, 492, 2996, 11943, 4828, 5437, 32392, 14605};
    int sum = maxSumTriplet(a);
    cout << sum << endl;
    return 0;
}