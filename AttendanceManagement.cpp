#include "AttendanceManagement.hpp"
#include <fstream>
#include<iostream>
using  namespace std;

AttendanceManagement::AttendanceManagement(){}

AttendanceManagement::AttendanceManagement(Course course, Student student){
        this->course = course;
        this->student = student;
  }
AttendanceManagement::~AttendanceManagement(){}

void AttendanceManagement::setCourse( Course course){
       this->course = course;

  }
void AttendanceManagement::setStudent( Student student){
       this->student = student;

  }

  Course AttendanceManagement:: getCourse(){
       return course;

  }

   Student AttendanceManagement:: getStudent(){
       return student;

  }
  void AttendanceManagement:: takeAttendance(Student* student, Course* course,string datetime,bool state){
    ofstream attendance;
    int id  =student->getIdentifier();
    attendance .open ("attendance.csv",ios::out);
    if (attendance.fail()){
            cout<< "No se  abrio el archivo";
            exit (1);
             }
     attendance<<" %i;%s; %s; %i;%s;%s;%i",id, student->getName(), student->getSurname(),
                 course->getIdentifier(), course->getName(),
                 datetime, true;
    attendance.close();
  }
//
