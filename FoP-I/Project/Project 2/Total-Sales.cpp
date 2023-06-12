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
        cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n";
    cout<<"enter \'a\' or \'A\' if you want a summary table.\nor\n ";
    cout<<"enter \'b\' or \'B\' if you want to search for a particular product or salesperson record.\n";
    cout<<",,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,\n-->";
    cin>>c_d;
    cout<<endl;
    if(c_d=='a'||c_d=='A'){
        // Print sales table with cross totals and bonus payments
        cout<<"-------------------------------------------------------------------------------------------------\n";
        cout << "Salesperson"<<"\t";
        for (int product = 1; product <= NUM_PRODUCTS; product++) {
            cout << "Product " << product<<"\t";
        }
        cout << "Total"<<"\t\t" << "Bonus" << endl;
        double grand_total = 0;
        for (int salesperson = 1; salesperson <= NUM_SALESPERSONS; salesperson++) {
            cout << salesperson <<"\t\t";
            double salesperson_total = 0;
            for (int product = 1; product <= NUM_PRODUCTS; product++) {
                sales_amount = sales[salesperson - 1][product - 1];
                cout << sales_amount<<"\t\t";
                salesperson_total += sales_amount;
            }
            cout << salesperson_total<<"\t\t";
            bonus = 0.05 * salesperson_total;
            cout << bonus << endl;
            grand_total += salesperson_total;
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
    else if(c_d=='b'|| c_d=='B'){
        cout<<"enter \'x\' or \'X\' if you want to know about a particular product.\nor\n";
        cout<<"enter \'y\' or \'Y\' if you want to know about a particular sales person.\n-->";
        char s_p;//s_p is salesperson or product
        cin>>s_p;
        if (s_p=='x' || s_p=='X'){
            cout<<"which product would you like to know about?\n";
            cout << "Enter product number (1 to 5): ";
            cin >> product;
            cout<<"_ _ _\n\n";
            cout<<"the details for product"<<product<<" are:";
            for(salesperson=1;salesperson<=NUM_SALESPERSONS;salesperson++){
                double sp=sales[salesperson-1][product-1];//sp is each salesperson's value of the product sold
                cout<<"sales person "<<salesperson<<" total="<<sp<<"ETB"<<endl;
            }
            double sp_total=0;
            sp_total=sales[0][product-1]+sales[1][product-1]+sales[2][product-1]+sales[3][product-1]+sales[4][product-1];
            cout<<"total amount of product "<<product<<" sold= "<<sp_total<<"ETB";
            cout<<"\n_ _ _";
        }
        else if (s_p=='y' || s_p=='Y'){
            cout<<"which salesperson would you like to know about?\n";
            cout << "Enter salesperson number (1 to 4): ";
            cin >> salesperson;
            cout<<"_ _ _\n\n";
            cout<<"salesperson "<<salesperson<<"got the following amount from each product:\n";
            for(product=1;product<=NUM_PRODUCTS;product++){
                double pn=sales[salesperson-1][product-1];//pn is product number
                cout<<"product "<<product<<" total="<<pn<<"ETB"<<endl;
            }
            double pn_total=sales[salesperson-1][0]+sales[salesperson-1][1]+sales[salesperson-1][2]+sales[salesperson-1][3]+sales[salesperson-1][4];
            cout<<"total value of product sold by salesperson"<<salesperson<<"= "<<pn_total<<"ETB\n";
            double bonus = 0.05*pn_total;
            cout<<"salesperson"<<salesperson<<" got a bonus of: "<<bonus;
            cout<<"\n_ _ _";
        }
    }
}

    

