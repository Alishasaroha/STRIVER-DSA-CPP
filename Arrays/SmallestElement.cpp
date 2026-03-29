#include <iostream>
#include <vector>
using namespace std;

int smallestElement(vector<int> &nums)
{
    int min = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > min)
        {
            min = nums[i];
        }
    }
    return min;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = smallestElement(nums);
    cout << "Largest Element:" << result;

    return 0;
}