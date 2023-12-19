#include<iostream>
#include<string>
using namespace std;

int main(){
    double number=1;
    char grade;
	int count[5] = {};
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" << number << "]: ";
		cin >> grade;
		if(grade=='A'){
		    count[0]++;
		}else if(grade=='B'){
			count[1]++;
		}else if(grade=='C'){
			count[2]++;
		}else if(grade=='D'){
			count[3]++;
		}else if(grade=='F'){
			count[4]++;
		}else if(grade=='0'){
			break;
		}else{
		    number--;
		    cout << "Wrong input. Please input again.\n";
		} 
		number++;
	}while(number>0);
	cout << "In total " << number-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	return 0;
}