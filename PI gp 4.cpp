#include <bits/stdc++.h>

using namespace std;

int main()
{
    char calculatePI;
    int numOfTerms ;
    while (true)
    {
        cout<<"1- Calculate the Pi "<<endl<<"Press any other key to end" <<endl;
        cin>>calculatePI;

        if (calculatePI != '1')
            break;

        double pi ;
        cout << "Please enter the number of terms: " << endl;
        cin>> numOfTerms;
        for(int i = 0; i < numOfTerms; i++)
        {
            pi += (4 * ((pow(( -1 ),i)) / (2 * i + 1))) ;
        }
        cout<< "Pi = "<< pi<<endl;
    }
    return 0;
}
