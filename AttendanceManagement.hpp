#ifndef AttendanceManagement_hpp
#define AttendanceManagement_hpp
#include "Course.hpp"
#include "Student.hpp"
#include  <fstream>
using std::string;
class AttendanceManagement {
	private:
		Course course;
		Student student;

	public :
		AttendanceManagement();
		~AttendanceManagement();
		AttendanceManagement(Course course,Student student);
		void setCourse( Course course);
		void setStudent( Student student);
		Course getCourse();
		Student getStudent();
		void takeAttendance(Student* student, Course *course,string datetime,bool state);
};


#endif
