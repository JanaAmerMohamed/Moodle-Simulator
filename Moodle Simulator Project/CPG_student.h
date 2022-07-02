#include "Cstudent.h"  

class  CPG_Student : public  Cstudent{ // inherit from class Cstudent to the class CPG_student
private:  // the acess modifier is private not acsess for the user to deal with it  
char pg_student_job_title[20]; // pg_student_job_title is string and it is private 

// doing these functions to make all the private variable public to make the user work with it 

public: // the acess modifier is public it is allow for user
void funjob(); // this is a declaration  for the fun job to take the value of the job 
void setpg_student_job_title(char z[20]); // this is a a set function to make the job title public to make the user work with it 
                                         // inside this function there is a declaration for a new variable 

char getpg_student_job_title();// this is a get function that return the job title which is data type is char.

void getjob(); // this is a declaration for the get job function to return the value of the job 
};