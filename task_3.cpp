// Task- 3
// TIC- TAC- TOE GAME


/* Build a simple console- based Tic- Tac-toe game that 
   allows two players to play against each other. 
*/

#include<iostream>
using namespace std;

// Global space declaration
char space[3][3] ={ '1','2','3','4','5','6','7','8','9'};
string player1 = " ";                                         // player-1 write X
string player2 =" ";                                         // player-2 write 0
int row;
int column;
bool tie= false ;
char token = 'X';

void fun1(){
    
  cout<<"    |    |     "<<endl ;
  cout<<" "<<space[0][0]<<"  |  "<<space[0][1]<<" |  "<<space[0][2]<< endl ;      
  cout<<"____|____|_____"<< endl ;
  cout<<"    |    |     "<< endl ;
  cout<<" "<< space[1][0]<<"  |  "<<space[1][1]<<" |  "<<space[1][2]<< endl ;
  cout<<"____|____|_____"<< endl ; 
  cout<<"    |    |     "<< endl  ;
  cout<<" "<< space[2][0]<<"  |  "<<space[2][1]<<" |  "<<space[2][2]<< endl ;
  cout<<"    |    |     "<< endl  ;

}


void fun2(){
  int digit;

  if(token== 'X'){
    cout<<player1 << " [Symbol- X] please enter :"<<endl;
    cin>> digit;
  }

  if(token== '0'){
    cout<<player2<< " [Symbol- 0] please enter :"<<endl;
    cin>> digit;
  }
  if( digit== 1){
    row= 0;
    column= 0;
  }
  if( digit== 2){
    row= 0;
    column= 1;
  }
  if( digit== 3){
    row= 0;
    column= 2;
  }
  if( digit== 4){
    row= 1;
    column= 0;
  }
  if( digit== 5){
    row= 1;
    column= 1;
  }
  if( digit== 6){
    row= 1;
    column= 2;
  }
  if( digit== 7){
    row= 2;
    column= 0;
  }
  if( digit== 8){
    row= 2;
    column= 1;
  }
  if( digit== 9){
    row= 2;
    column= 2;
  }
 
 else if(digit<1 || digit>9){
  cout<< "Invalid" << endl;
 } 

// check if there is space available or not.

  if(token == 'X' && space[row][column] != 'X' && space[row][column]!= '0'){
  space[row][column] = 'X' ;
  token= '0';
  }

  else if(token == '0' && space[row][column] != 'X' && space[row][column]!= '0'){
  space[row][column] = '0' ;
  token= 'X';
  }

  else{
    cout<<" There is no empty space."<< endl;
    fun2();
  }

}


// check whether the game is going on or stop.

bool fun3()
{

// Here we check the game is won by any player.  
  for(int i=0; i<3; i++){
    if(space[i][0]== space[i][1] && space[i][0] == space[i][2] || space[0][i]== space[1][i] && space[0][i]== space[2][i]){
      return true;
    }
  }

  if(space[0][0] == space[1][1] && space[1][1]== space [2][2] || space[0][2]== space[1][1] && space[1][1]== space[2][0]){
    return true;
  }
  
  // Here we check is there is any space left or not.
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      if( space[i][j] != 'X' && space[i][j] != '0'){
        return false;                                       
      }
    }
  }
  tie= true;
  return true;
}
 

int main(){

  cout<<"\t   TIC- TAC- TOE GAME"<< endl;
  cout<< "\n" ;
  cout<< "Enter player-1 name: ";
  getline(cin, player1);
  cout<< "Enter player-2 name: " ;
  getline(cin, player2);  
  cout<<endl;

  while(fun3()== false)
  {
    fun1();
    fun2();
    fun3();
  }

  if(token == '0' && tie == false){
    cout<< player1<< " Win!!"<< endl;
  }

  else if(token == 'X' && tie==false){
    cout<< player2<< " Win!!"<< endl;
  }

  else{
    cout<<" Match is draw"<< endl;
  }

}
