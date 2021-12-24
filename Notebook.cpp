#include "Notebook.h"


// Конструктор без входных данных
Notebook::Notebook() {

    Notebook::Markup_Type = Markup_T::Without_Markup;

};



string Markup_Types[sizeof(Notebook::Markup_T)] = { "В клетку", "В линию", "Без разметки", "Другая" };




//Setters:



// Set Тип разметки
void Notebook::Set_Markup_Type(Markup_T t) {

    this->Markup_Type = t;

}


// Set Производитель
void Notebook::Set_Manufacturer(const string& m) {

    // При вводе ничего, не меняем 
    if (m == "") {

        throw invalid_argument("Пусто...");             // Ошибочка вышла

    }
    else {

        this->Manufacturer = m;

    }
}



//Getters:



// Get Тип разметки
Notebook::Markup_T Notebook::Get_Markup_Type() const {

    return this->Markup_Type;

}



// Get Производитель
string Notebook::Get_Manufacturer() const {

    return this->Manufacturer;

}



// Getters (string):



// Get string Тип разметки
string Notebook::Get_string_Markup_Type() const {


    return Markup_Types[this->Markup_Type];


}



// Get string инфу обо всей тетради 
string Notebook::Get_All_Information() const {

    return "Тип разметки:\t" + Get_string_Markup_Type() + "\tИзготовитель:\t" + Get_Manufacturer() + "\t" + ADT_Notebook::Get_All_Information();

}

// Конструктор с входными данными
Notebook::Notebook(Markup_T M_T, string Man, unsigned short N_o_S, Paper_M P_M, unsigned short Size) {

    Set_Markup_Type(M_T);
    Set_Manufacturer(Man);

    Set_Number_of_Sheets(N_o_S);
    Set_Paper_material(P_M);
    Set_Size_of_Page(Size);

}

