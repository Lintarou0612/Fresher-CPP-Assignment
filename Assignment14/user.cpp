#include "user.h"
#include <regex>
#include <iomanip>

using namespace std;
std::string User::account() const
{
    return m_account;
}

std::string User::name() const
{
    return m_name;
}

std::string User::birthday() const
{
    return m_birthday;
}

std::string User::total_posts() const
{
    return m_total_posts;
}
User::User(std::string account, std::string name, std::string birth, std::string post)
        : m_account{account}, m_name{name}, m_birthday{birth}, m_total_posts{post} {};
User::User()
{

}

// Function to check if an account name is valid
bool isValidAccount(const std::string& accountName) {
    // Regular expression to match only alphabetic characters and numbers
    std::regex accountPattern(R"(^[A-Za-z0-9]+$)");
    return std::regex_match(accountName, accountPattern);
}
// Function to check if a full name is valid
bool isValidFullName(const std::string& fullName) {
    std::regex pattern("^[A-Za-z]+( [A-Za-z]+)+$");
    return std::regex_match(fullName, pattern);
}
// Function to check if a year is a leap year
bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

// Function to check if the date is valid
bool isValidDate(int day, int month, int year) {
    if (year < 1000 || year > 9999) {
        return false;
    }
    if (month < 1 || month > 12) {
        return false;
    }
    if (day < 1) {
        return false;
    }

    // Days in month
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Adjust for leap year
    if (month == 2 && isLeapYear(year)) {
        daysInMonth[1] = 29;
    }

    if (day > daysInMonth[month - 1]) {
        return false;
    }

    return true;
}

// Function to check if a string is in the format DD/MM/YYYY
bool isValidBirthday(const std::string& date) {
    // Regular expression to match the format DD/MM/YYYY
    std::regex datePattern(R"(^\d{2}/\d{2}/\d{4}$)");
    if (!std::regex_match(date, datePattern)) {
        return false;
    }

    // Extract day, month, and year from the string
    int day = std::stoi(date.substr(0, 2));
    int month = std::stoi(date.substr(3, 2));
    int year = std::stoi(date.substr(6, 4));

    // Validate the date
    return isValidDate(day, month, year);
}
// Function to check if the input string is an integer
bool isInteger(const std::string& input) {
    // Regular expression to match integer numbers
    std::regex intPattern(R"(^[-+]?\d+$)");
    return std::regex_match(input, intPattern);
}
bool isValidPosts(const string& posts)
{
    if(isInteger(posts))
    {
        if(stoi(posts) < 0)
            return false;
        else
            return true;
    }
    return false;
}
std::istream &operator>>(std::istream &in, User &user)
{
    cout << "Enter Account (No space, special characters): ";
    cin.ignore();
    getline(in, user.m_account);
    while(!isValidAccount(user.m_account))
    {
        cout << "Invalid account. Please type again!" << endl;
        cout << "Enter Account (No space, special characters): ";
        getline(in, user.m_account);
    }

    cout << "Enter Full Name (Only alphabet): ";
    //cin.ignore();
    getline(in, user.m_name);
    while(!isValidFullName(user.m_name))
    {
        cout << "Invalid Name. Please type again!" << endl;
        cout << "Enter Full Name (Only alphabet): ";
        getline(in, user.m_name);
    }

    cout << "Enter Birthday (must follow format DD/MM/YYYY): ";
    in >> user.m_birthday;
    while(!isValidBirthday(user.m_birthday))
    {
        cout << "Invalid birthday. Please type again!" << endl;
        cout << "Enter Birthday (must follow format DD/MM/YYYY): ";
        in >> user.m_birthday;
    }

    cout << "Enter total posts (integer and >= 0): ";
    in >> user.m_total_posts;
    while(!isValidPosts(user.m_total_posts))
    {
        cout << "Invalid number of posts. Please type again!" << endl;
        cout << "Enter total posts (integer and >= 0): ";
        in >> user.m_total_posts;
    }
    //cin.ignore();
    return in;
}

ostream &operator<<(ostream &out, const User &user)
{
    out << left;
    out << setw(5) << user.m_account << "   | ";
    out << setw(15) << user.m_name << "     | ";
    out << setw(15) << user.m_birthday << "     | ";
    out << setw(15) << user.m_total_posts << '\n';
    return out;
}
