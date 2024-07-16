#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

//匹配 User表的ORM类
class User
{
public:
    User(int id = -1, string name = "", string pwd = "", string state = "offline")
    {
        this->id = id;
        this->name = name;
        this->state = state;
        this->password = password;
    }
    void setId(int id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setPassword(string Password) { this->password = Password; }
    void setState(string State) { this->state = State; }

    int getId() { return this->id; }
    string getName() { return this->name; }
    string getPwd() { return this->password; }
    string getState() { return this->state; }

private:
    int id;
    string name;
    string password;
    string state;
};

#endif