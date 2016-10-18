#include <iostream>
#include <string>
using namespace std;

struct companydivision{
	string divisionname;
	int firstquarter;
	int secondquarter;
	int thirdquarter;
	int fourthquarter;
	int totalannual;
	int averagequarterly;
};

void PrintStruct(companydivision);

int main(){
	companydivision east;
	east.divisionname="east";
	cout << "Please put four cost each quarter at east division " << endl;
	cin >> east.firstquarter;
	cin >> east.secondquarter;
	cin >> east.thirdquarter;
	cin >> east.fourthquarter;
	companydivision north;
	cout << "Please put four cost each quarter at north division " << endl;
	north.divisionname="north";
	cin >> north.firstquarter;
	cin >> north.secondquarter;
	cin >> north.thirdquarter;
	cin >> north.fourthquarter;
	companydivision west;
	cout << "Please put four cost each quarter at west division " << endl;
	west.divisionname="west";
	cin >> west.firstquarter;
	cin >> west.secondquarter;
	cin >> west.thirdquarter;
	cin >> west.fourthquarter;
	companydivision south;
	cout << "Please put four cost each quarter at south division " << endl;
	south.divisionname="south";
	cin >> south.firstquarter;
	cin >> south.secondquarter;
	cin >> south.thirdquarter;
	cin >> south.fourthquarter;
	PrintStruct(east);
	PrintStruct(north);
	PrintStruct(west);
	PrintStruct(south);
}

void PrintStruct(companydivision division){
	division.totalannual=division.firstquarter+division.secondquarter+division.thirdquarter+division.fourthquarter;
	division.averagequarterly=division.totalannual/4;
	cout << "Division name : " << division.divisionname << endl
		 << "First quarter sales : " << division.firstquarter << endl
		 << "Second quarter sales : " << division.secondquarter << endl
		 << "Third quarter sales : " << division.thirdquarter << endl
		 << "Fourth quarter sales : " << division.fourthquarter << endl
		 << "Total annual sales : " << division.totalannual << endl
		 << "Average quarterly sales : " << division.averagequarterly << endl
		 << endl;
}
