#include <bits/stdc++.h>

using namespace std;

void add(std::string e);
void regist(std::string e, std::string name);
void cancle(std::string e, std::string name);
void show(std::string e);
void undo();

map<string,set<string>> activity_reg;
map<string,bool> registed;
stack<string>;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    size_t n;
    cin >> n;
    std::string command, e, name;
    while (n--)
    {
        cin >> command;
        if (command == "ADDEVENT")
        {
            cin >> e;
            add(e);
        }
        else if (command == "REGISTER")
        {
            cin >> e >> name;
            regist(e, name);
        }
        else if (command == "CANCEL")
        {
            cin >> e >> name;
            cancle(e, name);
        }
        else if (command == "SHOW")
        {
            cin >> e;
            show(e);
        }
        else if ("UNDO")
        {
            undo();
        }
        return 0;
    }

    void add(std::string e){

    }
    void register(std::string e, std::string name){

    }
    void cancle(std::string e, std::string name){

    }
    void show(std::string e){

    }
    void undo(){

    }