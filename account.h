#include<string>
class Account {
  int m_accNumber;
  std::string m_accName;
  double m_balance;

public:
  Account();
  Account(int, std::string, double);
  Account(int,std::string);
  Account(const Account &);
  void credit(double);
  void debit(double);
  int getCustomerId();
  std::string getCustomerName();
  double getBalance() const;
  void display();
};

