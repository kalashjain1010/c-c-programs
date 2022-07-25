#include<iostream>

#include<cstdlib>

#include<ctime>

using namespace std;

int main()

{

srand(time(0));

int a=50+ rand()%50;

cout<<"MAY I KNOW THE NAME OF THE PLAYER "<<endl;

char shagy[20];

cin.getline(shagy, 20);

int number;

int tip;

cout<<"WELCOME TO THIS GUESS THE NUMBER GAME \n"<<endl;

cout<<"press 0 for the tip or any other number to deny the tip \n";

cin>>tip;

if(tip==0){

if(a==50){

cout<<"u are extremely lucky,,it is 50,,bang on"<<endl;

}

if(a>80){

cout<<"it is greater than 80"<<endl;

}

if(a>50&a<101&a<!80){

cout<<"it is more than 50,sorry THAT'S ALL!" <<endl;

}

if(a>50&a<80){

cout<<"it lies between 50 and 80"<<endl;

}

if(a>50&a<70&a<!80){

cout<<"it is greater than 50 and less than 70\n oh U JUST GOT LUCKY,, so many tips "<<endl;

}

}

if(tip==0&a<50){

cout<<"it is less than 50"<<endl;

}

if(tip!=0){

cout<<"ok u denied the tip,,lets play"<<endl;

}

cout<<"guess the number "<<endl;

cin>>number;

int guesses=1;

while(number!=a){

if(number>a){

cout<<"too high! "<<endl;

}else if(number<a){

cout<<"too low! "<<endl;

}

cout<<"guess the number: ";

cin>>number;

guesses++;

if(guesses==4){

cout<<"\n oops! u are taking way too many guesses..PLAY CAREFULLY U HAVE TAKEN " <<guesses;

cout<<" till now"<<endl;

}

}

cout<<"U GOT IT. BING0!\n";

if(tip==0){

cout<<" u took "<<guesses<<" +2 =="<<guesses+2<<" guesses"<<endl;

}else{

cout<<"you took "<<guesses<<" guesses"<<endl;

}

;

cin.get();

return 0;

}