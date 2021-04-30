#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> twosum;
    int i, j;
    for (i = 0; i < nums.size(); i++)
    {
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                twosum.push_back(i);
                twosum.push_back(j);
                break;
            }
        }
        if (nums[i] + nums[j] == target)
        {
            break;
        }
    }
    return twosum;
}

int main()
{
    vector<int> nums = {2, 5, 5, 11};

    int target = 10;
    vector<int> a = twoSum(nums, target);

    for (auto k : a)
    {
        cout << k << endl;
    }
}
