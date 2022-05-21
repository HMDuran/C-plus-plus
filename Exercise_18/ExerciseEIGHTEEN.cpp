/* Write C++ statements to do the following:

	   | 1ST YEAR	| 2ND YEAR | 3RD YEAR	|  4TH YEAR
BSIT |  130	    |   125	   |    100	  |    50
--------------------------------------------------
BSCS |  192	    |   170	   |     60	  |    40
--------------------------------------------------
ACT	 |  120	    |   105	   |     90	  |    80

Analyze the given table above and write a C++ program to do the following:
1.	Compute the total number of students in CITCS department
2.	Compute the total number of ACT students
3.	Compute the total number of 2nd year BSIT students
4.	Compute the total number of 4th year BSCS students
5.	Compute the total number of all 1st year students in CITCS department
*/ 

#include<iostream>
using namespace std;

int main() {
    int citcs_students [3][4] = { {130,125,100,50}, {192,170,60,40}, {120,105,90,80}};
    
    cout << "\nSTUDENTS IN CITCS DEPARTMENT" << endl << endl;
    cout << "=============================\n";

    for(int year_row = 0; year_row < 3; year_row ++) {
        for(int course_cols = 0; course_cols < 4; course_cols++) {
          
          cout << citcs_students [year_row][course_cols] <<"\t";
      }
        cout << endl << endl << endl;
    }
  
    cout << "TOTAL NUMBERS OF STUDENTS IN CITCS DEPARTMENT";

    int all_citcs_students = 0;

    for(int year_row = 0; year_row < 3; year_row++) {
      for(int course_cols = 0; course_cols < 4; course_cols++) {
        
        all_citcs_students += citcs_students[year_row][course_cols];
      }
    }
  
    cout<<"\n\n -> The Total Numbers of students in CITCS Department is: " << all_citcs_students;
  
    cout << "\n\n\nTOTAL NUMBERS OF ACT STUDENTS";
    
    int act_students = 0;
    int year_row = 2;

    for(int course_cols = 0; course_cols < 4; course_cols++) {
        act_students += citcs_students[year_row][course_cols];
    }
  
    cout << "\n\n -> The Total Numbers of the ACT STUDENTS is: " << act_students;
    
    cout << "\n\n\nTOTAL NUMBERS OF 2ND YEAR BSIT STUDENTS";

    int course_cols = 1;
    int yr_row = 0;

    for(int yr_row = 0; yr_row < 3; yr_row++) {
        for(int course_cols = 0; course_cols < 4; course_cols++){
      }
    }
    cout << "\n\n -> The Total Numbers of 2nd Year of BSIT Students is: " << citcs_students[yr_row][course_cols];

    cout << "\n\n\nTOTAL NUMBERS OF 4TH YEAR BSCS STUDENTS";

    int crse_cols = 3;
    int taon_row = 1;
    for(int taon_row = 0; taon_row < 3; taon_row++) {
        for(int crse_cols = 0; crse_cols < 4; crse_cols++){
      }
    }
    cout << "\n\n -> The Total Numbers of 2nd Year of BSCS Students is: " << citcs_students[taon_row][crse_cols];

    cout << "\n\n\nTOTAL NUMBERS OF THE 1ST YEAR STUDENTS IN CITCS DEPARTMENT";
    
    int citcs1_students = 0;
    int kurso_cols = 0;

    for(int yr_row = 0; yr_row < 3; yr_row++) {
        citcs1_students += citcs_students[yr_row][kurso_cols];
    }
  
    cout << "\n\n -> The Total Numbers of the 1ST YEAR STUDENTS IN CITCS DEPARTMENT is: " << citcs1_students;

    return 0;
}