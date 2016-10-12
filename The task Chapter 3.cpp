#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void num1(){
	int gallons;
	cout << "how many gallons of gas that your car can hold ?";
	cin >> gallons;
	int distance;
	cout << "how miles long you can go on a full tank ?";
	cin >> distance;
	int mpg;
	cout << mpg << "miles per gallon";
}

void num2(){
	int classA=15;
	int classB=12;
	int classC=9;
	int ticketA;
	cout << "how many ticket A that was bought?";
	cin >> ticketA;
	int ticketB;
	cout << "how many ticket B that was bought?";
	cin >> ticketB;
	int ticketC;
	cout << "how many ticket C that was bought?";
	cin >> ticketC;
	float income= (classA*ticketA)+(classB*ticketB)+(classC*ticketC);
	cout << "your income is "<< fixed << setprecision(2) << showpoint << income;
}

void num3(){
	double num;
	double total=0;
	double average;
	cout << "input five scores : ";
	for(int i=0;i<5;i++){
		cin >> num;
		total=total+num;	
	}
	average=total/5;
	cout << "your average is : " << fixed << setprecision(2) << average;
}

void num4(){
	string month[3];
	double amountofrain;
	double total;
	double average;
	cout << "enter the three months and amount of rain each month";
	for(int i=0;i<3;i++){
		cin >> month[i];
		cin >> amountofrain;
		total=total+amountofrain;
	}
	average=total/3;
	cout << "the average rainfall for " << month[0] << "," << month[1] << "," << month[2] << " is ";
	cout << fixed << setprecision(2) << average << " inches";
}

void num5(){
	double male;
	cin >> male;
	double female;
	cin >> female;
	double total=male+female;
	cout << male/total*100 << "%" << endl << female/total*100 << "%";
}

void num6(){
	float sugar=1.5;
	float butter=1;
	float flour=2.75;
	float cookies=48;
	float cookiesgoal;
	cout << "how many cookies that you want to make?";
	cin >> cookiesgoal;
	cout << "you need : "<< endl << cookiesgoal/cookies*sugar << " cup of sugar" 
		 << endl << cookiesgoal/cookies*butter << " cup of better" << endl 
		 << cookiesgoal/cookies*flour << " cup of flour";
}

void num7(){ //this program dosen't work :(
	string movie;
	getline(cin,movie);
	float adulticket=10.00;
	float adultsold;
	cin >> adultsold;
	float childsold;
	cin >> childsold;
	float childticket=5.00;
	float gross=(adulticket*adultsold)+(childticket*childsold);
	float net=gross*0.2;
	float paid=gross-net;
	cout << "Movie Name :" << setw(6) << movie << endl
		 << "Adult Ticket Sold : " << setw(6) << adultsold << endl
		 << "Child Ticket Sold : " << setw(6) << childsold << endl
		 << "Gross Box Office Profit : " << setw(6) << fixed << setprecision(2) << showpoint << gross << endl
		 << "Net Box Office Profit : " << setw(6) << fixed << setprecision(2) << showpoint << net << endl
		 << "Amount Paid To Distribute : " << setw(6) << fixed << setprecision(2) << showpoint << paid << endl;
}

void num8(){
	float widget=12.5;
	float pallet;
	cin >> pallet;
	int many=pallet/widget;
	cout << many << " widgets that you can put.";
}

void num9(){
	int caloriespercookie=100;
	int cookie;
	cin >> cookie;
	int calories=cookie*caloriespercookie;
	cout << calories;
}

void num10(){
	float cost;
	cin >> cost;
	float percent=0.8;
	float insurance=cost*0.8;
	cout << insurance;
}

void num11(){
	int loan;
	int insurance;
	int gas;
	int oil;
	int tires;
	int maintenance;
	cin >> loan >> insurance >> gas >> oil >> tires >> maintenance;
	int total=loan+insurance+gas+oil+tires+maintenance;
	int annualtotal=total*12;
	cout << total << endl << annualtotal;
}

void num12(){
	float c;
	cin >> c;
	float f=(9/5)*c+32;
	cout << f;
}

void num13(){
	double usdtoeur=0.906287;
	double usdtoyen=103.853;
	double usd;
	cin >> usd;
	double eur=usd*usdtoeur;
	double yen=usd*usdtoyen;
	cout << eur << endl << yen;
}


int main(){
	int choice;
	cout << "choose on of the programs :"<< endl;
	cin >> choice;
	switch (choice){
		case 1: num1();break;
		case 2: num2();break;
		case 3: num3();break;
		case 4: num4();break;
		case 5: num5();break;
		case 6: num6();break;
		case 7: num7();break;
		case 8: num8();break;
		case 9: num9();break;
		case 10: num10();break;
		case 11: num11();break;
		case 12: num12();break;
		case 13: num13();break;
s	}
	return 0;
}
