/*This program calculates the GPA over 1 semester. Made by TheLevic. 
Huge shoutout to ThatOneGuy1475 for helping witht the algorithm*/
//Inclusions
#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;
//Declare Variables
float class1 = 0.0; //Calculating GPA for up to 5 classes
float class2 = 0.0;
float class3 = 0.0;
float class4 = 0.0;
float class5 = 0.0;
int choice = 0;
float total_credit_hours; //Need this to calculate GPA for each class
float credit_hours1 = 0.0; //Need the credit hours to calculate the correct GPA
float credit_hours2 = 0.0;
float credit_hours3 = 0.0;
float credit_hours4 = 0.0;
float credit_hours5 = 0.0;
float Gpa_Class1 = 0.0; //Individual GPA for each class
float Gpa_Class2 = 0.0;
float Gpa_Class3 = 0.0;
float Gpa_Class4 = 0.0;
float Gpa_Class5 = 0.0;

//Calculate the GPA for each class
float CalculateGPA(const float Grade, const float Hours){
    float total_grade_points;
    float GPA;
    total_grade_points = Grade * Hours;
    return total_grade_points;
}

//Get all info for calculations
float GetGpa(){
    while (choice != 9){
        //Outputting Menu and Directions
        cout << "Please input exact grades and credit hours for each class below! (i.e 93,71,80..)\n"
             << "----------------------------------------------------------\n"
             << "1. Class 1\n"
             << "2. Class 2\n"
             << "3. Class 3\n"
             << "4. Class 4\n"
             << "5. Class 5\n"
             << "9. Exit\n";
        cin >> choice;
        //Allowing grade and credit hour input
        switch(choice){
        case 1: cout << "Please enter your 1st class grade: ";
                cin >> class1;
                if (class1 >= 90 && class1<= 100){
                    class1 = 4.0;
                }
                else if (class1 >= 80 && class1 <= 89){
                    class1 = 3.0;
                }
                else if (class1 >= 70 && class1 <= 79){
                    class1 = 2.0;
                }
                else if (class1 >= 60 && class1 <= 69){
                    class1 = 1.0;
                }
                else if (class1 < 60 && class1 >=0){
                    class1 = 0.0;
                }
                else{
                    cout << "This is an invalid input. Please choose option 1 and try again.";
                }
                cout << "\nHow many credit hours is this class: ";
                cin >> credit_hours1;
                Gpa_Class1 = CalculateGPA(class1,credit_hours1);
        break;
        case 2: cout << "\nPlease enter your 2nd grade: ";
                cin >> class2;
                if (class2 >= 90 && class2<= 100){
                    class2 = 4.0;
                }
                else if (class2 >= 80 && class2 <= 89){
                    class2 = 3.0;
                }
                else if (class2 >= 70 && class2 <= 79){
                    class2 = 2.0;
                }
                else if (class2 >= 60 && class2 <= 69){
                    class2 = 1.0;
                }
                else if (class2 < 60 && class2 >=0){
                    class2 = 0.0;
                }
                else{
                    cout << "This is an invalid input. Please choose option 1 and try again.";
                }
                cout << "\nHow many credit hours is this class: ";
                cin >> credit_hours2;
                Gpa_Class2 = CalculateGPA(class2,credit_hours2);
        break;
        case 3: cout << "\nPlease enter your 3rd grade: ";
                cin >> class3;
                if (class3 >= 90 && class3<= 100){
                    class3 = 4.0;
                }
                else if (class3 >= 80 && class3 <= 89){
                    class3 = 3.0;
                }
                else if (class3 >= 70 && class3 <= 79){
                    class3 = 2.0;
                }
                else if (class3 >= 60 && class3 <= 69){
                    class3 = 1.0;
                }
                else if (class3 < 60 && class3 >=0){
                    class3 = 0.0;
                }
                else{
                    cout << "This is an invalid input. Please choose option 1 and try again.";
                }
                cout << "\nHow many credit hours is this class: ";
                cin >> credit_hours3;
                Gpa_Class3 = CalculateGPA(class3,credit_hours3);
        break;
        case 4: cout << "\nPlease enter your 4th grade: ";
                cin >> class4;
                if (class4 >= 90 && class4<= 100){
                    class4 = 4.0;
                }
                else if (class4 >= 80 && class4 <= 89){
                    class4 = 3.0;
                }
                else if (class4 >= 70 && class4 <= 79){
                    class4 = 2.0;
                }
                else if (class4 >= 60 && class4 <= 69){
                    class4 = 1.0;
                }
                else if (class4 < 60 && class4 >=0){
                    class4 = 0.0;
                }
                else{
                    cout << "This is an invalid input. Please choose option 1 and try again.";
                }
                cout << "\nHow many credit hours is this class: ";
                cin >> credit_hours4;
                Gpa_Class4 = CalculateGPA(class4,credit_hours4);
        break;
        case 5: cout << "\nPlease enter your 5th grade: ";
                cin >> class5;
                if (class5 >= 90 && class5<= 100){
                    class5 = 4.0;
                }
                else if (class5 >= 80 && class5 <= 89){
                    class5 = 3.0;
                }
                else if (class5 >= 70 && class5 <= 79){
                    class5 = 2.0;
                }
                else if (class5 >= 60 && class5 <= 69){
                    class5 = 1.0;
                }
                else if (class5 < 60 && class5 >=0){
                    class5 = 0.0;
                }
                else{
                    cout << "This is an invalid input. Please choose option 1 and try again.";
                }
                cout << "\nHow many credit hours is this class: ";
                cin >> credit_hours5;
                Gpa_Class5 = CalculateGPA(class5,credit_hours5);
        break;
        case 9: cout << "Calculating\n"
                     << "--------------------------------------------\n"
                     << "--------------------------------------------\n";
        break;
        default: cout << "Error, please select a valid option.\n";
        }
    }
    return 0;
}


//Calculate Total GPA
float CalculateTotalGPA(){
            float total_gpa = (Gpa_Class1 + Gpa_Class2 + Gpa_Class3 + Gpa_Class4 + Gpa_Class5) / total_credit_hours;
            return total_gpa;
        }

int main(){
    float total_gpa;
    char exit;
    //Introduction
    cout << "Welcome to the semester Grade Calculator! Please input your total number of credit hours: ";
    cin >> total_credit_hours;
    cout << "\nGreat! Let's move on.\n";
    //Function Calls
    GetGpa();
    total_gpa = CalculateTotalGPA();
    cout << "Your GPA for the semester is: " << total_gpa << endl;
    cout << "Type q to exit\n";
    cin >> exit;
return 0;
}