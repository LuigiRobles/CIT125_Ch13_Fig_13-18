// CIT125 Intro to C++ Luigi Robles
// 08-02-2020 Summer Term
// Ch.13 pg.483 Fig.13-18 Bonus program
// displays sales and bonus amounts

#include <iostream> 
#include <iomanip> 
#include <string> 
using namespace std;

int main()
{
    //declare and initialize variables
    const double RATE = 0.1;
    string sales = "";
    string currentChar = "";
    int sub = 0;
    double bonus = 0.0;

    cout << "Sales: ";
    getline(cin, sales);//function call to get sales amount

    //remove all characters except numbers
    while (sub < sales.length())
    {
        currentChar = sales.substr(sub, 1); //function call
        if (currentChar < "0" || currentChar > "9")
            sales.erase(sub, 1);
        else
            sub += 1;
        //end if
    }    //end while

    //calculate bonus
    bonus = stod(sales) * RATE;

    //display sales and bonus
    cout << fixed << setprecision(2) << endl;
    cout << "Sales amount: " << sales << endl;
    cout << "Bonus amount: " << bonus << endl;
    return 0;
}  //end of main function