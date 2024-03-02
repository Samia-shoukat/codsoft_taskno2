#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int range;
	cout<<"Enter range : ";
	cin>>range;
	srand(time(0));
	int number=(rand()%range)+1;
	int guess=0;
	while(guess!=number)
	{
	cout<<"\nEnter any number between the range : ";
	cin>>guess;
	if(guess>number)
	{
		cout<<"\nGuess lower!";
	}
	else if(guess<number)
	{
		cout<<"\nGuess higher!";
	}
	else
	cout<<"\nyou won the game";
	}
}
