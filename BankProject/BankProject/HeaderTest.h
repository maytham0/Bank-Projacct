#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include "FuncionToBankProject.h"
#include<iomanip>

namespace Screen {

	void MainMenueScreen() {
		short WhatYouChoose = 0;
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
		cin >> WhatYouChoose;
	}


}#pragma once
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
#include "FuncionToBankProject.h"
#include<iomanip>

namespace Screen1 {

	void MainMenueScreen() {
		short WhatYouChoose = 0;
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
		cin >> WhatYouChoose;
	}


}