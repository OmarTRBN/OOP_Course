#include <iostream>

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    BankAccount &operator+=(double amount)
    {
        if (amount >= 0)
        {
            balance += amount;
            std::cout << "Deposit: $" << amount << std::endl;
        }
        else
        {
            std::cout << "Invalid deposit amount." << std::endl;
        }
        return *this;
    }

    BankAccount &operator-=(double amount)
    {
        if (amount >= 0)
        {
            if (amount <= balance)
            {
                balance -= amount;
                std::cout << "Withdrawal: $" << amount << std::endl;
            }
            else
            {
                std::cout << "Insufficient funds for withdrawal." << std::endl;
            }
        }
        else
        {
            std::cout << "Invalid withdrawal amount." << std::endl;
        }
        return *this;
    }

    void displayBalance() const
    {
        std::cout << "Current Balance: $" << balance << std::endl;
    }
};

int main()
{
    BankAccount account(1000);
    account.displayBalance();

    account += 500;
    account -= 200;

    account.displayBalance();

    return 0;
}
