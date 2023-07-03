#include<iostream>
using namespace std;

int main()
{
	//BMI calculator;
	//weight(kg)/height*height(m)
	//underweight <18.5
	//overweight >25
	//normal weight 18.5-24.5;

	float weight, height,BMI;
	cout << "weight(kg), height(m): ";
	cin >> weight >> height;
	BMI = weight /( height * height);
	if (BMI < 18.5)
		cout << "Underweight" << endl;
	else if (BMI > 25)
		cout << "Overweight" << endl;
	else
		cout << "Normal weight" << endl;

	cout << "Thanks,Your BMI is: " <<BMI<< endl;






	system("pause>0");
}