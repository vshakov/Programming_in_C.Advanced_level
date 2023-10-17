/*  Реализуйте функцию Swap, которая принимает два указателя и обменивает местами значения, 
на которые указывают эти указатели (нужно обменивать именно сами указатели, 
переменные должны оставаться в тех же адресах памяти).*/

void swap(int* ptr1, int* ptr2) 
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}