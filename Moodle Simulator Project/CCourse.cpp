#include "CCourse.h" 
#include<iostream>
#include<stdio.h>
using namespace std;
using namespace xclass;

void CCourse:: setnew_cost(int w){
    new_cost=w;
}
int CCourse:: getnew_cost(){
    return new_cost;
}
void CCourse:: setcourse_name(char name[20]){
course_name[20]=name[20];
}
char CCourse:: getcourse_name(){
return course_name[20];
}
void CCourse:: setcourse_code(char code[5]){
course_code[5]=code[5];

}
char CCourse:: getcourse_code(){
return course_code[5];
}
void CCourse::setcourse_cost(float cost[5]){
course_cost[5]=cost[5];
}
float CCourse::getcourse_cost(){
return course_cost[5];
}

void CCourse:: AddCourse(){
    printf("Enter the value of course name: \n");
    scanf("%s",course_name);
    printf("enter the course code: \n");
    scanf("%s",course_code);
    printf("enter the course cost: \n");
    
    for(int j=0;j<1;j++){
    scanf("%f",&course_cost[j]);}
}


/*void CCourse::  AddCourse(){
    cout<<"entre the value of course name"<<endl;
    cin>> setcourse_name( name[20]);
    cout<<"entre the value of course code"<<endl;
    cin>>course_code[5];
    cout<<"entre the value of course cost"<<endl;
    cin>>course_cost[5];
}*/



void CCourse::getCourseinfo(){
    /*
    cout<<course_name[20]<<endl;
    cout<<course_code[5]<<endl;
    cout<<course_cost[5]<<endl;
*/

printf("course name is:  %s\n",course_name);
printf("course code is:  %s\n",course_code);
printf("The course cost is:\n");

for (int e=0;e < 1;e++) {
         printf("%.2f\n",course_cost[e]);
     }
}