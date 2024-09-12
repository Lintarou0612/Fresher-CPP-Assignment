#include "forummanager.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

ForumManager::ForumManager() {}

void ForumManager::EnterUserInfo()
{
    User user;
    cin >> user;
    m_user_list.push_back(user);
}
void title()
{
//    cout << left;
//    cout << setw(5) << "Account   | ";
//    cout << setw(15) << "Full name     | ";
//    cout << setw(15) << "Birthday     | ";
//    cout << setw(15) << "Total posts" << endl;
    cout << "Account        | Full name                     | Birthday    | Total posts" << endl;
    cout << "--------------------------------------------------------------------------" << endl;
}
void ForumManager::DisplayInfoAfterSort()
{
    title();
    int size = m_user_list.size();
//    for(int i = 0; i < size; ++i)
//    {
//        cout << m_user_list.at(i);
//    }
    vector<string> print(size,"               |                               |              |            ");
    for(int i = 0; i < size; ++i)
    {
        // 74 = length of print.at(i)
        for(size_t j = 0; j < m_user_list.at(i).account().length(); j++)
        {
            print.at(i)[j] = m_user_list.at(i).account()[j];
        }
        for(size_t j = 17; j < (m_user_list.at(i).name().length() + 17); j++)
        {
            print.at(i)[j] = m_user_list.at(i).name()[j-17];
        }
        for(size_t j = 49; j < m_user_list.at(i).birthday().length() + 49; j++)
        {
            print.at(i)[j] = m_user_list.at(i).birthday()[j-49];
        }
        for(size_t j = 64; j < m_user_list.at(i).total_posts().length()+64; j++)
        {
            print.at(i)[j] = m_user_list.at(i).total_posts()[j-64];
        }
        cout << print.at(i) << endl;
    }
}
string toLower(const string& str)
{
    string result = str;
    int len = str.length();
    for(int i = 0; i < len; i++)
    {
        if(str[i] > 'A' && str[i] < 'Z')
            result[i] = tolower(str[i]);
    }
    return  result;
}
void searchByAccount(const vector<User>& users, const string& account)
{
    bool flag = true;
    int count = 0;
    for(auto& user : users)
    {
        if(toLower(user.account()) == toLower(account))
        {
            if(flag)
            {
                title();
                count++;
                flag = false;
            }
            cout << user;
        }
    }
    if(count == 0)
        cout << "Not found user with account: " << account << endl;
}
void searchByName(const vector<User>& users, const string& name)
{
    bool flag = true;
    int count = 0;
    for(auto& user : users)
    {
        if(toLower(user.name()) == toLower(name))
        {
            if(flag)
            {
                title();
                count++;
                flag = false;
            }
            cout << user;
        }
    }
    if(count == 0)
        cout << "Not found user with name: " << name << endl;
}
void searchByBirth(const vector<User>& users, const string& birth)
{
    bool flag = true;
    int count = 0;
    for(auto& user : users)
    {
        if(user.birthday() == birth)
        {
            if(flag)
            {
                title();
                count++;
                flag = false;
            }
            cout << user;
        }
    }
    if(count == 0)
        cout << "Not found user with date of birth: " << birth << endl;
}
void searchByPosts(const vector<User>& users, const string& post)
{
    bool flag = true;
    int count = 0;
    for(auto& user : users)
    {
        if(user.total_posts() == post)
        {
            if(flag)
            {
                title();
                count++;
                flag = false;
            }
            cout << user;
        }
    }
    if(count == 0)
        cout << "Not found user with total posts: " << post << endl;
}
void ForumManager::SearchUserInfo()
{
    int opt {};
    string account {};
    string name {};
    string birth {};
    string post{};
    while(true)
    {
        system("clear");
        cout << "-------Choose number below to search info by-------" << endl;
        cout << endl;
        cout << "1. Account" << endl;
        cout << "2. Full name" << endl;
        cout << "3. Birthday" << endl;
        cout << "4. Total posts" << endl;
        cout << "5. Back to main menu" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> opt;
        switch(opt)
        {
        case 1:
            system("clear");
            cin.ignore();
            cout << "Enter user's account you want to find: ";
            getline(cin, account);
            searchByAccount(m_user_list, account);
            cout << "Please <Enter> to continue!" << endl;
            //cin.ignore();
            getchar();
            break;
        case 2:
            system("clear");
            cin.ignore();
            cout << "Enter user's name you want to find: ";
            getline(cin, name);
            searchByName(m_user_list, name);
            cout << "Please <Enter> to continue!" << endl;
            //cin.ignore();
            getchar();
            break;
        case 3:
            system("clear");
            cin.ignore();
            cout << "Enter user's birthday you want to find: ";
            getline(cin, birth);
            searchByBirth(m_user_list, birth);
            cout << "Please <Enter> to continue!" << endl;
            //cin.ignore();
            getchar();
            break;
        case 4:
            system("clear");
            cin.ignore();
            cout << "Enter user's posts you want to find: ";
            getline(cin,post);
            searchByPosts(m_user_list, post);
            cout << "Please <Enter> to continue!" << endl;
            //cin.ignore();
            getchar();
            break;
        case 5:
            return;
            break;
        default:
            cout << "Invalid choice. Please <Enter> to type again!" << endl;
            cin.ignore();
            getchar();
        }
    }
}

void ForumManager::InputAvailableTest()
{
    User user1("manhnt50", "nguyen tien manh", "06/12/2001", "126");
    User user2("ManhNT50", "Nguyen Tien Manh", "08/12/2000", "100");
    User user3("giangnv6", "nguyen van giang", "31/12/1989", "406");
    User user4("GiangNV7", "Nguyen Van Giang", "12/10/1989", "6");
    User user5("AnhPT", "phan Thuc Anh", "12/08/1999", "70");
    User user6("GiangNAK17", "Nguyen Anh Khoa Giang", "12/10/1989", "68");
    m_user_list.push_back(user1);
    m_user_list.push_back(user2);
    m_user_list.push_back(user3);
    m_user_list.push_back(user4);
    m_user_list.push_back(user5);
    m_user_list.push_back(user6);
}

// sort by birthday
bool compareBirth(const User& a, const User& b) {
    istringstream issA(a.birthday());
    istringstream issB(b.birthday());
    int dayA, monthA, yearA;
    int dayB, monthB, yearB;
    char delimiter;
    issA >> dayA >> delimiter >> monthA >> delimiter >> yearA;
    issB >> dayB >> delimiter >> monthB >> delimiter >> yearB;

    if (yearA != yearB) return yearA < yearB;
    if (monthA != monthB) return monthA < monthB;
    return dayA < dayB;
}
// sort by name
int partition(vector<User>& users, int low, int high) {
    string pivot = toLower(users[high].name());
    int i = low - 1;

    for (int j = low; j < high; ++j) {
        if (toLower(users[j].name()) < pivot) {
            ++i;
            swap(users[i], users[j]);
        }
    }
    swap(users[i + 1], users[high]);
    return i + 1;
}

void quickSortFullNames(vector<User>& users, int low, int high) {
    if (low < high) {
        int pi = partition(users, low, high);
        quickSortFullNames(users, low, pi - 1);
        quickSortFullNames(users, pi + 1, high);
    }
}
// sort by account
void bubbleSortAccount(vector<User>& users)
{
    int size = users.size();
    bool swapped;
    for(int i = 0; i < size - 1; i++)
    {
        swapped = false;
        for(int j = 0; j < size - i - 1; j++)
        {
            if(toLower(users.at(j).account()) > toLower(users.at(j+1).account()))
            {
                swap(users.at(j),users.at(j+1));
                swapped = true;
            }
        }
        if(swapped == false) break;
    }
}
// sort by posts
void selectionSortPosts(vector<User>& users) {
    for (size_t i = 0; i < users.size() - 1; ++i) {
        size_t minIndex = i;
        for (size_t j = i + 1; j < users.size(); ++j) {
            if (stoi(users[j].total_posts()) < stoi(users[minIndex].total_posts())) {
                minIndex = j;
            }
        }
        swap(users[i], users[minIndex]);
    }
}
void ForumManager::DisplayUserInfo()
{
    int opt {};
    while(true)
    {
        system("clear");
        cout << "-------Choose number below to sort info by-------" << endl;
        cout << endl;
        cout << "1. Account" << endl;
        cout << "2. Full name" << endl;
        cout << "3. Birthday" << endl;
        cout << "4. Total posts" << endl;
        cout << "5. Back to main menu" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> opt;
        switch(opt)
        {
        case 1:
            system("clear");
            bubbleSortAccount(m_user_list);
            DisplayInfoAfterSort();
            cout << "Please <Enter> to continue!" << endl;
            cin.ignore();
            getchar();
            break;
        case 2:
            system("clear");
            quickSortFullNames(m_user_list, 0, m_user_list.size() - 1);
            DisplayInfoAfterSort();
            cout << "Please <Enter> to continue!" << endl;
            cin.ignore();
            getchar();
            break;
        case 3:
            system("clear");
            sort(m_user_list.begin(), m_user_list.end(), compareBirth);
            DisplayInfoAfterSort();
            cout << "Please <Enter> to continue!" << endl;
            cin.ignore();
            getchar();
            break;
        case 4:
            system("clear");
            selectionSortPosts(m_user_list);
            DisplayInfoAfterSort();
            cout << "Please <Enter> to continue!" << endl;
            cin.ignore();
            getchar();
            break;
        case 5:
            return;
            break;
        default:
            cout << "Invalid choice. Please <Enter> to type again!" << endl;
            cin.ignore();
            getchar();
        }
    }
}
