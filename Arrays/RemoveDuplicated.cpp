#include <iostream>
#include <vector>
using namespace std;

int remDuplicate(vector<int> nums)
{
    int i = 0;

    for (int j = 1; j < nums.size(); j++)
    {
        if (nums[j] != nums[i])
        {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4};

    int k = remDuplicate(nums);
    cout << k;
    return 0;
}