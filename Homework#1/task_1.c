/* Опишите функцию void array2struct(int ar[], struct pack_array *ps), 
которая упаковывает массив из 32-ух элементов, 
содержащий только 0 и 1, в структуру вида
struct pack_array {
uint32_t array; // массив из 0 и 1
uint32_t count0 : 8; // количество 0 в массиве
uint32_t count1 : 8; // количество 1 в массиве
}
void array2struct(int ar[], struct pack_array *ps); */

#include <stdint.h>

struct pack_array
{
    uint32_t array;         // массив из 0 и 1
    uint32_t count0: 8;     // количество 0 в массиве
    uint32_t count1: 8;     // количество 1 в массиве
};

void array2struct(int ar[], struct pack_array *ps)

/* Функция array2struct принимает два аргумента: массив ar, содержащий 32 элемента, и указатель на структуру pack_array ps.
Внутри функции инициализируются поля структуры pack_array. Поле array инициализируется нулём, а поля count0 и count1 устанавливаются в ноль.
Затем происходит цикл по элементам массива ar. Для каждого элемента массива ar[i] выполняется проверка: если элемент равен 0, 
то соответствующий бит в поле array структуры ps устанавливается в 0, и значение поля count0 увеличивается на 1. 
Если элемент равен 1, то соответствующий бит в поле array структуры ps устанавливается в 1, и значение поля count1 увеличивается на 1.
По завершении цикла структура ps содержит упакованные данные из массива ar, а поля count0 и count1 содержат количество нулей и единиц в массиве соответственно.
Теперь у вас есть функция array2struct, которая упаковывает массив из 32 элементов, содержащих только 0 и 1, в структуру pack_array с полями array, count0 и count1.*/

{
    ps->array = 0;
    ps->count0 = 0;
    ps->count1 = 0;

    for (int i = 0; i < 32; i++)
    {
        if (ar[i] == 0)
        {
            ps->array |= 0 << i;
            ps->count0++;
        } else if (ar[i] == 1)
        {
            ps->array |= 1 << i;
            ps->count1++;
        }
        
        
    }
    
}

int main(void)
{
    return 0;
}