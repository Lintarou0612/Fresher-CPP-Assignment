#ifndef FORUMMANAGER_H
#define FORUMMANAGER_H

#include "user.h"
#include <vector>

class ForumManager
{
    std::vector<User> m_user_list;
public:
    ForumManager();
    void EnterUserInfo();
    void DisplayUserInfo();
    void DisplayInfoAfterSort();
    void SearchUserInfo();
    void InputAvailableTest();
};

#endif // FORUMMANAGER_H
