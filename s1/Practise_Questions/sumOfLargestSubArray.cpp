#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumSubarraySum(vector<int> A, int n)
{
    int maxSum = INT_MIN;

    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i; j <= n - 1; j++)
        {
            int currSum = 0;
            for (int k = i; k <= j; k++)
            {
                currSum += A[k];
            }
            maxSum = max(maxSum, currSum);
        }
    }

    return maxSum;
}
int main()
{
    vector<int> a = {2, -3};
    int max_sum = maximumSubarraySum(a, a.size());
    cout << max_sum << endl;
    return 0;
}