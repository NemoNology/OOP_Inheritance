#pragma once
#include "ADT_Notebook.h"


class Notebook : public ADT_Notebook
{

public:                 // �������� �������� ��� ������ Notebook


// ��� ��������
    enum Markup_T {

        Checkered,              // � ������
        In_Line,                // � �����  
        Without_Markup,         // ��� ��������
        Another                 // ������

    };

private:                // ���� ������

    Markup_T Markup_Type;                   // ��� ��������

    string Manufacturer;                    // �������������

public:                 // ������ ������

// ����������� ��� ������� ������
    Notebook();



    //Setters:



    // Set ��� ��������
    void Set_Markup_Type(Markup_T t);



    // Set �������������
    void Set_Manufacturer(const string& m);

    


    //Getters: 



    // Get ��� ��������
    Markup_T Get_Markup_Type() const;



    // Get �������������
    string Get_Manufacturer() const;



    // Getters (string):



    // Get string ��� ��������
    string Get_string_Markup_Type() const;


    // Get string ���� ��� ���� ������� 
    string Get_All_Information() const;


    // ����������� � �������� �������
    Notebook(Markup_T M_T, string Man, unsigned short N_o_S, Paper_M P_M, unsigned short Size);

};

