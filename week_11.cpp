#include <stdio.h>

int main() {
    int SizeS = 0, SizeM = 0, SizeL = 0;
    int Weight;
    float TotalPrice;
    printf("Enter Weight => \t");
    scanf("%d",&Weight);

     while (Weight > 0 && Weight <= 100) {
        if (Weight >= 45)  {
            SizeL++;
            printf("Weight : %d => Size L \n",Weight);
        } else if (Weight >= 30) {
            SizeM++;
            printf("Weight : %d => Size M \n",Weight);
        } else {
            SizeS++;
            printf("Weight : %d => Size S \n",Weight);
        }
        printf("==========================================\n");
        printf("Enter Weight => \t");
        scanf("%d",&Weight);
     }
    TotalPrice = SizeS * 3.25 + SizeM * 4 + SizeL * 4.50;
    printf("==========================================\n");
    printf("Total Price : %.2f\n", TotalPrice);
    printf("Size S : %d\n",SizeS);
    printf("Size M : %d\n",SizeM);
    printf("Size L : %d\n",SizeL);

    return 0;
}