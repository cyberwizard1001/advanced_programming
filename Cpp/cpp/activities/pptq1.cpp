#include<iostream>

using namespace std;

int main()
{
    int tax_rate = 9;
    int sale;
    char choice = 'y';
    while((choice=='y')||choice=='Y')
    {
        cout<<"Sale amount: ";
        cin >> sale;
        cout << "Tax amount: " << ((sale*tax_rate)/100) << endl;
        cout << "Total amount due: " << ((sale*tax_rate)/100)+sale << endl;
        cout<<"Do you wish to continue? ";
        cin >> choice;
        system("clear");
    }
    return 0;
}
