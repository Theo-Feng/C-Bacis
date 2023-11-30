#include <iostream>

using namespace std;

int main()
{
    srand(time(0));
    int answer = rand() % 20 + 1;
    
    string start;
    int input;
    int time = 1;
    int limit = 5;
    bool out = false;
    
    cout << "Now we are playing a number gaussing game. "<<endl;
    cout << "I will be coming up with an interger between 1 to 20. "<<endl;
    cout << "Your goal is to guess that number. "<<endl;
    cout << "You have 5 times to try. "<<endl;
    cout << "Good luck :) "<<endl;
    cout << "When you are ready, print START to start the game. "<<endl;
    cin >> start;
    
    if(start == "START"){
        cout << "OK let's start. Please enter your guess:  "<<endl;
        cin >> input;
        
        while (input != answer && !out){
            if (time < limit){
                if (input > answer){
                    cout << "Your guess is to big. Try anoter time. You still have "<< time << " more chance left.";
                    cin >> input;
                }
                else{  
                    cout << "Your guess is to small. Try anoter time.  You still have "<< time << " more chance.";
                    cin >> input;
                }
                time ++;
            }else{
                out = true;
            }
        } if (out){
            cout << "You have reach the guess limit. Try it next time.";
        } else{
            cout << "Great job! You get the right answer in "<< time << " tries!";
        }
    } else{
        cout << "OK. It seems that you are not ready yet. See you.";
    }
    return 0;
}
