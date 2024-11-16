#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	system("COLOR 0A");
	int myAge;
	const int votingAge=18;
	int a=0;
	int b=0;
	int c=0;
	int d=0;
	char ans, choice;
	string anso, ansos, reg;
	
	system("cls");
	do{
			system("cls");
			cout<<"INPUT YOUR AGE"<<endl;
			cin>>myAge;
			if(myAge>=votingAge){
			
			system("cls");
			string mainName, surName, answr;
			cout<<"=========================================================================================================\n";
			cout<<"\tWW       WW   EEEEEEE  LL          CCCCCC     OOOOOO    MM       MM  EEEEEEE\n";
			cout<<"\tWW       WW   EE       LL         CC         OO    OO   MM M   M MM  EE\n";
			cout<<"\tWW   W   WW   EEEEEEE  LL        CC         OO      OO  MM  M M  MM  EEEEEE\n";
			cout<<"\tWW  W W  WW   EEEEEEE  LL        CC         OO      OO  MM   M   MM  EEEEEE\n";
			cout<<"\tWW W   W WW   EE       LL         CC         OO    OO   MM       MM  EE\n";
			cout<<"\tWW       WW   EEEEEEE  LLLLLLL     CCCCCC     OOOOOO    MM       MM  EEEEEEE\n";
			cout<<"=========================================================================================================\n\n";
			cout<<"WELCOME TO VOTENAIJA"<<endl;
			cout<<"NAIJA'S #NO.1 VOTING PLATFORM"<<endl;
			cout<<"\tYOUR VOTE IS YOUR RIGHT, DO NOT SELL YOUR VOTE."<<endl;
			cout<<"\tSELLING YOUR VOTE IS SELLING YOUR FUTURE. OBEY YOUR CONSCIENCE."<<endl;
			cout<<"are you ready?\n";
			getline(cin, answr);
			getline(cin, answr);
			string canddt, partyName, name;
			
			system("cls");
			cout<<"PLEASE INPUT YOUR NAME\n";
			getline(cin, name);
			
			system("cls");
			cout<<"WELCOME "<<name<<endl<<endl;	
			cout<<"THESE ARE THE ELECTORAL CANDIDATES OF VARIOUS PARTIES WITH THEIR VOTE CODES BESIDE THEM\n\n";
			cout<<"\tAPC- BOLA TINUBU(Q)\n\n";
			cout<<"\tPDP- ATIKU ABUBAKAR(W)\n\n";
			cout<<"\tLP- PETER OBI(E)\n\n";
			cout<<"\tHPP- MUHAMMAD KWANKWASO(R)\n\n";
			getline(cin, canddt);/*when using getline function in a code where cin has been used, make two getline functions(one 
								 as a dummy and another as thw main one). This is used when the getline is used when the last
								 input function before it is a cin function*/
		
				system("cls");
				cout<<"ENTER YOUR VOTE\n";
				cout<<"'Q' FOR APC\n";
				cout<<"'W' FOR PDP\n";
				cout<<"'E' FOR LP\n";
				cout<<"'R' FOR HPP\n";
				cin>>ans;
				if(ans=='q'||ans=='Q'){
					a++;
				}else if(ans=='w'||ans=='W'){
					b++;
				}else if(ans=='e'||ans=='E'){
					c++;
				}else if(ans=='r'||ans=='R'){
					d++;
				}else{
					system("cls");
					cout<<"ERROR: UNREGISTERED INPUT\n";
					getline(cin, reg);
					getline(cin, reg);
				}
				int rateNum;
				string anss;
				const int maxRate=5;
				
				system("cls");
				cout<<"DID YOU ENJOY THE EXPERIENCE?\n\n";
				cout<<"PLEASE RATE US ACCORDING TO THE NO. OF STARS (0-5)\n\n";
				cin>>rateNum;
				
				system("cls");
				if(rateNum>maxRate){
					cout<<"INVALID RATE NUMBER\n";
				}else{
					cout<<"THANKS FOR USING VOTENAIJA";
					getline(cin, anss);
					getline(cin, anss);
				}
		}else{
			system("cls");
			cout<<"ERROR:BELOW REQUIRED AGE"<<endl;
			getline(cin, ansos);
			getline(cin, ansos);
		}
	
		system("cls");
		cout<<"TO INDICATE NEW USER ENTER 'y' OTHERWISE ENTER 'n'\n";
		cin>>choice;
	}while(choice=='y'||choice=='Y');
		
	system("cls");
	cout<<"APC HAS "<<a<<" VOTE(S)\n";
	cout<<"PDP HAS "<<b<<" VOTE(S)\n";
	cout<<"LP HAS "<<c<<" VOTE(S)\n";
	cout<<"HPP HAS "<<d<<" VOTE(S)\n";
	getline(cin, anso);
	getline(cin, anso);
	
	system("cls");
	
	if(a>b && a>c && a>d){
		cout<<"APC WON WITH "<<a<<" VOTE(S)\n";
	}
	else if(b>a && b>c && b>d){
		cout<<"PDP WON WITH "<<b<<" VOTE(S)\n";
	}
	else if(c>a && c>b && c>d){
		cout<<"LP WON WITH "<<c<<" VOTE(S)\n";
	}
	else if(d>a && d>b && d>c){
		cout<<"HPP WON WITH "<<d<<" VOTE(S)\n";
	}
	else if(a=b=c=d){
		cout<<"ALL ARE TIED\n";
	}
	else if(a=b=c && (c<d || c>d)){
		cout<<"three are tied\n\n";
	}
	else{
		cout<<"THERE IS NO WINNER\n";	
	}

	return 0;
}
