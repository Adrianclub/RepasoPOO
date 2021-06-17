

#include"Course.hpp"

Course::Course(int identifier, string name){
	this->identifier = identifier;
	this ->name = name;
}
Course::Course (const Course& otroCourse){
	identifier = otroCourse.identifier;
	name = otroCourse.name;
}


Course::Course(){
	identifier =0;
	name= " ";
 }

Course::~Course(){

 }


void Course:: setIdentifier(int idendifier){
	 this->identifier = identifier;
}

void Course:: setName(string name){
	 this->name = name;
}


int Course:: getIdentifier(){
	 return identifier;
}

string Course:: getName(){
	 return  name;
}
