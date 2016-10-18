#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MovieData {
	string title;
	string director;
	int year;
	int time;
};

void PrintStruct(MovieData);

int main(){
	MovieData Mov1;
	Mov1.title = "Doom : The Movie";
	Mov1.director = "Reoger Ribinson";
	Mov1.year = 1827;
	Mov1.time = 18;
	MovieData Mov2;
	Mov2.title = "Master Baster";
	Mov2.director = "Ben Afalect";
	Mov2.year = 1892;
	Mov2.time = 38;
	PrintStruct(Mov1);
	PrintStruct(Mov2);
	return 0;
}

void PrintStruct(MovieData Movie){
cout<< "Title : "<< Movie.title<< endl
	 << "Director : " << Movie.director << endl
	 << "Year Released : " << Movie.year <<endl
	 << "Running Time (in minutes) : " << Movie.time << endl;
	 
cout << endl;	 
}
