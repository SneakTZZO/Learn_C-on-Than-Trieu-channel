#include<stdio.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    if (a + b > c&& b + c > a&& a + c > b)
    {
        if (a == b || a == c || b == c)
        {
            if (a != c || a != b || b != c) printf("Isosceles triangle");
            else
                printf("equiangular triangle");
            if (a * a + b * b == c * c || c * c + b * b == a * a || a * a + c * c == b * b) printf("Isosceles right - angled triangle");
        }
        else
            if (a * a + b * b == c * c || c * c + b * b == a * a || a * a + c * c == b * b) printf("Right - angled triangle");
            else
                printf("scalene triangle");
    }
    else
        printf("Doesn't exist");
    return 0;
}
//Nhập vào ba số a, b, c (là các số thực không âm). Kiểm tra xem đó có phải là ba cạnh của một tam giác hay không. 
//Nếu có thì tam giác đó thuộc loại tam giác gì? (Thường, cân, vuông, vuông cân, hay đều).