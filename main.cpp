#include <iostream>

using namespace std;

int main() {

    int x, cardsDealt = 0, runningCount = 0;                                                                                //declare integer variable x, initiate cardsDealt and runningCount to 0
    string faceValue;                                                                                                       //declare string variable faceValue




    while (true){                                                                                                           //begin while loop containing the list

    cout << "Please select an option" << endl;                                                                              //give options for user to select from list
    cout << "1. Deal cards" << endl;                                                                                        //if selected, user begins dealing cards
    cout << "2. Quit" << endl;                                                                                              //if selected, program ends
    cin >> x;                                                                                                               //take input from user

    if (x == 2){                                                                                                            //ends program
        cout << "Thank you, goodbye" << endl;
        return 0;
    }
    else{
        cout << "Please select a valid menu option" << endl;
    }
    while (x == 1){                                                                                                         //begins while loop for counting number of cards dealt and running count
        cout << "Enter the cards you want to be dealt. Use 2-10, J, Q, K or A. Press f to finish." << endl;                 //asks user to input cards they want dealt to them, and press the 'f' key when finished
        cin >> faceValue;                                                                                                   //takes input for cards face value

        if (faceValue >= "2" && faceValue <= "6"){                                                                          //increments runningCount by +1 for a range of 2-6
            runningCount++;
        }
        if ((faceValue >= "7" && faceValue <= "9") || faceValue == "f"){                                                    //leaves runningCount unchanged for a range of 7-9

        }
        if (faceValue == "10" || faceValue == "J" || faceValue == "Q" || faceValue == "K" || faceValue == "A"){             //increments runningCount by -1 for a range of 10-A
            runningCount--;
        }

        if (faceValue != "f"){                                                                                               //increments number of cards dealt by 1, will not count the input of 'f' that ends the program as a card dealt
            cardsDealt++;
        }

        if (faceValue == "f"){

            cout << "Finished dealing" << endl;                                                                              //inform user that dealing is completed

            cout << "Number of cards dealt is " << cardsDealt << endl;                                                       //outputs number of cards dealt

            cout << "Current running count is " << runningCount << endl;                                                     //outputs the running count

            return 0;
            }
        }

    }

}

