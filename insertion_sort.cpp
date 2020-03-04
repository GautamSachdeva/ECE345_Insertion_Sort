#include"stdio.h"
#include<iostream>
#include <bits/stdc++.h>

using namespace std;


void insertion_sort(vector<long long> &A){
	for(int j = 1 ; j < A.size() ; j++){
		long long key = A[j];
		int i = j-1;
		while( i >= 0 && key < A[i]){
			A[i+1] = A[i];
			i = i-1;
		}
		A[i+1] = key;
	}
}


int main(){
	vector<long long> A;
	int n;
	cout << "Enter the lenght of sequence" << endl;
	cin >> n;
	cout << "Enter the sequence" << endl;
	for(int i = 0 ; i < n ; i++){
		long long number;
		cin >> number;
		A.push_back(number);
	}
	insertion_sort(A);
	for(int i = 0; i < A.size(); i++){
		cout << A[i] << " ";
	}
	return 0;
}
