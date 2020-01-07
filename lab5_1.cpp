#include<iostream>
#include <string>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	string name[N];
	int age[N];
	int i=0;
	while(i < N){
		cout << "Enter name of student["<< i+1 <<"]:";
		cin >> name[i];
		cout << "Age of student["<< i+1 <<"]:";
        cin >> age[i];
	    i++;
	    }   
    int key;
	cout << "--------------------------------------\n";
	cin >> key;
	cout << "--------------------------------------\n";
	int z=0;
	while(z<N){
		if(key==age[z]){
		cout << name[z] << endl;
		}
}
	z++;


	
	
	
	
	return 0;
}
