#include <iostream>
#include <cmath>
using namespace std;

// отделяме действието във функция - по-добра кодова практика
int findSum(double lowerBound, double greaterBound) {

	/* тези ифове са за случаите в които например 
	   сме въвели (3, 4).
	   понеже интервалът е затворен => че 3 и 4
	   не принадлежат на него, т.е. не трябва
	   да ги прибавяме към общата сума
	*/
	if (lowerBound == ceil(lowerBound)) {
		lowerBound += 1;
	} else {
		lowerBound = ceil(lowerBound);
	}

	if (greaterBound == floor(greaterBound)) {
		greaterBound -= 1;
	} else {
		greaterBound = floor(lowerBound);
	}

	/* сега ще обясним какво са ceil и floor функциите, а после
	   прочетете отново кода и се опитайте да го осмислите.
	   int ceil(double number) - така е декларирана ceil функцията -
	   т.е. тя е функция която връща цяло число, след като приеме някъкво
	   реално число. По математически може да си представите че
	   това се записва ceil: N -> R. Това, което прави ceil е намира
	   най-малкото по-голямо (или равно) естествено число. Eто 3 примера

	   ceil(2.5) = 3;
	   ceil(2) = 2;
	   ceil(7.2) = 8;
		
	   ceil идва от ceiling (което е таван), т.е. таванът на 2.5 е 3 (защото е отгоре??)

	   floor функцията е подобна - floor е под => какво ли се има предвид??

	   ето я и цялата декларация на floor : int floor(double number) -> приема
	   реално число и връща цяло. Това, което прави floor е намира най-голямото по-малко (или равно) естествено
	   число. Ето 3 примера
	   ceil(2.5) = 2;
	   ceil(2) = 2;
	   ceil(7.2) = 7;

	   Сега помислете какво означава number да е равно на ceil(number) или
	   number = floor(number) и вече се върнете да разгледате горния код
	  */

	int result = 0; /* тук ще пазим цялата сума */


	/* това, което направихме по-горе (кода след който имаше голееми обяснения)
	   всъщност беше следното: от интервала (a,b) намерихме най-"големия" подинтервал
	   който е затворен и също краищата му са цели числа. Ето 3 примера:
	   (2,7) - за него най-големият подинтервал който е затворен е [3,6];
	   (2.5, 5) -> получаваме [3, 4];
	   (2.5, 7.7) -> получаваме [3, 7]; 
	   така, единственото, което ни остана, е да 
	   съберем всички цели числа от този затворен интервал вклюичително 
	   и крайните. */

	for(int i = lowerBound; i <= greaterBound; i++) {

		result += i;
	} 
	/* ето три примера за това което ще стане:

	   - ако полученият интервал е [3, 5]:
	   i = 3, в началото. всеки път добавяме i към резултата
	   и увеличаваме и с 1-ца, всичко това докато i <= 5.
	   т.е result += 3, result+= 4, result += 5. => result += 12, но result e 0 
	   => след края на цикъла в този случай result = 12, което е именно сумата на 3, 4 и 5

	   - ако полученият интервал е [1, 100]
	   i = 1, в началото.
	   result += 1, result += 2, ...... result+= 100. => result += (1 + 2 + 3 + 4 + 5.... + 100)
	   но result = 0 в началото => че накрая result = 1 + 2 + 3... + 100 , което сумата на числата
	   от 1 до 100 (или накратко 5050).

	   - ако полученият интервал е [-5, 5]
	   i = -5, в началото
	   result += -5, result += -4 ..... result += 0, ... result += 4, result += 5
	   в крайна сметка те се "унищожават" взаимно и result остава 0.

	*/

	return result; // връщаме резултата
}


// тук само ще повикваме функцията
int main() {
	
	double lowerBound, greaterBound;
	cout << "Lower bound: ";
	cin >> lowerBound;
	cout << "Greater bound: ";
	cin >> greaterBound;

	cout << findSum(lowerBound, greaterBound); 

	/* последното е равносилно на това да направим:
	   int sum = findSum(lowerBound, greaterBound);
	   cout << sum;
	*/

	return 0;
}