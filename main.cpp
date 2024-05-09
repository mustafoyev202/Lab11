#include <iostream>
#include <array>
#include <vector>
#include <cctype>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

const int SIZE = 4;

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex) {
    double sum = 0;
    for (int i = 0; i < rowSize; i++) {
        sum += m[i][columnIndex];
    }
    return sum;
}

const int SIZE1 = 4;

double sumMajorDiagonal(const double m[SIZE1][SIZE1]) {
    double sum1 = 0;
    for (int i = 0; i < SIZE1; i++) {
        sum1 += m[i][i];
    }
    double sum2 = 0;
    for (int i = 0; i < SIZE1; i++) {
        sum2 += m[i][SIZE1 - 1 - i];
    }
    return max(sum1, sum2);
}

const int N = 4;

void multiplyMatrix(const double a[][N], const double b[][N], double c[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            c[i][j] = 0;
            for (int k = 0; k < N; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(const double matrix[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << std::fixed << setprecision(1) << matrix[i][j] << " ";
        }
        cout << std::endl;
    }
}

void search(const string &s, char key) {
    for (char c: s) {
        if (key == c) {
            cout << "Found";
            return;
        }
    }

    cout << "Not found";
}

int count(const string &s, char a) {
    int count = 0;
    for (char c: s) {
        if (a == c) {
            count++;
        }
    }
    return count;
}

void count(const char s[], int counts[]) {
    array<int, 26> arr = {};
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (isalpha(s[i])) {
            ++arr[tolower(s[i]) - 'a'];
        }
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << arr[i] << endl;
        }
    }
}

void max_min_avr(int size) {
    vector<int> myVector(size);
    for (int i = 0; i < size; i++) {
        cin >> myVector[i];
    }
    double sum = 0;
    for (int element: myVector) {
        sum += element;
    }
    double avr = sum / size;
    if (myVector.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        auto minIter = min_element(myVector.begin(), myVector.end());
        auto maxIter = max_element(myVector.begin(), myVector.end());
        int minimum = *minIter;
        int maximum = *maxIter;

        cout << "Minimum=" << minimum << endl;
        cout << "Maximum=" << maximum << endl;
        cout << "Average=" << avr << endl;
    }
}

void sorted(int size2) {
    vector<int> myVector(size2);
    for (int i = 0; i < size2; i++) {
        cin >> myVector[i];
    }
    for (auto it = myVector.begin(); it != myVector.end();) {
        if (*it <= 0) {
            it = myVector.erase(it);
        } else {
            ++it;
        }
    }
    sort(myVector.begin(), myVector.end());
    for (int num: myVector) {
        cout << num << " ";
    }
}

int authentic_letters(const string &word) {
    int count = 0;
    int len = word.length();
    for (int i = 0; i < len; i++) {
        if (isalpha(word[i]) && isupper(word[i])) {
            if (i == len - 1 || word[i] != word[i + 1]) {
                count++;
            }
        }
    }
    return count;
}

vector<int> findValleys(const vector<int> &data) {
    vector<int> valleys;
    if (data.size() < 3) {
        return valleys;
    }

    for (int i = 1; i < data.size() - 1; i++) {
        if (data[i] < data[i - 1] && data[i] < data[i + 1]) {
            valleys.push_back(data[i]);
        }
    }
    return valleys;
}

int &fun() {
    static int a;
    return a;
}

int foo() {
    static int a;
    return a;
}

int findLargestElement(const int *arr, int size) {
    if (size == 0) return -1;
    int largest = *arr;
    const int *ptr = arr;
    for (int i = 1; i < size; i++) {
        ptr++;
        if (*ptr > largest)
            largest = *ptr;
    }
    return largest;
}

int *countDigits(int numbers) {
    static int digitCount[10];
    memset(digitCount, 0, sizeof(digitCount));

    int n = std::abs(numbers);
    if (n == 0) {
        digitCount[0] = 1;
    } else {
        while (n > 0) {
            int digit = n % 10;
            digitCount[digit]++;
            n /= 10;
        }
    }

    return digitCount;
}

int cstrLength(const char *c) {
    int length = 0;
    while (*c != '\0') {
        length++;
        c++;
    }
    return length;
}

void factorial(int n, int *fact) {
    if (n < 0) {
        *fact = 0;
        return;
    }

    *fact = 1;
    for (int i = 2; i <= n; i++) {
        *fact *= i;
    }
}

char to_lower(char s) {
    return tolower(s);
}

void countChar(const char *str, int &vowelCount, int &consonantCount) {
    vowelCount = 0;
    consonantCount = 0;
    while (*str != '\0') {
        char lowerChar = tolower(*str);
        if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
            vowelCount++;
        } else if (lowerChar >= 'a' && lowerChar <= 'z') {
            consonantCount++;
        }
        str++;
    }
}

void sortArray(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}

int romanValue(char r) {
    switch (r) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToInt(string s) {
    int total = 0;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        int current = romanValue(s[i]);
        int next = (i + 1 < n) ? romanValue(s[i + 1]) : 0;
        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
    }

    return total;
}

string transformWord(string word) {
    int lowerCount = 0, upperCount = 0;
    for (char c: word) {
        if (islower(c)) lowerCount++;
        else if (isupper(c)) upperCount++;
    }
    bool toLower = lowerCount >= upperCount;
    for (char &c: word) {
        if (toLower) c = tolower(c);
        else c = toupper(c);
    }
    return word;
}

int main() {
    //Problem1
    int rowSize;
    cin >> rowSize;
    double m[rowSize][SIZE];
    for (int i = 0; i < rowSize; i++) {
        for (int j = 0; j < SIZE; j++) {
            cin >> m[i][j];
        }
    }
    for (int i = 0; i < SIZE; i++) {
        cout << "sum of column " << i << '=' << sumColumn(m, rowSize, i) << endl;
    }

    //Problem2
    double matrix[SIZE1][SIZE1] = {
            {1.0, 2.0, 3.0, 4.0},
            {2.0, 4.5, 1.2, 7.8},
            {5.0, 6.0, 7.0, 8.0},
            {9.3, 5.6, 0.8, 3.1}
    };

    double diagonalSum = sumMajorDiagonal(matrix);
    cout << "Output: " << diagonalSum << endl;

    //Problem3
    double M1[N][N] = {
            {1.0,  2.0,  3.0,  4.0},
            {5.0,  6.0,  7.0,  8.0},
            {9.0,  10.0, 11.0, 12.0},
            {13.0, 14.0, 15.0, 16.0}
    };

    double M2[N][N] = {
            {0.5,  1.5,  2.5,  3.5},
            {4.5,  5.5,  6.5,  7.5},
            {8.5,  9.5,  10.5, 11.5},
            {12.5, 13.5, 14.5, 15.5}
    };

    double result[N][N];

    multiplyMatrix(M1, M2, result);
    cout << "Result of multiplying M1 by M2:" << endl;
    printMatrix(result);

    //Problem4
    char key;
    cin >> key;
    string s;
    cin >> s;
    search(s, key);

    //Problem5
    char a;
    cin >> a;
    cin.ignore(); // consume newline
    string s2;
    getline(cin, s2);
    cout << count(s2, a) << endl;

    //Problem6
    char str[100];
    int counts[26];

    cout << "Enter a string: ";
    cin.ignore(); // consume newline
    cin.getline(str, sizeof(str));

    count(str, counts);

    //Problem7
    int size3;
    cin >> size3;
    max_min_avr(size3);

    //Problem8
    int size4;
    cin >> size4;
    sorted(size4);

    //Problem9
    string word;
    cout << "Enter the word: ";
    cin >> word;
    cout << "Number of authentic letters: " << authentic_letters(word) << endl;

    //Problem10
    vector<int> data;
    int num;
    cout << "Enter elements for the vector (end with -1):\n";
    while (cin >> num && num != -1) {
        data.push_back(num);
    }
    vector<int> valleyElements = findValleys(data);
    if (valleyElements.empty()) {
        cout << "No valleys found in the vector.\n";
    } else {
        cout << "Elements strictly smaller than neighbors: ";
        for (int val: valleyElements) {
            cout << val << " ";
        }
        cout << endl;
    }

    //Problem11
    int n1 = 9, n2 = 11, *ptr_1 = nullptr, *ptr_2 = nullptr, k = 0;
    double t = 33.3;

    ptr_1 = &n2;
    ptr_2 = &n2;

    fun() = 50;

    cout << foo() << " " << *ptr_1 << " " << t << " " << *ptr_2 << endl;

    //Problem12
    srand(time(nullptr));
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }
    int *ptrA = arr;
    for (int i = 0; i < 10; i++) {
        cout << "Address of arr[" << i << "]: " << (ptrA + i);
        cout << " Value: " << *(ptrA + i) << endl;
    }

    //Problem13
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
    if (size <= 0) {
        cout << "Invalid size";
        return 1;
    }
    int *arr1 = new int[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    cout << "Largest Element: " << findLargestElement(arr1, size) << endl;
    delete[] arr1;

    //Problem14
    int numbers;
    cout << "Enter a number: ";
    cin >> numbers;
    int *counts2 = countDigits(numbers);
    cout << "Digit counts:\n";
    for (int i = 0; i < 10; i++) {
        cout << "counts[" << i << ']' << ": " << counts2[i] << "\n";
    }

    //Problem15
    string word2;
    cout << "Enter a word: ";
    cin.ignore(); // consume newline
    getline(cin, word2);
    const char *c = word2.c_str();
    cout << cstrLength(c);

    //Problem16
    int n3;
    cin >> n3;
    int fact;
    factorial(n3, &fact);
    cout << "Factorial of " << n3 << " is " << fact << std::endl;

    //Problem17
    string word3;
    cout << "Enter a word: ";
    cin.ignore(); // consume newline
    getline(cin, word3);

    int vowelCount, consonantCount;
    countChar(word3.c_str(), vowelCount, consonantCount);
    cout << "vowels: " << vowelCount << endl;
    cout << "consonants: " << consonantCount << endl;

    //Problem18
    int size5;
    cout << "Enter the size of the array: ";
    cin >> size5;
    int *arr2 = new int[size5];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size5; i++) {
        cin >> *(arr2 + i);
    }
    sortArray(arr2, size5);
    cout << "Sorted array: ";
    for (int i = 0; i < size5; i++) {
        cout << *(arr2 + i) << " ";
    }
    delete[] arr2;

    //Problem19
    int n4;
    cout << "Enter the number of operations: ";
    cin >> n4;

    int x = 0;
    string operation;
    for (int i = 0; i < n4; ++i) {
        cin >> operation;
        if (operation == "++x" || operation == "x++" || operation == "+ + x" || operation == "x + +") {
            x++;
        } else if (operation == "--x" || operation == "x--" || operation == "− − x" || operation == "x − −") {
            x--;
        }
    }

    //Problem20
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int result2 = romanToInt(roman);
    cout << "Output: " << result2 << endl;

    //Problem21
    string word4;
    cout << "Enter a word: ";
    cin >> word4;

    string result3 = transformWord(word4);
    cout << "Output: " << result3 << endl;

    return 0;
}
