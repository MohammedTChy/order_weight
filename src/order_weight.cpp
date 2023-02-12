#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool weight_cmp(const std::string& a, const std::string& b) {
    int a_weight = sum_of_digits(std::stoi(a));
    int b_weight = sum_of_digits(std::stoi(b));
    if (a_weight != b_weight) {
        return a_weight < b_weight;
    }
    return a < b;
}

std::string order_weight(const std::string& strng) {
    std::vector<std::string> numbers;
    std::istringstream iss(strng);
    std::string number;
    while (std::getline(iss, number, ' ')) {
        numbers.push_back(number);
    }
    std::sort(numbers.begin(), numbers.end(), weight_cmp);
    return std::accumulate(numbers.begin(), numbers.end(), std::string(),
                           [](const std::string& a, const std::string& b) {
                               return a + (a.empty() ? "" : " ") + b;
                           });
}
