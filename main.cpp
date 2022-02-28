#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int iNum1,iNum2;
    string var;
    bool bAns;
    char op;

    bAns = true;



    while (bAns == true){

     cout<< "Please insert the first number"<<endl;
     cin>> iNum1;

     cout<< "Please insert the second number"<<endl;
     cin>> iNum2;

     cout<<"Please insert the operator to be used"<<endl;
     cin>> op;

    switch(op){

       case '+':
           cout<<iNum1+iNum2<<endl;
           break;

       case '-':
           cout<< iNum1-iNum2<<endl;
           break;

       case '*':
            cout<< iNum1*iNum2<<endl;
            break;

       case '/':
            cout<< iNum1/iNum2<<endl;
            break;

       default:
            cout<< "This value is not valid, please try again";
            break;


    }

     cout<< "Would you like to resume?"<<endl;
     cin>> var;

     if (var == "yes"){

        bAns = true;
     }else

     if (var == "no"){

        return 0;
     }else

     cout << "You have entered the wrong value"<< endl;

    }



    return 0;
}
