#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void Num1(){
	int a,b;
	cin >> a >> b;
	if (a<b) {
		cout << b;
	} else {cout << a;
	}
}

void Num2(){
	int num;
	cin >> num;
	switch(num){
		case 1: cout << "I";break;
		case 2: cout << "II";break;
		case 3: cout << "III";break;
		case 4: cout << "IV";break;
		case 5: cout << "V";break;
		case 6: cout << "VI";break;
		case 7: cout << "VII";break;
		case 8: cout << "VIII";break;
		case 9: cout << "IX";break;
		case 10: cout << "X";break;
	}
}

void Num3(){
	int month,date,year;
	cout << "Enter the date with numerical month, date, and two-digits year";
	cin >> month >> date >> year;
	int magicyear=month*date;
	if (year==magicyear){
		cout << "it's magic";
	} else {
		cout << "it's normal";
	}
}

void Num4(){
	int height1,width1,height2,width2;
	int area1 = height1*width1;
	int area2 = height2*width2;
	cin >> height1 >> width1;
	cin >> height2 >> width2;
	if (area1==area2){
		cout << "the two rectangles has the same size";
	}else if(area1 < area2){
		cout << "rectangle two are more bigger than rectangle one";
	}else if (area2 < area1){
		cout << "rectangle one are more bigger than rectangke two";
	}
}

void Num5(){
	int height,weight;
	int bmi=weight*703/(height*height);
	cin >> weight >> height;
	if (bmi<18.5){
		cout << "you are underweight";
	} else if(bmi>35){
		cout << "you are overweight";
	} else {
		cout << "you are normal";
	}
}

void Num6(){
	int mass;
	cin >> mass;
	int height=mass*9.8;
	if (height<10){
		cout << "too light";
	} else if (height>1000){
		cout << "too heavy";
	} else {
		cout << "it's normal";
	}
}

void Num8(){
	string color1,color2;
	cin >> color1 >> color2;
	if(color1=="red" && color2=="yellow"){
		cout << "orange";
	}else if(color1=="red" && color2=="blue"){
		cout << "purple";
	}else if(color1=="blue" && color2=="yellow"){
		cout << "green";
	} else {
		cout << "invalid data";
	}
}

void Num10(){
	int d,m,y;
	cout << "Enter a month (1-12):";
	cin >> m;
	cout << endl << "Enter a year :";
	cin >> y;
	switch (m) {
		case 1:d=31;break;
		case 2:if(y % 2 == 0){
			   d=29;
			   }else{
			   d=28;
			   }break;
		case 3:d=31;break;
		case 4:d=30;break;
		case 5:d=31;break;
		case 6:d=30;break;
		case 7:d=31;break;
		case 8:d=31;break;
		case 9:d=30;break;
		case 10:d=31;break;
		case 11:d=30;break;
		case 12:d=31;break;
	}
	cout << d << " days";
}

void Num11(){
	unsigned seed = time(0);
    srand(seed);
    int f = rand(), j = rand();
	cout << f << endl << j << endl << "-----+"<< endl;	
	int sum;
	int l;
	sum = f+j;
	cin >> l;
	if (l=j){
		cout << "You're right";
	}else{
		cout << "You're wrong";
	}
}

void Num12(){
	int totalcost,quantity;
	float discount;
	cin >> quantity;
	if (quantity>0 && quantity<10){
		discount=0;
	}
	else if (quantity>9 && quantity<20){
		discount=0.2;
	}
	else if (quantity>19 && quantity<50){
		discount=0.3;
	}
	else if (quantity>49 && quantity<100){
		discount=0.4;
	}
	else if (quantity>99){
		discount=0.5;
	}
	else{
		cout << "invalid data";
	}
	int sumcost=99*quantity;
	int disc=sumcost*discount;
	totalcost=sumcost-disc;
	cout << totalcost;
}

void Num13(){
	int book,points;
	cin >> book;
	switch (book){
		case 0: points=0;
		case 1: points=5;
		case 2: points=15;
		case 3: points=30;
	}
	if (book>=4){
		points=60;
	}
	cout << points;
}

void Num15(){
	float charge,weight,rate,miles;
	cin >> weight >> miles;
	if (miles >=10 && miles <=3000){
	if (weight>0 && weight<=2.0){
		rate=1.10;
	}
	else if (weight>2.0 && weight<=6.0){
		rate=2.20;
	}
	else if (weight>6.0 && weight<=10.0){
		rate=3.70;
	}
	else if (weight>10.0 && weight<=20.0){
		rate=4.80;
	}
	else if (weight>20.0){
		cout << "sorry, we can't hold it";
	}
	else{
		cout << "invalid data";
	}
	} else {
		cout << "Invalid data";
	}
	charge=rate*(miles/500);
	cout << charge;
}

int main(){
	int menu;
	cin >> menu;
	switch(menu){
		case 1 : Num1();break;
		case 2 : Num2();break;
		case 3 : Num3();break;
		case 4 : Num4();break;
		case 5 : Num5();break;
		case 6 : Num6();break;
		case 8 : Num8();break;
		case 10: Num10();break;
		case 11: Num11();break;
		case 12: Num12();break;
		case 13: Num13();break;
		case 15: Num15();break;
	}
	return 0;
}
