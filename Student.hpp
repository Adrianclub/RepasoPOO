
#ifndef Student_hpp
#define Student_hpp
#include<string>
using std::string;
class Student{
	private:
		int identifier;
		string name;
		string surname;
	public:
   		Student();
		Student(int identifier, string name, string surname);
		Student(const Student &otroStudent);
		~Student();
		void setIdentifier(int idendifier);
		void setName(string name);
		void setSurname(string surname) ;
		int getIdentifier();
		string getName();
		string getSurname();
};


#endif

