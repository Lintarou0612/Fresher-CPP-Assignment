#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

class User
{
private:
    std::string m_account;
    std::string m_name;
    std::string m_birthday;
    std::string m_total_posts;
public:
    User();
    User(std::string account, std::string name, std::string birth, std::string post);
    friend std::istream& operator>>(std::istream& in, User& user);
    friend std::ostream& operator<<(std::ostream& out, const User& user);
    std::string account() const;
    std::string name() const;
    std::string birthday() const;
    std::string total_posts() const;
};

#endif // USER_H
