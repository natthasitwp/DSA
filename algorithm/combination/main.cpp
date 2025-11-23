#include <bits/stdc++.h>

using namespace std;

void combi(size_t n, vector<int> arr, vector<bool> table, size_t index, size_t count);
int main()
{   
    vector<int> arr = {1,2,3,4,5};
    vector<bool> table(arr.size(), false);
    combi(3, arr, table, 0, 0);
}

void combi(size_t n, vector<int> arr, vector<bool> table, size_t index, size_t count)
{
    if(count == n)
    {
        for(size_t i = 0 ; i < arr.size() ; i++)
            if(table[i])
                cout<<arr[i]<<" ";
        cout<<endl;
        return;
    }
    if(index >= arr.size())return;

    table[index] = true;
    combi(n, arr, table, index+1, count + 1);

    table[index] = false;
    combi(n, arr, table, index+1, count);
}