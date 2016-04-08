#include "poker.h"
#include <iostream>
const int SIZE = 5;
int main()
{
    using std::cin;
    using std::cout;
    using std::endl;
    using std::strchr;
    person * lolas[SIZE];
    int ct;
    for (ct = 0; ct < SIZE; ct++) {
        char choice;
        cout << "Enter the employee category:\n"
        << "g:Gunslinger p: PorkerPlayer "
        << "b: BadDude q: quit\n";
        cin >> choice;
        while (strchr("gpbq", choice) == NULL)
        {
            cout << "Please enter a g, p, b, or q: ";
            cin >> choice;
        }
        if (choice == 'q')
            break;
        switch(choice)
        {
            case 'g':
                lolas[ct]= new gunslinger;
                break;
            case 'p':
                lolas[ct]= new pokerplayer;
                break;
            case 'b':
                lolas[ct] = new baddude;
                break;
        }
        cin.get();
        
    }
    cout << "\nHere is your staff:\n";
    int i;
    for (i = 0; i < ct; i++) {
        person *temp=lolas[i];
        cout << endl;
        temp->show();
        
    }
    cout << "Bye.\n";
    return 0;
}