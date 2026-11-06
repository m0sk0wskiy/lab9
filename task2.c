#include <stdio.h>
#include <windows.h>
int main(void)
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    unsigned long long n, t;
    unsigned long long p;
    int m[20];
    int c, i;
    int c3, rl, ec, g5;
    int os, s7, es, ops;
    int ea, eh;
    int s_dig, p_dig;
    int esw;
    char a; 
    do {
        printf("Введите положительное целое число: ");
        if (scanf_s("%llu", &n) != 1)
            return 1;
        t = n;
        c = 0;
        do {
            m[c] = (int)(t % 10);
            c++;
            t /= 10;
        } while (t > 0);
        c3 = 0;
        rl = 0;
        ec = 0;
        g5 = 0;
        os = 0;
        s7 = 0;
        p = 1;
        ea = 0;
        esw = 0;
        es = 0;
        ops = 0;
        for (i = 0; i < c; i++) {
            int digit = m[i];
            if (digit == 3)
                c3++;
            if (digit == m[0])
                rl++;
            if (digit % 2 == 0)
                ec++;
            if (digit > 5)
                g5++;
            if (digit % 2 != 0)
                os += digit;
            if (digit >= 7)
                s7 += digit;
            if (digit != 0)
                p *= digit;
            if (i > 0 && digit == m[i - 1])
                ea++;
            if (i > 0 && digit % 2 == 0)
                esw += digit;
            if ((i + 1) % 2 == 0)
                es += digit;
            else
                ops += digit;
        }
        if (rl > 0)
            rl--;
        if (c >= 2) {
            s_dig = m[c - 2];
            p_dig = m[1];
        }
        else {
            s_dig = 0;
            p_dig = 0;
        }
        eh = 0;

        if (c % 2 == 0) {
            int sl = 0;
            int sr = 0;

            for (i = 0; i < c / 2; i++)
                sr += m[i];

            for (i = c / 2; i < c; i++)
                sl += m[i];

            eh = (sl == sr);
        }
        printf("\nРЕЗУЛЬТАТЫ:\n");
        printf("1. Количество цифр 3: %d\n", c3);
        printf("2. Повторения последней цифры: %d\n", rl);
        printf("3. Количество четных цифр: %d\n", ec);
        printf("4. Цифры больше 5: %d\n", g5);
        printf("5. Сумма нечетных цифр: %d\n", os);
        printf("6. Сумма цифр >= 7: %d\n", s7);
        printf("7. Произведение ненулевых цифр: %llu\n", p);
        if (c >= 2)
            printf("8. Произведение второй и предпоследней цифр: %d\n", s_dig * p_dig);
        else
            printf("8. Недостаточно цифр в числе\n");
        printf("9. Сумма четных цифр, кроме последней: %d\n", esw);
        printf("10. Одинаковые соседние пары цифр: %d\n", ea);
        if (c % 2 == 0)
            printf("11. Равны ли суммы половин числа: %s\n", eh ? "Да" : "Нет");
        else
            printf("11. Количество цифр в числе нечетное\n");
        printf("12. Произведение позиционных сумм: %d\n", es * ops);
        while (getchar() != '\n');
        printf("\nПродолжить? (Да - y, нет - n): ");
        a = getchar();
    } while (a != 'n'); 
    return 0;
}
