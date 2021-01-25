#include <iostream>
#include <string>
using namespace std;

class A{
	public:
	string choice;
	
	const char *subjects[5] = { "English Grammar", "Mathematics", "Physics", "Chemistry", "Biology" };
	const char *teachers[5] = { "John Smith", "Lara Gilbert", "Johanna Kabir", "Daniel Robertson", "Larry Cooper"};
	
	void optionA() {
		for(int i = 0; i < 5; i++) {
			cout<<i+1<<". "<<subjects[i]<<endl;
		}
		
		int dayIndex[5] = {0};
		int hourIndex[4] = {0};
		int courseIndex[5] = {0};
		
		for (int i=0; i<4; i++) {
			cout<<"Enter Day Index"<<endl;
			cin>>dayIndex[i];
			cout<<"Enter Hour Index"<<endl;
			cin>>hourIndex[i];
			cout<<"Enter Course Index"<<endl;
			cin>>courseIndex[i];
		}
		
		start(dayIndex, hourIndex, courseIndex);
	}
	
	void optionB(int dayIndex[], int hourIndex[], int courseIndex[]) {
		for (int i = 0; i<4; i++) {
			cout<<dayIndex[i]<<" "<<hourIndex[i]<<" "<<subjects[courseIndex[i]]<<endl;
		}
	}
	void optionC() {
		for(int i = 0; i < 5; i++ ) {
			cout<<subjects[i]<<", "<<teachers[i]<<endl;
		}
	}
	
	void start(int dayIndex[], int hourIndex[], int courseIndex[]) {
		cout<<"A. Create Routine"<<endl;
		cout<<"B. Show Routine"<<endl;
		cout<<"C. List Courses with Teachers Name"<<endl;
		string choice;
		cin>>choice;
	
		if (choice == "C") {
			A obj1;
			obj1.optionC();
		}
	
		else if (choice == "A") {
			A obj1;
			obj1.optionA();
		}
		else if (choice == "B") {
			A obj1;
			obj1.optionB(dayIndex, hourIndex, courseIndex);
		}
	
		else {
			cout<<"Please Enter A/B/C"<<endl;
		}
	}
	
};

int main(int dayIndex[], int hourIndex[], int courseIndex[]) {
	A obj;
	obj.start(dayIndex, hourIndex, courseIndex);

	return 0;
}

