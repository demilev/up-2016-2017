#include<iostream>
using namespace std;
//��������� �� �������� ������ sumOfDigits � haveEqualSums
int sumOfDigits(int number) {
	int sum = 0;
	while (number > 0) {
		sum = sum + number % 10;
		number = number / 10;
	}

	return sum;
}
bool haveEqualSums(int firstNumber, int secondNumber) {
	return (sumOfDigits(firstNumber) == sumOfDigits(secondNumber));
}
//������ �������, ����� ������� ������ ����� � ������� ��������
//� ����� ���������� haveEqualSums, � ��� ���������� � ������ ������
//�������� �����
void printAll(int number,int startOfInterval, int endOfInterval){
    for(int i=startOfInterval;i<=endOfInterval;i++){
        if(haveEqualSums(number,i))
            cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    printAll(5,3,100);
}


