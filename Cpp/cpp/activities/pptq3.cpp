#include<iostream>

using namespace std;

int main()
{
    cout << "Character\tInteger"<<endl;
    char character = 'a';
    while(character!='z')
    {
        cout << "    " << character << "\t         " << int(character) << endl;
        character++;
    }
    return 0;
}
