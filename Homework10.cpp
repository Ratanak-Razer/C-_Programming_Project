#include <iostream>
#include <conio.h>
#include "Testhw.h"

using namespace std;


int main()
{	
	system("mode con cols=205 lines=50");
	design();
	getch();
	system("cls");
	start:
	int op;
	
	foreColor(5);
		gotoxy(75,1); cout <<R"(  /$$$$$$              /$$     /$$                              )"<< endl;
		foreColor(9);
		gotoxy(75,2); cout <<R"( /$$__  $$            | $$    |__/                              )"<< endl;
		foreColor(5);
		gotoxy(75,3); cout <<R"(| $$  \ $$  /$$$$$$  /$$$$$$   /$$  /$$$$$$  /$$$$$$$   /$$$$$$$)"<< endl;
		foreColor(9);
		gotoxy(75,4); cout <<R"(| $$  | $$ /$$__  $$|_  $$_/  | $$ /$$__  $$| $$__  $$ /$$_____/)"<< endl;
		foreColor(5);
		gotoxy(75,5); cout <<R"(| $$  | $$| $$  \ $$  | $$    | $$| $$  \ $$| $$  \ $$|  $$$$$$ )"<< endl;
		foreColor(9);
		gotoxy(75,6); cout <<R"(| $$  | $$| $$  | $$  | $$ /$$| $$| $$  | $$| $$  | $$ \____  $$)"<< endl;
		
		foreColor(9);
		gotoxy(75,7); cout <<R"(|  $$$$$$/| $$$$$$$/  |  $$$$/| $$|  $$$$$$/| $$  | $$ /$$$$$$$/)"<< endl;
		foreColor(5);
		gotoxy(75,8); cout <<R"( \______/ | $$____/    \___/  |__/ \______/ |__/  |__/|_______/ )"<< endl;
		foreColor(9);
		gotoxy(75,9); cout <<R"(          | $$                                                  )"<< endl;
		
		foreColor(9);
		gotoxy(75,10); cout <<R"(          | $$                                                  )"<< endl;
		foreColor(5);
		gotoxy(75,11); cout <<R"(          |__/                                                  )"<< endl;
		
		DrawRectangle(7,17,29,15,4);
		
		foreColor(2);
		gotoxy(10,18); cout <<R"(               T~~)"<< endl;
		foreColor(2);
		gotoxy(10,19); cout <<R"(               |)"<< endl;
		foreColor(2);
		gotoxy(10,20); cout <<R"(              /"\)"<< endl;
		foreColor(2);
		gotoxy(10,21); cout <<R"(      T~~     |'| T~~)"<< endl;
		foreColor(2);
		gotoxy(10,22); cout <<R"(  T~~ |    T~ WWWW|)"<< endl;
		foreColor(2);
		gotoxy(10,23); cout <<R"(  |  /"\   |  |  |/\T~~)"<< endl;
		foreColor(2);
		gotoxy(10,24); cout <<R"( /"\ WWW  /"\ |' |WW|)"<< endl;
		foreColor(2);
		gotoxy(10,25); cout <<R"(WWWWW/\| /   \|'/\|/"\)"<< endl;
		foreColor(2);
		gotoxy(10,26); cout <<R"(|   /__\/]WWW[\/__\WWWW)"<< endl;
		foreColor(2);
		gotoxy(10,27); cout <<R"(|"  WWWW'|I_I|'WWWW'  |)"<< endl;
		foreColor(6);
		gotoxy(10,28); cout <<R"(|   |' |/  -  \|' |'  |)"<< endl;
		foreColor(6);
		gotoxy(10,29); cout <<R"(|'  |  |LI=H=LI|' |   |)"<< endl;
		foreColor(6);
		gotoxy(10,30); cout <<R"(|   |' | |[_]| |  |'  |)"<< endl;
		foreColor(6);
		gotoxy(10,31); cout <<R"(|   |  |_|###|_|  |   |)"<< endl;
		foreColor(6);
		gotoxy(10,32); cout <<R"('---'--'-/___\-'--'---')"<< endl;
		
			foreColor(2);
		gotoxy(173,16); cout <<R"(              * * )"<< endl;
		foreColor(2);
		gotoxy(173,17); cout <<R"(           *    *  *)"<< endl;
		foreColor(2);
		gotoxy(173,18); cout <<R"(      *  *    *     *  *)"<< endl;
		foreColor(2);
		gotoxy(173,19); cout <<R"(     *     *    *  *    *)"<< endl;
		foreColor(2);
		gotoxy(173,20); cout <<R"( * *   *    *    *    *   *)"<< endl;
		foreColor(2);
		gotoxy(173,21); cout <<R"( *     *  *    * * .#  *   *)"<< endl;
		foreColor(2);
		gotoxy(173,22); cout <<R"( *   *     * #.  .# *   *)"<< endl;
		foreColor(2);
		gotoxy(173,23); cout <<R"(  *     "#.  #: #" * *    *)"<< endl;
		foreColor(2);
		gotoxy(173,24); cout <<R"( *   * * "#. ##"       *)"<< endl;
		foreColor(2);
		gotoxy(173,25); cout <<R"(   *       "###)"<< endl;
		foreColor(6);
		gotoxy(173,26); cout <<R"(             "##)"<< endl;
		foreColor(6);
		gotoxy(173,27); cout <<R"(              ##.)"<< endl;
		foreColor(6);
		gotoxy(173,28); cout <<R"(              .##:)"<< endl;
		foreColor(6);
		gotoxy(173,29); cout <<R"(              :###)"<< endl;
		foreColor(6);
		gotoxy(173,30); cout <<R"(              ;###)"<< endl;
		foreColor(6);
		gotoxy(173,31); cout <<R"(            ,####.)"<< endl;
		foreColor(5);
		gotoxy(173,32); cout <<R"(/\/\/\/\/\/.######.\/\/\/\/\)"<< endl;
	
		DrawRectangle(65,10,78,28,4);
		DrawRectangle(67,11,74,2,6);
		DrawRectangle(67,15,74,2,5);
		DrawRectangle(67,19,74,2,2);
		DrawRectangle(67,23,74,2,8);
		DrawRectangle(67,27,74,2,9);
		DrawRectangle(67,31,74,2,4);
		DrawRectangle(95,35,20,2,9);
	
	gotoxy(68,12);cout<<"[1]. Input Data";
	gotoxy(68,16);cout<<"[2]. Output Data";
	gotoxy(68,20);cout<<"[3]. Search Data";
	gotoxy(68,24);cout<<"[4]. Delete Data";
	gotoxy(68,28);cout<<"[5]. Update Data";
	gotoxy(68,32);cout<<"[6]. Exit Program";
	gotoxy(96,36);cout<<"Enter Option: ";
	gotoxy(110,36);cin>>op; fflush(stdin);cin.clear();
	
	system("cls");
	
	switch(op){
		case 1:{
			
				writedata();
		
			break;
		}
		case 2:{
			
			readata();
			
			break;
		}
		case 3:{
			searchdata();
		
			break;
		}
		case 4:{
			deletedata();
			getch();
			break;
		}
		case 5:{
			updatedata();
			
			
			break;
		}
		case 6:{
			
			foreColor(4);
		gotoxy(70,3); cout <<R"($$$$$$$\ $$\     $$\ $$$$$$$$\      $$$$$$$\ $$\     $$\ $$$$$$$$\ )"<< endl;
		foreColor(2);
		gotoxy(70,4); cout <<R"($$  __$$\\$$\   $$  |$$  _____|     $$  __$$\\$$\   $$  |$$  _____|)"<< endl;
		foreColor(3);
		gotoxy(70,5); cout <<R"($$ |  $$ |\$$\ $$  / $$ |           $$ |  $$ |\$$\ $$  / $$ |      )"<< endl;
		foreColor(6);
		gotoxy(70,6); cout <<R"($$$$$$$\ | \$$$$  /  $$$$$\ $$$$$$\ $$$$$$$\ | \$$$$  /  $$$$$\    )"<< endl;
		foreColor(5);
		gotoxy(70,7); cout <<R"($$  __$$\   \$$  /   $$  __|\______|$$  __$$\   \$$  /   $$  __|   )"<< endl;
		foreColor(9);
		gotoxy(70,8); cout <<R"($$ |  $$ |   $$ |    $$ |           $$ |  $$ |   $$ |    $$ |      )"<< endl;
		foreColor(9);
		gotoxy(70,9); cout <<R"($$$$$$$  |   $$ |    $$$$$$$$\      $$$$$$$  |   $$ |    $$$$$$$$\ )"<< endl;
		foreColor(2);
		gotoxy(70,10); cout <<R"(\_______/    \__|    \________|     \_______/    \__|    \________|)"<< endl;
			
			exit(0);
			break;
		}
		default:{
			goto start;
			break;
		}
	}
	

	system("cls");
	goto start;
	
	getch();
	return 0;
}