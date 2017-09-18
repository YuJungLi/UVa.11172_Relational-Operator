#include <iostream>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	int n;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (a > b)
			cout << ">" << endl;
		else if (a < b)
			cout << "<" << endl;
		else
			cout << "=" << endl;
	}
	return 0;
}