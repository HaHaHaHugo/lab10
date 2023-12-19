#include<iostream>
#include<iomanip>
#include<cmath>
#include<fstream>
#include<string>
using namespace std; 

int main(){
    ifstream source;
    source.open("score.txt");
    string data;
    double n,sum,mean;
    while(getline(source,data)){
		sum += atof(data.c_str());
        n++;
	}
    mean = sum/n;
    source.close();
    source.open("score.txt");
    double stande,sumsd;
    while(getline(source,data)){
		sumsd += pow(atof(data.c_str())-mean,2);
	}
    stande = sqrt(sumsd/n);
    source.close();
    cout << "Number of data = " << n << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << stande;
}