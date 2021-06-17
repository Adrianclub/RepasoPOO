
#ifndef Course_h

#define Course_h
#include<string>
using std::string;
class Course{
	private:
		int identifier;
		string name;

	public:
	Course();
		Course(int identifier, string name);
		Course (const Course& otroCourse);
		~Course();
		void setIdentifier(int idendifier);
		void setName(string name);

		int getIdentifier();
		string getName();

};



#endif


