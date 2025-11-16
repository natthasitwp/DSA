#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main()
{
    int n,k;
    priority_queue<pair<int,string>> pq;
    map<string,int> vote;
    cin>>n>>k;

    string s;
    while(n--)
    {
        cin>>s;
        vote[s]++;
    }

    for(auto &x:vote)
        pq.emplace(x.second,x.first);

    int minimum;
    while(!pq.empty() && k--)
    {
        pair<int,string> candidate = pq.top();
        minimum = candidate.first;
        pq.pop();
    }
    cout<<minimum;

    return 0;
}