#pragma once
#include <exception>
#include <string>
#include "ADT_Notebook.h"


using namespace std;



class Newspaper : public ADT_Notebook
{


private:

	string Publisher;

	string Date;

public:

	Newspaper() {

		this->Publisher = "Unknown";

		this->Date = "Unknown";

	}



	//	Setters:



	void Set_Publisher(const string& s) {

		if (s == "") {

			throw invalid_argument("Empty...");			// Error!

		}
		else {

			this->Publisher = s;

		}
	}


	void Set_Date(const string& s) {

		if (s == "") {

			throw invalid_argument("Empty...");			// Error!

		}
		else {

			this->Date = s;

		}
	}



	//	Getters:



	string Get_Publisher() {

		return this->Publisher;

	}


	string Get_Date() {

		return this->Date;

	}



	//	Getters (string):



	string Get_All_Information() {

		return "Издатель:\t" + Get_Publisher() + "\tДата выхода:\t" + Get_Date() + "\t" + ADT_Notebook::Get_All_Information();

	}



	Newspaper(string P, string D, unsigned short N_o_S, Paper_M P_M, unsigned short Size) {

		Set_Publisher(P);
		Set_Date(D);

		Set_Number_of_Sheets(N_o_S);
		Set_Paper_material(P_M);
		Set_Size_of_Page(Size);

	}


};

