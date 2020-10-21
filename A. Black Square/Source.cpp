#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int main() 
{
	int a, b, c, d,count1=0,count2=0, count3=0, count4=0,sum;
	string s;

	cin >> a >> b >> c >> d;
	getline(cin, s);
	getline(cin, s);
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '1')
			count1++;
		if (s[i] == '2')
			count2++;
		if (s[i] == '3')
			count3++;
		if (s[i] == '4')
			count4++;
	}
	sum = a * count1 + b * count2 + c * count3 + d * count4;
	cout << sum;
	return 0;
}