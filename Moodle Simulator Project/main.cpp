#include<iostream> 
#include "Cstudent.h"
#include "Cstudent.cpp"
#include "CCourse.h"
#include "CCourse.cpp"
#include"CPG_student.h"
# include "CPG_student.cpp"
using namespace std;//declare the namespace of cout and cin
using namespace cclass;//declare the namespace of cstudent class
using namespace xclass;//declare the namespace of ccourse
int main() {
    
    int n_students, n_courses,i,y, n_CPG_students, nn_courses;//intialize some variables
    cout << "Enter Number of undergrade Students: " << endl;//print enter number of students 
    cin >> n_students;
    cout<<"Enter the number of postgrade students"<<endl;
    cin>>n_CPG_students;//take from the user the number of students and put it in n_students
    cout << "Enter Number of undergrade Courses: " << endl;//print enter the number of courses
    cin >> n_courses;
    cout<<"Enter the number of postgrade courses"<< endl;
    cin>>nn_courses;//take from the user the number of courses and put it in n_courses

    CCourse x[n_students][n_courses],xx[ n_CPG_students][nn_courses];//make array of object from ccourses class  
    Cstudent s[n_students];//make array of object from cstudent class
    CPG_Student ss[n_CPG_students]; // make array of object from CPG_student class
    

   for ( i = 0; i < n_students; i++) {//for loop to take the student information
       s[i].setnew(n_courses);// call fnction setnew to set n_courses in it 
       s[i].registerstudent();//call the registerstudent function
       
       for(int y=0 ;y<n_courses;y++) {//for loop to take the student courses
          
          x[i][y].AddCourse();//call the addcourse function
          
        }

        cout<<"----------------------------------------------------------------------------------"<<"\n";

  }
  cout<<endl<<endl;
  

    for (int h=0;h<n_students;h++){//for loop to print each student information that i entered before
       s[h].getStudentInfo(); //call the getStudentInfo function
       cout<<endl;
       for(int y=0 ;y<n_courses;y++) {//for loop to print courses of  each student that i entered before
         x[h][y].getCourseinfo();//call the getCourseinfo function 
         cout<<endl;
        
       }  
         cout<<"----------------------------------------------------------------------------------"<<"\n";
    }
    
    
    for (int i = 0; i < n_CPG_students; i++) {// for loop  to take information of postgraduates students 
        ss[i].setnew(nn_courses);// call fnction setnew to set n_courses in it
         ss[i].registerstudent();//call the registerstudent function
         
         
        for (int j = 0; j < nn_courses; j++) {// for loop  to take courses information of postgraduates students 
         
         xx[i][j].AddCourse();//call the AddCourse function
       }
        ss[i].funjob(); // this to get the value of the job of each student 
       cout<<"----------------------------------------------------------------------------------"<<"\n";
    }

    
    for (int v = 0; v < n_CPG_students; v++) {//for loop to print the student information that i entered before
        
         ss[v].getStudentInfo();//call the getStudentInfo function
         

        for (int i = 0; i < nn_courses; i++) {//for loop to print courses information  of  each student that i entered before
           
            xx[v][i].getCourseinfo();//call the getCourseinfo function 
        }
        ss[v].getjob(); // this to return the value of the job of each student 
        cout<<endl;
       
        cout<<"----------------------------------------------------------------------------------"<<"\n";
    }





    return 0;
}