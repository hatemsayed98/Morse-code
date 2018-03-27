// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: Pi Calculation.cpp
// Last Modification Date: 4/3/2018
// Author1 and ID and Group: Hatem Sayed 20170084
// Author2 and ID and Group: Khaled Mohamed 20170100
// Author3 and ID and Group: Hazem Alaa 20170087
// Teaching Assistant: Eng. Omar
// Purpose:.Calculating PI
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
