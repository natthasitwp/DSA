#include <iostream>
#include <vector>

using namespace std;

// ==========================================
// YOUR CODE STARTS HERE
// ==========================================

int N;

// 1. input: The original array of numbers
// 2. current: The permutation we are currently building
// 3. used: A boolean array tracking which indices from 'input' are currently picked
void solve(vector<int> &input, vector<int> &current, vector<bool> &used)
{
    // TODO:
    // 1. Base Case: If current.size() == input.size(), print "current" and return.
    if (current.size() == input.size())
    {
        for(auto &x : current)
            cout<<x<<" ";
        cout<<endl;
        return;
    }
    // 2. Loop through all indices 'i' from 0 to N-1
    //    a. IF input[i] is NOT used:
    //       - Mark used[i] = true
    //       - Add input[i] to 'current'
    //       - Recurse: solve(input, current, used)
    //       - Backtrack: Remove last element from 'current'
    //       - Backtrack: Mark used[i] = false
    for (size_t i = 0; i < input.size(); i++)
    {
        if(!used[i])
        {
            used[i] = true;
            current.push_back(input[i]);
            solve(input, current, used);
            current.pop_back();
            used[i] = false;
        }
    }
}

// ==========================================
// DRIVER CODE
// ==========================================
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    if (!(cin >> N))
        return 0;

    vector<int> nums(N);
    for (int i = 0; i < N; i++)
    {
        cin >> nums[i];
    }

    // Helper structures
    vector<int> currentPermutation;
    vector<bool> used(N, false); // Initialize all as false (unused)

    solve(nums, currentPermutation, used);

    return 0;
}