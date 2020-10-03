#include<string>
#include<iostream>
#include "account.h"
using namespace std;
Account::Account() :
    m_accNumber(0), m_accName(""), m_balance(0) {

}
Account::Account(int id, std::string name, double bal) :
  m_accNumber(id), m_accName(name), m_balance(bal) {

}
Account::Account(int id, std::string name) :
  m_accNumber(id), m_accName(name) {

}
Account::Account(const Account& ref) :
        m_accNumber(ref.m_accNumber), m_accName(ref.m_accName),
                                              m_balance(ref.m_balance) {

}
void Account::credit(double amount) {
  m_balance += amount;
}
void Account::debit(double amount) {
  //min balance check
  m_balance -= amount;
}
int Account::getCustomerId() {
  return m_accNumber;
}
std::string Account::getCustomerName() {
  return m_accName;
}
double Account::getBalance() const {
    return m_balance;
}
void Account::display() {
    std::cout << m_accNumber << "," << m_accName << ","
                                         << m_balance << "\n";
}

/*int main(){

    Account a1(10,"Ankita",2000.20);
    a1.display();
}*/
