#include <iostream>
#include <vector>
using namespace std;

void reverseArr(vector<int> &nums)
{
    int l = 0;
    int r = nums.size() - 1;

    while (l < r)
    {
        swap(nums[l], nums[r]);
        l++;
        r--;
    }
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
    reverseArr(nums);

    for (int i = 0; i < n; i++)
    {
        cout << nums[i];
    }
    return 0;
}