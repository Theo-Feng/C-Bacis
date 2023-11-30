#include <iostream>

using namespace std;

string getDayoftheweek (int dayNum){
    string dayName;
    
    switch (dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "Invalid Information";
    }
    return dayName;
}

int main(){
    int dayNum;
    
    cout << "Please enter the Number of the day of the week";
    cin >> dayNum;
    
    string output;
    output = getDayoftheweek(dayNum);
    
    if(output == "Invalid Information"){
        cout << output;
    } else{
        cout << "The day is: " << output << ".  ";
    }
    return 0;
}
