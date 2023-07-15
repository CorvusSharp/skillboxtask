
#include "task6.h"

void Task6::run() {
    std::cout << "Enter today's date (DD.MM.YYYY): ";
    std::string today;
    std::getline(std::cin, today);

    std::cout << "Enter the birthdate (DD.MM.YYYY): ";
    std::string birthdate;
    std::getline(std::cin, birthdate);

    if (isValidDate(today) && isValidDate(birthdate)) {
        if (isEligible(today, birthdate)) {
            std::cout << "Alcohol can be sold" << std::endl;
        } else {
            std::cout << "Alcohol cannot be sold" << std::endl;
        }
    } else {
        std::cout << "Invalid date format entered" << std::endl;
    }
}

bool Task6::isValidDate(const std::string& date) {
    if (date.length() != 10)
        return false;

    if (date[2] != '.' || date[5] != '.')
        return false;

    for (int i = 0; i < 10; i++) {
        if (i == 2 || i == 5)
            continue;

        if (!isdigit(date[i]))
            return false;
    }

    return true;
}
bool Task6::isEligible(const std::string& today, const std::string& birthdate) {
    int todayDay, todayMonth, todayYear;
    int birthdateDay, birthdateMonth, birthdateYear;

    std::sscanf(today.c_str(), "%d.%d.%d", &todayDay, &todayMonth, &todayYear);
    std::sscanf(birthdate.c_str(), "%d.%d.%d", &birthdateDay, &birthdateMonth, &birthdateYear);

    int age = todayYear - birthdateYear;
    if (todayMonth < birthdateMonth || (todayMonth == birthdateMonth && todayDay < birthdateDay)) {
        age--;
    }

    if (age > 18) {
        return true;
    } else if (age == 18) {
        if (todayMonth > birthdateMonth || (todayMonth == birthdateMonth && todayDay >= birthdateDay)) {
            return true;
        }
    }

    return false;
}