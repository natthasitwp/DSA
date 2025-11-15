#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v(A);
    set<T> seen(A.begin(),A.end());
    for(auto &x:B)
    {
        if(seen.find(x) == seen.end())
            v.push_back(x);
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    set<T> seen(B.begin(),B.end());
    for(auto &x:A)
    {
        if(seen.find(x) != seen.end())
            v.push_back(x);
    }
    return v;
}
