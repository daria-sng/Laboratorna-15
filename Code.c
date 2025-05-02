#include <stdio.h>

int main(){
    float x, y; 
    float *x_ptr, *y_ptr; // Покажчики на float 

    x_ptr=&x; // До x_ptr присвоюється адреса змінної х 
    *x_ptr=5; // Через покажчик *x_ptr присвоюється значення змінній х - 5

    x=5.5 + *x_ptr; // Обчислення х як 5.5 + значення покажчика *x_ptr 

    y_ptr=x_ptr; // До y_ptr присвоюється адреса змінної x 

    y= *y_ptr/2+ *x_ptr ; // Обчислення у через покажчики *y_ptr, *x_ptr 
    y_ptr=&y; // До y_ptr присвоюється адреса змінної y

    printf("The value of x= %f y=%f\n", x, y); 

    printf("The address of x = %p y = %p\n", &x, &y); // Вивід на екран адрес змінних x, y

    printf("The value of x_ptr = %p y_ptr = %p\n", x_ptr, y_ptr);

    printf("The value that x_ptr points to is %f .\n", *x_ptr); // Вивід на екран значення через покажчик *x_ptr

    printf("The value that y_ptr points to is %f.\n", *y_ptr); // Вивід на екран значення через покажчик *y_ptr

    printf("The address of x_ptr is %p.\n", &x_ptr); // Вивід на екран адресу покажчика x_ptr

    printf("The address of y_ptr is %p.\n", &y_ptr); // Вивід на екран адресу покажчика y_ptr

    puts("====================================================");
    return 0;
}