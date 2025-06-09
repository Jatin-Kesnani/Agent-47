/*----------------------Agent 47 PROJECT----------------------*/

//		*************************************************
//		*												*
//		*												*
//		*		Jatin Kesnani				(K21-3204)	*
//		*												*
//		*												*
//		*************************************************

#include<iostream>
#include<fstream>
#include<windows.h>
#include<string>
#include<conio.h>
using namespace std;
class Agent47{
	public:
		string Question;
		Agent47 *L;
		Agent47 *R;
		
		Agent47(string Question){
			this->Question = Question;
			L = NULL;
			R = NULL;
		}
};
Agent47 *Gender = new Agent47("Is your character male?");
Agent47 *Nationality = new Agent47("Is your character Indian?");
Agent47 *Lawyer = new Agent47("Is your character a Lawyer?");
Agent47 *Hindu = new Agent47("Is your character Hindu?");
Agent47 *PM = new Agent47("Did your character served as a Prime Minister?");
Agent47 *Leader = new Agent47("Is your character a Leader?");
Agent47 *Actor = new Agent47("Is your character an Actor?");
Agent47 *Marriage = new Agent47("Is your character Married?");
Agent47 *Bollywood = new Agent47("Is your character a Bollywood Actor?");
Agent47 *Alive = new Agent47("Is your character still Alive?");
Agent47 *Politician = new Agent47("Is your character a Politician?");
Agent47 *Era = new Agent47("Was your character born before 1920?");
Agent47 *SocialActivist = new Agent47("Is your character Social Activist?");
Agent47 *Influential = new Agent47("Is your character an Influential Person?");
Agent47 *Nation = new Agent47("Is your character called Father of Nation?");
Agent47 *Personality = new Agent47("Is your character among the International Personalities?");
Agent47 *Study = new Agent47("Did your character pursue studies from England?");
Agent47 *PoliticalLeader = new Agent47("Is your character a Political Leader?");
Agent47 *Assassination = new Agent47("Was your character Assassinated?");
Agent47 *Non_Violent = new Agent47("Did your character called for Non-Violent Resisitance Campaigns?");
Agent47 *Age = new Agent47("Is your character Below Age of 50?");
Agent47 *Industrialist = new Agent47("Is your character an Industrialist?");
Agent47 *Businessman = new Agent47("Is your character a Businessman?");
Agent47 *Cricketer = new Agent47("Is your character a Cricketer?");
Agent47 *Harvard = new Agent47("Did your character went to Harvard?");
Agent47 *CricketWorldCup = new Agent47("Did your character win any Cricket World Cup?");
Agent47 *Captain = new Agent47("Was your character Captain of the Team during World Cup?");
Agent47 *Playing = new Agent47("Is your character still Playing Cricket?");
Agent47 *ProduceMovies = new Agent47("Does your character Produce Movies?");
Agent47 *Muslim = new Agent47("Is your character Muslim?");
Agent47 *MarriageCount = new Agent47("Is your character Married more than once?");
Agent47 *Hollywood = new Agent47("Does your character works in Hollywood Movies and Dramas?");
Agent47 *Charity = new Agent47("Does your character Donates 90% Wealth for Charity?");
Agent47 *Singer = new Agent47("Is your character a Singer?");

Agent47 *MahatmaGandhi = new Agent47("Mahatma Gandhi");
Agent47 *IndiraGandhi = new Agent47("Indira Gandhi");
Agent47 *JawaharlalNehru = new Agent47("Jawaharlal Nehru");
Agent47 *NarendraModi = new Agent47("Narendra Modi");
Agent47 *RatanTata = new Agent47("Ratan Tata");
Agent47 *MukeshAmbani = new Agent47("Mukesh Ambani");
Agent47 *MSDhoni = new Agent47("MS Dhoni");
Agent47 *KapilDev = new Agent47("Kapil Dev");
Agent47 *SachinTendulkar = new Agent47("Sachin Tendulkar");
Agent47 *AamirKhan = new Agent47("Aamir Khan");
Agent47 *SalmanKhan = new Agent47("Salman Khan");
Agent47 *ShahRukhKhan = new Agent47("Shah Rukh Khan");
Agent47 *PriyankaChopra = new Agent47("Priyanka Chopra");
Agent47 *AmitabhBachchan = new Agent47("Amitabh Bachchan");
Agent47 *AkshayKumar = new Agent47("Akshay Kumar");

static int Counter = 1;
static int CheckWin = 0;
static int ColorCounter = 1;
void Text_Animation(string a){
	for(int i=0 ; a[i]!='\0' ; i++){
		for(long int j=0 ; j<10000000 ; j++){}
		cout<<a[i];
	}
}
class DataStructure{
	public:
		DataStructure(){
			
		}
		void BuildGame(){
			Gender->L = Nationality;
			Gender->R = Lawyer;
			
			Nationality->L = Lawyer;
			Nationality->R = NULL;
			
			Lawyer->L = Hindu;
			Lawyer->R = PM;
			
			Hindu->L = Leader;
			Hindu->R = NULL;
			
			PM->L = Hindu;
			PM->R = Actor;
			
			Actor->L = Leader;
			Actor->R = Hindu;
			
			Leader->L = Marriage;
			Leader->R = Bollywood;
			
			Bollywood->L = Marriage;
			Bollywood->R = NULL;
			
			Marriage->L = Alive;
			Marriage->R = Era;
			
			Alive->L = Politician;
			Alive->R = Era;
			
			Era->L = SocialActivist;
			Era->R = Influential;
			
			Politician->L = Era;
			Politician->R = Influential;
			
			SocialActivist->L = Nation;
			SocialActivist->R = NULL;
			
			Influential->L = Personality;
			Influential->R = NULL;
			
			Nation->L = Study;
			Nation->R = Assassination;
			
			Personality->L = PoliticalLeader;
			Personality->R = NULL;
			
			Study->L = Assassination;
			Study->R = NULL;
			
			PoliticalLeader->L = NarendraModi;
			PoliticalLeader->R = Age;
			
			Assassination->L = Non_Violent;
			Assassination->R = JawaharlalNehru;
			
			Non_Violent->L = MahatmaGandhi;
			Non_Violent->R = IndiraGandhi;
			
			Age->L = Cricketer;
			Age->R = Industrialist;
			
			Industrialist->L = Businessman;
			Industrialist->R = Cricketer;
			
			Businessman->L = Harvard;
			Businessman->R = NULL;
			
			Cricketer->L = CricketWorldCup;
			Cricketer->R = ProduceMovies;
			
			Harvard->L = RatanTata;
			Harvard->R = MukeshAmbani;
			
			CricketWorldCup->L = Captain;
			CricketWorldCup->R = NULL;
			
			Captain->L = Playing;
			Captain->R = SachinTendulkar;
			
			Playing->L = MSDhoni;
			Playing->R = KapilDev;
			
			ProduceMovies->L = Muslim;
			ProduceMovies->R = NULL;
			
			Muslim->L = MarriageCount;
			Muslim->R = Hollywood;
			
			MarriageCount->L = AamirKhan;
			MarriageCount->R = Charity;
			
			Hollywood->L = PriyankaChopra;
			Hollywood->R = Singer;
			
			Charity->L = SalmanKhan;
			Charity->R = ShahRukhKhan;
			
			Singer->L = AmitabhBachchan;
			Singer->R = AkshayKumar;
			
			
			
			/*********************************/
			
			MahatmaGandhi->L = NULL;
			MahatmaGandhi->R = NULL;
			
			IndiraGandhi->L = NULL;
			IndiraGandhi->R = NULL;
			
			JawaharlalNehru->L = NULL;
			JawaharlalNehru->R = NULL;
			
			NarendraModi->L = NULL;
			NarendraModi->R = NULL;
			
			RatanTata->L = NULL;
			RatanTata->R = NULL;

			MukeshAmbani->L = NULL;
			MukeshAmbani->R = NULL;
			
			MSDhoni->L = NULL;
			MSDhoni->R = NULL;
			
			KapilDev->L = NULL;
			KapilDev->R = NULL;
			
			SachinTendulkar->L = NULL;
			SachinTendulkar->R = NULL;
			
			AamirKhan->L = NULL;
			AamirKhan->R = NULL;
			
			SalmanKhan->L = NULL;
			SalmanKhan->R = NULL;
			
			ShahRukhKhan->L = NULL;
			ShahRukhKhan->R = NULL;
			
			PriyankaChopra->L = NULL;
			PriyankaChopra->R = NULL;
			
			AmitabhBachchan->L = NULL;
			AmitabhBachchan->R = NULL;
			
			AkshayKumar->L = NULL;
			AkshayKumar->R = NULL;
			
			/*********************************/
		}
		
		void PlayGame(Agent47 *Node){
			if(Node == NULL){
				return;
			}
			if(ColorCounter>=15){
				ColorCounter = 1;
			}
			
			HANDLE Console = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(Console, ColorCounter);
			
			if(Node->L == NULL && Node->R == NULL){
				Text_Animation("\nYour Character is : ");
				Text_Animation(Node->Question);
				cout<<"\n"<<endl;
				CheckWin = 1;
				return;
			}
			
			cout<<"\n("<<Counter<<") ";
			Text_Animation(Node->Question);
			cout<<endl;
			
			string Answer = "yes";
			
			while(Answer!="Yes" || Answer!="yes" || Answer!="No" || Answer!= "no"){
				
				Text_Animation("Enter <Yes/yes || No/no> : ");
				cin>>Answer;
				
				if(Answer == "Yes" || Answer == "yes"){
					Counter++;
					ColorCounter++;
					PlayGame(Node->L);
						goto last;
				}
				else if(Answer == "No" || Answer == "no"){
					Counter++;
					ColorCounter++;
					PlayGame(Node->R);
						goto last;
				}
				else{
					Text_Animation("\t--> Invalid Answer <--\n\n");
				}
			}
			last:
				return;
		}
};
int main(){
	system("Color 35");
	
	cout<<"\n\n\n\n\n";
	Text_Animation("\t\t\t\t __________________________________________________\n");
	Text_Animation("\t\t\t\t|                                                  |\n");
	Text_Animation("\t\t\t\t|                                                  |\n");
	Text_Animation("\t\t\t\t|                                                  |\n");
	Text_Animation("\t\t\t\t|    ~~~~~~~~~ Project : A.G.E.N.T 47 ~~~~~~~~~    |\n");
	Text_Animation("\t\t\t\t|                                                  |\n");
	Text_Animation("\t\t\t\t|__________________________________________________|\n");
	Text_Animation("\t\t\t\t|                                                  |\n");
	Text_Animation("\t\t\t\t|                                                  |\n");
	Text_Animation("\t\t\t\t|          Prepared By : Jatin Kesnani             |\n");
	Text_Animation("\t\t\t\t|                                                  |\n");
	Text_Animation("\t\t\t\t|__________________________________________________|\n");
	cout<<"\n\t\t\t\t\t";
	
	system("pause");
	system ("CLS");
	
	system("Color B5");	
	cout<<"\n\n"<<endl;
	Text_Animation("       ***************************************************************************\n");
	Text_Animation("       *                                A.G.E.N.T 47                             *\n");
	Text_Animation("       ***************************************************************************\n");


	string Name, Username, Password1 = "*", Password2 = "/";
	string Temp_Username, Temp_Password;
	long long int PhoneNo;
	int StoreEOF = 0, Choice, PasswordChecker;
	
	ifstream File("Username.txt");
	if(File.peek() == EOF){
		StoreEOF = 1;
	}
	else{
		StoreEOF = 2;
	}
	File.close();
	/***********************Filing Username and Password***********************/
	ofstream File1("Username.txt", ios::app);
	ofstream File2("Password.txt", ios::app);
	
	int SignupChecker = 0;
	if(StoreEOF == 1){
		Signup:
			Text_Animation("\n\n\t\t\t--> Sign up for an account <--\n");
			Text_Animation("\n\t\t\tEnter Name\t\t\t: ");
			fflush(stdin);
			getline(cin, Name);
			fflush(stdin);
			Text_Animation("\t\t\tEnter Username\t\t\t: ");
			getline(cin, Username);
			while(Password1!=Password2){
				Password1 = "";
				Password2 = "";
				Text_Animation("\t\t\tEnter Password\t\t\t: ");
				char ch1;
				bool Enter1 = false;
				char TP1[100];
				int i = 0;
				while(!Enter1){
					ch1 = _getch();
					if((ch1>='a' && ch1<='z') || (ch1>='A' && ch1<='Z') || (ch1>='0' && ch1<='9')){
			            TP1[i] = ch1; 
			            cout<<'*';
			            i++;
			        }
					if(ch1 == '\b' && i >= 1){
				        cout<<"\b \b";
				        i--;
				    }
				    if(ch1 == '\r'){
				        Enter1 = true;
				    }
				}
				Password1 = TP1;
				/***************************************************************/
				Text_Animation("\n\t\t\tRe-Enter Password to confirm\t: ");
				char ch2;
				bool Enter2 = false;
				char TP2[100];
				int j = 0;
				while(!Enter2){
					ch2 = _getch();
					if((ch2>='a' && ch2<='z') || (ch2>='A' && ch2<='Z') || (ch2>='0' && ch2<='9')){
			            TP2[j] = ch2; 
			            cout<<'*';
			            j++;
			        }
					if(ch2 == '\b' && j >= 1){
				        cout<<"\b \b";
				        j--;
				    }
				    if(ch2 == '\r'){
				        Enter2 = true;
				    }
				}
				Password2 = TP2;
				if(Password1!=Password2){
					Text_Animation("\n\n\t\t\tInvalid Password!\n\n");
				}
			}
			File1<<Username<<endl;
			File2<<Password1<<endl;
			SignupChecker = 1;
			Text_Animation("\n\n\t\t\t~~~~~~Account is successfully created.~~~~~~\n");
			sleep(3);
	}
	else{
		do{
			Text_Animation("\n\n\t\t\t(1) Log In\n\t\t\t(2) Sign up\n\t\t\t(3) Exit\n");
			Text_Animation("\n\t\t\tEnter choice\t: ");
			cin>>Choice;
			if(Choice == 1){
				fflush(stdin);
				Text_Animation("\n\t\t\tEnter Username\t: ");
				getline(cin, Temp_Username);
				Text_Animation("\t\t\tEnter Password\t: ");
				char ch3;
				ch3 = _getch();
				while(ch3 != 13){
					Temp_Password.push_back(ch3);
					cout<<"*";
					ch3 = _getch();
				}
				
				PasswordChecker = 0;
				ifstream File3("Username.txt", ios::in);
				ifstream File4("Password.txt", ios::in);
				while(!File3.eof() && !File4.eof()){
					File3>>Username;
					File4>>Password1;
					if(Temp_Username == Username && Temp_Password == Password1){
						Text_Animation("\n\n\t\t\t~~~~~~Login Successful!~~~~~~\n");
						sleep(3);
						PasswordChecker = 1;
						break;
					}
				}
				if(PasswordChecker != 1){
					Text_Animation("\n\n\t\t\t~~~~~~Login Unsuccessful!~~~~~~\n");
					exit(0);
				}
				File3.close();
				File4.close();
			}
			else if(Choice == 2){
				goto Signup;
			}
			else if(Choice == 3){
				exit(0);
			}
			else{
				Text_Animation("\n\t\t\tInvalid Choice!\n");
			}
		}while(Choice!=1 && Choice!=2 && Choice!=3);
	}
	File1.close();
	File2.close();
	/***********************Filing Username and Password***********************/

	system("CLS");
	system("Color 05");
	/********************************Game Code********************************/									
	DataStructure DS;
	DS.BuildGame();
	DS.PlayGame(Gender);
	/********************************Game Code********************************/

	string Temp_U, Temp_P;
	int Temp_Score;
	/********************Filing Username, Password, and Score*******************/
	if(CheckWin == 1){
		if(SignupChecker == 1){
			ofstream SignWin("Score.txt", ios::app);
			SignWin<<endl;
			SignWin<<Username<<endl;
			SignWin<<Password1<<endl;
			SignWin<<1<<endl;
			SignWin<<endl;
			SignWin.close();
			Text_Animation("\nYour Score is : 1\n");
		}
		else{
			ifstream FindUser("Score.txt");
			ofstream TempFile("Temp.txt");
			
			FindUser>>Temp_U;
			FindUser>>Temp_P;
			FindUser>>Temp_Score;
			
			while(!FindUser.eof()){
				if(Temp_U == Username && Temp_P == Password1){
					Temp_Score++;
					Text_Animation("\nYour Score is : ");
					cout<<Temp_Score<<endl;
				}
				TempFile<<endl;
				TempFile<<Temp_U<<endl;
				TempFile<<Temp_P<<endl;
				TempFile<<Temp_Score<<endl;
				TempFile<<endl;
				
				FindUser>>Temp_U;
				FindUser>>Temp_P;
				FindUser>>Temp_Score;
			}
			FindUser.close();
			TempFile.close();
			
			//Rewriting Scores
			ifstream TempScoreFile("Temp.txt");
			ofstream Again("Score.txt");

			TempScoreFile>>Temp_U;
			TempScoreFile>>Temp_P;
			TempScoreFile>>Temp_Score;
			
			while(!TempScoreFile.eof()){
				Again<<endl;
				Again<<Temp_U<<endl;
				Again<<Temp_P<<endl;
				Again<<Temp_Score<<endl;
				Again<<endl;
				
				TempScoreFile>>Temp_U;
				TempScoreFile>>Temp_P;
				TempScoreFile>>Temp_Score;
			}
			TempScoreFile.close();
			Again.close();
		}
	}
	else{
		Text_Animation("\n\n--> You have chosen incorrect options <--\n");
		if(SignupChecker == 1){
			ofstream SignNotWin("Score.txt", ios::app);
			SignNotWin<<endl;
			SignNotWin<<Username<<endl;
			SignNotWin<<Password1<<endl;
			SignNotWin<<0<<endl;
			SignNotWin<<endl;
			SignNotWin.close();
			Text_Animation("\nYour Score is : 0\n");
		}
		else{
			ifstream FindUser("Score.txt");
			
			FindUser>>Temp_U;
			FindUser>>Temp_P;
			FindUser>>Temp_Score;
			
			while(!FindUser.eof()){
				if(Temp_U == Username && Temp_P == Password1){
					Text_Animation("\nYour Score is : ");
					cout<<Temp_Score<<endl;
				}	
				FindUser>>Temp_U;
				FindUser>>Temp_P;
				FindUser>>Temp_Score;
			}
			FindUser.close();
		}
	}
	/********************Filing Username, Password, and Score*******************/
	return 0;		
}