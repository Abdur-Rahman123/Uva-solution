//https://www.hackerrank.com/challenges/time-conversion/problem
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s) {
    string hour=s.substr(0,2);
    int chour=stoi(hour);
    auto pos = s.find("PM");
    if(pos!=string::npos)
    {
        if(chour+12<24)
        {
            hour=to_string(chour+12);
        }
    }
    else {
         if(chour==12)
         {
             hour="00";
         }
    }
   return s.replace(0,2,hour).erase(s.size()-2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
