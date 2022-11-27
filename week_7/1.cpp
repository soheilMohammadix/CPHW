#include<iostream>

using namespace std;

int main(){
	int m, n;
	int result = 1;
	cin>>m;
	cin>>n;
	for (int i=1;i<=n;i++){
		result = result * m;
	}
	cout<< result;
}
