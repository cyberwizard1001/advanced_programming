#include<iostream>
#include<string>

using namespace std;

class Charsort
{
	public:

		void sort_characters(string text)
		{
			for(int i=0;i<text.length();++i)
			{
				for(int j=i+1;j<text.length();++j)
				{
					if(text[i] > text[j])
					{
						char temp = text[i];
						text[i] = text[j];
						text[j] = temp;
					}
				}
			}
		}
}
