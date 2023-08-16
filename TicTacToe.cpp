#include<iostream>
using namespace std;
char place[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
void gridCreation(){
    cout<<" "<<place[0][0]<<" | "<<place[0][1]<<" |"<<place[0][2]<<"  "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<" "<<place[1][0]<<" | "<<place[1][1]<<" |"<<place[1][2]<<"  "<<endl;
    cout<<"___|___|___"<<endl;
    cout<<" "<<place[2][0]<<" | "<<place[2][1]<<" |"<<place[2][2]<<"  "<<endl;
    cout<<"   |   |   "<<endl;
}
int result(){
    for(int i=0;i<3;i++){
        if(place[i][0]==place[i][1] && place[i][0]==place[i][2])
        return 1;
    }
    for(int i=0;i<3;i++){
        if(place[0][i]==place[1][i] && place[0][i]==place[2][i])
        return 1;
    }
    if(place[0][0]==place[1][1] && place[0][0]==place[2][2]){
        return 1;
    }
    if(place[0][2]==place[1][1] && place[0][2]==place[2][0]){
        return 1;
    }

    return 0;

}
void playing(string player1,string player2){
    string win;
    int draw=1;
    char token='x';
    string temp=player1;

    int res=result();
    while(res==0 && draw<=9){
    int flag=0;
    cout<<temp<<", please select the box : ";
    int box;
    cin>>box;
    while(box<1 || box>9){
        cout<<"Invalid box is choosen \nPlease choose a box between 1 to 9 : "<<endl;
        cin>>box;
    }
    char newbox;
    if(box==1){
    newbox='1';
    }
    if(box==2){
    newbox='2';
    }
    if(box==3){
    newbox='3';
    }
    if(box==4){
    newbox='4';
    }
    if(box==5){
    newbox='5';
    }
    if(box==6){
    newbox='6';
    }
    if(box==7){
    newbox='7';
    } 
    if(box==8){
    newbox='8';
    }
    if(box==9){
    newbox='9';
    }
 




            while(flag==0){
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    if(place[i][j]==newbox){
                        place[i][j]=token;
                        if(temp==player1){
                        win=player1;
                        temp=player2;
                        token='o';
                        } 
                        else{
                            win=player1;
                            temp=player1;
                            token='x';
                        }
                       
                        flag=1;
                        
                    
                }
        }
        }
        if(flag==0){
        cout<<temp<<" this box is previously filled, Please choose other box"<<endl;
        flag=1;
        }

            }

         
    
    gridCreation();
    draw++;
    res=result();
    
    }
    if(draw<=9)
    cout<<win<<" wins the game!!"<<endl;
    else
    cout<<"Match is draw"<<endl;
}

int main(){
    gridCreation();
    string player1,player2;
    cout<<"Enter the name of player 1 : ";
    getline(cin,player1);
    cout<<"Enter the name of player 2 : ";
    getline(cin,player2);
    playing(player1,player2);

}
