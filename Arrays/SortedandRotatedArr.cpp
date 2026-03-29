#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> nums)
{
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] > nums[(i + 1) % n])
        {
            count++;
        }
    }
    if (count > 1)
        return false;
    else
        return true;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    if (isSorted(nums))
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}