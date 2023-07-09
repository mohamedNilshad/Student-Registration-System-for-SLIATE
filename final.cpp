#include<iostream.h>
#include<string.h>
#include<fstream>

using namespace std;

//function

string O_Level(int sub)
	{
		string OL_sub;
		switch(sub)
			{
				case 1 : OL_sub="Buddhism                                   ";  break;
				case 2 : OL_sub="(Roman)Catholicism (RC)                    ";	break;
				case 3 : OL_sub="Islam                                      ";	break;
				case 4 : OL_sub="History                                    ";	break;
				case 5 : OL_sub="Science                                    ";	break;
				case 6 : OL_sub="Mathematics                                ";	break;
				case 7 : OL_sub="Commerce                                   ";	break;
				case 8 : OL_sub="Geography                                  ";	break;
				case 9 : OL_sub="Civic Education                            ";	break;
				case 10: OL_sub="Entrepreneurship Studies                   ";	break;
				case 11: OL_sub="Second Language (Sinhala)                  ";	break;
				case 12: OL_sub="Second Language (Tamil)                    ";	break;
				case 13: OL_sub="Pali                                       ";	break;
				case 14: OL_sub="Sanskrit                                   ";	break;
				case 15: OL_sub="French                                     ";	break;
				case 16: OL_sub="German                                     ";	break;
				case 17: OL_sub="Hindi                                      ";	break;
				case 18: OL_sub="Japanese                                   ";	break;
				case 19: OL_sub="Arabic                                     ";	break;
				case 20: OL_sub="Korean                                     ";	break;				
				case 21: OL_sub="Chinese                                    ";	break;
				case 22: OL_sub="Russian                                    ";	break;
				case 23: OL_sub="Oriental Music                             ";	break;
				case 24: OL_sub="Western Music                              ";	break;
				case 25: OL_sub="Carnatic Music                             ";	break;
				
				case 26: OL_sub="Saivaneri(Hinduism / Shaivism)             ";	break;
				case 27: OL_sub="Christianity (Non RC)                      ";	break;
				case 28: OL_sub="(Pri)Sinhala Language and Literature       ";	break;
				case 29: OL_sub="(Pri)Tamil Language and Literature         ";	break;
				case 30: OL_sub="(Secondary) Language English               ";	break;
				case 31: OL_sub="Appreciation of English Literary Texts     ";	break;
				case 32: OL_sub="Appreciation of Sinhala Literary Texts     ";	break;
				case 33: OL_sub="Appreciation of Tamil Literary Texts       ";	break;
				case 34: OL_sub="Appreciation of Arabic Literary Texts      ";	break;
				case 35: OL_sub="Information & Communication Technology     ";	break;
				case 36: OL_sub="Agriculture & Food Technology              ";	break;
				case 37: OL_sub="Aquatic Bio-resources Technology           ";	break;
				case 38: OL_sub="Health & Physical Education                ";	break;
				case 39: OL_sub="Communication & Media Studies              ";	break;
				case 40: OL_sub="Design & Construction Technology           ";	break;	
				case 41: OL_sub="Design & Mechanical Technology             ";	break;
				case 42: OL_sub="Design, Electrical & Electronic Technology ";	break;
				case 43: OL_sub="Electronic Writing & Shorthand             ";	break;
				case 44: OL_sub="Drama and Theatre                          ";	break;
				case 45: OL_sub="Arts & Crafts                              ";	break;
				case 46: OL_sub="Home Economics                             ";	break;
				case 47: OL_sub="Art                                        ";	break;
				case 48: OL_sub="Bharatha Dancing                           ";	break;
				case 49: OL_sub="Oriental Dancing                           ";	break;
				default : OL_sub="*Invalid Input                            ";	break;
			}
		return OL_sub;
	}
	
//O-lsubject result function
string O_LResult(char result)
	{
		string grade;
		switch(result)
			{
				case 'A': grade="A            ";	break;
				case 'a': grade="A            "; 	break;
				case 'B': grade="B            "; 	break;
				case 'b': grade="B            "; 	break;
				case 'C': grade="C            "; 	break;
				case 'c': grade="C            "; 	break;
				case 'S': grade="S            "; 	break;
				case 's': grade="S            "; 	break;
				case 'W': grade="W            "; 	break;
				case 'w': grade="W            "; 	break;
				
				default : grade="Invalid Input"; 	break;
			}
			return grade;
	}

int OL_year(int year)
	{
		char error;
		if(year<10000&&year>=1000)
			{
				return year;
			}
		else
			{
				return error='Invelid input';
			}
	}


// AL portable function
string AL_medium(int Al_meds);
string AL_stream(int str);
int AL_y(int year_al);
string AL_artrs(int art);
int AL_gradegk(int gk_grd);
string AL_grade(char al_grd);
string AL_Commerce(int com);
string AL_Bio(int bio);
string AL_Phy(int Phy);
string AL_Tech(int Tech);


//main

int main()

{
	//file writing
	ofstream outfile;
	outfile.open("Student_Details.txt");
	int ati=1;
do
	{
		
		 cout<<endl<<endl<<endl;
		 cout<<"\t\t\t\t                    +----------------+                 "<<endl; 
		 cout<<"\t\t\t\t                    |                |   "<<endl; 
		 cout<<"\t\t\t\t                    |      *   *     |   "<<endl; 
         cout<<"\t\t\t\t                    |     * * * *    |   "<<endl;
         cout<<"\t\t\t\t                    |    *   *   *   |   "<<endl;
         cout<<"\t\t\t\t                    |   *   * *   *  |   "<<endl;
         cout<<"\t\t\t\t                    |  *   *   *   * |   "<<endl;
         cout<<"\t\t\t\t                    |   *   * *   *  |   "<<endl;
         cout<<"\t\t\t\t                    |    *   *   *   |   "<<endl;
         cout<<"\t\t\t\t                    |     * * * *    |   "<<endl;
         cout<<"\t\t\t\t                    |      *   *     |   "<<endl;
         cout<<"\t\t\t\t                    |                |   "<<endl; 
		 cout<<"\t\t\t\t                    +----------------+                 "<<endl;
		 cout<<"\t\t\t\t        SRILANKA INSITUTE OF ADVANCE TECHNOLOGICAL "<<endl;
   		 cout<<"\t\t\t\t                        EDUCATION"<<endl;
   		 cout<<"\t\t\t\t                  HIGHER NATIONAL DIPLOMA "<<endl;
   		 cout<<"\t\t\t\t                            in  "<<endl;
   		 cout<<"\t\t\t\t                  INFORMATION TECHNOLAGY"<<endl<<endl;
	
	
	
	
	//header
	cout<<"\t\t\t\t\t  --------------------------------------"<<endl;
	cout<<"\t\t\t\t\t  | WELLCOME TO ATI KANDY REGISTRATION |"<<endl;
	cout<<"\t\t\t\t\t  --------------------------------------"<<endl<<endl;
	
	//indtruction
	cout<<"\t\t\t\t\t******************************************"<<endl;
	cout<<"\t\t\t\t\t*             INSTRUCTIONS               *"<<endl;
	cout<<"\t\t\t\t\t*             ------------               *"<<endl;
	cout<<"\t\t\t\t\t* 1.Type number '1' to create an account *"<<endl;
	cout<<"\t\t\t\t\t* 2.Press 'Enter Key' to proccess        *"<<endl;
	cout<<"\t\t\t\t\t* 3.PLEASE TYPE WITHOUT SPACE            *"<<endl;
	cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
	
	//loging system
	int creat,day,month,year,nic_format;
 	string uname,pass,s_uname,s_pass,f_name,l_name,id_num,sid_num,phone,email, address,course_num,c_fee;
 	int dob_year,conform,conform1,conform3,conform4,conform5,conform6;
 	
 	
	//OL Variables
	string sub[9];
	string sub_r[9];
	int sub_y[9],qualify;
	char sub_rslt;
	int sub_num;
	int sub_year;
		
	
	//AL Variables
	int al_med,str_num,al_year,al_gk,Al_gkresult,A_Level_Y,al_sub,AL_quary,c_num,conform2,c_type;
	float zscore;
	char al_rslt1,al_rslt2,al_rslt3,al_rslt4;
	string stream,medium,Al_subject1,Al_subject2,Al_subject3,Al_subject4,Al_result1,Al_result2,Al_result3,Al_result4,gender;

	//pointer
	int st_year;
	int *v_year;
	
	st_year=2000;//set the year for limit
	
	v_year=&st_year;
				
				
				do
					{
						cout<<"\t\t\t\t\tCreate An Acocunt ?: ";
						cin>>creat;
					}
				while(creat>1||creat<1);
				system("cls");
				cout<<"\t\t\t\t\t***************************************************"<<endl;
				cout<<"\n\t\t\t\t\tYour NIC Number is in 'New' format Then Enter Number '1'"<<endl;
									cout<<"\t\t\t\t\tYour NIC Number is in 'Old' format Then Enter Number '2'"<<endl;
									cout<<"\t\t\t\t\tEnter : ";
									cin>>nic_format;
									
							if(nic_format==1)
								{
									do
										{

											cout<<"\t\t\t\t\tNIC NUMBER       : ";
											cin>>id_num;
										}
									while(id_num.length()!=12);
								}
							else if(nic_format==2)
								{
									do
										{

											cout<<"\t\t\t\t\tNIC NUMBER       : ";
											cin>>id_num;
										}
									while(id_num.length()!=10);
								}
			
					//date of year
					if((id_num.length()==12)||(id_num.length()==10))
					{
					system("cls");
					cout<<endl<<endl<<endl;
					cout<<"\t\t\t\t\tEnter Your Year of Birt : ";
					cin>>dob_year;
						if(dob_year>*v_year||dob_year<=(*v_year-10))
							{
								cout<<"\t\t\t\t\tYou can't Apply! "<<endl;
							}
						else
							{
					system("cls");
					cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
					cout<<"\t\t\t\t\tUser Name              : ";
					cin>>uname;
					
								do
								{
									cout<<"    *[Password must be 8 charactor]-";
									cout<<"\tPassword               : ";
									cin>>pass;
								}
								while(pass.length()<8);
							
							system("cls");	
							cout<<endl<<endl<<endl;	
							cout<<"\t\t\t\t\t******************************************"<<endl;
							cout<<"\t\t\t\t\t***    Account created SuccessFully    ***"<<endl;
							cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
							
							//sign in
							do
								{
									
									cout<<"\t\t\t\t\tEnter user Name    : ";
									cin>>s_uname;
									
									cout<<"\t\t\t\t\tEnter Password     : ";
									cin>>s_pass;
									system("cls");
								}
							while(((s_uname!=uname) && (s_pass!=pass))||((s_uname==uname) && (s_pass!=pass))||((s_uname!=uname) && (s_pass==pass)));
								
							
							cout<<endl<<endl<<endl;	
							cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
							}
							//personal Details
							
					}
	if(((dob_year<=*v_year)&&(dob_year>(*v_year-10)))&&((s_uname==uname) && (s_pass==pass)))
	
			{
				do
					{
							system("cls");
							cout<<"\t\t\t\t\t******************************************"<<endl;
							cout<<"\t\t\t\t\t***         Personal Details           ***"<<endl;
							cout<<"\t\t\t\t\t******************************************"<<endl;
							cout<<"\t\t\t\t\t**       PLEASE TYPE WITHOUT SPACE      **"<<endl<<endl;
							
				    		//Name

									cout<<"\t\t\t\t\tFirst Name       : ";
									cin>>f_name;
									
									cout<<"\t\t\t\t\tLast Name        : ";
									cin>>l_name;

									for(int i=3; i>=1; i--)
										{
											//NIC Number	
											cout<<"\t\t\t\t\tNIC NUMBER       : ";
											cin>>sid_num;
											if(sid_num==id_num)
												{
													conform3=1;
													i-=4;
												}
											else
												{
													cout<<"\t\t\t\t*You have only "<<i-1<<" Chances"<<endl;
												}	
										}
							if(conform3==1)
								{

											//dob
											cout<<"\t\t\t\t\tDate Of Birth     "<<endl;
											//date
										do
											{
											cout<<"\t\t\t\t\t\tDay             : ";
											cin>>day;	
											}
										while(day>=33||day<=0);
											//month
										do
											{
											cout<<"\t\t\t\t\t\tMonth           : ";
											cin>>month;
											}
										while(month>=13||month<=0);
											//year
										do
										{
											cout<<"\t\t\t\t\t\tyear            : ";
											cin>>year;
										}
										while(year!=dob_year);
										
											//Gender
										do
										{
											cout<<"\t\t\t\t\t\tGender (M/F)    : ";
											cin>>gender;
									
												if((gender.length()==1)&&(gender=="F")||(gender=="f")||(gender=="M")||(gender=="m"))
													{
														conform4=1;
													}
										}
							while(conform4!=1);
											
											//Phone
										do
										{
										cout<<"\t\t\t\t\t\tPhone Number    : ";
										cin>>phone;
										}
										while(phone.length()!=10);
							
										cout<<"\t\t\t\t\t\tEmail           : ";
										cin>>email;
									
										cout<<"\t\t\t\t\t\tAddress         : ";
										cin>>address;
										
										system("cls");
										cout<<endl<<endl<<endl;
										
										cout<<"\t\t\t\t\t******************************************"<<endl;
										cout<<"\t\t\t\t\t***        You Enterd  Details         ***"<<endl;
										cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
					
										cout<<"\t\t\t\t\tName           : "<<f_name<<" "<<l_name<<endl;
										cout<<"\t\t\t\t\tNIC NUMBER     : "<<sid_num<<endl;
										cout<<"\t\t\t\t\tDate Of Birth  : "<<day<<"-"<<month<<"-"<<year<<endl;
										cout<<"\t\t\t\t\tGender         : "<<gender<<endl;
										cout<<"\t\t\t\t\tPhone Number   : "<<phone<<endl;	
										cout<<"\t\t\t\t\tEmail          : "<<email<<endl;
										cout<<"\t\t\t\t\tAddress        : "<<address<<endl<<endl<<endl;
									
										cout<<"\t\t\t\t\tEnter Number '1' If it's Correct "<<endl;
										cout<<"\t\t\t\t\tEnter Number '2' If it's Wrong   "<<endl;
										cout<<"\t\t\t\t\t  : ";
										cin>>conform;
										
										system("cls");
										cout<<endl<<endl<<endl;	
							}
					}
				while(conform==2);
	
		}
			

		
	else if(((dob_year>=2000)&&(dob_year<=1990))&&((s_uname!=uname) && (s_pass!=pass)))
		{
			cout<<"\t\t\t\t\t\tCheck the date of year"<<endl;
			
			cout<<endl<<endl<<endl;	
		}
		

	
	if(conform==1)
	
		{
			do
			 {
			 	system("cls");
				cout<<"\t\t\t\t\t******************************************"<<endl;
				cout<<"\t\t\t\t\t***      Education Qualifications      ***"<<endl;
				cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
 				//Subjects And Numbers
cout<<"\t\t\t\t\t***********************************************************************************"<<endl;
cout<<"\t\t\t\t\t********************              ORDNARY LEVEL                 *******************"<<endl;
cout<<"\t\t\t\t\t********************   Enter the Suitable Number for Subjects   *******************"<<endl;
cout<<"\t\t\t\t\t***********************************************************************************"<<endl;
cout<<"\t\t\t\t\t* Buddhism                 - 1  * Saivaneri(Hinduism / Shaivism)             - 26 *"<<endl;
cout<<"\t\t\t\t\t* (Roman)Catholicism (RC)  - 2  * Christianity (Non RC)                      - 27 *"<<endl;
cout<<"\t\t\t\t\t* Islam                    - 3  * (Pri)Sinhala Language and Literature       - 28 *"<<endl;
cout<<"\t\t\t\t\t* History                  - 4  * (Pri)Tamil Language and Literature         - 29 *"<<endl;
cout<<"\t\t\t\t\t* Science                  - 5  * (Secondary) Language English               - 30 *"<<endl;
cout<<"\t\t\t\t\t* Mathematics              - 6  * Appreciation of English Literary Texts     - 31 *"<<endl;
cout<<"\t\t\t\t\t* Commerce                 - 7  * Appreciation of Sinhala Literary Texts     - 32 *"<<endl;
cout<<"\t\t\t\t\t* Geography                - 8  * Appreciation of Tamil Literary Texts       - 33 *"<<endl;
cout<<"\t\t\t\t\t* Civic Education          - 9  * Appreciation of Arabic Literary Texts      - 34 *"<<endl;
cout<<"\t\t\t\t\t* Entrepreneurship Studies - 10 * Information & Communication Technology     - 35 *"<<endl;
cout<<"\t\t\t\t\t* Second Language (Sinhala)- 11 * Agriculture & Food Technology              - 36 *"<<endl;
cout<<"\t\t\t\t\t* Second Language (Tamil)  - 12 * Aquatic Bio-resources Technology           - 37 *"<<endl;
cout<<"\t\t\t\t\t* Pali                     - 13 * Health & Physical Education                - 38 *"<<endl;
cout<<"\t\t\t\t\t* Sanskrit                 - 14 * Communication & Media Studies              - 39 *"<<endl;
cout<<"\t\t\t\t\t* French                   - 15 * Design & Construction Technology           - 40 *"<<endl;
cout<<"\t\t\t\t\t* German                   - 16 * Design & Mechanical Technology             - 41 *"<<endl;
cout<<"\t\t\t\t\t* Hindi                    - 17 * Design, Electrical & Electronic Technology - 42 *"<<endl;
cout<<"\t\t\t\t\t* Japanese                 - 18 * Electronic Writing & Shorthand             - 43 *"<<endl;
cout<<"\t\t\t\t\t* Arabic                   - 19 * Drama and Theatre                          - 44 *"<<endl;
cout<<"\t\t\t\t\t* Korean                   - 20 * Arts & Crafts                              - 45 *"<<endl;
cout<<"\t\t\t\t\t* Chinese                  - 21 * Home Economics                             - 46 *"<<endl;
cout<<"\t\t\t\t\t* Russian                  - 22 * Art                                        - 47 *"<<endl;
cout<<"\t\t\t\t\t* Oriental Music           - 23 * Bharatha Dancing                           - 48 *"<<endl;
cout<<"\t\t\t\t\t* Western Music            - 24 * Oriental Dancing                           - 49 *"<<endl;
cout<<"\t\t\t\t\t* Carnatic Music           - 25 ***************************************************"<<endl;
cout<<"\t\t\t\t\t*********************************"<<endl<<endl<<endl<<endl;
	
				//function
						for(int i=0; i<9; i++)
							{
								
							//O/LSubjects
							cout<<"\t\t\t\t\tSubject "<<i+1<<"       : ";
							cin>>sub_num;
						 	sub[i]=O_Level(sub_num);
				 				//result
								cout<<"\t\t\t\t\tResult   : ";
								cin>>sub_rslt;
						 		sub_r[i]=O_LResult(sub_rslt);
						 			//year
									cout<<"\t\t\t\t\tYear     : ";
									cin>>sub_year;
						 			sub_y[i]=OL_year(sub_year);
									cout<<endl;
							}
							
							cout<<endl<<endl<<endl;	
							system("cls");
							cout<<"\t\t\t\t\t******************************************"<<endl;
							cout<<"\t\t\t\t\t***        You Enterd  Details         ***"<<endl;
							cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
							cout<<"\t\t\t\t\t"<<"Subject"<<"\t\t\t\t\t\t"<<"Result"<<"\t\t\t"<<" Year"<<endl;
							cout<<"\t\t\t\t\t"<<"_______"<<"\t\t\t\t\t\t"<<"______"<<"\t\t\t"<<"______"<<endl;
							
							for(int i=0; i<9; i++)
								{
									cout<<"\t\t\t\t\t"<<sub[i]<<"\t  "<<sub_r[i]<<"\t\t "<<sub_y[i]<<endl;
								}
								cout<<endl;
							
				
							//repet
							cout<<"\t\t\t\t\tEnter Number '1' If it's Correct "<<endl;
							cout<<"\t\t\t\t\tEnter Number '2' If it's Wrong   "<<endl;
							cout<<"\t\t\t\t\tEnter :";
							cin>>conform1;
													
			 }
			while(conform1==2);
		}
		
	
	cout<<endl<<endl<<endl;	
		//AL_Selction
	
	if (conform1==1)
		{
			do
			{
					system("cls");	
					cout<<endl<<endl<<endl<<endl;		
					//medium
					cout<<"\t\t\t\t\t******************************************"<<endl;
					cout<<"\t\t\t\t\t**           ADVANCED LEVEL             **"<<endl;
					cout<<"\t\t\t\t\t** Enter the Suitable Number for Medium **"<<endl;
					cout<<"\t\t\t\t\t******************************************"<<endl;
					cout<<"\t\t\t\t\t*               Sinhala - 1              *"<<endl;
					cout<<"\t\t\t\t\t*               Tamil   - 2              *"<<endl;
					cout<<"\t\t\t\t\t*               English - 3              *"<<endl;
					cout<<"\t\t\t\t\t******************************************"<<endl<<endl<<endl;
							cout<<"\t\t\t\t\tSelect your medium   : ";
							cin>>al_med;
						 	medium=AL_medium(al_med);
						 	
						 	
							cout<<endl<<endl<<endl;	
							if((al_med==1)||(al_med==2)||(al_med==3))

								{	
									system("cls");
									cout<<endl<<endl<<endl;
									//stream selection
									cout<<"\t\t\t\t\t******************************************"<<endl;
									cout<<"\t\t\t\t\t**           ADVANCED LEVEL             **"<<endl;
									cout<<"\t\t\t\t\t** Enter the Suitable Number for Stream **"<<endl;
									cout<<"\t\t\t\t\t******************************************"<<endl;
									cout<<"\t\t\t\t\t*             Artrs       - 1            *"<<endl;
									cout<<"\t\t\t\t\t*             Commerce    - 2            *"<<endl;
									cout<<"\t\t\t\t\t*             Bio Science - 3            *"<<endl;
									cout<<"\t\t\t\t\t*             Physical    - 4            *"<<endl;
									cout<<"\t\t\t\t\t*             Technology  - 5            *"<<endl;
									cout<<"\t\t\t\t\t******************************************"<<endl<<endl<<endl;

							cout<<"\t\t\t\t\tSelect your Stream   : ";
							cin>>str_num;
							stream=AL_stream(str_num);
							//year
							cout<<"\t\t\t\t\tYear                 : ";
							cin>>al_year;
							A_Level_Y=AL_y(al_year);								
							
							
							cout<<endl<<endl<<endl;	
								
							if(str_num==1)
								{
									system("cls");
									cout<<endl<<endl<<endl;
									//artrs subject	selection						
									cout<<"\t\t\t\t\t*************************************************************************************"<<endl;
									cout<<"\t\t\t\t\t**                                 ADVANCED LEVEL                                  **"<<endl;
									cout<<"\t\t\t\t\t**                                      ARTRS                                      **"<<endl;
									cout<<"\t\t\t\t\t**                      Enter the Suitable Number for Subject                      **"<<endl;
									cout<<"\t\t\t\t\t*************************************************************************************"<<endl;
									cout<<"\t\t\t\t\t*    Western Music                   - 1   *  German                          - 17  *"<<endl;
									cout<<"\t\t\t\t\t*    Genral English                  - 2   *  Greek and Roman Civilization    - 18  *"<<endl;
									cout<<"\t\t\t\t\t*    Arabic                          - 3   *  Hindi Language                  - 19  *"<<endl;
									cout<<"\t\t\t\t\t*    Art                             - 4   *  Hindu Civilization              - 20  *"<<endl;
									cout<<"\t\t\t\t\t*    Bharatha Natayam                - 5   *  Hinduism                        - 21  *"<<endl;
									cout<<"\t\t\t\t\t*    Buddhism                        - 6   *  History                         - 22  *"<<endl;
									cout<<"\t\t\t\t\t*    Buddhist Civilization           - 7   *  Islam                           - 23  *"<<endl;
									cout<<"\t\t\t\t\t*    Chinese                         - 8   *  Islamic Civilization            - 24  *"<<endl;
									cout<<"\t\t\t\t\t*    Christian Civilization          - 9   *  Logic and Scientific Method     - 25  *"<<endl;
									cout<<"\t\t\t\t\t*    Christianity                    - 10  *  Pali Language                   - 26  *"<<endl;
									cout<<"\t\t\t\t\t*    Communication and Media Studies - 11  *  Political Science               - 27  *"<<endl;
									cout<<"\t\t\t\t\t*    Dance                           - 12  *  Russian                         - 28  *"<<endl;
									cout<<"\t\t\t\t\t*    Economics                       - 13  *  Sanskrit                        - 29  *"<<endl;
									cout<<"\t\t\t\t\t*    English                         - 14  *  Sinhala                         - 30  *"<<endl;
									cout<<"\t\t\t\t\t*    French                          - 15  *  Tamil                           - 31  *"<<endl;
									cout<<"\t\t\t\t\t*    Geography                       - 16  ******************************************"<<endl;
									cout<<"\t\t\t\t\t********************************************"<<endl<<endl<<endl;	
									
									
									
									cout<<"\t\t\t\t\tSubject 1            :Genral Knowladge"<<endl;
											cout<<"\t\t\t\t\t\Result                : ";
											cin>>al_gk;
											Al_gkresult=AL_gradegk(al_gk);
											cout<<endl;
									
									cout<<"\t\t\t\t\tSubject 2            : ";
									cin>>al_sub;
									Al_subject1=AL_artrs(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt1;
											Al_result1=AL_grade(al_rslt1);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 3            : ";
									cin>>al_sub;
									Al_subject2=AL_artrs(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt2;
											Al_result2=AL_grade(al_rslt2);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 4            : ";
									cin>>al_sub;
									Al_subject3=AL_artrs(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt3;
											Al_result3=AL_grade(al_rslt3);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 5            : ";
									cin>>al_sub;
									Al_subject4=AL_artrs(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt4;
											Al_result4=AL_grade(al_rslt4);
											cout<<endl;
											AL_quary=1;
									//for qualification
									if((Al_result1<"W")&&(Al_result2<"W")&&(Al_result3<"W")&&(Al_result4<"W")&&(Al_gkresult>=35))
										{
											qualify=1;
										}
										else
										{
											qualify=0;
										}
								}
						else if(str_num==2)
								{
									system("cls");
									cout<<endl<<endl<<endl;
									//Commerce subject	selection						
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t**              ADVANCED LEVEL             **"<<endl;
									cout<<"\t\t\t\t\t**                 COMMERCE                **"<<endl;
									cout<<"\t\t\t\t\t**  Enter the Suitable Number for Subject  **"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t*    Accounting              - 1            *"<<endl;
									cout<<"\t\t\t\t\t*    Genral English          - 2            *"<<endl;
									cout<<"\t\t\t\t\t*    Business                - 3            *"<<endl;
									cout<<"\t\t\t\t\t*    Statistics Business     - 4            *"<<endl;
									cout<<"\t\t\t\t\t*    Studies Economics       - 5            *"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl<<endl<<endl;
								
									//subject Select
									
									cout<<"\t\t\t\t\tSubject 1            :Genral Knowladge"<<endl;
											cout<<"\t\t\t\t\t\Result                : ";
											cin>>al_gk;
											Al_gkresult=AL_gradegk(al_gk);
											cout<<endl;
									
									cout<<"\t\t\t\t\tSubject 2            : ";
									cin>>al_sub;
									Al_subject1=AL_Commerce(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt1;
											Al_result1=AL_grade(al_rslt1);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 3            : ";
									cin>>al_sub;
									Al_subject2=AL_Commerce(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt2;
											Al_result2=AL_grade(al_rslt2);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 4            : ";
									cin>>al_sub;
									Al_subject3=AL_Commerce(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt3;
											Al_result3=AL_grade(al_rslt3);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 5            : ";
									cin>>al_sub;
									Al_subject4=AL_Commerce(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt4;
											Al_result4=AL_grade(al_rslt4);
											cout<<endl;
											AL_quary=1;
											
									//for qualification
									if((Al_result1<"W")&&(Al_result2<"W")&&(Al_result3<"W")&&(Al_result4<"W")&&(Al_gkresult>=35))
										{
											qualify=1;
										}
										else
										{
											qualify=0;
										}
								
								}
						else if(str_num==3)
								{
									system("cls");
									cout<<endl<<endl<<endl;
									//Bio Science subject	selection						
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t**             ADVANCED  LEVEL             **"<<endl;
									cout<<"\t\t\t\t\t**               BIO-SCIENCE               **"<<endl;
									cout<<"\t\t\t\t\t**  Enter the Suitable Number for Subject  **"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t*    Agriculture             - 1            *"<<endl;
									cout<<"\t\t\t\t\t*    Genral English          - 2            *"<<endl;
									cout<<"\t\t\t\t\t*    Bio System Technology   - 3            *"<<endl;
									cout<<"\t\t\t\t\t*    Biology                 - 4            *"<<endl;
									cout<<"\t\t\t\t\t*    Chemistry               - 5            *"<<endl;
									cout<<"\t\t\t\t\t*    Physics                 - 6            *"<<endl;
									cout<<"\t\t\t\t\t*    Science for Technology  - 7            *"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl<<endl<<endl;
									
									
									//subject Select
									
									cout<<"\t\t\t\t\tSubject 1            :Genral Knowladge"<<endl;
											cout<<"\t\t\t\t\t\Result                : ";
											cin>>al_gk;
											Al_gkresult=AL_gradegk(al_gk);
											cout<<endl;
									
									cout<<"\t\t\t\t\tSubject 2            : ";
									cin>>al_sub;
									Al_subject1=AL_Bio(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt1;
											Al_result1=AL_grade(al_rslt1);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 3            : ";
									cin>>al_sub;
									Al_subject2=AL_Bio(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt2;
											Al_result2=AL_grade(al_rslt2);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 4            : ";
									cin>>al_sub;
									Al_subject3=AL_Bio(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt3;
											Al_result3=AL_grade(al_rslt3);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 5            : ";
									cin>>al_sub;
									Al_subject4=AL_Bio(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt4;
											Al_result4=AL_grade(al_rslt4);
											cout<<endl;
											AL_quary=1;
									
									//for qualification
									if((Al_result1<"W")&&(Al_result2<"W")&&(Al_result3<"W")&&(Al_result4<"W")&&(Al_gkresult>=35))
										{
											qualify=1;
										}
										else
										{
											qualify=0;
										}
								}
								
						else if(str_num==4)
								{
									system("cls");
									cout<<endl<<endl<<endl;
									//Physical subject	selection						
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t**             ADVANCED  LEVEL             **"<<endl;
									cout<<"\t\t\t\t\t**                 Physical                **"<<endl;
									cout<<"\t\t\t\t\t**  Enter the Suitable Number for Subject  **"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t*    Science  (Maths) Chemistry - 1         *"<<endl;
									cout<<"\t\t\t\t\t*    Genral English             - 2         *"<<endl;
									cout<<"\t\t\t\t\t*    Combine Mathematics        - 3         *"<<endl;
									cout<<"\t\t\t\t\t*    Higher Mathematics         - 4         *"<<endl;
									cout<<"\t\t\t\t\t*    Physics                    - 5         *"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl<<endl<<endl;
									
									
									//subject Select
									
									cout<<"\t\t\t\t\tSubject 1            :Genral Knowladge"<<endl;
											cout<<"\t\t\t\t\t\Result                : ";
											cin>>al_gk;
											Al_gkresult=AL_gradegk(al_gk);
											cout<<endl;
									
									cout<<"\t\t\t\t\tSubject 2            : ";
									cin>>al_sub;
									Al_subject1=AL_Phy(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt1;
											Al_result1=AL_grade(al_rslt1);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 3            : ";
									cin>>al_sub;
									Al_subject2=AL_Phy(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt2;
											Al_result2=AL_grade(al_rslt2);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 4            : ";
									cin>>al_sub;
									Al_subject3=AL_Phy(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt3;
											Al_result3=AL_grade(al_rslt3);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 5            : ";
									cin>>al_sub;
									Al_subject4=AL_Phy(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt4;
											Al_result4=AL_grade(al_rslt4);
											cout<<endl;
											AL_quary=1;
									
									//for qualification
									if((Al_result1<"W")&&(Al_result2<"W")&&(Al_result3<"W")&&(Al_result4<"W")&&(Al_gkresult>=35))
										{
											qualify=1;
										}
										else
										{
											qualify=0;
										}
								}
								
								
						else if(str_num==5)
								{
									system("cls");
									cout<<endl<<endl<<endl;
									//Technology subject	selection						
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t**             ADVANCED  LEVEL             **"<<endl;
									cout<<"\t\t\t\t\t**                TECHNOLOGY               **"<<endl;
									cout<<"\t\t\t\t\t**  Enter the Suitable Number for Subject  **"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl;
									cout<<"\t\t\t\t\t*    Agro Technology              - 1       *"<<endl;
									cout<<"\t\t\t\t\t*    Genral English               - 2       *"<<endl;
									cout<<"\t\t\t\t\t*    Engineering Technology       - 3       *"<<endl;
									cout<<"\t\t\t\t\t*    Science for Technology       - 4       *"<<endl;
									cout<<"\t\t\t\t\t*    Information & Communication  - 5       *"<<endl;
									cout<<"\t\t\t\t\t*********************************************"<<endl<<endl<<endl;
									
									
									//subject Select
									
									cout<<"\t\t\t\t\tSubject 1            :Genral Knowladge"<<endl;
											cout<<"\t\t\t\t\t\Result                : ";
											cin>>al_gk;
											Al_gkresult=AL_gradegk(al_gk);
											cout<<endl;
									
									cout<<"\t\t\t\t\tSubject 2            : ";
									cin>>al_sub;
									Al_subject1=AL_Tech(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt1;
											Al_result1=AL_grade(al_rslt1);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 3            : ";
									cin>>al_sub;
									Al_subject2=AL_Tech(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt2;
											Al_result2=AL_grade(al_rslt2);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 4            : ";
									cin>>al_sub;
									Al_subject3=AL_Tech(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt3;
											Al_result3=AL_grade(al_rslt3);
											cout<<endl;
											
									cout<<"\t\t\t\t\tSubject 5            : ";
									cin>>al_sub;
									Al_subject4=AL_Tech(al_sub);
											cout<<"\t\t\t\t\tResult               : ";
											cin>>al_rslt4;
											Al_result4=AL_grade(al_rslt4);
											cout<<endl;
											AL_quary=1;
											
									//for qualification
									if((Al_result1<"W")&&(Al_result2<"W")&&(Al_result3<"W")&&(Al_result4<"W")&&(Al_gkresult>=35))
										{
											qualify=1;
										}
										else
										{
											qualify=0;
										}
								}
						}
								
					else
						{
							cout<<"\t\t\t\t\t*Invelid Input"<<endl;
						}
		
		cout<<endl<<endl<<endl;	
		if(AL_quary==1)
			{	
			cout<<"\t\t\t\t\tzscore               :";
			cin>>zscore;
			system("cls");
			cout<<endl<<endl<<endl;
			
			cout<<"\t\t\t\t\t******************************************"<<endl;
			cout<<"\t\t\t\t\t***        You Enterd  Details         ***"<<endl;
			cout<<"\t\t\t\t\t******************************************"<<endl<<endl;
			cout<<"\n\t\t\t\t\tmedium - "<<medium<<endl;
			cout<<"\t\t\t\t\tstream - "<<stream<<endl;
			cout<<"\t\t\t\t\tYear   - "<<A_Level_Y<<endl<<endl;
			cout<<"\t\t\t\t\tSubjects"<<"\t\t\t      "<<"Result"<<endl;
			cout<<"\t\t\t\t\t--------"<<"\t\t\t      "<<"------"<<endl<<endl;
			cout<<"\t\t\t\t\t"<<Al_subject1<<"\t"<<Al_result1<<endl;
			cout<<"\t\t\t\t\t"<<Al_subject2<<"\t"<<Al_result2<<endl;
			cout<<"\t\t\t\t\t"<<Al_subject3<<"\t"<<Al_result3<<endl;
			cout<<"\t\t\t\t\t"<<Al_subject4<<"\t"<<Al_result4<<endl;
			cout<<"\t\t\t\t\t"<<"Genral Knowladge "<<"\t\t\t"<<Al_gkresult<<endl;
			cout<<"\t\t\t\t\t"<<"Z Score          "<<"\t\t\t"<<zscore<<endl<<endl;
			
			cout<<"\t\t\t\t\tEnter Number '1' If it's Correct "<<endl;
			cout<<"\t\t\t\t\tEnter Number '2' If it's Wrong   "<<endl;
			cout<<"\t\t\t\t\tEnter :";
			cin>>conform;
			}
		
		}	
	while(conform==2);		
	
	cout<<endl<<endl<<endl;	
	}


	//Qualification for course
	if((qualify==1)&&(zscore>=0.2200))
		{
			
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl<<endl;
			cout<<"\t\t\t\t\tYou are Eligible for this courses"<<endl<<endl;
		do
			{
			do
			{
			cout<<endl<<endl<<endl;
			//Course selection						
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t**                  COURSES                **"<<endl;
			cout<<"\t\t\t\t\t**                   WHICH                 **"<<endl;
			cout<<"\t\t\t\t\t**      YOU CAN FOLLOW IN OUR ATI KANDY    **"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Course Code     - HNDE                  *"<<endl;
			cout<<"\t\t\t\t\t*   Course Duration - 2 Years and 6 Months  *"<<endl;
			cout<<"\t\t\t\t\t*   Course Type     - Full Time / Part Time *"<<endl;
			cout<<"\t\t\t\t\t*   Course Number   - 1                     *"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl<<endl;
			//HNDE
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Course Code     - HNDIT                 *"<<endl;
			cout<<"\t\t\t\t\t*   Course Duration - 2 Years and 6 Months  *"<<endl;
			cout<<"\t\t\t\t\t*   Course Type     - Full Time / Part Time *"<<endl;
			cout<<"\t\t\t\t\t*   Course Number   - 2                     *"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl<<endl;
			//HNDIT 
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Course Code     - HNDTHM                *"<<endl;
			cout<<"\t\t\t\t\t*   Course Duration - 3 Years               *"<<endl;
			cout<<"\t\t\t\t\t*   Course Type     - Full Time             *"<<endl;
			cout<<"\t\t\t\t\t*   Course Number   - 3                     *"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl<<endl;
			//HNDTHM
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Course Code     - HNDM                  *"<<endl;
			cout<<"\t\t\t\t\t*   Course Duration - 3 Years               *"<<endl;
			cout<<"\t\t\t\t\t*   Course Type     - Full Time             *"<<endl;
			cout<<"\t\t\t\t\t*   Course Number   - 4                     *"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl<<endl;
			//HNDM
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Course Code     - HNDBA                 *"<<endl;
			cout<<"\t\t\t\t\t*   Course Duration - 2 Years and 6 Months  *"<<endl;
			cout<<"\t\t\t\t\t*   Course Type     - Full Time             *"<<endl;
			cout<<"\t\t\t\t\t*   Course Number   - 5                     *"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl<<endl;
			//HNDBA
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Course Code     - HNDA                  *"<<endl;
			cout<<"\t\t\t\t\t*   Course Duration - 4 Years               *"<<endl;
			cout<<"\t\t\t\t\t*   Course Type     - Full Time / Part Time *"<<endl;
			cout<<"\t\t\t\t\t*   Course Number   - 6                     *"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl<<endl<<endl;
			//HNDA 
			cout<<"\t\t\t\t\tEnter the Course Number : ";
			cin>>c_num;
			//select course

			if(c_num==1)
				{
					course_num="HNDE         ";
				}
			else if(c_num==2)
				{
					course_num="HNDIT        ";
				}
			else if(c_num==3)
				{
			 		course_num="HNDTHM       ";
				}
			else if(c_num==4)
				{
 					course_num="HNDM         ";
				}
			else if(c_num==5)
				{
					course_num="HNDBA        ";
				}
			else if(c_num==6)
				{
					course_num="HNDA         ";
				}
			else if(c_num>6||c_num<1)
				{
			 		conform2=2;
				}
			}
			while((c_num>6)||(c_num<1));
				system("cls");
				cout<<"\n\t\t\t\t\tSelected Course : "<<course_num<<endl<<endl;
				
				cout<<"\t\t\t\t\tEnter Number '1' If it's Correct "<<endl;
				cout<<"\t\t\t\t\tEnter Number '2' If it's Wrong   "<<endl;
				cout<<"\t\t\t\t\tEnter :";
				cin>>conform2;
		
			}
			while((conform2>=2)||(conform2<1));
		}
		
	else if((qualify==1)&&(zscore<0.2200))
		{
			cout<<"\t\t\t\t\tYour Z score is low for this courses"<<endl<<endl<<endl;
			
			cout<<"\t\t\t\t\tEnter Number '2' Exit     "<<endl;
			cout<<"\t\t\t\t\t  :";
			cin>>conform6;
		}
	
	cout<<endl<<endl<<endl;	
	if ((c_num==1)||(c_num==2)||(c_num==6))
		{
			do
			{
			system("cls");
			cout<<"\t\t\t\t\tFull time Press '1' "<<endl;
			cout<<"\t\t\t\t\tPart time Press '2' "<<endl;
			cout<<"\t\t\t\t\t Enter :";
			cin>>c_type;
				if(c_type==1)
					{
						c_fee="FREE                 ";
					}
				else if(c_type==2)
					{
						c_fee="12,000/= for Semester";
					}
			}
			while((c_type<1)||(c_type>2));
		}

		
		cout<<endl<<endl<<endl;	
	//final registration
		if((c_type==1)||(c_type==2))
			{
			system("cls");
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t**                COURSES                  **"<<endl;
			cout<<"\t\t\t\t\t**             REGISTRATION                **"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t********        COURSE DETAILS       ********"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Course Name     - "<<course_num<<"         *"<<endl;
			cout<<"\t\t\t\t\t*   Course Duration - 2 Years and 6 Months  *"<<endl;
			cout<<"\t\t\t\t\t*   Course Type     - "<<c_fee<<" *"<<endl<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t********      PERSONAL DETAILS       ********"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*   Name            - "<<f_name<<" "<<l_name<<endl;
			cout<<"\t\t\t\t\t*   NIC NUMBER      - "<<sid_num<<endl;
			cout<<"\t\t\t\t\t*   Date Of Birth   - "<<day<<"-"<<month<<"-"<<year<<endl;
			cout<<"\t\t\t\t\t*   Gender          - "<<gender<<endl;
			cout<<"\t\t\t\t\t*   Phone Number    - "<<phone<<endl;	
			cout<<"\t\t\t\t\t*   Email           - "<<email<<endl;
			cout<<"\t\t\t\t\t*   Address         - "<<address<<endl<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t********  EDUCATIONAL DETAILS [O/L]  ********"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t*  "<<"Subject"<<"\t\t\t\t\t"<<"Result"<<"\t\t\t"<<" Year"<<endl;
			cout<<"\t\t\t\t\t*  "<<"_______"<<"\t\t\t\t\t"<<"______"<<"\t\t\t"<<"______"<<endl<<endl;
			
			for(int i=0; i<9; i++)
				{
					cout<<"\t\t\t\t\t*  "<<sub[i]<<"\t  "<<sub_r[i]<<"\t\t "<<sub_y[i]<<endl;
				}
			cout<<endl;
	
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\t\t\t\t\t********  EDUCATIONAL DETAILS [A/L]  ********"<<endl;
			cout<<"\t\t\t\t\t*********************************************"<<endl;
			cout<<"\n\t\t\t\t\t*   medium - "<<medium<<endl;
			cout<<"\t\t\t\t\t*   stream - "<<stream<<endl;
			cout<<"\t\t\t\t\t*   Year   - "<<A_Level_Y<<endl<<endl;
			cout<<"\t\t\t\t\t*   Subjects"<<"\t\t\t      "<<"Result"<<endl;
			cout<<"\t\t\t\t\t*   --------"<<"\t\t\t      "<<"------"<<endl<<endl;
			cout<<"\t\t\t\t\t*   "<<Al_subject1<<"\t"<<Al_result1<<endl;
			cout<<"\t\t\t\t\t*   "<<Al_subject2<<"\t"<<Al_result2<<endl;
			cout<<"\t\t\t\t\t*   "<<Al_subject3<<"\t"<<Al_result3<<endl;
			cout<<"\t\t\t\t\t*   "<<Al_subject4<<"\t"<<Al_result4<<endl;
			cout<<"\t\t\t\t\t*   "<<"Genral Knowladge "<<"\t\t\t"<<Al_gkresult<<endl;
			cout<<"\t\t\t\t\t*   "<<"Z Score          "<<"\t\t\t"<<zscore<<endl<<endl;
			
			cout<<"\t\t\t\t\tEnter Number '1' To Print "<<endl;
			cout<<"\t\t\t\t\tEnter Number '2' Exit     "<<endl;
			cout<<"\t\t\t\t\t  :";
			cin>>conform5;
			
			
			cout<<endl<<endl<<endl;
				
			if(conform5==1)
				{
			system("cls");
			cout<<"\n\n\t\t\t\t\t"<<"YOU ARE SUCCESSFULLY RIGISTERD"<<endl<<endl;
			cout<<"\n\n\t\t\t\t\t"<<"1. YOU WANT TO DEPOSIT RS. 500 TO OUR BANK ACCOUNT NUMBER [12345678901234]"<<endl;
			cout<<"\n\n\t\t\t\t\t"<<"2. SEND US DEPOSIT SLIP AND PRINT OF THIS FORM TO [ No. 16, Keppetipola Mw,Kandy] - THIS ADDRESS  "<<endl;		
			cout<<"\t\t\t\t\t\t\t"<<"3. WE WILL SEND A CONFORMATION LETTER TO YOUR ADDRESS"<<endl<<endl;
			cout<<"\t\t\t\t\t\t\t"<<"FUTHER MORE DETAILS - Telephone: 081-2232097/ 071-4848210"<<endl<<endl<<endl;	
			cout<<"\t\t\t\t\t\t\t\t\t"<<"[THANK YOU]"<<endl<<endl<<endl<<endl;
			cout<<"\t\t\t\t\t"<<"[2020 All rights recived]"<<endl<<endl;
			
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t**                COURSES                  **"<<endl;
			outfile<<"\t\t\t\t\t**             REGISTRATION                **"<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t********        COURSE DETAILS       ********"<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t*   Course Name     - "<<course_num<<"         *"<<endl;
			outfile<<"\t\t\t\t\t*   Course Duration - 2 Years and 6 Months  *"<<endl;
			outfile<<"\t\t\t\t\t*   Course Type     - "<<c_fee<<" *"<<endl<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t********      PERSONAL DETAILS       ********"<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t*   Name            - "<<f_name<<" "<<l_name<<endl;
			outfile<<"\t\t\t\t\t*   NIC NUMBER      - "<<sid_num<<endl;
			outfile<<"\t\t\t\t\t*   Date Of Birth   - "<<day<<"-"<<month<<"-"<<year<<endl;
			outfile<<"\t\t\t\t\t*   Gender          - "<<gender<<endl;
			outfile<<"\t\t\t\t\t*   Phone Number    - "<<phone<<endl;	
			outfile<<"\t\t\t\t\t*   Email           - "<<email<<endl;
			outfile<<"\t\t\t\t\t*   Address         - "<<address<<endl<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t********  EDUCATIONAL DETAILS [O/L]  ********"<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t*  "<<"Subject"<<"\t\t\t\t\t"<<"Result"<<"\t\t\t"<<" Year"<<endl;
			outfile<<"\t\t\t\t\t*  "<<"_______"<<"\t\t\t\t\t"<<"______"<<"\t\t\t"<<"______"<<endl<<endl;
			for(int i=0; i<9; i++)
				{
					outfile<<"\t\t\t\t\t*  "<<sub[i]<<"\t  "<<sub_r[i]<<"\t\t "<<sub_y[i]<<endl;
				}
		
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\t\t\t\t\t********  EDUCATIONAL DETAILS [A/L]  ********"<<endl;
			outfile<<"\t\t\t\t\t*********************************************"<<endl;
			outfile<<"\n\t\t\t\t\t*   medium - "<<medium<<endl;
			outfile<<"\t\t\t\t\t*   stream - "<<stream<<endl;
			outfile<<"\t\t\t\t\t*   Year   - "<<A_Level_Y<<endl<<endl;
			outfile<<"\t\t\t\t\t*   Subjects"<<"\t\t\t      "<<"Result"<<endl;
			outfile<<"\t\t\t\t\t*   --------"<<"\t\t\t      "<<"------"<<endl<<endl;
			outfile<<"\t\t\t\t\t*   "<<Al_subject1<<"\t"<<Al_result1<<endl;
			outfile<<"\t\t\t\t\t*   "<<Al_subject2<<"\t"<<Al_result2<<endl;
			outfile<<"\t\t\t\t\t*   "<<Al_subject3<<"\t"<<Al_result3<<endl;
			outfile<<"\t\t\t\t\t*   "<<Al_subject4<<"\t"<<Al_result4<<endl;
			outfile<<"\t\t\t\t\t*   "<<"Genral Knowladge "<<"\t\t\t"<<Al_gkresult<<endl;
			outfile<<"\t\t\t\t\t*   "<<"Z Score          "<<"\t\t\t"<<zscore<<endl<<endl;
			outfile<<"\t\t\t\t\t******************************************************************************************"<<endl;
			outfile<<"\t\t\t\t\t******************************************************************************************"<<endl;
			outfile<<"\t\t\t\t\t******************************************************************************************"<<endl<<endl;
			
			cout<<"\t\t\t\t\tEnter Number '2' Exit     "<<endl;
			cout<<"\t\t\t\t\t  :";
			cin>>conform6;
				}
				
			}
	
	if(qualify==0)
		{
			cout<<"cant apply any courses"<<endl;
		}

	}while(ati==1);
	
	outfile.close();
}


////////////////Function//////////////////////////////////////


//AL Function
//AL medium
string AL_medium(int Al_meds)
	{
		string select_m;
		switch(Al_meds)
			{
				case 1   : select_m="Sinhala       "; break;
				case 2   : select_m="Tamil         "; break;
				case 3   : select_m="English       "; break;
				
				default  : select_m="*Invalid input"; break;
			}
			return select_m;
	}
//AL stream
string AL_stream(int str)
	{
		string select_s;
		switch(str)
			{
				case 1 : select_s="Artrs           "; break;
				case 2 : select_s="Commerce        "; break;
				case 3 : select_s="Bio Science     "; break;
				case 4 : select_s="Physical        "; break;
				case 5 : select_s="Technology      "; break;
				
				default  : select_s="*Invalid input"; break;
			}
		return select_s;
	}
//Al_year	
int AL_y(int year_al)
	{
		char error;
		int select_y;
		if((year_al<=2019)&&(year_al>=2016))
			{
				return select_y=year_al;
			}
		else
			{
				return error='*Invelid Input ';
			}
	}


//AL art Subject
string AL_artrs(int art)
	{
		string select_As;
		switch(art)
			{
				case 1  : select_As= "Western Music                   "; break;
				case 2  : select_As= "Genral English                  "; break;
				case 3  : select_As= "Arabic                          "; break;
				case 4  : select_As= "Art                             "; break;
				case 5  : select_As= "Bharatha Natayam                "; break;
				case 6  : select_As= "Buddhism                        "; break;
				case 7  : select_As= "Buddhist Civilization           "; break;
				case 8  : select_As= "Chinese                         "; break;
				case 9  : select_As= "Christian Civilization          "; break;
				case 10 : select_As= "Christianity                    "; break;
				case 11 : select_As= "Communication and Media Studies "; break;
				case 12 : select_As= "Dance                           "; break;
				case 13 : select_As= "Economics                       "; break;  
				case 14 : select_As= "English                         "; break;  
				case 15 : select_As= "French                          "; break;  
				case 16 : select_As= "Geography                       "; break;  	
				case 17 : select_As= "German                          "; break;
				case 18 : select_As= "Greek and Roman Civilization    "; break;
				case 19 : select_As= "Hindi Language                  "; break;          
				case 20 : select_As= "Hindu Civilization              "; break;
				case 21 : select_As= "Hinduism                        "; break;
				case 22 : select_As= "History                         "; break;
				case 23 : select_As= "Islam                           "; break;
				case 24 : select_As= "Islamic Civilization            "; break;
				case 25 : select_As= "Logic and Scientific Method     "; break;
				case 26 : select_As= "Pali Language                   "; break;
				case 27 : select_As= "Political Science               "; break;
				case 28 : select_As= "Russian                         "; break;
				case 29 : select_As= "Sanskrit                        "; break;
				case 30 : select_As= "Sinhala                         "; break;
				case 31 : select_As= "Tamil                           "; break;
				
				default : select_As= "*Invelid Input                  "; break;
			}
			return select_As;
	}
	
//result
int AL_gradegk(int gk_grd)
	{
		char error;
		if((gk_grd>=0)&&(gk_grd<=100))
			{
				return gk_grd;
			}
		else
			{
				return error='*Invelid Input';
			}	
	}
string AL_grade(char al_grd)
	{
		string grade;
		switch(al_grd)
			{
				case 'A': grade="A            ";	break;
				case 'a': grade="A            "; 	break;
				case 'B': grade="B            "; 	break;
				case 'b': grade="B            "; 	break;
				case 'C': grade="C            "; 	break;
				case 'c': grade="C            "; 	break;
				case 'S': grade="S            "; 	break;
				case 's': grade="S            "; 	break;
				case 'W': grade="W            "; 	break;
				case 'w': grade="W            "; 	break;
				
				default : grade="Invalid Input"; 	break;
			}
			return grade;
	}
	
//Commerce
string AL_Commerce(int com)
	{
		string select_Cs;
		switch(com)
			{
				case 1  : select_Cs= "Accounting                      "; break;
				case 2  : select_Cs= "Genral English                  "; break;
				case 3  : select_Cs= "Business                        "; break;
				case 4  : select_Cs= "Statistics Business             "; break;
				case 5  : select_Cs= "Studies Economics               "; break;
				
				default : select_Cs= "*Invelid Input                  "; break;
			}
			return select_Cs;
	}
	
//Bio Science
string AL_Bio(int bio)
	{
		string select_Bs;
		switch(bio)
			{
				case 1  : select_Bs= "Agriculture                     "; break;
				case 2  : select_Bs= "Genral English                  "; break;
				case 3  : select_Bs= "Bio System Technology           "; break;
				case 4  : select_Bs= "Biology                         "; break;
				case 5  : select_Bs= "Chemistry                       "; break;
				case 6  : select_Bs= "Physics                         "; break;
				case 7  : select_Bs= "Science for Technology          "; break;
				
				default : select_Bs= "*Invelid Input                  "; break;
			}
			return select_Bs;
	}	


//Physical
string AL_Phy(int Phy)
	{
		string select_Ps;
		switch(Phy)
			{
				case 1  : select_Ps= "Science (Maths) Chemistry       "; break;
				case 2  : select_Ps= "Genral English                  "; break;
				case 3  : select_Ps= "Combine Mathematics             "; break;
				case 4  : select_Ps= "Higher Mathematics              "; break;
				case 5  : select_Ps= "Physics                         "; break;
				
				default : select_Ps= "*Invelid Input                  "; break;
			}
			return select_Ps;
	}		
				
//Technology
string AL_Tech(int Tech)
	{
		string select_Ts;
		switch(Tech)
			{
				case 1  : select_Ts= "Agro Technology                 "; break;
				case 2  : select_Ts= "Genral English                  "; break;
				case 3  : select_Ts= "Engineering Technology          "; break;
				case 4  : select_Ts= "Science for Technology          "; break;
				case 5  : select_Ts= "Information & Communication     "; break;
				
				default : select_Ts= "*Invelid Input                  "; break;
			}
			return select_Ts;
	}				
		

