#include <iostream>
#include <stack>
using namespace std;

void convertBinary(int val){
	stack<int> bstring;
	cout << val << " in binary is: ";
	int count = 0;
	while(val > 0){
		bstring.push(val % 2);
		val /= 2; 
		++count;
		if(count == 4)
			count = 0;
	}
	while(count != 0 && count < 4){
		bstring.push(0);
		++count;
	}
	count = 0;
	while(!bstring.empty()){
		cout << bstring.top();
		bstring.pop();
		++count;
		if(count == 4){
			cout << ' ';
			count = 0;
		}
	}
	cout << endl;
}

int main(){
	int input, start;
     cout << "Enter a Decimal number to be converted to Binary: ";
     cin >> input;
	convertBinary(input);
     return 0;
}
