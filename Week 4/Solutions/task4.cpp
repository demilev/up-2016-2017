#include<iostream>
using namespace std;
//��� �� �������� ��������� power, ������ �� ����� �������� pow
int power(int num,int p){
    int result=1;
    for(int i=0;i<p;i++){
        result*=num;
    }
    return result;
}
//��������� �� �������� ������ countDigits � isSubNumber
int countDigits(int number) {
	int digitCount = 1;
	while (number > 9) {
		number = number / 10;
		digitCount++;
	}
	return digitCount;
}

bool isSubNumber(int find, int search) {
	int numberOfDigits = countDigits(find);

	while(search >= find) {
		if (search % power(10, numberOfDigits) == find) {
			return true;
		}
		search = search / 10;
	}
	return false;
}
//������ �������, ����� ������� ������� �� 1 �� number
//� �� ������, ��� ��������� �� ��������� isSubNumber
void printAllSubNumbers(int number){
    for(int i=1;i<=number;i++){
        if(isSubNumber(i,number))
            cout<<i<<" ";
    }
    cout<<endl;
}
int main(){

    printAllSubNumbers(120);

}
