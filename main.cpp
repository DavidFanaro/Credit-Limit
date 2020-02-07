#include <iostream>

using namespace std;

int main() {
  int accountNumber;
  float beginningBalance, totalCharges, totalCredits, creditLimit, accountBalance;

  while(true) {
    cout << "Enter account number ( -1 to end ): " << endl;
    cin >> accountNumber;

    if ( accountNumber == -1 ) {
      return 0;
    }

    cout << "Enter beginning balance: " << endl;
    cin >> beginningBalance;
    cout << "Enter total charges: " << endl;
    cin >> totalCharges;
    cout << "Enter total credits: " << endl;
    cin >> totalCredits;
    cout << "Enter credit limit: " << endl;
    cin >> creditLimit;

    accountBalance = beginningBalance + totalCharges - totalCredits;

    if ( accountBalance > creditLimit ) {
      cout << "Account: " << accountNumber  << endl;
      cout << "Credit Limit: " << creditLimit << endl;
      cout << "Balance: " << accountBalance << endl;
      cout << "Credit limit exceeded." << endl;
    }
  }

  return 0;
}