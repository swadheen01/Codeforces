#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    while (1)
    {
        int n, r, i, j, sum = 0;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        vector<int> nums;
        for (i = 0; i < n; ++i)
        {
            cin >> r;
            nums.push_back(r);
        }
        sort(nums.begin(), nums.end());

        if (nums.size() >= 3)
        {
            for (i = 0; i < nums.size() - 2; ++i)
            {
                for (j = i + 1; j < nums.size() - 1; ++j)
                {
                    int l = j, r = nums.size();
                    while ((l + 1) < r)
                    {
                        int mid = (l + r) / 2;
                        if ((nums[i] + nums[j]) >= nums[mid] && (nums[i] + nums[mid]) >= nums[j])
                        {
                            l = mid;
                        }
                        else
                        {
                            r = mid;
                        }
                    }
                    if (l > j && l < nums.size())
                    {
                        sum += (l - j);
                    }
                }
            }
            sum = ((n * (n - 1) * (n - 2)) / 6) - sum;
            cout << sum << "\n";
        }
    }
}
