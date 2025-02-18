#include <stdio.h>
void main()
{
    int choice, shape;
    float length, breadth, side, area, perimeter;

    printf("chose an option:\n");
    printf("1.Area\n");
    printf("2.Perimeter\n");
    scanf("%d", &choice);

    printf("Choose a shape:\n");
    printf("1.Square\n");
    printf("2.Rectangle\n");
    scanf("%d", &shape);

    if (choice == 1)
    {
        if (shape == 1)
        {
            printf("Enter the side of the square:");
            scanf("%f", &side);
            area = side * side;
            printf("Area of the square is:%.2f\n", area);
        }

        else if (shape == 2)
        {
            printf("Enter the length and breadth of the rectangle:");
            scanf("%f%f", &length, &breadth);
            area = length * breadth;
            printf("Area of the rectangle is:%.2f\n", area);
        }

        else
        {
            printf("Invalid shape choice\n");
        }
    }

    else if (choice == 2)
    {
        if (shape == 1)
        {
            printf("Enter the side of the square:");
            scanf("%f", &side);
            perimeter = 4 * side;
            printf("Perimeter of the square is:%.2f\n", perimeter);
        }

        else if (shape == 2)
        {
            printf("Enter the length and breadth of the rectangle:");
            scanf("%f%f", &length, &breadth);
            perimeter = 2 * (length + breadth);
            printf("Perimeter of the rectangle is:%.2f\n", perimeter);
        }

        else
        {
            printf("Invalid shape choice\n");
        }
    }
    else
    {
        printf("Invalid option choice\n");
    }
}