#include <iostream>

using namespace std;

int main()
{
    //Для правильной работы программы.
    const int j = 4;
    int buff = 0;

    int a[j][j] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
       
    //Возможно умножение по типу "j*k"...
    int b[j * j];
    int c[j * j];
    //Нужно для заполнения одномерного массива. Увеличивается со временем в цикле for, пока 2д массив не кончится, после чего используется для вывода.
    int num = 0;

    //Распаковка 2д массива, который переносится в 1д массив.
    for (int i = 0; i < j; i++)
    {
        for (int p = 0; p < j; p++)
        {
             b[num]= a[i][p];
             num++;
        }
    }
    // Ревёрс
    for (int gen = num-1; gen >= 0; gen--)
    {
        c[gen] = b[(num-1) - gen];
    }


    //Вывод.
    for (int i = 0; i < num; i++)
    {
        cout << " " << c[i];
    }

    //delete[] b;
    //delete num;
    
    return 0;
}