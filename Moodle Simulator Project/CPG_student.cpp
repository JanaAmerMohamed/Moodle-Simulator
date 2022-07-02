
#include<iostream>
using namespace std;


void  CPG_Student:: setpg_student_job_title(char z[20]){ // set function will take z variable from the user to put it iniside the job title 

pg_student_job_title[20] =z[20]; //z variable will put the value  in the job title  


}

void CPG_Student:: funjob(){ // this function will take the value of the job 
    cout<<"entre the job:";
    
    cin>>pg_student_job_title;
}


char  CPG_Student:: getpg_student_job_title(){  // get function will return the job title 
return pg_student_job_title[20] ;
}

void CPG_Student:: getjob(){ // this function to return the job title 
    
    cout<<"the job is:"<<pg_student_job_title;
}