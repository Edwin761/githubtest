#include <stdio.h>
int main() {
    char maths, physics, chemistry, english;

    printf("Enter grades for admission (A, B, C, D, E):\n");

    // Input for Maths
    do {
        printf("Maths grade: ");
        scanf(" %c", &maths);
        if (maths < 'A' || maths > 'E') {
            printf("Invalid grade. Please enter a grade between A and E.\n");
        }
    } while (maths < 'A' || maths > 'E');

    // Input for Physics
    do {
        printf("Physics grade: ");
        scanf(" %c", &physics);
        if (physics < 'A' || physics > 'E') {
            printf("Invalid grade. Please enter a grade between A and E.\n");
        }
    } while (physics < 'A' || physics > 'E');

    // Input for Chemistry
    do {
        printf("Chemistry grade: ");
        scanf(" %c", &chemistry);
        if (chemistry < 'A' || chemistry > 'E') {
            printf("Invalid grade. Please enter a grade between A and E.\n");
        }
    } while (chemistry < 'A' || chemistry > 'E');

    // Input for English
    do {
        printf("English grade: ");
        scanf(" %c", &english);
        if (english < 'A' || english > 'E') {
            printf("Invalid grade. Please enter a grade between A and E.\n");
        }
    } while (english < 'A' || english > 'E');

    // Check first combination (Maths, Physics, English)
    int combo1 = (maths <= 'A' && physics <= 'B' && english <= 'B');

    // Check second combination (Maths, Chemistry, English)
    int combo2 = (maths <= 'A' && chemistry <= 'B' && english <= 'B');

    if (combo1 || combo2) {
        printf("Candidate is eligible for admission!\n");
        if (combo1) printf("Qualified through: Maths, Physics and English combination\n");
        if (combo2) printf("Qualified through: Maths, Chemistry and English combination\n");
    } else {
        printf("Candidate is not eligible for admission.\n");
    }

    return 0;
}


