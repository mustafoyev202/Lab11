#include <iostream>
#include <array>
#include <vector>
#include <cctype>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

//const int SIZE = 4;
//
//double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
//    double sum = 0;
//    for (int i = 0; i < rowSize; i++) {
//        sum += m[i][columnIndex];
//    }
//    return sum;
//}

//const int SIZE1 = 4;
//
//double sumMajorDiagonal(const double m[SIZE1][SIZE1]) {
//    double sum1 = 0;
//    for (int i = 0; i < SIZE1; i++) {
//        sum1 += m[i][i];
//    }
//    double sum2 = 0;
//    for (int i = 0; i < SIZE1; i++) {
//        sum2 += m[i][SIZE1 - 1 - i];
//    }
//    return max(sum1, sum2);
//}
//
//void search(string &s, char &key) {
//    for (int i = 0; i < s.length(); i++) {
//        if (key == s[i]) {
//            cout << "Found";
//            return;
//        }
//    }
//
//    cout << "Not found";
//}

//int count(const string &s, char a) {
//    int count = 0;
//    for (int i = 0; i < s.length(); i++) {
//        if (a == s[i]) {
//            count++;
//        }
//    }
//    return count;
//}

//void count(const char s[], int counts[]) {
//    array<int, 26> arr = {};
//    int len = strlen(s);
//    for (int i = 0; i < len; i++){
//        if (isalpha(s[i])) {
//            ++arr[tolower(s[i]) - 'a'];
//        }
//    }
//    for (int i = 0; i < 26; i++){
//        if (arr[i] > 0) {
//            cout << static_cast<char>('a' + i) << ": " << arr[i] << endl;
//        }
//    }
//}

//void max_min_avr(int size) {
//    vector<int> myVector(size);
//    for (int i = 0; i < size; i++) {
//        cin >> myVector[i];
//    }
//    double sum = 0;
//    for (int element: myVector) {
//        sum += element;
//    }
//    double avr = sum / size;
//    if (myVector.empty()) {
//        cout << "Vector is empty" << endl;
//    } else {
//        auto minIter = min_element(myVector.begin(), myVector.end());
//        auto maxIter = max_element(myVector.begin(), myVector.end());
//        int minimum = *minIter;
//        int maximum = *maxIter;
//
//        cout << "Minimum=" << minimum << endl;
//        cout << "Maximum=" << maximum << endl;
//        cout << "Average=" << avr << endl;
//    }
//}

//void sorted(int size2) {
//    vector<int> myVector(size2);
//    for (int i = 0; i < size2; i++) {
//        cin >> myVector[i];
//    }
//    for (auto it = myVector.begin(); it != myVector.end();) {
//        if (*it <= 0) {
//            it = myVector.erase(it);
//        } else {
//            ++it;
//        }
//    }
//    sort(myVector.begin(), myVector.end());
//    for (int num: myVector) {
//        cout << num << " ";
//    }
//}
//int authentic_letters(const string &word) {
//    int count = 0;
//    int len = word.length();
//    for (int i = 0; i < len; i++) {
//        if (isalpha(word[i]) && isupper(word[i])) {
//            if (i == len - 1 || word[i] != word[i + 1]) {
//                count++;
//            }
//        }
//    }
//    return count;
//}

//vector<int> findValleys(const vector<int> &data) {
//    vector<int> valleys;
//    if (data.size() < 3) {
//        return valleys;
//    }
//
//    for (int i = 1; i < data.size() - 1; i++) {
//        if (data[i] < data[i - 1] && data[i] < data[i + 1]) {
//            valleys.push_back(data[i]);
//        }
//    }
//    return valleys;
//}


#define val 33.3
#define number 50
//int a;
//
//int &fun() {
//    return a;
//}
//
//int foo() {
//    return a;
//}

//int findLargestElement(const int *arr, int size) {
//    if (size == 0) return -1;
//    int largest = *arr;
//    const int *ptr = arr;
//    for (int i = 1; i < size; i++) {
//        ptr++;
//        if (*ptr > largest)
//            largest = *ptr;
//    }
//    return largest;
//}

//int *countDigits(const int &numbers) {
//    static int digitCount[10];
//    memset(digitCount, 0, sizeof(digitCount));
//
//    int n = std::abs(numbers);
//    if (n == 0) {
//        digitCount[0] = 1;
//    } else {
//        while (n > 0) {
//            int digit = n % 10;
//            digitCount[digit]++;
//            n /= 10;
//        }
//    }
//
//    return digitCount;
//}

//int cstrLength(char *c) {
//    int length = 0;
//    while (*c != '\0') {
//        length++;
//        c++;
//    }
//    return length;
//
//}
//void factorial(int n, int *fact) {
//    if (n < 0) {
//        *fact = 0;
//        return;
//    }
//
//    *fact = 1;
//    for (int i = 2; i <= n; i++) {
//        *fact *= i;
//    }
//}

//char to_lower(const char s) {
//    return tolower(s);
//}
//
//void countChar(const char *str, int &vowelCount, int &consonantCount) {
//    vowelCount = 0;
//    consonantCount = 0;
//    while (*str != '\0') {
//        char lowerChar = tolower(*str);
//        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
//            vowelCount++;
//        } else if (lowerChar >= 'a' && lowerChar <= 'z') {
//            consonantCount++;
//        }
//        str++;
//    }
//}
//void sortArray(int *arr, int size) {
//    for (int i = 0; i < size - 1; i++) {
//        for (int j = 0; j < size - i - 1; j++) {
//            if (*(arr + j) > *(arr + j + 1)) {
//                int temp = *(arr + j);
//                *(arr + j) = *(arr + j + 1);
//                *(arr + j + 1) = temp;
//            }
//        }
//    }
//}


int main() {
//Problem1
//    int rowSize;
//    cin >> rowSize;
//    double m[rowSize][SIZE];
//    for (int i = 0; i < rowSize; i++) {
//        for (int j = 0; j < SIZE; j++) {
//            cin >> m[i][j];
//        }
//    }
//    for (int i = 0; i < SIZE; i++) {
//        cout << "sum of column " << i << '=' << sumColumn(m, rowSize, i) << endl;
//    }

//Problem2
//    double matrix[SIZE1][SIZE1] = {
//            {1.0, 2.0, 3.0, 4.0},
//            {2.0, 4.5, 1.2, 7.8},
//            {5.0, 6.0, 7.0, 8.0},
//            {9.3, 5.6, 0.8, 3.1}
//    };
//
//    double diagonalSum = sumMajorDiagonal(matrix);
//    cout << "Output: " << diagonalSum << endl;

//Problem 4
//    char key;
//    cin >> key;
//    string s;
//    cin >> s;
//    search(s, key);

//Problem5
//    char a;
//    cin >> a;
//
//    string s;
//    cin.ignore();
//    getline(cin, s);
//
//    cout << count(s, a) << endl;

//Problem 6
//    char str[100];
//    int counts[26];
//
//    cout << "Enter a string: ";
//    cin.getline(str, sizeof(str));
//
//    count(str, counts);
//Problem7
//    int size3;
//    cin >> size3;
//    max_min_avr(size3);

//Problem8
//    int size4;
//    cin >> size4;
//    sorted(size4);

//Problem9
//    string word;
//    cout << "Enter the word: ";
//    cin >> word;
//    cout << "Number of authentic letters: " << authentic_letters(word) << endl;

//Problem10
//    vector<int> data;
//    int num;
//    cout << "Enter elements for the vector (end with -1):\n";
//    while (cin >> num && num != -1) {
//        data.push_back(num);
//    }
//    vector<int> valleyElements = findValleys(data);
//    if (valleyElements.empty()) {
//        cout << "No valleys found in the vector.\n";
//    } else {
//        cout << "Elements strictly smaller than neighbors: ";
//        for (int val: valleyElements) {
//            cout << val << " ";
//        }
//        cout << endl;
//    }

//Problem 11
//    int n1 = 9, n2 = 11, *ptr_1 = nullptr, *ptr_2 = nullptr, k = 0;
//    double t;
//
//    ptr_1 = &n2;
//    ptr_2 = &n2;
//
//    t = val;
//
//    fun() = number;
//
//    cout << foo() << " " << *ptr_1 << " " << t << " " << *ptr_2 << endl;

//Problem 12
//    srand(time(nullptr));
//    int arr[10];
//    for (int i = 0; i < 10; i++) {
//        arr[i] = rand() % 100;
//    }
//    int *ptrA = arr;
//    for (int i = 0; i < 10; i++) {
//        cout << "Address of arr[" << i << "]: " << (ptrA + i);
//        cout << " Value: " << *(ptrA + i) << endl;
//    }

//Problem 13
//    int size;
//    cout << "Enter the number of elements: ";
//    cin >> size;
//    if (size <= 0) {
//        cout << "Invalid size";
//        return 1;
//    }
//    int *arr1 = new int[size];
//    cout << "Enter the elements: ";
//    for (int i = 0; i < size; i++) {
//        cin >> arr1[i];
//    }
//    cout << "Largest Element: " << findLargestElement(arr1, size) << endl;
//    delete[] arr1;
//Problem 14
//    int numbers;
//    cout << "Enter a number: ";
//    cin >> numbers;
//    int *counts = countDigits(numbers);
//    cout << "Digit counts:\n";
//    for (int i = 0; i < 10; i++) {
//        cout << "counts[" << i << ']' << ": " << counts[i] << "\n";
//    }

//Problem 15
//    string word;
//    getline(cin, word);
//    char *c = &word[0];
//    cout << cstrLength(c);

//Problem 16
//    int n1;
//    cin >> n1;
//    int fact;
//    factorial(n1, &fact);
//    cout << "Factorial of " << n1 << " is " << fact << std::endl;

//Problem 17
//    string word;
//    getline(cin, word);
//
//    int vowelCount, consonantCount;
//    countChar(word.c_str(), vowelCount, consonantCount);
//    cout << "vowels: " << vowelCount << endl;
//    cout << "consonants: " << consonantCount << endl;

//Problem 18
//    int size;
//    cout << "Enter the size of the array: ";
//    cin >> size;
//    int *arr = new int[size];
//    cout << "Enter the elements of the array: ";
//    for (int i = 0; i < size; i++) {
//        cin >> *(arr + i);
//    }
//    sortArray(arr, size);
//    cout << "Sorted array: ";
//    for (int i = 0; i < size; i++) {
//        cout << *(arr + i) << " ";
//    }
//    delete[] arr;

    return 0;
}