#include<iostream>
#include<string>

using namespace std;

// Func reversed text
string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

// Func to upper case
string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

//Func to lower case
string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	// variable declaration
	string text = "";
	string reversedText = "";
	string upperText = "";
	string upperReversedText = "";
	string result = "";

	// input text
    cout << "Input text: ";
	cin >> text;
	
	// display reversed text
	reversedText = func1(text);
    cout << "Reversed text: " <<reversedText <<endl;

	// change to upper case
	upperText = func3(text);
	upperReversedText = func3(reversedText);

	// Palindrome check
	if (upperText == upperReversedText){
		result = "Yes";
	} else{
		result = "No";
	}
	// display result
    cout << "Palindrome: " <<result <<endl;
	
    return 0;
}
