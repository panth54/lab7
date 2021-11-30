#include<iostream>

using namespace std;

int main(){
	// Variable declaration
	int i, k, P[5000], result;

	// Make Array P = (1-9999)
	i = 0;
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}
	
	// Input k
	cout << "Please input k: ";
	cin >> k;

	//  Main program
	if (k > 0){
		i = 0, result = 0;
		while (i < 5000){
			if (P[i] % k == 0){
				result -= P[i];
			} else{
				result += P[i];
			}
			i++;
		}
			cout <<"Result = " <<result <<endl;
	} else{
		cout << "Invalid input!!!" <<endl;
	}
	
	return 0;
}
