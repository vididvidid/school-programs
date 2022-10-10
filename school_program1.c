/* Write a c program to take any marks of any 5 subjects and 
print his/her percentage if he/she is pass and if he/she fails 
then print required marks to pass*/
#include <stdio.h>
int main() {
float subject_1, subject_2, subject_3, subject_4, subject_5, subject_sum, got_percentage,check_per,check_per1,check_per2;

printf("\nenter the marks of subject_1\n");
scanf("%g",&subject_1);
printf("\nenter the marks of subject_2\n");
scanf("%g",&subject_2);
printf("\nenter the marks of subject_3\n");
scanf("%g",&subject_3);
printf("\nenter the marks of subject_4\n");
scanf("%g",&subject_4);
printf("\nenter the marks of subject_5\n");
scanf("%g",&subject_5);
//percentage 
subject_sum = subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
got_percentage = subject_sum * 0.2;
printf("\nyou got \n%g %%",got_percentage);
//pass or fail
check_per = got_percentage >= 40;
printf("\nfor pass ==1 and fail == 0 \n%g",check_per);
//required marks to pass
check_per = --check_per;
check_per1 = (40 - got_percentage)*(-(check_per));
check_per2 = 500 * (check_per1/100);
printf("\nyou require %g percentage %% to pass\n",check_per1);
printf("\nyou requier %g marks to pass\n",check_per2);

return 0;
}
