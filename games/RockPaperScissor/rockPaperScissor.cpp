#include<bits/stdc++.h>
using namespace std;


char options[3] = {'r','s','p'};
bool validInput(char c){
    return (c=='r' || c=='p' || c=='s');
}

int whoWin(char a, char b){
    if(a==b)return 0; 
    if(a=='r' && b=='s')return 1;
    if(a=='s' && b=='r')return 2;
    if(a=='s' && b=='p')return 1;
    if(a=='p' && b=='s')return 2;
    if(a=='p' && b=='r')return 1;
    if(a=='r' && b=='p')return 2;
}

void game(bool &stop){
    cout<<"Type 'R' for rock, 'P' for paper, 'S' for scissor and press any other key to stop playing\n";
    char userInput;
    cin>>userInput;
    userInput = tolower(userInput);
    if(!validInput(userInput)){
        stop=true;
        return;
    }
    char computerInput;
    int num = rand()%3;
    computerInput = options[num];
    cout<<"Computer: "<<computerInput<<"\n";
    int win = whoWin(userInput, computerInput);
    if(win==0)cout<<"Draw\n";
    else{
        string winner = (win==1)?"You" : "Computer";
        cout<<winner<<" wins!\n";
    }
    stop=false;
}

int main(){
    srand(time(0));

    bool stop=false;
    while(!stop){
        game(stop);
        if(stop)break;
    }

}