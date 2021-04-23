#include <iostream>
#include <string>
#include "GPA.h"

using namespace std;

void GPA::setGrades(){
    cout << "Please input how many classes you have!" << endl;
    cin >> numClasses;
    cout << "Thank you. Please now input your exact number grades for each class! Input grades." << endl;
    for (int i = 0; i <= numClasses; i++){
        cout << "Please input class " << numClasses + 1 << "'s grade: ";
        cin >> numberGrade[numClasses];
    }
}

void GPA::convert(){
    

    for (int i = 0; i < numClasses; i++){

    } 
}