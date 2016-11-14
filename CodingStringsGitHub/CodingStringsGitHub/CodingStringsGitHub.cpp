// CodingStringsGitHub.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> //Input and Output library
#include<string>//Allows to create string text
using namespace std; //limits the amout of code needed to std



int main()
{
   string firstName;
   string lastName;

   cout << "What is your first name? ";
   cin >> firstName;
   cout << "What if your last name? ";
   cin >> lastName;
   cout << "Your name is "<<firstName<< " " << lastName <<".\n";

   system("pause");
   return 0;
}

