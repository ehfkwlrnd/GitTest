#include <iostream>
#include <algorithm>
using namespace std;


struct Student{
	string name;
	int score;
	
	Student(string name, int score){
		this->name = name;
		this->score = score;
	}
};

bool compare(Student a, Student b){
	return a.score < b.score;
}

int main()
{
	Student students[] = {
		Student("Hail", 30),
		Student("Mail", 20),
		Student("Fail", 60),
		Student("Wail", 10),
	};
	sort(students, students+4, compare);
	for(int i = 0; i < 4; i++)
		cout << students[i].name << ' ';
}
