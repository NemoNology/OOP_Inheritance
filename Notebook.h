#pragma once
#include "ADT_Notebook.h"


class Notebook : public ADT_Notebook
{

public:                 // Создание множеств для класса Notebook


// Тип разметки
    enum Markup_T {

        Checkered,              // В клетку
        In_Line,                // В линию  
        Without_Markup,         // Без разметки
        Another                 // Другой

    };

private:                // Поля класса

    Markup_T Markup_Type;                   // Тип разметки

    string Manufacturer;                    // Производитель

public:                 // Методы класса

// Конструктор без входных данных
    Notebook();



    //Setters:



    // Set Тип разметки
    void Set_Markup_Type(Markup_T t);



    // Set Производитель
    void Set_Manufacturer(const string& m);

    


    //Getters: 



    // Get Тип разметки
    Markup_T Get_Markup_Type() const;



    // Get Производитель
    string Get_Manufacturer() const;



    // Getters (string):



    // Get string Тип разметки
    string Get_string_Markup_Type() const;


    // Get string инфу обо всей тетради 
    string Get_All_Information() const;


    // Конструктор с входными данными
    Notebook(Markup_T M_T, string Man, unsigned short N_o_S, Paper_M P_M, unsigned short Size);

};

