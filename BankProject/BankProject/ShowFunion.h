#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include "FuncionToBankProject.h"
#include<iomanip>
using namespace std;
using namespace BankFuncion;
 namespace Screen {
	const string ClientFileName = "Client_data.txt";
	void MainMenueScreen() {
		cout << "==========================================\n";
		cout << setw(32) << right << "Main Menue Screen\n";
		cout << "==========================================\n";
		cout << setw(16) << right << "[1]" << " Show Client List.\n";
		cout << setw(16) << right << "[2]" << " Add New Client.\n";
		cout << setw(16) << right << "[3]" << " Delete Client.\n";
		cout << setw(16) << right << "[4]" << " Update Client.\n";
		cout << setw(16) << right << "[5]" << " Find Client.\n";
		cout << setw(16) << right << "[6]" << " Exit.\n";
		cout << "==========================================\n";

		cout << "Choose what do you want to do ? [1 to 6]?";
		
	}

	void MainMenueChoos(int WhatYouChoos)
	{
		
		vector<sClient>vClient = LoadCleintsDataFromFile(ClientFileName);
		switch (WhatYouChoos)
		{
		case 1:
			//Show Client 
			PrintAllClientsData(LoadCleintsDataFromFile(ClientFileName));
			break;
		case 2:
			//AddNewClient
			SaveVectorToFileToAdd(ClientFileName,GetClientInfo());
			break;

		case 3:
			//Delete
			DeleteClientByAccountNumber(ReadClientAccountNumber(), vClient);
			break;
		case 4 :
			//Update Client
			UpdateClientByAccountNumber(ReadClientAccountNumber(), vClient);
			break;
		case 5 :
			//Find Client
			FindClientByAccountNumberToPrintHim(ClientsFileName);
			break;
		case 6 :
			//Exit 
			system("cls");
			cout << "App is End =) <3";
			system("pause>0");
			exit(0);
			break;

		default :
			cout << "\nYour Choose Wrong ,Choos Right One Agen\n";

			//MAke him go bake to start 

		}
	}



	void ElsePage()
	{
		do{
			MainMenueScreen();
			//system("cls");
			MainMenueChoos(Validate_Number());
			system("pause");

			system("cls");

		} while (0==0);
	}
	}
