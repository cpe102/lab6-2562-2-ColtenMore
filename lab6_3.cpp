#include<iostream>
using namespace std;

char before(char x){
	//Write your function definition here
		if(x=='A'){
			cout<<'Z';
		}else{
			if(x<'A'){
				cout<<'0';
			}else{
				if(x>'Z'){
					cout<<'0';
				}else{
					x-=1;
					cout<<x;
				}
			}
		}
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
