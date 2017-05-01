
#include <iostream>
using namespace std;
#include <ctime>
#include <cstdlib>
#include <string>

int roll(){ return rand()%6 + 1;}
int aicall1(){return rand()%2;}
int main()
{
	int you = 100,player1 = 100,player2 = 100;
	cout << " Starting amount: you = $100,player1 = $100,player2 = $100" << endl;
    while(true){
    int bet,bet1,bet2,e;
	string c,x,h,call2,call3;
	cout << " Enter c (even) or h (odd) " << endl;
	cin >> x;
	cout << " what is your bet? " << endl;
	cin >> bet;
    srand(time(0));
    int x1,x2,x3,z,m,n,y;
    x1 = roll();
    x2 = roll();
    x3 = roll();
    y = aicall1();
    z = aicall1();
    e  = x1 + x2;
    m = x3 + x2;
    n = x1+ x3;

    if(x=="c" && e%2==0){
        cout << " You bet $" << bet << " -> won... " << endl;
        you +=bet;
        }else if(x=="h" && e%2!=0){
                cout << " You bet $" << bet << " -> won... " << endl;
                you +=bet;
                }else{
			cout << "you lose:$ "<< bet << " your total money remaining is $ " << you - bet <<" " << " the dice are " <<  x1 << "," <<  x2 << endl;
			you -=bet;
			if(you <=0)break;
			}
			if(z = 0 && m%2==0){
        cout << " the dice are: " << x1 << "," << x2 << " cho   " << " player win:$ " << bet1 << " player1 total money is :$ " << player1 + bet1 << endl;

        player1 +=bet1;


        }else if(z = 1 && m%2!=0){
                cout << " the dice are " << x1 << "," << x2 << " han  " << "player1 win:$ " << bet1 << " player1 total money is :$ " << player1 + bet1 << endl;

                player1 +=bet1;
                }else{
			cout << "player 1 you lose:$ " << bet1 << " your remaining money is $ " << player1 - bet1 <<" " << " the dice are " <<  x1 << "," <<  x2 << endl;
			player1 -=bet1;
                if(player1 <=0)break;

			}
			if(y=0 && n%2==0){
        cout << " the dice are: " << x1 << "," << x2 << " cho   " << " player2 win:$ " << bet2 << " player2 total money is :$ " << player2 + bet2 << endl;
        player2 +=bet2;
        }else if(y = 1 && n%2!=0){
                cout << " the dice are " << x1 << "," << x2 << " han  " << "player2 win:$ " << bet2 << " player2 total money is :$ " << player2 + bet2 << endl;
                player2 +=bet2;
                }else{
			cout << "player 2 you lose:$ " << bet2 << " your remaining money is $ " << player2 - bet2 <<" " << " the dice are " <<  x1 << "," <<  x2 << endl;
			player2 -=bet2;
			if(player2 <=0)break;
			}
        }

	return 0;
}

