#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

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
	string word;
	string a;
	string b;
	string c;
    cout << "Input text: ";
	cin >> word;
    cout << "Reversed text: " << func1(word) << endl;
	a = func1(word);
	b = func2(word);
	c = func2(a);
	if(b == c)
	{
		cout << "Palindrome: " << "Yes";
	}
	else
	{
		cout << "Palindrome: " << "No";
	}
    return 0;
}
