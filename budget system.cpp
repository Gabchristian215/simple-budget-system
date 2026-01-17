#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main(){
    int choice;
    vector<double> incomes;
    vector<double> expenses;
    double amount;

    while (true)
    {
     cout << "\n =======Gabriel budget system!!=======" << endl;
    cout << "select your option:" << endl;
    cout << "1. Add weekly income" << endl;
    cout << "2. Add weekly expense" << endl;
    cout << "3. View balance" << endl;
    cout << "4. Debt tracker" << endl;
    cout << "Enter your choice: ";
   
    cin >> choice;


    switch(choice)
    {
        case 1:
            cout << "1.Add Weekly income" << endl;
            cout << "Enter income amount: ";
            cin >> amount;
            if(amount > 0){
                incomes.push_back(amount);
                cout << "Income added successfully!" << endl;
            } else {
                cout << "Invalid amount. Please enter a positive value." << endl;
            }
            break;
        case 2:
            cout << "2. Add weekly expense" << endl;
            cout << "Enter expense amount: ";
            cin >> amount;
            if(amount > 0){
                expenses.push_back(amount);
                cout << "Expense added successfully!" << endl;
            } else {
                cout << "Invalid amount. Please enter a positive value" << endl;
            }
            break;
        case 3:
        {
            cout << "3. View balance" << endl;
            double totalIncome = 0, totalExpense = 0; // has income and espense start at 0  

            for(double inc : incomes)                  //need loops because you have multiple income and expense entries that need to be processed all at once. double inc — declares a new variable named inc with type double that will hold each element from the collection
                                                       //: — the colon separates the variable declaration from the collection to iterate over
                                                       //incomes — the vector (collection) being looped through
                totalIncome += inc;                    // add all income amounts together
            for(double exp : expenses)                 // same as above but for expenses
                totalExpense += exp;
              double needs = totalIncome * 0.5; /* calculates 50% of total income for needs */
              double wants = totalIncome * 0.3; /* calculates 30% of total income for wants */
            double savings = totalIncome * 0.2; /* calculates 20% of total income for savings */

                 cout << "\n --- Your Balance ---" << endl;
            cout << "Total Income: $" << totalIncome << endl;
            cout << "Total Expenses: $" << totalExpense << endl;
            cout << "Balance: $" << (totalIncome - totalExpense) << endl; // subtracts expenses from income
            cout << "Budget Breakdown:" << endl;
            cout << "Needs (50%): " << needs << endl;
            cout << "Wants (30%): " << wants << endl;
            cout << "Savings (20%): " << savings << endl;
            break;
        case 4:
            cout << "4. Debt tracker" << endl;
            // TODO: Implement debt tracker
            break;
        default:
            cout << "Invalid option" << endl;
            break;
    }
    }
    return 0;
}