#include <exception>
#include <string>
#include <iostream>
#include "ADT_Notebook.h"



using namespace std;


ADT_Notebook::ADT_Notebook() {

    ADT_Notebook::Number_of_Sheets = 0;

    ADT_Notebook::Size_of_Page = 5;

    ADT_Notebook::Paper_Material = Paper_M::EAC;

}




// Массив для возвращения строки с материалом бумаги
string Paper_Materials[sizeof(ADT_Notebook::Paper_M)] = { "ГОСТ", "Не ГОСТ" };



//Setters:



// Set Кол-во листов
void ADT_Notebook::Set_Number_of_Sheets(const unsigned short& n) {

    if (n == 0) {

        throw invalid_argument("Нулевое значение...");  // Ошибочка вышла

    }
    else
    {

        this->Number_of_Sheets = n;

    }

}


// Set Материал бумаги\листов
void ADT_Notebook::Set_Paper_material(const ADT_Notebook::Paper_M& m) {

    this->Paper_Material = m;

}

// Set Размер страницы
void ADT_Notebook::Set_Size_of_Page(const unsigned short& s) {

    if (s == 0) {

        throw invalid_argument("Нулевой размер?..");    // Ошибочка вышла

    }
    else {

        this->Size_of_Page = s;

    }
}



//Getters: 



// Get Кол-во листов
unsigned short ADT_Notebook::Get_Number_of_Sheets() const {

    return this->Number_of_Sheets;

}


// Get Материал бумаги\листов
ADT_Notebook::Paper_M ADT_Notebook::Get_Paper_Material() const {

    return this->Paper_Material;

}

// Get Размер страницы
unsigned short ADT_Notebook::Get_Size_of_Page() const {

    return this->Size_of_Page;

}



// Getters (string):



// Get string Кол-во листов
string ADT_Notebook::Get_string_Number_of_Sheets() const {

    return to_string(this->Number_of_Sheets);

}



// Get string Материал бумаги\листов
string ADT_Notebook::Get_string_Paper_Material() const {

    return Paper_Materials[this->Paper_Material];

}



// Get Размер страницы
string ADT_Notebook::Get_string_Size_of_Page() const {

    return "A" + to_string(this->Size_of_Page);

}

// Get string инфу обо всей тетради 
string ADT_Notebook::Get_All_Information() const {

    return "Кол-во листов:\t" + ADT_Notebook::Get_string_Number_of_Sheets() +
        "\tМатериал бумаги:\t" + ADT_Notebook::Get_string_Paper_Material() + "\tРазмер страницы:\t" +
        ADT_Notebook::Get_string_Size_of_Page();

}




ADT_Notebook::ADT_Notebook(unsigned short N_o_S, Paper_M P_M, unsigned short Size) {

	ADT_Notebook::Set_Number_of_Sheets(N_o_S);

	ADT_Notebook::Set_Paper_material(P_M);

	ADT_Notebook::Set_Size_of_Page(Size);

}