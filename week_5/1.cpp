#include <iostream>

using namespace std;

int main(){
	float salary;
	cin>> salary;
	if (salary < 6000000 ){
		cout << "Salary after tax deduction : " << fixed << salary;
	}
	else if (salary >= 6000000 && salary < 8000000){
		cout << "Salary after tax deduction : " << fixed <<(float) salary * 0.95;	
	}
	else if (salary >= 8000000 && salary < 10000000){
		cout << "Salary after tax deduction : " << fixed <<(float) salary * 0.90;	
	}
	else if (salary >= 10000000 && salary < 14000000){
		cout << "Salary after tax deduction : " << fixed <<(float) salary * 0.85;	
	}
	else if (salary >= 14000000 && salary < 18000000){
		cout << "Salary after tax deduction : " << fixed <<(float) salary * 0.80;	
	}
	else if (salary >= 18000000 && salary < 25000000){
		cout << "Salary after tax deduction : " << fixed <<(float) salary * 0.75;	
	}
	else if (salary >= 25000000){
		cout << "Salary after tax deduction : " << fixed <<(float) salary * 0.65;	
	}
}
