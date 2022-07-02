#include<iostream> 
#ifndef CSTUDENT
#define CSTUDENT
using namespace std;
namespace cclass {
    class Cstudent { // this is class called Cstudent to take some different varable for each student.

    private: //the access modifier is private which make the user not deal with it 
        char Cstudent_name[50]; //// this is a variable called  Cstudent_name which is string
        char Cstudent_email_password[10]; // this is a variable called Cstudent_email_password which is string
        char Cstudent_major[10]; // this is a variable called Cstudent_major which is string 
        char Cstudent_email_username[10]; // this is a variable called Cstudent_email_username which is string 
        int  Cstudent_ID; // this is a variable called Cstudent_ID which is integer
        float Cstudent_grades[5]; // this is a variable called Cstudent_grade which is float
        float Cstudent_score; // this is a variable called Cstudent_score which is float
        int courses;  // this is a variable called courses which is integer
    public:

        //set functions all there type is void because, it does not return things it take values from the user 
        inline void setnew(int num_courses); // this set function will take from the user the value of the num_courses
        inline void registerstudent(); // this function will take all the information of the each student
        inline void getStudentInfo(); // this function will give you all the information of the student 
        inline float calculateGPA(); // this function will return you the value of the GPA which is float 
        inline void setCstudent_name(char x[50]); // this function will take from the user the value of the x 
        inline void setCstudent_email_password(char y[10]); // this function will take from the user the value of the y
        inline void setCstudent_major(char z[10]);// this function will take from the user the value of the z
        inline void setCstudent_email_username(char v[10]); //this function will take from the user the value of the v
        inline void setCstudent_ID(int i); //this function will take from the user the value of the i
        inline void setCstudent_grades(float k[5]); //this function will take from the user the value of the k
        inline void setCstudent_score(float b); //this function will take from the user the value of the b

        //get functions will give you all values that you put it in the set function 
        inline int getnew(); // this function will return int and give you the number of the courses 
        inline char getCstudent_name(); // this function will return char and give you the student_name
        inline char getCstudent_email_password(); // this function will return char and give you the Cstudent_email_password
        inline char getCstudent_major(); // this function will return char and give you the Cstudent_major  
        inline char getCstudent_email_username(); // this function will return char and give you the  username 
        inline int  getCstudent_ID(); // this function will return char and give you the id of each student 
        inline float getCstudent_grades(); // this function will return char and give you the grades of each course 
        inline float getCstudent_score(); // // this function will return char and give you the score of each student 

       
            
            Cstudent(); // this is a constructor.
             
    
};

        

    }

    #endif