#include <iostream>
using namespace std;

double myFunction (double x) //parameter is x.
{
    double myAnswer = (x * x - 8) / x;
    return myAnswer; //returns the computation
}

int main ()
{
    cout << "Please enter a number value: ";
    double userInput;
    cin >> userInput;
    double argOne = myFunction(userInput); //arguments are the user inputs.
    cout << "Your output is " << argOne; 
    return 0; //the return value from function is stored in type double argOne & not type double myAnswer.
}
