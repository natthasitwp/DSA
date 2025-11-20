#include <iostream>
#include <queue>
#include <map>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    map<string,int> candidate;
    priority_queue<pair<int,string>> board;
    while(n--)
    {
        string vote;
        cin>>vote;
        candidate[vote] += 1;
    }
    for(auto item : candidate)
        board.emplace(item.second,item.first);

    int minimum;
    while (k-- && !board.empty())
    {
        minimum = (board.top()).first;
        board.pop();
    }
    cout<<minimum;
    
    return 0;
}