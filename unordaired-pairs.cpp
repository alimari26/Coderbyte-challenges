//*given an array of N positive integers, find the number of unordered pairs of array elements whose product is perfectly divisible by 10.



#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;										
	int a[n];
	for(int i =0; i<n;i++){
		cin>>a[i];
	}
	int count=0;
	int m[n][n];
	for(int i =0;i<n;i++){
		for(int j=i+1;j<n;j++){
			m[i][j]=a[i]*a[j];
			if(m[i][j]%10==0)
				count ++;
		}
	}
	cout<<count;
return 0;
}