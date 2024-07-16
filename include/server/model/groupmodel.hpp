#ifndef GROUPMODEL_H
#define GROUPMODEL_H

#include "group.hpp"
#include <string>
#include <vector>
using namespace std;

class GroupModel
{
public:
    bool createGroup(Group &group);
    void addGroup(int userid, int groupid, string role);
    //查询用户所在群组信息
    vector<Group> queryGroups(int userid);
    //根据指定的groupid查询群组用户id列表，主要用于用户群聊业务给其他成员群发消息
    vector<int> queryGroupUsers(int userid, int groupid);
};

#endif