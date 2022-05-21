/** Machine problem:
Write a program that will compute the general point average of a BSCS student to determine if
he/she is qualified to be an honor student.

Requirement:
A BSCS student must complete all of the subject given for a semester. 
The subjects are GEMATHW,GELIFEWR,GEARTAPP,GEKOMFIL,NTROCOMP,FPROGLEC,FPROGLAB,
GEPEMOVE,NSTPROG1. All subjects is a 3-unit course except GEPEMOVE(2 units). 
A student must have a grade not lower than 2.25 to be consider as academic honor candidate. 
A grade must be ranging from 1.0 to 2.25. No dropped or inc grade.

Specifications:
There must be your own exception handling to perform when a user enters a grade that is out of
range. It signifies that the student will not be allowed to be a candidate. If the inputs are accepted
based on the given requirements, compute the student average grade, and an “ACCEPTED”
remark. If not, the remark will be “DENIED”.
To compute for the GPA, get the sum of the products of the grade and the corresponding number
of units per course. The sum must be divided to the total number of units earned. **/

#include <iostream>
#include <limits>
#include <iomanip>

using namespace std;

int main() {
    char want_to_continue, inc_grade, drop_student;
    string student_name, student_course;
    string subjects[9] = {"GEMATHW", "GELIFEWR", "GEARTAPP", "GEKOMFIL", "NTROCOMP", "FPROGLEC", "FPROGLAB", "GEPEMOVE", "NSTPROG1"};
    float grades[9], total_average, partial_total;

    cout << "\n\t\t\t-----WELCOME TO THIS PROGRAM!-----\n";
    cout << "\t\tThis Program Made By Hanah Mae T. Duran - BSCS1\n";
    cout << "\n\t\t\t\t\t*****" <<endl;
    
    do {
        cout << "\n\nPlease Enter Your Name: ";
        cin >> student_name;
      
        cout << "\nPlease Enter Your Course: ";
        cin >> student_course;
            
        cout <<"\n--------------------------------------------------------------------------" <<endl;

        for(int i = 0; i <= 8; i++) {
            cout <<subjects[i] << ": ";
            cin >> grades[i];

        if(!cin) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            break;
        } else {
            if(grades[i] >= 1.00 && grades[i] <= 2.25) {
                if(subjects[i] == "GEPEMOVE") {
                   partial_total = (grades[i] * 2);
                } else {
                   partial_total = (grades[i] * 3);
                }
            } else {
                break;
            }
                total_average += partial_total / 26;
            }
        }  
        
        if(total_average >= 1.0 && total_average <= 2.25) {
            cout <<"--------------------------------------------------------------------------" <<endl;
            cout << "The Name of the Student is: " << student_name << endl;
            cout << "The Student Course is: " << student_course << endl;

            cout << "\nThe Average of" <<" " <<student_name <<" " <<"is: " <<setprecision(3) << total_average;
            cout << "\nRemarks: ACCEPTED";
        }
        else if (inc_grade && drop_student){
            cout <<"--------------------------------------------------------------------------" <<endl;
            cout << "The Name of the Student is: " << student_name << endl;
            cout << "The Student Course is: " << student_course << endl;

            cout << "\nRemarks: DENIED" <<endl;
            cout <<"--------------------------------------------------------------------------" <<endl;
        }
        else {
            cout <<"--------------------------------------------------------------------------" <<endl;
            cout << "The Name of the Student is: " << student_name << endl;
            cout << "The Student Course is: " << student_course << endl;

            cout << "\nRemarks: DENIED" <<endl;
            cout <<"--------------------------------------------------------------------------" <<endl;
        }

        cout << "\nDO YOU WANT TO CONTINUE?: ";
        cin >> want_to_continue;
        
    } while(tolower(want_to_continue) == 'y');
        cout << "\nThank you for using the program!";

  return 0;
}

