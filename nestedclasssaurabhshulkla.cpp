#include <iostream>
// A class is called a nested class if it is inside another class. But why do we need nested class? The simple answer is that for e.g. we have a student class where roll no, name and address are its private variables. Now the address variable itself can have many attributes like room no, wing etc so it itself has to be made a class. Also as address is an attribute of a student class thus we have to make address class inside student class. Thus we have done nesting.
// Now after we have made the class , we also need to make its object like we did int rollno.
// Student class object cannot access private variables of the nested class that is address class.
//The members of an enclosing class have no special access to members of a nested class, the usual access rules shall be obeyed.
//A nested class is a member and as such has the same access rights as any other member.
//A nested class function can access the private members of the Student class.
class Student
{
private:
	int rollno;
	std::string name;
	class Address
	{
	private:
		int flatno;
		char wing;
		std::string societyname;
		std::string station;

	public:
		void setaddress1(int fn, char w, std::string sn, std::string s)
		{
			flatno = fn;
			wing = w;
			societyname = sn;
			station = s;
		}

		void displayAddress()
		{
			std::cout << "The address of the student is " << wing << "-" << flatno << "," << societyname << "," << station << std::endl;
		}
	};
	Address add;

public:
	void setaddress(int fn, char w, std::string sn, std::string s)
	{

		add.setaddress1(fn, w, sn, s);//We are able to access add as it is a member of student class.
	}

	Student(int r, std::string n)
	{
		rollno = r;
		name = n;
	}
	void displayData()
	{
		std::cout << "The roll number is " << rollno << std::endl;
		std::cout << "The name is " << name << std::endl;
		add.displayAddress();
	}
};

int main()
{
	//As Address class is a private member of Student class so we cannot access or make its object outside student class.
	//But if Address class were a public member of Student class then we can make its object outside Student class but as it is nested so we will have to use Student:: and then make its object.
	// For e.g. Student::Address a1;

	Student s(10441, "Aditya Singh");
	s.setaddress(604, 'A', "Aastha Sahvas", "Vasai Road");
	s.displayData();

	return 0;
}