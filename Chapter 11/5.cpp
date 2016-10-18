#include <iostream>
#include <string>
using namespace std;

enum month{january,february,march,april,may,june,july,september,october,november,december};

struct weather{
	int totalrainfall;
	int hightemp;
	int lowtemp;
	int averagetemp;
};

int main(){
	string month[12]={"january","february","march","april","may","june","july","september","october","november","december"};	
	weather num[12];
	weather year;
	int i;
	for (i=january;i<=december;i++){
		cout << "how many rainfall at " << month[i] << " ?";
		cin >> num[i].totalrainfall;
		cout << "how much the highest temperature at that month?";
		cin >> num[i].hightemp;
		cout << "how much the lowest temperature at that month?";
		cin >> num[i].lowtemp;
		num[i].averagetemp=(num[i].hightemp+num[i].lowtemp)/2;
    }
    int startScan, minIndex, minValue;
    for (startScan = january; startScan < december; startScan++) {
        minIndex = startScan;
        minValue = num[startScan].lowtemp;
        for(int index = startScan + 1; index < 12; index++) {
            if (num[index].lowtemp < minValue) {
                minValue = num[index].lowtemp;
                minIndex = index;
            }
        }
        num[minIndex].lowtemp = num[startScan].lowtemp;
        num[startScan].lowtemp = minValue;
    }
    for (startScan = january; startScan < december; startScan++) {
        minIndex = startScan;
        minValue = num[startScan].hightemp;
        for(int index = startScan + 1; index < 12; index++) {
            if (num[index].hightemp > minValue) {
                minValue = num[index].hightemp;
                minIndex = index;
            }
        }
        num[minIndex].hightemp = num[startScan].hightemp;
        num[startScan].hightemp = minValue;
    }
    year.lowtemp=num[0].lowtemp;
    year.hightemp=num[0].hightemp;
    year.totalrainfall=0;
    for(int j=0;j<12;j++){
    	year.totalrainfall=year.totalrainfall+num[i].totalrainfall;
	}
	year.averagetemp=year.totalrainfall/12;
	cout << year.lowtemp << endl << year.hightemp << year.totalrainfall << endl << year.averagetemp;
}
