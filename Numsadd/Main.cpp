#include<iostream>
#include<vector>
using namespace std;

vector<int> twoNum(vector<int>& nums, int target)
{
    int i, j;

    for (i = 0; i < nums.size() - 1; i++)
    {
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                return { i,j };

            }
        }

    }


    return { i,j };


}
int main()
{
	vector<int> Nums = { 1,2,3,4 };
	int target = 5;

	vector<int> ans=twoNum(Nums, target);

	for (vector<int>::iterator it = ans.begin(); it != ans.end(); it++)
	{
		cout << *it << " ";
	}



}