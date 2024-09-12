#include <iostream>
#include "forummanager.h"

using namespace std;

int main()
{
    ForumManager forum;
    forum.InputAvailableTest();
    char choice {};
    while(true)
    {
        system("clear");
        cout << "==========================FORUM MANAGEMENT===========================" << endl;
        cout << endl;
        cout << "1. Enter User's information" << endl;
        cout << "2. Display User's information" << endl;
        cout << "3. Search User's information" << endl;
        cout << "4. Exit program" << endl;
        cout << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch(choice)
        {
        case '1':
            system("clear");
            forum.EnterUserInfo();
            break;
        case '2':
            system("clear");
            forum.DisplayUserInfo();
            break;
        case '3':
            system("clear");
            forum.SearchUserInfo();
            break;
        case '4':
            cout << "Exiting...." << endl;
            return 0;
        default:
            cout << "Invalid choice. Please <Enter> to type again!" << endl;
            cin.ignore();
            getchar();
        }
    }
    return 0;
}
