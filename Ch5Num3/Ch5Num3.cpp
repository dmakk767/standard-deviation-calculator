// Ch5Num3.cpp : Defines the entry point for the console application.
//

//Standard Deviation Calc

#include "stdafx.h"
#include <iostream>
#include <math.h>
using namespace std;

void getStandardDeviation(double myNumArray[], int N, double average);
void getAvg(double myNumArray[], int N);
double myNumArray[1000];

int main()
{
	int N = 0;
	cout << "How many numbers would you like to enter?" << endl;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cout << "please input next number, 1-1000." << endl;
		cin >> myNumArray[i];
		//test// cout << myNumArray[i] << " is the next number" << endl;
	}
	getAvg(myNumArray, N);
    return 0;
}

void getAvg(double myNumArray[], int N) {
	double average = 0;
		for (int i = 0; i < N; i++) {
			average = (average + myNumArray[i]);
			//test// cout << "avg is in avg loop " << average << endl;
		}
		average = average / N;
		//test// cout << "final avg is " << average << endl;
		getStandardDeviation(myNumArray, N, average);
}

void getStandardDeviation (double myNumArray[], int N, double average) {
	double totalX = 0;
	double myNumArrayTwo[1000];
	for (int i = 0; i < N; i++) {
	    myNumArrayTwo[i] = pow((myNumArray[i] - average), 2);
		//test// cout << "array powered " << myNumArrayTwo[i] << endl;
		totalX = totalX + myNumArrayTwo[i];
		//test// cout << "total of array " << totalX << endl;
	}
	double standardDev = sqrt(totalX / (N-1));
	
	cout << "the standard deviation is " << standardDev << endl;
	
}
