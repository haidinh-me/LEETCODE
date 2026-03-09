#include <iostream>
#include <string>

using namespace std;

string moves = "UDLLRRL";

bool judgeCircle(string moves){
    int16_t x=0, y=0;
    for(char i : moves){
        switch (i)
        {
        case 'U':
            y++;
            break;
        case 'D':
            y--;
            break;
        case 'L':
            x--;
            break;
        case 'R':
            x++;
            break;
        default:
            break;
        }
    }
    return x==0 && y==0;
}

int main(){
    cout<<judgeCircle(moves);
    return 0;
}