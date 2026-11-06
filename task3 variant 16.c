#include <stdio.h>
#include <windows.h> 
int main(void)
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    char c;
    int r, d;
    int i, j;
    printf("Введите символ из которого будет строиться фигура:\n");
    if (scanf_s("%c", &c, 1) != 1)
        return 1;
    printf("Введите радиус вписанной окружности (r):\n");
    if (scanf_s("%d", &r) != 1)
        return 1;
    d = 2 * r;
    printf("\nОписанный четырехугольник с окружностью внутри:\n\n");
    for (i = 0; i <= d; i++) {
        for (j = 0; j <= d; j++) {     
            if (i == 0 || i == d || j == 0 || j == d) {
                printf("%c", c);
            }
            else {
                float x = (j - r);
                float y = (i - r);
                float dist = x * x + y * y;
                float r_sq = (float)(r * r);           
                if (dist >= r_sq - r && dist <= r_sq + r) {
                    printf("%c", c);
                }
                else {
                    printf(" "); 
                }
            }
        }
        printf("\n");
    }
    return 0;
}
