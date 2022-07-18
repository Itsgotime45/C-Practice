#include <iostream>
using namespace std;
/*This is a file and project to get used to Visual studio while learning c++. I will be listing mistakes made and the corrections made. You can remove the comment syntax to test the lines of code. I purposly left wrong code despite it being embarrassing so others that are new like me can learn.*/
/*  Hello world
int main()
{
	cout << "Hello World" << endl;

	return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Variables
int main()
{
	int x, y, z;

	string hello = "Peter";

	x = 20;
	y = 9;
	z = x + y;
	cout << "Use of Varaibles in C++" << endl;
	
	cout << "The result of x + y =" << z << endl;

	cout << "My name is" << hello << endl;

	return 0; 

}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Global and local Vars
int x = 9, w = 6;
float z; 

int main()

{
	int x = 3;
	float z;

	cout << "Local and Global Variabnles in C++ \n" << endl;

	cout << "The value of z = " << x + w << endl;

	return 0;

}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* User input - Made several mistakes
* try one
* int main()
{
    int x, y; 

    cout << "User Input \n" << endl;

    cout << "Insert a number:" << endl;

    cin >> x;

    cout << "Insert Second number" << y << endl; --- << y << was put there because idk newbie mistake It was removed. Was the problem creating the error c6001 and c4700

    cin >> y;

    cout << "You entered:" << x << "and" << y << endl; --- there was no spaces after "You entered:" and none before and after "and" result in "You entered 5and3" 
    return 0;
} 
*Try 2 and the correct one and correct prints N and N 
int main()

{
	int x, y; 

	cout << "User Input \n" << endl;

	cout << "Insert a number:" << endl;

	cin >> x;

	cout << "Insert Second number" << endl;
	cin >> y;

	cout << "You entered: " <<x<< " and " <<y<< endl;
	return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Strings
int main()
{
	char STR1[200];
	cout << "String Input \n" << endl;

	cout << "Insert some strings:" << endl;

	cin.getline(STR1, 200);

	cout << "You entered:" << STR1 << endl;
}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*Adding numbers
int main()
{
	int x, y, sum;
	cout << "Addition of two numbers\n" << endl;

	cout << "Insert first number:" << endl;

	cin >> x;

	cout << "Insert sceond number" << endl; 

	cin >> y; 

	sum = x + y; 
	cout << "The result of x + y =" << sum << endl;

	return 0; 
}
*/
/*------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/* Math Operators
int main() 
{
	int x, y, sum, mul, sub, mod; 
	float div; 
	cout << "Addition, Subtraction, Multiplication and Division of two numbers" << endl;
	cout << "Insert first number";
	cin >> x;
	cout << "Insert second numbner:" << endl;
	cin >> y;

	sum = x + y;
	mul = x * y;
	sub = x - y;
	mod = x % y;
	div = x / y;

	cout << "the sum of" << x << "+" << y << "=" << sum << endl;
	cout << "TheMultication of x*y =" << mul << endl;
	cout << "The subtraction of x - y =" << sub << endl;
	cout << "The modulus x%y =" << mod << endl; 
	cout << "The division of x/y =" << div << endl; 

	return 0; 
}
*/
/*Add N Numbers
int main()
{
	int x,y,z, sum = 0; 
	cout << "Adding N nUmbers \n" << endl;
	cout << "Please choose range of number to add:" << endl;
	cin >> x;

	cout << "Please insert" << x << "number(s) only:" << endl;

	for (y = 1; y <= x; y++)
	{
		cin >> z;
		sum = sum + z;
	}

	cout << "the result of addition of" << x << "number(s) is=" << sum << endl;

	return 0;
}
*/
int main()

