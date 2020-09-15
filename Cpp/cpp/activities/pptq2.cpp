#include<iostream>

// street number, street name, city name, state name, and zip code
using namespace std;

int main()
{
    int st_num;
    string st_name,city_name,state,zipcode;
    size_t bufsize=6;
    cout << "Enter the following details in order: Street name, city, state, zipcode. "<< endl;
    getline(cin,st_name);
    getline(cin,city_name);
    getline(cin,state);
    getline(cin,zipcode);
    cout<<st_name << "," << city_name << "," << state << "," << zipcode << endl;
    return 0;
}
