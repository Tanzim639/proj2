#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>grid(9, vector<int>(9));
vector<vector<vector<int>>>guesses(9, vector<vector<int>>(9, vector<int>()));
vector<set<int>>rows(9);
vector<set<int>>columns(9);
vector<set<int>>bigSquares(9);

vector<vector<int>>bigSquaresIndex = {
    // row start, row end, column start, column end
    {0,2,0,2},
    {0,2,3,5},
    {0,2,6,8},
    {3,5,0,2},
    {3,5,3,5},
    {3,5,6,8},
    {6,8,0,2},
    {6,8,3,5},
    {6,8,6,8}
};

void userInput(){
    cout<<"Enter the sudoku. Write 0 in the gaps:\n";
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cin>>grid[i][j];
        }
    }
}

int whichBigSquare(int i, int j){
    return( (3*(i/3))+(j/3) );
}

void calculations(){
    for(int i=0; i<9; i++){
        // row
        for(int j=0; j<9; j++){
            if(grid[i][j]!=0)rows[i].insert(grid[i][j]);
        }
        //column
        for(int j=0; j<9; j++){
            if(grid[j][i]!=0)columns[i].insert(grid[j][i]);
        }
        //bigsquare
        for(int r=bigSquaresIndex[i][0]; r<=bigSquaresIndex[i][1]; r++){
            for(int c=bigSquaresIndex[i][2]; c<=bigSquaresIndex[i][3]; c++){
                if(grid[r][c]!=0)bigSquares[i].insert(grid[r][c]);
            }
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(grid[i][j]!=0)guesses[i][j].push_back(grid[i][j]);
            else{
                set<int>nums;
                for(int num=1; num<=9; num++)nums.insert(num);
                for(auto it: rows[i]){
                    nums.erase(it);
                }
                for(auto it: columns[j]){
                    nums.erase(it);
                }
                int ind = whichBigSquare(i,j);
                for(auto it: bigSquares[ind]){
                    nums.erase(it);
                }
                for(auto it: nums){
                    guesses[i][j].push_back(it);
                }
            }
        }
    }
}

void reset(){
    rows.resize(9);
    columns.resize(9);
    bigSquares.resize(9);
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            guesses[i][j].clear();
        }
    }
}

void printGrid(){
    cout<<"\nThe answer:\n";
    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    userInput();
    bool finished=false;
    int cnt=0;
    while(!finished){
        cnt++;
        if(cnt>10)break;
        reset();
        calculations();
        finished=true;
        int oc=0;
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(guesses[i][j].size()==1){
                    grid[i][j]=guesses[i][j][0];
                    oc++;
                }else{
                    finished=false;
                }
            }
        }
        cout<<oc<<endl;
    }
    printGrid();
    // cout<<"jajaj\n";
}