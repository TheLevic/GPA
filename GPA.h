#include <iostream>

using namespace std;

class GPA{
    public:
        void setGrades(); //Method for the user to input their grade
        void convert(); //This method is going to convert the Number Grade into a letter grade
        float calculateGPA(); //This method will calculate the gpa.

    private:
        float numberGrade[50];
        int numClasses;
        float letterGrade[50];
        int numClasses;


};
