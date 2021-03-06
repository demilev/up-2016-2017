#include<iostream>
#include<cmath>
using namespace std;
//функция, на която даваме число и позиция и искаме функцията да ни върне цифрата на тази позиция в числото
//пример число - 1234 , позиция - 2, функцията връща 3 
int extractDigit(unsigned int number,unsigned int position){
    return (int)(number/(pow(10,position-1)))%10; // отново нещо математическо, което не влияе на знанията ви по програмиране
												  //идеята е , че ако искаме цифрата на позиция i
												  //първо ще премахнем всички цифри преди нея 
												  //това става целочислено деление на 10 на степен i-1
												  //именно това прави number/(pow(10,position-1)
												  //и след това гледаме остатъка при деление на 10
												  //за да вземем търсената цифрата
												  //пред цялото нещо има (int), защото както
												  //знаем вече, резултатът от pow е double
}
//дефинираме си функция, която преброява броя 
//на цифрите на дадено число
//функцията ще ползваме по-надолу
int countDigits(unsigned int number){
    int counter=0; // дефинираме един брояч 
				   // в който ще се "трупат"
				   // броят на цифрите
    //цикъл, който на всяка стъпка увеличава
	//брояча и дели числото целочислено на 10
	//пример: ако числото е 1234
	//при първото изпълнение броячът ще стане 1
	//а числото 1234/10, т.е 123
	//на втора стъпка броячът става 2
	//а числото 123/10=12
	//трета стъпка броячът става 3
	//числото 12/10=1
	//четвърта стъпка броячът става 4
	//числото 1/10=0
	//повече стъпки няма, защото условието на цикъла
	//вече не е изпълнено
	while(number>0){
        counter++;
        number/=10;
    }
    return counter;
}
//функция, която ще проверява дали числото е палиндром
//тип bool е, защото очакваме, ако числото е палиндром
//да върне true, в противен случай false
bool isNumberPalindrom(unsigned int number){
    int numOfDigits=countDigits(number);//запзваме в променлива броя на цифрите на числото
										//като викаме функцията, която си дефинирахме по-горе,
										//чрез името й и аргумент
    for(int i=1;i<=numOfDigits/2;i++){											//въртим цикъла до "средата" на числото
        if(extractDigit(number,i)!=extractDigit(number,numOfDigits-i+1))		//на всяка стъпка проверяваме дали i-тото
        {																		//число е равно на симетричното му спрямо
																				//средата на числото
																				//пример: за числото 123326 на първа стъпка ще
																				//проверим дали първата цифра т.е 6 е равна на последната
																				//т.е 1
		   return false;														//ако за някоя позиция откриваме различие в цифрите
																				//връшаме false
																				//като в случая този ред return false , ше доведе
																				//до пълно прекратяване на функцията и всички други редове
																				//код, които следват, няма да бъдат изпълнени
		   
		
        }
    }
    return true;
}

int main(){
    cout<<isNumberPalindrom(101)<<endl; //няколко проверки дали дадени числа са палиндроми
    cout<<isNumberPalindrom(1551)<<endl;
    cout<<isNumberPalindrom(1012)<<endl;
    cout<<isNumberPalindrom(185581)<<endl;
    return 0;
}
