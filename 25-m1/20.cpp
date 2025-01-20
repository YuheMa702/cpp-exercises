#include <iostream>
#include <string>

class BankAccount {
    private:
    std::string m_accountNum{};
    std::string m_holderName{};
    double m_balance{0};
    public:
    BankAccount (std::string_view accountNum, std::string_view holderName)
        : m_accountNum{accountNum}, m_holderName{holderName}
    {
    }
    void deposit (double money) {m_balance += money;}
    void withdraw (double money) {m_balance -= money;}
    const double getBalance() const {return m_balance;}
    const std::string& getHolderName() const {return m_holderName;}
};

//non-member function
void displayAccountInfo(BankAccount& account) {
    std::cout << account.getHolderName() << " 's balance: " << account.getBalance() << "\n";
}

int main() {
    BankAccount a1{"666888", "Yuhe Ma"};
    a1.deposit(520.72);
    a1.withdraw(6.99);
    displayAccountInfo(a1);
    return 0;
}
