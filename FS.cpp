#include <bits/stdc++.h>

using namespace std;

int main (){
	int n3, n1, n2;
		n1 = 0;
		n2 = 1;
		
		
	cout <<  n1 << endl;
	cout << n2 << endl;
	
	for (int n = 2 ; n < 20; ++n){
		n3 = n1 + n2; 

		cout << n3 << endl;
		
		n1 = n2;
		n2 = n3;

}
return 0;
}


