#include <iostream>
#include <vector>
using namespace std;

int SecondLargestElement(vector<int> nums)
{
    if (nums.size() < 2)
        return -1;
    int largest = nums[0];
    int secondLargest = -1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] > largest)
        {
            secondLargest = largest;
            largest = nums[i];
        }
        else if (nums[i] < largest && nums[i] > secondLargest)
        {
            secondLargest = nums[i];
        }
    }
    return secondLargest;
}

int main()
{
    vector<int> nums = {2, 5, 2, 7, 8, 4, 1};
    int Answer = SecondLargestElement(nums);
    cout << "Second largest element is :" << Answer << endl;

    return 0;
}