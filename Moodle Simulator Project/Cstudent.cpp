#include "Cstudent.h" 
#include <iostream>
# include <string.h>

using namespace std;
using namespace cclass;


void Cstudent::setnew(int num_courses){ // this function that take from the user the num_courses to access it in the main 
    courses= num_courses;//this will put the value of the num_course to the courses 
}
int Cstudent:: getnew(){ // this function will return the value of the number of the courses 
    return courses;
}

void Cstudent:: setCstudent_name(char x[50]){ // this function will take from the user the value of the x 
Cstudent_name[50]=x[50]; // this will put the value of the x to Cstudent_name to access it because, it is private variable 
}
char Cstudent::  getCstudent_name(){// this function will return you the value of the student name
return Cstudent_name[50];
}

void Cstudent:: setCstudent_email_password(char y[10]){// this function will take from the user the value of the y
Cstudent_email_password[10]=y[10]; // this will put the value of the y to Cstudent_email_password to access it because, it is private variable
}
char Cstudent:: getCstudent_email_password(){// this function will return you the value of the Cstudent_email_password
return Cstudent_email_password[10];
}

void Cstudent::setCstudent_major(char z[10]){ // this function will take from the user the value of the z
Cstudent_major[10]=z[10];// this will put the value of the y to Cstudent_major to access it because, it is private variable
}
char Cstudent::getCstudent_major(){// this function will return you the value of the Cstudent_major
return Cstudent_major[10];
}

void Cstudent::setCstudent_email_username(char v[10]){ // this function will take from the user the value of the v
Cstudent_email_username[10]=v[10];// this will put the value of the y to Cstudent_email_username to access it because, it is private variable
}
char Cstudent::getCstudent_email_username(){ // this function will return you the value of the Cstudent_email_username
return Cstudent_email_username[10];
}

void Cstudent::setCstudent_ID(int i){ // this function will take from the user the value of the i
Cstudent_ID=i; // this will put the value of the y to Cstudent_ID to access it because, it is private variable
}
int Cstudent:: getCstudent_ID(){ // this will give the Id of each student 
return Cstudent_ID;
}

void Cstudent::setCstudent_grades(float k[5]){ // this will take the value from the user for the k variable 
Cstudent_grades[5]=k[5];// this will store the value of the k to the student grades 
}
float Cstudent::getCstudent_grades(){// this will give the grades of each student 
return Cstudent_grades[5];
}

void Cstudent::setCstudent_score(float b){ // this will take the value of the b from the user and store it to the student score 
Cstudent_score=b;
}
float Cstudent::getCstudent_score(){ // this will give the score of each student for all the grades of the courses 
return Cstudent_score;
}

void Cstudent::registerstudent(){ // this function will take from the user all the information of the student 
    cout<<"Enter student name: ";
    cin>>Cstudent_name;
    cout<<"Enter student email username:";
    cin>>Cstudent_email_username;
    cout<<"Enter student email password:";
    cin>>Cstudent_email_password;
    cout<<"Enter student major:";
    cin>>Cstudent_major;
    cout<<"Enter student ID:";
    cin>>Cstudent_ID;
    cout<<"Enter student grades:";
    
//this for loop will be iterate until the number of the courses is finished each iterate will take the grades of each student 
    for(int i=0;i<courses;i++){ 
        cin>>Cstudent_grades[i]; }
    
   
}

//this is the constructor to make all the varaibles of this class by default by null for all the string and zero for all integer and float 
Cstudent:: Cstudent(){

     

    char x=NULL;
    char y=NULL;
    char z=NULL;
    char v=NULL;

    int i=0;

    float k=0;

    float b=0;

}


float Cstudent::calculateGPA()//Function that loops on the elements of the array student grades and calculates these grades to get the GPA and store it in the variable student score//
    {
       
       float  sum=0;
       for (int i=0;i< courses;i++){
    sum=sum+Cstudent_grades[i];
       }
        sum=sum/100;
    Cstudent_score=sum;
       
        return Cstudent_score;
        
    }


// this function will give you all the information of each student 
void Cstudent::getStudentInfo(){

    cout<<"student name is :"<<Cstudent_name<<endl;
    cout<<"student email username is :"<<Cstudent_email_username<<endl;
    cout<<"student password is :"<<Cstudent_email_password<<endl;
    cout<<"student major is :"<<Cstudent_major<<endl;
    cout<<"student id is :"<<Cstudent_ID<<endl;
    cout<<"The grades are:";

  // this for loop will iterate until the number of the courses finished and each iteration will give the grades of each student   
    for (int u=0;u < courses;u++) {
        cout<<Cstudent_grades[u];
         
     }
     // this will print the score of GPA for each student after end the for loop for all the grades 
     float a= calculateGPA();
     cout<<endl<<"student score is :"<<a<<endl;
    
}