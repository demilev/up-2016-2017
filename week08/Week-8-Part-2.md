﻿# Задачи за седмица 8, Част II

### Зад. 5

**_Number to array_**

Да се напише функция, която при подадено цяло положително число < 10^8 и масив, записва цифрите на числото като елементи на масива, като първият елемент на масива
ще бъде броят на цифрите на числото.

Пример: 
     
    ако подадем числото 1234 и масив arr, то трябва след изпълнение на функцията
    arr[0] = 4;
    arr[1] = 1, arr[2] = 2, arr[3] = 3 и arr[4] = 4;

### Зад. 6

**_Best grades_**

Да се напише функция, която приема масив от оценките по ДИС1 на група 6 и изпечатва на екрана 4-те най-високи оценки.

### Зад. 7

**_Path_**

Нека имаме масив от N точки в равнината: p[0], p[1].... p[N - 1]. Да се напише функция която намира дължината на пътя от p[0] до p[N - 1], като можем да се придвижим от 
p[i] до p[i + 1] само по права линия.

Hint: x координатите и у координатите на точките са независими едни от други, т.е. могат да стоят в отделни масиви. Опитайте се да използвате функции навсякъде където, сметнете за удобно.

### Зад. 8

**_Parentheses_**

Да се напише функция, която проверява дали един израз представлява коректен израз от скоби:

Пример:

	( ( ) ( ) ) -> true
	( ( ( ( ) ) ) ) -> true
	( ( ( ( ) ) ) ( -> false
	( ) ) ( ) ( ) ) ( -> false
	( ( ( (  ) ( ))))() -> false
