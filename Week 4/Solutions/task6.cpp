#include<iostream>
#include<math.h>
using  namespace std;
//��������� �� ��������� ������� power, ����� � ������������ �� pow,
//�� ������� ���� ����, �� �� ����� �������� �����
int power(int num,int p){
    int result=1;
    for(int i=0;i<p;i++){
        result*=num;
    }
    return result;
}
int replaceDigitAt(int number,int index,int digit){
    int result;
    //�������, �� ����� �� ����������� � ��������:
    //��� ������ �� ������ ������� 6 � 1234567 � ������� 5,
    //���� ����� �� �������� � �� ���������� ��������� r
    //���� ���� ��  1234500 , 50 � 7, �.� r=1234500+50+7
    //�.� ��������� ������� �� ���� ����� �������, ���� ���� �������
    //� ���� � ������ �����
    int beforeIndex=number%(power(10,index-1)); // ������� ������, ����� � ����� �������, ����� �� �� ������,
                                                // ������ ����� �� � �������� ��� ���������

    int atIndex=digit*(power(10,index-1));  // ���������� ������ � ������ �����

    int afterIndex=(number/(power(10,index)))*(power(10,index)); // ������� ������, ����� � ���� �������, ����� �� �� ������,
                                                                 // ������ � ��� �� ������� ��� ���������

    result=beforeIndex+atIndex+afterIndex;
    return result;
}

int main(){
    int newNumber = replaceDigitAt(1234567, 2, 5);
    cout<<newNumber<<endl;
    newNumber = replaceDigitAt(newNumber, 3, 2);
    cout<<newNumber<<endl;
}
