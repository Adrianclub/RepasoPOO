

#include "Student.hpp"


Student::Student(int identifier, string name, string surname){
	this->identifier = identifier;
	this->name = name;
	this->surname = surname;
}
Student::Student(const Student &otroStudent){
	 name = otroStudent.name;
	 identifier = otroStudent.identifier;
	 surname = otroStudent.surname;

}

 Student::Student(){
	 name= " ";
	 surname= " ";
	 identifier = 0;
 }

 Student::~Student(){}

void Student:: setIdentifier(int idendifier){
	this->identifier = identifier;
}

void Student:: setName(string name){
	this->name = name;
}

void Student:: setSurname(string surname){
	this->surname = surname;
}

int Student:: getIdentifier(){
	return identifier;
}

string Student:: getName(){
	return name;
}

string Student:: getSurname(){
	return surname;
}

