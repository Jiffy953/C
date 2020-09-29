#include<iostream>
#include<string>
using namespace std;

class GradeBook
{
    public:
        void displayMessage(string courseName)
        {
            cout << "Welcome to the grade book for " << courseName << endl;
        }
    private:
        string courseName;
};

int main()
{
    string nameOfTheCourse;
    cout << "Please enter the name of the course" << endl;
    getline(cin, nameOfTheCourse);
    GradeBook myGradeBook;
    myGradeBook.displayMessage(nameOfTheCourse);
    return 0;
}