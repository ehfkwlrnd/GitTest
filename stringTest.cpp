#include <iostream>
#include <string>
using namespace std;

string datacal(string start, string end){
	string answer = "";
	int stime = 0;
	int etime = 0;

	if(start.substr(0,2) == "PM")stime += 3600*12;
	if(end.substr(0,2) == "PM")etime += 3600*12;
	
	stime += 3600*stoi(start.substr(3,2));
	etime += 3600*stoi(end.substr(3,2));
	
	stime += 60*stoi(start.substr(6,2));
	etime += 60*stoi(end.substr(6,2));
	
	stime += stoi(start.substr(9,2));
	etime += stoi(end.substr(9,2));
	
	cout << stime << endl;
	cout << etime << endl;
	
	int time = etime-stime;
	if(time < 0) time = 24*3600 + time;
	
	cout << time << endl;
	
	string hour = to_string(time/3600);
	if(hour.length() == 1) hour = "0" + hour;
	time %= 3600;
	
	string min = to_string(time/60);
	if(min.length() == 1) min = "0" + min;
	time %=60;
	
	string sec = to_string(time);
	if(sec.length() == 1) sec = "0" + sec;
	
	answer = hour + ":" + min + ":" + sec;
	
	return answer;
}

int main()
{
	cout << datacal("AM 11:59:59", "AM 00:00:01");
}
