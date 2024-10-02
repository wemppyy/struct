#include <iostream>
#include <sstream>
using namespace std;

//struct Slavik {
//    std::string name;
//    std::string surname;
//    int age;
//    float height;
//    float weight;
//    float iq;
//    float shoe_size;
//    std::string skin_color;
//    std::string hair_color;
//    std::string eyes_color;
//    bool is_alive;
//    bool is_student;
//    std::string nationality;
//    std::string address;
//    std::string phone_number;
//    std::string email;
//    std::string education_level;
//    bool smokes;
//    bool drinks_alcohol;
//	string gender;
//	string orientation;
//
//	void print() {
//		cout << "Name: " << name << endl;
//		cout << "Surname: " << surname << endl;
//		cout << "Age: " << age << endl;
//	}
//};

struct Student {
private:
	string _name;
	string _surname;
	int _age;
	int _average_mark;
	string _gender;
	int _avarage_attendance;

	string _get_object_as_string() const
	{
		stringstream ss;
		ss << "Student object <" << (void**)this << ">: " << endl;
		return ss.str();
	}
	void set_default_object() {
		_name = "NULL";
		_surname = "NULL";
		_gender = "NULL";

		_age = NULL;
		_average_mark = NULL;
		_avarage_attendance = NULL;
	}

public:
	Student() { // constructor - default
		cout << "Call default constructor of object Student " << _get_object_as_string() << endl;
		set_default_object();
	}

	Student(string name) : Student() {
		cout << "Call constructor with parameters of object Student " << _get_object_as_string() << endl;
		set_name(name);
	}
	
	Student(string name, string surname) : Student(name) {
		cout << "Call constructor with parameters of object Student " << _get_object_as_string() << endl;
		set_surname(surname);
	}

	Student(string name, string surname, string gender) : Student(name, surname) {
		cout << "Call constructor with parameters of object Student " << _get_object_as_string() << endl;
		set_gender(gender);
	}

	Student(string name, string surname, string gender, int age) : Student(name, surname, gender) {
		cout << "Call constructor with parameters of object Student " << _get_object_as_string() << endl;
		set_age(age);
	}

	Student(string name, string surname, string gender, int age, int average_mark) : Student(name, surname, gender, age) {
		cout << "Call constructor with parameters of object Student " << _get_object_as_string() << endl;
		set_average_mark(average_mark);
	}

	Student(string name, string surname, string gender, int age, int average_mark, int avarage_attendance) : Student(name, surname, gender, age, average_mark) {
		cout << "Call constructor with parameters of object Student " << _get_object_as_string() << endl;
		set_avarage_attendance(avarage_attendance);
	}



	// Setters
	void set_name(string name) { _name = name; }
	void set_surname(string surname) { _surname = surname; }
	void set_gender(string gender) { _gender = gender; }

	void set_average_mark(int average_mark) { _average_mark = average_mark; }
	void set_avarage_attendance(int avarage_attendance) { _avarage_attendance = avarage_attendance; }
	void set_age(int age) { _age = age;}

	// Getters

	string get_name() { return _name; }\
	string get_surname() {return _surname; }
	string get_gender() { return _gender; }

	int get_age() { return _age; }
	int get_average_mark() { return _average_mark; }
	int get_avarage_attendance() { return _avarage_attendance; }
	
	void about() {
		cout << "Name: " << get_name() << endl;
		cout << "Surname: " << get_surname() << endl;
		cout << "Gender: " << get_gender() << endl;
		cout << "Age: " << get_age() << endl;
		cout << "Average mark: " << get_average_mark() << endl;
		cout << "Avarage attendance: " << get_avarage_attendance() << endl;
	}

	~Student() { // destructor
		cout << "Destructor called " << _get_object_as_string() << endl;
	}
};

int main() {

	/*Slavik slavik;
	slavik.name = "Slavik";
	slavik.surname = "Kulbachuk";
	slavik.age = 16;
	slavik.height = 1.90;
	slavik.weight = 65;
	slavik.iq = 120;
	slavik.shoe_size = 45;
    slavik.skin_color = "white";
	slavik.hair_color = "brunette";
	slavik.eyes_color = "aqua gray";
	slavik.is_alive = true;
	slavik.is_student = true;
	slavik.nationality = "Ukrainian";
	slavik.address = "Ukraine, Vinnytsa";
	slavik.phone_number = "+380 63 942 44 69";
    slavik.email = "slavik534226@gmail.com";
	slavik.education_level = "student";
	slavik.smokes = false;
	slavik.drinks_alcohol = true;
	slavik.gender = "Man";
	slavik.orientation = "Heterosexual";

	slavik.print();*/

    Student* student = new Student("Bob", "Bobek", "Male", 15, 9, 9); // call constructor

	// logic
	// about student
	student->about();


	delete student;


	return 0;
}