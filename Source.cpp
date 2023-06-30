#include <iostream>


// Calculates discriminant value if possible. Otherwise you might encounter a runtime error.
template <typename T>
T Discriminant(T a, T b, T c)
{
    // Finds the value of the discriminant.
    T value = b * b - 4 * a * c;

    // If discriminant value is negative throw an exception.
    if (value < 0)
        throw std::runtime_error("Discriminant(a, b, c): Negative Discriminant Encountered");


    // Return value since it's not negative.
    return value;
}



// Prompt user for a, b, c values and print discriminant if possible.
int main()
{
    // Will keep repeating as long as value is 'y' or 'Y'
    char repeat = 'y';
    while (repeat == 'y' || repeat == 'Y')
    {
        double userA, userB, userC; // Initilize variables for discriminant

        std::cout << "Calculate and return the discriminant value." << std::endl << std::endl;


        std::cout << "Enter Discriminant value A:" << std::endl;
        std::cin >> userA; // Prompt for a.
        
        std::cout << "Enter Discriminant value B:" << std::endl;
        std::cin >> userB; // Prompt for b.

        std::cout << "Enter Discriminant value C:" << std::endl;
        std::cin >> userC; // Prompt for c.

        std:: cout << "The value of the discriminant is: ";
        std::cout << Discriminant(userA, userB, userC) << std::endl << std::endl;


        // Ask if user wants to restart the program.
        std::cout << "Would you like to repeat the program? (type: \"y\" or \"n\"): ";
        std::cin >> repeat;


        // If user selects 'n' or 'N' sucessfully close program.
        if (repeat == 'n' || repeat == 'N')
            exit(0); // end sucessfully.


        // If it's not y/Y or n/N then user should be prompt again.
        else if (repeat != 'y' || repeat != 'Y')
        {
            // Loop prompt until they put in the right input.
            while (repeat != 'y' && repeat != 'Y' && repeat != 'n' && repeat != 'N')
            {
                std::cout << "Would you like to repeat the program? (type: \"y\" or \"n\"): ";
                std::cin >> repeat;
            }
        }
    }
}