// assignment4.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <sstream>
#include <string>
using namespace std;


int main()
{
   double balance = 5000;
   string menuAct;
   bool quit = true;
   string strWith;
   string strDep;
   
   cout << "Your current balance is: " << balance << endl;
   cout << "Please choose an action:" << endl;
   cout << "W = Withdrawl" << endl;
   cout << "D = Deposit" << endl;
   cout << "B = Balance" << endl;
   cout << "Q = Quit" << endl;

   do 
   {
      cout << "Your current balance is: " << balance << endl;
      cout << "Please choose an action:" << endl;
      cout << "W = Withdrawl" << endl;
      cout << "D = Deposit" << endl;
      cout << "B = Balance" << endl;
      cout << "Q = Quit" << endl;
      getline(cin, menuAct);

      if (menuAct.at(0) == 'w' || menuAct.at(0) == 'W')
      {
         
         cout << "Enter amount you wish to withdraw";
         getline(cin, strWith);
         double numWith;
         istringstream(strWith) >> numWith;
         /*string conversion*/
         if (numWith > 5000 || numWith < 0)
         {
            cout << "OVERDRAFT/INVALID AMOUNT" << endl;
         }
         else
            balance -= numWith;
         cout << "New Balance:" << balance << endl;
      }

      else if (menuAct.at(0) == 'd' || menuAct.at(0) == 'D')
      {
         cout << "Enter amount you wish to deposit";
         getline(cin, strDep);
         double numDep;
         istringstream(strDep) >> numDep;
         if (numDep < 0)
         {
            cout << "INVALID AMOUNT" << endl;
         }
         else
            balance += numDep;
         cout << "New Balance:" << balance << endl;
      }

      else if (menuAct.at(0) == 'b' || menuAct.at(0) == 'B')
      {
         cout << "Your current balance is" << balance << endl;
      }

      else if (menuAct.at(0) == 'q' || menuAct.at(0) == 'Q')
      {
         cout << "Thank you, come again!" << endl;
         bool quit = false;
      }
      else
      {
         cout << "ERROR! INVALID RESPONSE!";
      }
   } 
   while (quit);


	return 0;
}

