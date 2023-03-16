#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, rev=0, digit, sum=0, m, num, total = 0, evenProduct = 1, evenCounter= 0, firstDig, lastDig, count, swapDig, a, b, freq, s1=0, d, r, div;
    int item;
    long fact;
    cout << "HERE IS THE MENU FOR PLAYING WITH NUMBERS: \n1. printing a reverse \n2. count the number of digits  \n3. sum of the digits of given number \n4. product of even digits of a given number \n5. find first and last digit of the number and find their sum \n6. swap the first and last digit of number \n7. check weather a number is palindrome or not. \n8. find the frequency of a digit in a given number \n9. check a number is Armstrong number \n10. check number is strong or not \n11. check weather a number is perfect number or not." <<endl;
    cin >> item;

    switch(item) {
        case 1:
            cout << "enter any number to be reversed: ";
            cin >> digit;
            while(digit != 0) {
                rev = digit % 10;
                digit = digit / 10;
                cout << rev;
            }
            cout << endl;

            break;
        case 2:
            cout << "enter any number to be counted: ";
            cin >> digit;

            while(digit != 0) {
                digit /= 10;
                total++;
            }
            cout << "the total number of digits are: " <<total;

            break;
        case 3:
            cout << "Enter a number to its digits to be added: ";
            cin >> digit;
            while(digit>0) {
                m = digit % 10;
                sum += m;
                digit /= 10;
            }
            cout << "The sum of the digits is= " <<sum <<endl;
            
            break;
        case 4:
            cout << "enter a number to get the product of its even digits: ";
            cin >> digit;
            while(digit>0) {
                m = digit % 10;
                digit /= 10;
                if(m%2==0) {
                    evenProduct *= m;
                    evenCounter++;
                }

            }
            if(evenCounter == 1) {
                cout << "the number " <<evenProduct <<" is odd so its impossible!";
            }
            else if(evenCounter != 1) {
                cout << "the product of even digits is "<<evenProduct;
            }
            else{
                cout << "there ain't no even digit in the number.";
            }
        break;
        case 5:
            cout << "enter number to find sum of first and last digit: ";
            cin >> digit;
            for(firstDig = digit; firstDig >= 10; firstDig /= 10);
            lastDig = digit % 10;
            sum = firstDig + lastDig;

            cout << "the first digit of " <<digit<< " is " <<firstDig <<endl;
            cout << "the last digit of " <<digit<< " is " <<lastDig <<endl;
            cout << "the sum of these two digits is " <<sum;
        break;
        case 6:
            cout << "enter to swap: ";
            cin >> digit;

            count = log10(digit);
            firstDig = digit / pow(10, count);
            lastDig = digit % 10;
            a = firstDig * (pow(10, count));
            b = digit % a;
            digit = b / 10;
            
            swapDig = lastDig * (pow(10, count)) + (digit * 10 + firstDig);
            cout << "the swapped digit is " <<swapDig;
        break;
        case 7:
            cout << "enter a number to check if it is palindrome: ";
            cin >> digit;
            n = digit;

            do {
                num = digit % 10;
                rev = (rev * 10) + num;
                digit /= 10;
            } 
            while(digit != 0);

            cout << "the reversed number is " << rev <<endl;

            if(n == rev) {
                cout << "the number is a palindrome.";
            }
            else {
                cout << "the number ain't palindrome.";
            }
        break;
        case 8:
            cout << "the frequencey of each digits in a given integer: " <<endl;
            cout << "____________________________________________________________" <<endl;
            cout << "enter any number: ";
            cin >> digit;
            for(int i=0; i<10; i++) {
                cout << "the frequency of | " << i << " | ";
                freq = 0;
                for(int j=digit; j>0; j /= 10) {
                    m = j % 10;
                    if(m == i) {
                        freq++;
                    }
                }
                cout << freq <<endl;
            }
        break;
        case 9:
            cout << "enter number to check Armstrong number: ";
            cin >> digit;
            n = digit;
            while(digit>0) {
                r = digit % 10;
                sum += (r * r * r);
                digit /= 10;
            }
            if(n==sum) {
                cout << "the entered number is Armstrong number.";
            }
            else {
                cout << "the entered number ain't Armstrong number.";
            }
        break;
        case 10:
            cout << "check weather a number is strong number or not:" <<endl;
            cout << "==============================================" <<endl;
            cout << "enter a number to check strong number" <<endl;
            cin >> digit;
            d = digit;
            for(int j=digit; j>0; j /= 10) {
                fact = 1;
                for(int i=1; i <= j % 10; i++) {
                    fact = fact * i;
                }
                s1 += fact;
            }
            if(s1 == d) {
                cout << d << " is a strong number.";
            }
            else {
                cout << d << " is not a strong number.";
            }
        break;
        case 11:
            cout << "enter the number to check weather its perfect or not: " <<endl;
            cin >> digit;
            for(int i=1; i < digit; i++) {
                div = digit % i;
                if(div == 0) {
                    sum += i;
                }
            }
            if(sum == digit) {
                cout << digit << " is perfect number.";
            }
            else {
                cout << digit << " is not perfect number.";
            }
            break;
    }
  
    return 0;
}