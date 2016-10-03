<<<<<<< HEAD
#include<iostream>
using namespace std;

// Create functions
int NumberEmployees();
int NumberDays(int);
double AverageAbsent(int, int);

int main()
{	
	// Declare Variables
	int employees;
	int days;
	double average;
	employees=NumberEmployees();
	days=NumberDays(employees);
	average=AverageAbsent(employees,days);
	
	cout<<"\nThe average number of days that employees are absent is : "<<average<<endl;
	
	return 0;
}

int NumberEmployees(){
	int a;           // variable a means input employees
	cout<<"Number of Employee : ";
	cin >> a;        // a = user input employee
		if (a < 1){
			cout << "invalid data";
		}
	return a;
}

int NumberDays(int a){
	int j=0; // variable j means total number of days absent
	int b; // variable b means input absent
	for(int i=1;i<=a;i++){
		cout << "How many days that Employee "<<i<< " missed? ";
		cin >> b;    // b = user input absent
		if (b<0){
			cout << "invalid data";
		}
		j=j+b;
	}
	return j;
}

double AverageAbsent(int a,int b){
	double average;
	average=(double)b/a;
	
	return average;
}
=======
int NumberEmployees(int a){
	cin a;
		if (a < 1){
			cout << "invalid data";
		}
}

int NumberDays(int a,int b){
	for(int i=1;i<=a;i++){
		cout << "How many days that employee" << i << " missed?";
		cin >> b;
		if (b<0){
			cout << "invalid data";
		}
	}
}

int AverageAbsent(int a,int b){
	int j;
	j=b/a;
}
>>>>>>> b9982edcd7ff61a9b0e0dd1e3d78b558f734b66f
