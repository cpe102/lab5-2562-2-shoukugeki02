#include<iostream>
using namespace std;
string  mixText( string x,string y){
   string e;
   int l = x.size();
   int j = y.size();
int i=0;
if(l==j){
   while(i<l){
       e=e+x[i]+y[i];
	   i++;
   }
 return e;
 }

    else{
		return "E";

	}
    
}




int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
 	
	return 0;	
}



