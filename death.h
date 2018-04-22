#include<iostream>
#include<string>
#include<iomanip>
#include<vector>
#include<fstream>
using namespace std;

int deathcount=0;
string vocabcheck2;
bool practicemode=false,normalmode=false,timemode=false;
double score;
bool lose = false,checktoaddpoint=true;
vector<string> yourName;
vector<int> yourScore;
string name;

void newTurn()
{
	checktoaddpoint=true;
	deathcount=0;
	lose = false;
}

void showScore(int myScore){
	cout<< setw(60)<<"SCORE"<<"\n";
	if(myScore>=100)cout<< setw(59) << myScore <<"\n";
	else if(myScore>=10)cout<< setw(59) << "0" << myScore <<"\n";
	else cout<< setw(59) << "00" << myScore <<"\n";
}

void drawScene7Lifes()
{
	cout << 								"\t\t\t\t _______________________"<< "\n";
	cout <<									"\t\t\t\t|                       |"<< "\n";
	cout << 								"\t\t\t\t|      ___________      |"<< "\n";
	if(deathcount>=1){cout << 				"\t\t\t\t|     |           |     |"<< "\n";
					cout << 				"\t\t\t\t|     |           |     |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	if(deathcount>=2)cout << 				"\t\t\t\t|     |           O     |"<< "\n";
		else cout <<						"\t\t\t\t|     |                 |"<< "\n";
	if(deathcount>=5){cout << 				"\t\t\t\t|     |          /|\\    |"<< "\n";
					cout << 				"\t\t\t\t|     |         / | \\   |"<< "\n";
	}else if(deathcount>=4){cout << 		"\t\t\t\t|     |          /|     |"<< "\n";
					cout << 				"\t\t\t\t|     |         / |     |"<< "\n";
	}else if(deathcount>=3){cout << 		"\t\t\t\t|     |           |     |"<< "\n";
					cout << 				"\t\t\t\t|     |           |     |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	if(deathcount>=7){cout << 				"\t\t\t\t|     |          / \\    |"<< "\n";
					cout << 				"\t\t\t\t|     |         /   \\   |"<< "\n";
	}else if(deathcount>=6){cout << 		"\t\t\t\t|     |          /      |"<< "\n";
					cout << 				"\t\t\t\t|     |         /       |"<< "\n";
	}else {cout <<							"\t\t\t\t|     |                 |"<< "\n";
				cout <<						"\t\t\t\t|     |                 |"<< "\n";}
	cout << 								"\t\t\t\t|     |                 |"<< "\n";
	cout << 								"\t\t\t\t|    _|_                |"<< "\n";
	cout << 								"\t\t\t\t|                       |"<< "\n";
	cout << 								"\t\t\t\t|_______________________|"<< "\n";
	if(deathcount == 7 ) 
	{
		lose = true;
	}
}

void addpoint(){
	if(practicemode) score += 1;
	if(normalmode) score += (8-deathcount)*5*vocabcheck2.size();

}

void addScore()
{
	if(lose){
		cout << setw(20) << left << " " << "-----------------------" << "\n";
		cout << setw(20) << left << " " << "|       You Lose      |" << "\n";
		cout << setw(20) << left << " " << "-----------------------" << "\n";
		cout << "Input your name: ";
		cin >> name;
		cout << setw(20) << left << " " << setw(20) << left << "Name" << "Score" << "\n";
		for(int i=0;i<1;i++)
		{
		cout << setw(20) << left << " " << setw(20) << left << yourName[i] << yourScore[i] << "\n";
		}
		cout << "Enter to continues: ";
		cin.ignore();
		yourName.push_back(name);
		yourScore.push_back(score);
		Home();
	}
}

void showAlphabet(vector<char> alphabet){
	cout << setw(20) << left << " " << "Worded: "; 
		for (int i=0;i<alphabet.size();i++) {
			cout << alphabet[i] << " ";
		}
	cout << "\n";
}