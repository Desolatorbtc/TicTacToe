#include<iostream>;
#include<stdlib.h>;
using namespace std;

char table[3][3]={ '1','2','3','4','5','6','7','8','9' };
char player = 'X';
int playcounter;

void draw(){
  cout << "Tic Tac Toe " << endl;
    for (int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<table[i][j]<<" ";
    }
    cout<<endl;
}
}

void PlayerInput(){
int a;
cout<<"Please choose the number you want to cross"<<endl;
cin>>a;

if (a== 1){
    if (table[0][0] == '1')
     table[0][0]= player;
    else
    cout<<"The volue is taken. Re-enter"<<endl;
}
else if (a== 2)
{
    if (table[0][1] == '2')
        table[0][1]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}


else if (a== 3)
{
    if (table[0][2] == '3')
        table[0][2]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}

else if (a== 4)
{
    if (table[1][0] == '4')
        table[1][0]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}

else if (a== 5)
{
    if (table[1][1] == '5')
        table[1][01]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}


else if (a== 6)
{
    if (table[1][2] == '6')
        table[1][2]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}

else if (a== 7)
{
    if (table[2][0] == '7')
        table[2][0]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}

else if (a== 8)
{
    if (table[2][1] == '8')
        table[2][1]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}

else if (a== 9)
{
    if (table[2][2] == '9')
        table[2][2]= player;
    else
        cout<<"The volue is taken. Re-enter"<<endl;
}
}

void togglePlayer(){
if (player == 'X')
    player = 'O';
else player = 'X';

}

char winner(){

//Row Check
    for (int i=0; i<3; i++){
        if(table[i][0]==player && table[i][1]==player && table[i][2]==player)
        return player;
    }

//Column Check
    for (int j=0; j<3; j++){
        if(table[0][j]==player && table[1][j]==player && table[2][j]==player)
        return player;
    }

//Diagonal Check
    if(table[0][0]==player && table[1][1]==player&& table[2][2]==player)
        return player;

    else if(table[0][2]==player && table[1][1]==player && table[2][0]==player)
        return player;
    else
    return '/';
}


int main() {
    draw();
    playcounter=0;
while (1){
    playcounter++;
    PlayerInput();
    draw();
    if (winner()== player){
        cout<<"The winner is "<<player<<endl;
        break;
    } else if (playcounter>5) {
        cout<<"Reached 6 steps. DRAW!"<<endl;
        break;
    };
    togglePlayer();

}
    system("pause");
}
