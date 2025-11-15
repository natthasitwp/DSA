#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    int n, m;
    cin >> n >> m;
    int month, year;
    vector<pair<int, int>> data;
    while (n--)
    {
        cin >> year >> month;
        data.push_back({year, month});
    }
    sort(data.begin(), data.end());

    while (m--)
    {
        cin >> year >> month;
        pair<int, int> tar = {year, month};
        auto it = lower_bound(data.begin(), data.end(), tar);

        if(*it == tar) //exits in list
            cout<<"0 0";
        else if(it == data.begin()) // at first index but doesnt exit (tar < 1st Idx)
            cout<<"-1 -1";
        else{
            --it;
            cout<<it->first<<" "<<it->second;
        }
        
        cout << " ";
    }

    return 0;
}