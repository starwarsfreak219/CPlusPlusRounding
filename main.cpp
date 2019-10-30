//
//  BasicC++.cpp
//  C++ Programming
//
//  Created by Sage Harper on 10/30/19.
//  Copyright © 2019 Eastern Michigan University. All rights reserved.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a;
    int digit;
    
    cout << "Enter how many significant digits you want to be rounded by: \n";
    cin >> digit;
    
    cout << "Enter a decimal number to be rounded:\n";
    cin >> a;
    
    switch(digit) {
        case 1:
                if (a>=0) {
                    if((a+0.5)>=(int(a)+1)) {
                        cout << "That number is rounded to: " << int(a)+1 << '\n';
                    }
                    else {
                        cout << "That number is rounded to: " << int(a) << '\n';
                    }
                }
                else if(a<0) {
        
                    if((a-0.5)<=(int(a)-1)) {
                        cout << "That number is rounded to: " << int(a)-1 << '\n';
                    } else {
                        cout << "That number is rounded to: " << int(a) << '\n';
                    }
                }
            break;
        case 2:
                if (a>=0) {
                    if((a+0.05)>=(int(a)+0.1)) {
                        cout << fixed << setprecision (1) << "That number is rounded to: " << float(a) << '\n';
                    }
                    else {
                        cout << "That number is rounded to: " << a << '\n';
                    }
                }
                else if(a<0) {
        
                    if((a-0.05)<=(int(a)-0.1)) {
                        cout << "That number is rounded to: " << int(a)-0.1 << '\n';
                    } else {
                        cout << "That number is rounded to: " << int(a) << '\n';
                    }
                }
            break;
        case 3:
                if (a>=0) {
                    if((a+0.005)>=(int(a)+0.01)) {
                        cout << fixed << setprecision (2) << "That number is rounded to: " << float(a) << '\n';
                    }
                    else {
                        cout << "That number is rounded to: " << a << '\n';
                    }
                }
                else if(a<0) {
            
                    if((a-0.005)<=(int(a)-0.01)) {
                        cout << "That number is rounded to: " << int(a)-0.01 << '\n';
                    } else {
                        cout << "That number is rounded to: " << int(a) << '\n';
                    }
                }
            break;
        default:
            cout << "Sorry, we only allow up to 3 significant digit's for now! :(\nIf you need more than ask and we can implement it for you! thanks! :)\n";
            break;
        }
    
    return 0;
}
