#pragma once
#include <exception>
#include <iostream>
#include <string>



using namespace std;



class ADT_Notebook {


public:                 // �������� �������� ��� ������ ADT_Notebook


    enum Paper_M {          // �������� ������\������

        EAC,                // ����
        Not_EAC             // �� ����

    };


private:                // ���� ������


    unsigned short Number_of_Sheets;        // ���-�� ������
    Paper_M Paper_Material;                 // �������� ������\������
    unsigned short Size_of_Page;            // ������ �������� (�5, ��������)   


public:                 // ������ ������

    // ����������� ��� ����������� ��������
    ADT_Notebook();



    //Setters:



    // Set ���-�� ������
    void Set_Number_of_Sheets(const unsigned short& n);


    // Set �������� ������\������
    void Set_Paper_material(const Paper_M& m);


    // Set ������ ��������
    void Set_Size_of_Page(const unsigned short& s);



    //Getters: 



    // Get ���-�� ������
    unsigned short Get_Number_of_Sheets() const;


    // Get �������� ������\������
    Paper_M Get_Paper_Material() const;


    // Get ������ ��������
    unsigned short Get_Size_of_Page() const;



    // Getters (string):



    // Get string ���-�� ������
    string Get_string_Number_of_Sheets() const;

    // Get string �������� ������\������
    string Get_string_Paper_Material() const;

    // Get ������ ��������
    string Get_string_Size_of_Page() const;

    // Get string ���� ��� ���� ������� 
    string Get_All_Information() const;



    // ����������� � ������������ ����������
    ADT_Notebook(unsigned short N_o_S, Paper_M P_M, unsigned short Size);

};