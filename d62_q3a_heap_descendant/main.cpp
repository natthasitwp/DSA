#include <iostream>
#include <vector>
#include <queue>
using namespace std;


int main()
{
    int n,a;
    cin>>n>>a;
    queue<int> idx;
    vector<int> result;
    idx.push(a);
    while(idx.front() < n)
    {
        int desc = idx.front();
        result.push_back(desc);
        idx.push(2*desc+1);
        idx.push(2*desc+2);
        idx.pop();
    }

    cout<<result.size()<<"\n";
    for(auto x:result)
        cout<<x<<" ";
    return 0;
}
