#include<iostream>

using namespace std;

int main(){
	
	int i = 0, P[5000], k, result = 0, d=0;
	while(i < 5000){
		P[i] = 2*i+1;
		i++;
	}
	cout << "Please input k: ";
	cin >> k;
	if(k > 0)
	{
	
		while(d < 5000)
		{
			if(P[d]%k == 0)
			{
				result = result - P[d];
			}
			else
			{
				result = result + P[d];
			}
			d++;
		}
		if(d >= 5000)
		{
			cout << "Result = " << result;
		}
	}
	else
	{
		cout << "Invalid input!!!";
	}
	
	return 0;
}
