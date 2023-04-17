//This is Project 2
#include <iostream>
using namespace std;
const int NUM_SALESPERSONS = 4;
const int NUM_PRODUCTS = 5;
int main()
{
    // Initialize sales array to zero
    double sales[NUM_SALESPERSONS][NUM_PRODUCTS] = {0};
    int salesperson,product;
    double amount,bonus,sales_amount;
    char c_d,c_sp;//c_d is the choice of display and c_sp is the choice of salesperson or product
    // Entry of sales data for the month
    while (true) {
        cout << "Enter salesperson number (1 to 4, 0 to quit): ";
        cin >> salesperson;
        if (salesperson == 0) {
            break;
        }
        cout << "Enter product number (1 to 5): ";
        cin >> product;
        cout << "Enter total Birr value of product sold: ";
        cin >> amount;
        // Update sales array
        sales[salesperson - 1][product - 1] += amount;
        
    }
     // Print row cross totals
    cout << "Total"<<"\t\t";
     for (int product = 1; product <= NUM_PRODUCTS; product++) {
        double product_total=0;
        for (int salesperson = 1; salesperson <= NUM_SALESPERSONS; salesperson++) {
            product_total += sales[salesperson - 1][product - 1];
        }
        cout << product_total<<"\t\t";
    }
    cout << grand_total << endl;
    cout<<"--------------------------------------------------------------------------------------------------\n";
    }
    else if (s_p=='y' || s_p=='Y'){
        cout<<"which salesperson would you like to know about?\n";
        cout << "Enter salesperson number (1 to 4): ";


    

    

