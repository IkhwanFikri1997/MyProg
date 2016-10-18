#include <iostream>
#include <string>
using namespace std;

struct soccer {
	string name;
	int number;
	int scored;
};

int main(){
	soccer team[12];
	int i;
	cout << "please input player's name, player's number, and How many he scored each of 12 player" << endl;
	for(i=0;i<12;i++){
		getline(cin,team[i].name);
		cin >> team[i].number;
		cin >> team[i].scored;
	}
	cout << endl;
	cout << "======================" << endl;
	for (i=0;i<12;i++){
		cout << "| " << team[i].name << " | " << team[i].number << " | " << team[i].scored  << " |" << endl;
	}
	cout << "======================" << endl;
	return 0;
}
