#include<iostream>
using namespace std;
//������ ��������� ����������
//power �������, �� �� ������ ��������
//� ���������� ��������
int power(int num,int p){
    int result=1;
    for(int i=0;i<p;i++){
        result*=num;
    }
    return result;
}
void printBinary(int number){
    int result=0; // �� ������� ��������� ���

    int counter=0; //�����, ����� �� �� �����
                   //����� ����� ��� ���������
                   //�� �� ����� �� ����� ������
                   //�������� �� ��������� 1 ��� 0
                   //��� �������
    while(number>=1){
        result+=number%2*power(10,counter); //�� ����� ������ ��� ���������
                                            //��������� �������� �� ������� ��� ������� �� 2
                                            //�� 10 �� ������ �������� ������� �� ���������
        number/=2;
        counter++;
    }
    cout<<result;
    cout<<endl;
}
int main(){
    printBinary(16);
    printBinary(8);
    printBinary(7);
    printBinary(1);
    printBinary(10);
    printBinary(5);
}


