# Morse-code
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double pi ;
    int x,n ,i=0 ,l;
    while ( true) {
            cout<<"1- Calculate the Pi "<<endl;
            cout<< "2- End " <<endl;
            cin>>x;
            while((x<1)||(x>2))
                cin>>x;
                    if (x==1){
                    cout << "Hello! Please enter the number or terms: " << endl;
                    cin>> n ;
                    while (i< n){
                        pi= (4*((pow((-1),i)) / (2*i +1))) + pi;
                        i ++;
                    }
                    cout<< "Pi = "<< pi<<endl;
                    }
                    if (x==2){
                    break;
                    }
    }
    return 0;
}
