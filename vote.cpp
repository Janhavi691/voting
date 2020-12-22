#include<iostream>
using namespace std;
int main()
{

	int age;
	cout<<"Enter your age:";
	cin>>age;
	//person is teenager or not
	//>=13 and <=17
	if(age>=13&&age<=17)
{
	cout<<"Person is Teenager"<<endl;
}
else
{
	cout<<"Person is not Teenager"<<endl;
}
   if(age>=18)
{
	cout<<"Person is eligible to vote"<<endl;
}
   else
{
	cout<<"Person is not eligible to vote"<<endl;
}
return 0;

}
