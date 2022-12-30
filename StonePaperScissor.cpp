#include <iostream>
#include <ctime>

char userin();
char compin();
void showchoice(char);
void winner(char,char);

int main(){
    std::cout<<"\n\n*************** Rock - Paper - Scissors game ***************\n";
    int choice=1;
    char a,b;
    do{
        a=userin();
        b=compin();
        std::cout<<"Your choice: ";
        showchoice(a);
        std::cout<<"Computer's choice: ";
        showchoice(b);
        winner(a,b);
        std::cout<<"Press 0 to stop, 1 to continue: ";
        std::cin>>choice;
    }while(choice);
    std::cout<<"\n\n***********************************************************\n\n";
    return 0;
}

char userin(){
    char a;
    do{
        std::cout<<"\n\nEnter a value:\n'r' for rock\n'p' for paper\n's' for scissors\n\n";
        std::cin>>a;std::cout<<std::endl;
    }while(a!='p'&&a!='r'&&a!='s');
    return a;
}
char compin(){
    srand(time(0));
    int num = rand()%3+1;
    switch(num){
        case 1:return 'r';
                break;
        case 2:return 'p';
                break;
        case 3:return 's';
                break;
    }
}
void showchoice(char a){
    switch(a){
        case 'r':std::cout<<"rock\n";
                break;
        case 'p':std::cout<<"paper\n";
                break;
        case 's':std::cout<<"scissors\n";
                break;
    }
}
void winner(char a,char b){
    switch(a){
        case 'r':if(b=='r'){
                    std::cout<<"\nIt's a Tie !\n\n";
                }
                if(b=='p'){
                    std::cout<<"\nComputer wins !\n\n";
                }
                if(b=='s'){
                    std::cout<<"\nPlayer wins !\n\n";
                }
                break;
        case 'p':if(b=='p'){
                    std::cout<<"\nIt's a Tie !\n\n";
                }
                if(b=='s'){
                    std::cout<<"\nComputer wins !\n\n";
                }
                if(b=='r'){
                    std::cout<<"\nPlayer wins !\n\n";
                }
                break;
        case 's':if(b=='s'){
                    std::cout<<"\nIt's a Tie !\n\n";
                }
                if(b=='r'){
                    std::cout<<"\nComputer wins !\n\n";
                }
                if(b=='p'){
                    std::cout<<"\nPlayer wins !\n\n";
                }
                break;
    }
}