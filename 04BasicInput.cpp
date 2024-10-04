#include <iostream>

using namespace std;

int main ()
{
	string name, school, course ;
	
	cout << "Nickname: " ;
    cin >> name;	
	cout << "Course-Year Level: " ;
	cin >> course;
	cout << "School: " ;
	cin >> school;
	cout << endl;
	
	cout << "Wow Congrats " << name << "! " << course << " is a nice course. And you are trying in " << school << " which is one of the Center of Excellence in Tertairy " << endl; 
	
	
	return 0;
	
}
