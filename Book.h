#pragma once
#include <string>
#include <exception>
#include "ADT_Notebook.h"


class Book : public ADT_Notebook
{

private:

	string Author;

	string Date;

	string Name;


public:


	Book() {

		this->Author = "Unknown";

		this->Date = "Unknown";

		this->Name = "Unknown";


	}




	//	Setters:


	void Set_Author(const string& s) {

		if (s == "") {

			throw invalid_argument("Empty...");			// Ошибочка вышла...

		}
		else {

			this->Author = s;

		}

	}


	void Set_Date(const string& s) {

		if (s == "") {

			throw invalid_argument("Empty...");			// Ошибочка вышла...

		}
		else {

			this->Date = s;

		}

	}


	void Set_Name(const string& s) {

		if (s == "") {

			throw invalid_argument("Empty...");			// Ошибочка вышла...

		}
		else {

			this->Name = s;

		}

	}



	//	Getters:



	string Get_Author() {

		return this->Author;

	}


	string Get_Date() {

		return this->Date;

	}


	string Get_Name() {

		return this->Name;

	}



	//	Getters (string):



	string Get_All_Information() {

		return "Автор:\t" + Get_Author() + "\tДата выхода/завершения:\t" + Get_Date() + "\tНаименование:\t" + Get_Name() + "\t" + ADT_Notebook::Get_All_Information();

	}



	// Конструктор с входными данными
	Book(string A, string D, string N, unsigned short N_o_S, Paper_M P_M, unsigned short Size) {

		Set_Author(A);
		Set_Date(D);
		Set_Name(N);
		Set_Number_of_Sheets(N_o_S);
		Set_Paper_material(P_M);
		Set_Size_of_Page(Size);

	}




};

