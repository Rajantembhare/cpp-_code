#include<iostream>
using namespace std;

int main()
 {
    int fineType;
    int nohelmet_fine = 500;
    int nolicense_fine = 1000;
    int overspeed_fine = 1500;
    int total_fine = 0;

    cout << "Enter the type of fine (1=No Helmet, 2=No License, 3=Overspeed): ";
    cin >> fineType;


    
    if (fineType == 1) {
        total_fine = nohelmet_fine;
        cout<<total_fine;
    } else if (fineType == 2) {
        total_fine = nolicense_fine;
               cout<<total_fine;
    } else if (fineType == 3) {
        total_fine = overspeed_fine;
               cout<<total_fine;
    } else {
        cout << "Invalid fine type entered!" << endl;
        return 0; // exit early
    }
} 
 