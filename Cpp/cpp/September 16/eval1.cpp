#include <iostream>
#include <string>

using namespace std;

class WordCase
{

    public:

    void Capitalize_first_letter(string text)
    {
        //@start-editable@

        int len = text.length();

        for(int i=0;i<len;++i)
        {
            if(i==0)
            {
                if(islower(text[i]))
                text[i]=toupper(text[i]);
            }

            else
            {
                if(text[i]!=' ')
                {
                    if(isupper(text[i]))
                        text[i]=tolower(text[i]);
                }

                else
                {
                    i++;
                    if(islower(text[i]))
                        text[i]=toupper(text[i]);
                }
            }
        }

        cout << text;

        //@end-editable@

    }

};

int main()
{
	string sentance;
	WordCase  *wc=new WordCase();
	getline(cin,sentance);
    wc->Capitalize_first_letter(sentance);
	return 0;
}
