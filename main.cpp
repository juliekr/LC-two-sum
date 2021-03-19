#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target)
                {
                    cout << i << "," << j << " ";
                    return {i, j};
                }
            }
        }
        return {-1, -1};
    }
};
int main()
{
    vector<int> vect{2, 7, 11, 15};
    Solution ob;
    ob.twoSum(vect, 9);
}