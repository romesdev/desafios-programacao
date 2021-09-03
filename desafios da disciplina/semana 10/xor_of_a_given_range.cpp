#include <bits/stdc++.h>
#define MAXN 10000

using namespace std;

class SegmentTree
{

private:
    int n, t[4 * MAXN];

public:
    SegmentTree(vector<int> arr, int sz)
    {
        n = sz;
        build(arr, 1, 0, n - 1);
    }

    void build(vector<int> arr, int idx, int tl, int tr)
    {

        if (tl == tr)
        {
            t[idx] = arr[tl];
        }
        else
        {
            int tm = (tl + tr) / 2;
            build(arr, idx << 1, tl, tm);
            build(arr, idx << 1 | 1, tm + 1, tr);
            t[idx] = t[idx << 1] ^ t[idx << 1 | 1];
        }

    }

    void update(int idx, int tl, int tr, int pos, int val)
    {


        if (tl == tr)
        {
            t[idx] = val;
        }
        else
        {

            int tm = (tl + tr) / 2;

            if (pos >= tl && pos <= tm)
            {
                update(idx << 1, tl, tm, pos, val);
            }
            else
            {
                update(idx << 1 | 1, tm + 1, tr, pos, val);
            }

            t[idx] = t[idx << 1] ^ t[idx << 1 | 1];

        }
    }

    void update(int pos, int val)
    {
        update(1, 0, n - 1, pos, val);
    }

    int query(int idx, int tl, int tr, int l, int r)
    {

        if (l > tr || r < tl)
        {
            return 0;
        }

        if (l <= tl && tr <= r)
        {
            return t[idx];
        }

        int tm = (tl + tr) / 2;

        return query(idx << 1, tl, tm, l, r) ^ query(idx << 1 | 1, tm + 1, tr, l, r);
    }

    int query(int l, int r)
    {
        return query(1, 0, n - 1, l, r);
    }
};

class Solution
{
public:
    int getXor(vector<int> &nums, int a, int b)
    {

        int n = nums.size();

        SegmentTree st(nums, n);

        int xorFinal = st.query(a, b);

        return xorFinal;
    }
};

// { Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, a, b;
        cin >> n >> a >> b;
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
            cin >> nums[i];
        if (a > b)
            swap(a, b);
        Solution obj;
        int ans = obj.getXor(nums, a, b);
        cout << ans << "\n";
    }
    return 0;
} // } Driver Code Ends