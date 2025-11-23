#include <vector>
#include <set>
using namespace std;

template <typename T>
vector<T> Union(const vector<T> &A, const vector<T> &B)
{
    vector<T> result(A);
    set<T> seen(A.begin(), A.end());
    for (auto data : B)
    {
        if (seen.find(data) == seen.end())
            result.push_back(data);
    }
    return result;
}

template <typename T>
vector<T> Intersect(const vector<T> &A, const vector<T> &B)
{
    vector<T> result;
    set<T> seen(B.begin(), B.end());
    for (auto data : A)
    {
        if (seen.find(data) != seen.end())
            result.push_back(data);
    }
    return result;
}
