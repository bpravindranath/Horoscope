//*************************************************************************
//COSC 501                                              
//Barnabas Ravindranath                                 10/13/16
//Program Name: horoscope
// 
#include <iostream>
#include<iomanip>
#include <cstdlib>

using namespace std;

void get_input (int& a, int& b);

void get_month(int a, int b, int& c, int& d);

void display(int y);

void on_the_cusp(int);

void continue_horoscope(int&, int&);

int main() {

char ans;

int month, day, horoscope, cusp = 0;

get_input(month, day);

while (month >= 1) {  
    
    get_month(month, day, horoscope, cusp);

    display(horoscope);

if (cusp != 0) {
    on_the_cusp(cusp);
    }

continue_horoscope(month, day);
} 

return 0;
}

void get_input (int& a, int& b) {
    using namespace std;
    
    cout << "Enter the month of your birthday (1-12): ";
    cin >> a;
    cout << "Enter the  day of your birthday: ";
    cin >> b;
   
    return;
}

void get_month(int a, int b, int& c, int& d) { //a =  month, b = day, c = return
  using namespace std;
  for (bool t = true; t == true; )
  {
    if (((a == 3) && (b >= 21)) || ((a == 4) && (b <= 19))) { // ARIES
        c = 1;  
            if ((( b >= 21) && (b <=23)) && (a == 3)) {
                d = 12;
            }
            else if (((b <= 19) && (b >=17)) && (a == 4)) {
                d = 2;
            }
        t = false;
    }
    else if  (((a == 4) && (b >= 20)) || ((a == 5) && (b <= 20))) { //TAURUS
        c = 2;  
            if (((b >= 20) && (b <=22)) && (a == 4)) {
                d = 1;
            }
            else if (((b <= 20) && (b >=18)) && (a == 5)) {
                d = 3;
            }
        t = false;
    }
    else if  (((a == 5) && (b >= 21)) || ((a == 6) && (b <= 21))) { //GEMINI
        c = 3;  
            if ((( b >= 21) && (b <=23)) && (a == 5)) {
                d = 2;
            }
            else if (((b <= 21) && (b >=19)) && (a == 6)) {
                d = 4;
            }
        t = false;
    }
    else if  (((a == 6) && (b >= 22)) || ((a == 7) && (b <= 22))) { //CANCER
        c = 4;  
        
            if ((( b >= 22) && (b <=24)) && (a == 6)) {
                d = 3;
            }
            else if (((b <= 22) && (b >=20)) && (a == 7)) {
                d = 5;
            }
        t = false;
    }
    else if  (((a == 7) && (b >= 23)) || ((a == 8) && (b <= 22))) { //LEO
        c = 5;
            if ((( b >= 23) && (b <=25)) && (a == 7)) {
                d = 4;
            }
            else if (((b <= 22) && (b >=20)) && (a == 8)) {
                d = 6;
            }
        t = false;
    }
    else if  (((a == 8) && (b >= 23)) || ((a == 9) && (b <= 22))) { //Virgo
        c = 6;  
            if ((( b >= 23) && (b <=25)) && (a == 8)) {
                d = 5;
            }
            else if (((b <= 22) && (b >=20))  && (a == 9)){
                d = 7;
            }
        t = false;
    }
    else if  (((a == 9) && (b >= 23)) || ((a == 10) && (b <= 22))) { //Libra
        c = 7;  
            if ((( b >= 23) && (b <=25)) && (a == 9)) {
                d = 6;
            }
            else if (((b <= 22) && (b >=20)) && (a == 10)) {
                d = 8;
            }
        t = false;
    }
    else if  (((a == 10) && (b >= 23)) || ((a == 11) && (b <= 21))) { //Scorpio
        c = 8;  
            if ((( b >= 23) && (b <=25)) && (a == 10)) {
                d = 7;
            }
            else if (((b <= 21) && (b >=19)) && (a == 11)) {
                d = 9;
            }
        t =false;
    }
    else if  (((a == 11) && (b >= 22)) || ((a == 12) && (b <= 21))) { //Sagittarius
        c = 9;  
            if ((( b >= 22) && (b <=24)) && (a == 11)) {
                d = 8;
            }
            else if (((b <= 21) && (b >=19)) && (a == 12)) {
                d = 10;
            }
        t = false;
    }
    else if  (((a == 12) && (b >= 22)) || ((a == 1) && (b <= 19))) { //Capricorn
        c = 10;  
            if ((( b >= 22) && (b <=24)) && (a == 12)) {
                d = 9;
            }
            else if (((b <= 19) && (b >=17)) && (a == 1)) {
                d = 11;
            }
        t = false;
    }
    else if  (((a == 1) && (b >= 20)) || ((a == 2) && (b <= 18))) { //Acquarius
        c = 11; 
            if ((( b >= 20) && (b <=22)) && (a == 1)) {
                d = 10;
            }
            else if (((b <= 18) && (b >=16)) && (a == 2)) {
                d = 12;
            }
        t = false;
    }
    else if  (((a == 2) && (b >= 19)) || ((a == 3) && (b <= 20))) { //Pisces
        c = 12; 
            if ((( b >= 19) && (b <=21)) && (a == 2)) {
                d = 11;
            }
            else if (((b <= 20) && (b >=18)) && (a == 3)) {
                d = 1;
            }
        t = false;
    }
    
    else {
        cout << "Wrong Input!"  << endl;
        cout << endl;
        get_input(a ,b);
        t = true;
    }
  }
    cout << endl;
    return;
}

void display(int y) {
    using namespace std;
    int z = 30;
    switch (y)
    {
        case 1: {
            cout << "Aries" << setw(z) << "March 21 - April 19" << endl;
            cout << endl;
            break;
    }
        case 2: {
            cout << "Taurus" << setw(z) << "April 20 - May 20" << endl;
            cout << endl;
            break;
    }
        case 3: {
            cout << "Gemini" << setw(z) << "May 21 - June 21"<<  endl;
            cout << endl;
            break;
    }
        case 4: {
            cout << "Cancer" << setw(z) << "June 22 - July 22" << endl;
            cout << endl;
            break;
    }
        case 5: {
            cout << "Leo" << setw(z) << "July 23 - Agusust 22" << endl;
            cout << endl;
            break;
    }
        case 6: {
            cout << "Virgo" << setw(z) << "August 23 - September 22" << endl;
            cout << endl;
            break;
    }
        case 7: {
            cout << "Libra" << setw(z) << "September 23 - October 22" << endl;
            cout << endl;
            break;
    }
        case 8: {
            cout << "Scorpio" << setw(z) << "October 23 - November 21" << endl;
            cout << endl;
            break;
    }
        case 9: {
            cout << "Sagittarius" << setw(z) << "November 22 - December 21" << endl;
            cout << endl;
            break;
    }
        case 10: {
            cout << "Capricorn" << setw(z) << "December 22 - January 19" << endl;
            cout << endl;
            break;
    }
        case 11: {
            cout << "Aquarius" << setw(z) << "January 20 - February 18" << endl;
            cout << endl;
            break;
    }
        case 12: {
            cout << "Pisces" << setw(z) << "February 19 - March 20" << endl;
            cout << endl;
            break;
    }  
        default:
            cout << "Unknown Input" << endl;
            
    }   
    return;
}

void on_the_cusp(int q){
    using namespace std;
    for (bool p = true; p == true; p = false) {
        cout << "Your Birthday is on the Cusp of another sign! Here it is:" << endl;
        display(q);
    } 
return;
}

void continue_horoscope(int& h, int& i) {
int g;   
cout << "Would you like to enter another birthday? (1 for Yes and 0 or No)"; 
    cin >> g;
    if (g == 1) {
        get_input(h, i);
        return;
    }
    else {
        h = 0;
    }
}
            