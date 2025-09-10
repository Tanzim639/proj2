#include<bits/stdc++.h>
using namespace std;

char grid[3][7] = {
    {'|', ' ', '|', ' ', '|', ' ', '|'},
    {'|', ' ', '|', ' ', '|', ' ', '|'},
    {'|', ' ', '|', ' ', '|', ' ', '|'}
};

char player, computer;

bool playerFirst;

char realGrid[3][3]={
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '}
};

void signSelection(){
    cout<<"Do you want 'x' or 'o'?\n";
    cin>>player;
    player = tolower(player);
    if(player=='x')computer='o';
    else if(player=='o')computer='x';
    else{
        cout<<"Invalid sign. Try again\n";
        signSelection();
    }
}

void whoMoveFirst(){
    cout<<"Do you wanna move first (press y for yes, n for no)?\n";
    char whoFirst;
    cin>>whoFirst;
    whoFirst = tolower(whoFirst);
    if(whoFirst=='y')playerFirst = true;
    else if(whoFirst=='n') playerFirst = false;
    else{
        cout<<"Invalid. Try again\n";
        whoMoveFirst();
    }
}

void update(){
    for(int i=0; i<3; i++){
        for(int j=1; j<7; j+=2){
            grid[i][j]=realGrid[i][j/2];
        }
    }
}

char whoWins(){
    for(int i=0; i<3; i++){
        if(realGrid[i][0]!=' ' && realGrid[i][0]==realGrid[i][1] && realGrid[i][0]==realGrid[i][2]){
            return realGrid[i][0];
        }
    }
    for(int j=0; j<3; j++){
        if(realGrid[0][j]!=' ' && realGrid[0][j]==realGrid[1][j] && realGrid[0][j]==realGrid[2][j]){
            return realGrid[0][j];
        }
    }
    if(realGrid[0][0]!=' ' && realGrid[0][0]==realGrid[1][1] && realGrid[1][1]==realGrid[2][2]){
        return realGrid[0][0];
    }
    if(realGrid[0][2]!=' ' && realGrid[0][2]==realGrid[1][1] && realGrid[1][1]==realGrid[2][0]){
        return realGrid[0][2];
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(realGrid[i][j]==' '){
                return 'c';
            }
        }
    }
    return 'd';
}

void printGrid(){
    for(int i=0; i<3; i++){
        for(int j=0; j<7; j++){
            cout<<grid[i][j];
        }
        cout<<"\n";
    }
    cout<<"\n";
}

pair<int,int>getIndex(int num){
    return {num/3, num%3};
}


void userInput(){
    cout<<"Choose a number from 1 to 9 for the grid: ";
    int num;
    cin>>num;
    num--;
    pair<int,int>index = getIndex(num);
    if((num<0 || num>8) || (realGrid[index.first][index.second]!=' ')){
        cout<<"Occupied square. Try again\n";
        userInput();
    }else{
        realGrid[index.first][index.second] = player;
    }
    update();
}

void computerOutput(){
    vector<pair<int,int>>spaceIndexes;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(realGrid[i][j]==' '){
                spaceIndexes.push_back({i,j});
            }
        }
    }
    int sz = spaceIndexes.size();
    int rndm = rand()%sz;
    pair<int,int> computerSelected = spaceIndexes[rndm];
    realGrid[computerSelected.first][computerSelected.second] = computer;
    update();
}

bool dicision(){
    char ans  = whoWins();
    if(ans==computer){
        cout<<"Computer Wins!\n\n";
        return true;
    }
    if(ans==player){
        cout<<"Player Wins!\n\n";
        return true;
    }
    if(ans=='d'){
        cout<<"Game Draw!\n\n";
        return true;
    }
    return false;
}

bool userProcess(bool doBreak){
    userInput();
    printGrid();
    bool done = dicision();
    if(done)return true;
    return false;
}

bool computerProcess(bool doBreak){
    computerOutput();
    printGrid();
    bool done=dicision();
    if(done)return true;
    return false;
}

int main(){
    srand(time(0));
    
    signSelection();

    whoMoveFirst();

    printGrid();

    while(1){
        
        if(playerFirst){
            bool doBreak;
            if(userProcess(doBreak))break;
            if(computerProcess(doBreak))break;
        }else{
            bool doBreak;
            if(computerProcess(doBreak))break;
            if(userProcess(doBreak))break;
        }
    }
}