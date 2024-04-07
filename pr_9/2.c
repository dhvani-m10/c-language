#include <stdio.h>

struct Student
{
    int roll_no;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

int main()
{
    int n;
    printf("Enter the Student detail number as per your choice : ");
    scanf("%d", &n);

    struct Student s1[n];
    int i;

    for (i = 0; i < n; i++)
    {
        printf("Details of Student %d:\n", i + 1);
        printf("Roll no : ");
        scanf("%d", &s1[i].roll_no);
        printf("Name : ");
        scanf("%s", s1[i].name);
        printf("Chemistry : ");
        scanf("%d", &s1[i].chem_marks);
        printf("Mathematics : ");
        scanf("%d", &s1[i].maths_marks);
        printf("Physics : ");
        scanf("%d", &s1[i].phy_marks);
    }
    for (i = 0; i < n; i++)
    {
        printf("\n%s (%d)\n", s1[i].name, s1[i].roll_no);
        printf("Chemistry : %d\n", s1[i].chem_marks);
        printf("Mathematics : %d\n", s1[i].maths_marks);
        printf("Physics :  %d\n", s1[i].phy_marks);
    
      int  totalMarks = s1[i].chem_marks + s1[i].maths_marks + s1[i].phy_marks;
      float  per = (totalMarks * 100) / 300;

        printf("Total => %d/300\n", totalMarks);
        printf("Percent => %.2f%%\n", per);
    }
}
