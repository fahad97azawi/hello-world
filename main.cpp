#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    string x[31]={ "\0", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve",
    "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty", "thirty", "forty", "fifty",
    "sixty", "seventy", "eighty", "ninety", "hundred", "thousand", "million"};
    int y;
    //repeat:
    //cin >> y;
    for (int y=1; y<1000; y++)
    {

    if (y<21){
        cout << x[y] << endl;
        //goto repeat;
    }
    else if (y<100 && y>20)
        {
            int aa=18+((y/10));
            int aaa=y-((y/10)*10);
            cout << x[aa] << " " << x[aaa] << endl;
            //goto repeat;
        }
    else if (y<1000 && y>99)
        {
            int a=y/100;
            int aa=y-(a*100);
            if (aa<20)
            {
                int a=y/100;
                int aa=y-(a*100);
                cout << x[a] << " hundred " << x[aa] << endl;
                //goto repeat;
            }
            else
            {
                int a=y/100;
                int aa=(((y-(a*100))/10))+18;
                int aaa=(y-(a*100))-((y-(a*100))/10)*10;
                cout << x[a] << " hundred " << x[aa] << " " << x[aaa] << endl;
                //goto repeat;
            }
        }
    Sleep(500);
    }
}

