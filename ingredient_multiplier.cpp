//multiple the quantity of each ingredient by the value entered from the keyboard
#include <iostream>
using namespace std;

int main()
{
    int mFactor;

    cout << "Please enter the factor to multiply the ingredients with: ";
    cin >> mFactor;

    //ingredients
    cout << endl << "Crunchies" << endl;
    cout << "Ingredients" << endl << endl;
    cout << 200 * mFactor << " grams of butter" << endl;
    cout << 1 * mFactor << " tsp of bicarbonate of soda" << endl;
    cout << 1 * mFactor << " tsp of golden syrup" << endl;
    cout << 2 * mFactor << " cups of rolled oats" <<  endl;
    cout << 2 * mFactor << " cups of castor sugar" <<  endl;
    cout << 2 * mFactor << " cups of dessicated coconut" << endl << endl;

    //method
    cout << "Method" << endl << endl;
    cout << "1. Pre-heat the oven to 160 degrees" << endl;
    cout << "2. Grease a rectangular baking tray (approximately 20 X 24cm)" << endl;
    cout << "3. Melt the butter and add the bicarbonate of soda and the golden syrup" << endl;
    cout << "4. Mix all the dry ingredients together." << endl << "   Add the melted ingredients and combine" << endl;
    cout << "5. Press the mixture into the greased baking tray." << endl << "   Bake for 40 - 45 minutes until golden brown" << endl;
    cout << "6. Remove from the oven and cut into squares while stil warm" << endl;
    cout << "7. Store in an airtight container" << endl;

    return 0;
}
