#include <iostream>
#include <stdlib.h>
using namespace std;

class Bankaccount
{
  string name;
  string address;
  long number;
  string acc_type;
  float balance;

public:
  void openAccount()
  {
    cout << "Enter your full name : ";
    getline(cin, name);
    cout << "\n Enter your address :  ";
    getline(cin, address);
    cout << "\n Enter your contact number : ";
    cin >> number;
    cout << "\n Account type : ";
    cout << "\n 1. Current";
    cout << "\n 2. Savings";
    cout << "\nEnter your choice : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
      acc_type = "Current";
      cout << "\nCurrent";
      break;
    case 2:
      acc_type = "Savings";
      cout << "\nSavings";
      break;
    default:
      cout << "\nInvalid choice";
    }

    cout << "\n Enter the amount you want to deposit : ";
    cin >> balance;
    cout << " \n Your account is created successfully";
  }

  void deposit_money()
  {
    cout << "\n Your account balance is: " << balance;
    int amount;
    cout << "\n Enter the amount you want to deposit : ";
    cin >> amount;
    cout << "\n Amount deposited successfully.";
    balance = balance + amount;
    cout << "\n New balance is : " << balance;
  }

  void withdraw_money()
  {
    cout << "\n Your account balance is: " << balance;
    int amount;
    cout << " \n Enter the amount you want to withdraw : ";
    cin >> amount;
    if (amount <= balance)
    {
      balance = balance - amount;
      cout << "\nAmount withdrawn successfully. ";
      cout << "\n Balance amount is : " << balance;
    }
    else
    {
      cout << " \n Insufficient balance..!!";
    }
  }

  void display_account()
  {
    cout << "\nAccount holder name : " << name;
    cout << "\nAddress : " << address;
    cout << " \n Contact number of account holder : " << number;
    cout << " \n Account type : " << acc_type;
    cout << " \n Account balance : " << balance;
  }
};
int main()
{
  int choice;
  int count = 1;
  Bankaccount b;
  b.openAccount();

  while (count == 1)
  {
    cout << "\n\nWhat operation you have to perform?" << endl;
    cout << "\n 1.Withdraw money";
    cout << "\n 2.Deposit money";
    cout << "\n 3.Display account";
    cout << "\n 4.exit";
    cout << "\nEnter your choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      b.withdraw_money();
      break;
    case 2:
      b.deposit_money();
      break;
    case 3:
      b.display_account();
      break;
    case 4:
      exit(0);
      break;
    default:
      cout << "\nError..!! Invalid Selection.";
    }
  }
  return 0;
}