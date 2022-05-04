#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main (){
	
	string player_name;
	cout<<"Enter Your Name:";
	cin>> player_name;
	system("cls");
	int rounds;
	cout<<player_name<<"\nHow many round you want to play: ";
	cin>> rounds;
	
	int player_score = 0, computer_score = 0;
	for(int round=1; round<= rounds; round++){
		system("cls");
		int player_choice, computer_choice;
		cout<<"\nRound No.:"<<round<<"/"<<rounds<<endl;
		cout<< player_name<<"\nscore="<<player_score<<endl;
		cout<< "\ncomputer score="<<computer_score<<endl;
		cout<<"1 = Bato "<<endl;
		cout<<"2 = Papel"<<endl;
		cout<<"3 = Gunting"<<endl;
		
	do{
		cout<<"\nSelect your Choice:";
		cin>>player_choice;
	}while(player_choice !=1 && player_choice !=2 && player_choice !=3);
	srand(time(0));
	computer_choice = (rand()%3)+1;
	
		if(player_choice == 1 && computer_choice ==3)
		{
			cout<<"Player win"<<endl;
			player_score++;
		}
		else if (player_choice == 2 && computer_choice == 1)
		{
			cout<<"Panalo ka !!"<<endl;
			player_score++;
		}
		else if (player_choice == 3 && computer_choice ==2)
		{
			cout<<"Panalo ka !!"<<endl;
			player_score++;
		}
		else if(player_choice == computer_choice)
		{
			cout<<"Tabla"<<endl;
		}
		else
		{
			cout<<"Panalo ka !!"<<endl;
			computer_score ++;
		}
		
	}
	if(computer_score == player_score)
	{
		cout<<"Draw"<<endl;
	}
	else if (player_score > computer_score)
	{
		cout<<"Congratulations"<<endl;
	}
	else
	{
		cout<<"Better Luck Next Time"<<endl;
	}
       
return 0;	
}

