#include "Notebook.h"


// ����������� ��� ������� ������
Notebook::Notebook() {

    Notebook::Markup_Type = Markup_T::Without_Markup;

};



string Markup_Types[sizeof(Notebook::Markup_T)] = { "� ������", "� �����", "��� ��������", "������" };




//Setters:



// Set ��� ��������
void Notebook::Set_Markup_Type(Markup_T t) {

    this->Markup_Type = t;

}


// Set �������������
void Notebook::Set_Manufacturer(const string& m) {

    // ��� ����� ������, �� ������ 
    if (m == "") {

        throw invalid_argument("�����...");             // �������� �����

    }
    else {

        this->Manufacturer = m;

    }
}



//Getters:



// Get ��� ��������
Notebook::Markup_T Notebook::Get_Markup_Type() const {

    return this->Markup_Type;

}



// Get �������������
string Notebook::Get_Manufacturer() const {

    return this->Manufacturer;

}



// Getters (string):



// Get string ��� ��������
string Notebook::Get_string_Markup_Type() const {


    return Markup_Types[this->Markup_Type];


}



// Get string ���� ��� ���� ������� 
string Notebook::Get_All_Information() const {

    return "��� ��������:\t" + Get_string_Markup_Type() + "\t������������:\t" + Get_Manufacturer() + "\t" + ADT_Notebook::Get_All_Information();

}

// ����������� � �������� �������
Notebook::Notebook(Markup_T M_T, string Man, unsigned short N_o_S, Paper_M P_M, unsigned short Size) {

    Set_Markup_Type(M_T);
    Set_Manufacturer(Man);

    Set_Number_of_Sheets(N_o_S);
    Set_Paper_material(P_M);
    Set_Size_of_Page(Size);

}

