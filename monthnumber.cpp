#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter the Month Number (1-12): ";
    cin>>n;
    // switch(n) {
    //     case 1:
    //         cout<<"January has 31 days."<<endl;
    //         break;
    //     case 2:
    //         cout<<"February has 28 days (29 in leap years)."<<endl;
    //         break;
    //     case 3:
    //         cout<<"March has 31 days."<<endl;
    //         break;
    //     case 4:
    //         cout<<"April has 30 days."<<endl;
    //         break;
    //     case 5:
    //         cout<<"May has 31 days."<<endl;
    //         break;
    //     case 6:
    //         cout<<"June has 30 days."<<endl;
    //         break;
    //     case 7:
    //         cout<<"July has 31 days."<<endl;
    //         break;
    //     case 8:
    //         cout<<"August has 31 days."<<endl;
    //         break;
    //     case 9:
    //         cout<<"September has 30 days."<<endl;
    //         break;
    //     case 10:
    //         cout<<"October has 31 days."<<endl;
    //         break;
    //     case 11:
    //         cout<<"November has 30 days."<<endl;
    //         break;
    //     case 12:
    //         cout<<"December has 31 days."<<endl;
    //         break;
    //     default:
    //         cout<<"Invalid month number. Please enter a number between 1 and 12."<<endl;
    // }

    // 1 3 5 7 8 10 12 have 31 days
    // 4 6 9 11 have 30 days
    // 2 has 28 days (29 in leap years)
    if((n<8 && n%2!= 0) || (n>7 && n%2 == 0)) {
        cout<<"31 days"<<endl;
    } else if(n==4||n==6||n==9||n==11) {
        cout<<"30 days"<<endl;
    } else if(n==2) {
        cout<<"28 days"<<endl;
    } else {
        cout<<"Invalid month number"<<endl;
    }
    return 0;
}