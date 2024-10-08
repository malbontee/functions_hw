#include <iostream>
using namespace std;

// task 1
int calculate_avg(int arr[], int arr_size);
void show_result(int arr[], int arr_size);

// task 2
int calculate_sum_range(int start, int end);
void print_sum_result(int start, int end);
void check_numbers(int num1, int num2, int& start, int& end);

// task 3
void calculate_max(int array[], const int size, int& max, int& max_index);
void calculate_min(int array[], const int size, int& min, int& min_index);
void print_res(int array[], const int size);

// task 4
void get_array_size(int& size);
void check_array_size(int& size);
void fill_array(int array[], int size);
void print_new_array(int array[], int size);
void create_new_array(int array[], int new_array[], int size);
void clear_memory(int array[], int new_array[]);

int main() {
    // task 1
    int arr[] = {23, 7, 45, 12, 89, 34, 56, 78, 11, 9, 67, 43, 21, 30, 50};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    show_result(arr, arr_size);
    
    int arr2[] = {15, 25, 35, 45, 55};
    int arr_size2 = sizeof(arr2) / sizeof(arr2[0]);
    show_result(arr2, arr_size2);
    
    // task 2
    int num1 = 12, num2 = 1;
    int start, end;
    check_numbers(num1, num2, start, end);
    print_sum_result(start, end);
    

    // task 3
    const int size4 = 20;
    int array4[size4] = {5, 12, 23, 37, 42, 8, 16, 29, 34, 45, 6, 19, 27, 33, 48, 11, 21, 39, 2, 50};
    print_res(array4, size4);

    // task 4
    int size;
    get_array_size(size);
    check_array_size(size);
    
    int* array = new int[size];
    fill_array(array, size);
    
    int* new_array = new int[size];
    create_new_array(array, new_array, size);
    print_new_array(new_array, size);
    
    clear_memory(array, new_array);
}

// task 1
int calculate_avg(int arr[], int arr_size) {
    int sum = 0;
    for (int i = 0; i < arr_size; i++) {
        sum += arr[i];
    }
    return sum / arr_size;
}

void show_result(int arr[], int arr_size) {
    int result = calculate_avg(arr, arr_size);
    cout << "Average of all elements in the array: " << result << "\n";
}

// task 2
void check_numbers(int num1, int num2, int& start, int& end) {
    if (num1 > num2) {
        end = num1;
        start = num2;
    }
    else {
        start = num1;
        end = num2;
    }
}

int calculate_sum_range(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

void print_sum_result(int start, int end) {
    int sum = calculate_sum_range(start, end);
    cout << "Sum of all the numbers from the given range: " << sum << "\n";
}

// task 3
void calculate_max(int array[], const int size, int& max, int& max_index) {
    max = array[0];
    max_index = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
            max_index = i;
        }
    }
}

void calculate_min(int array[], const int size, int& min, int& min_index) {
    min = array[0];
    min_index = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
            min_index = i;
        }
    }
}

void print_res(int array[], const int size) {
    int max, max_index, min, min_index;
    calculate_max(array, size, max, max_index);
    calculate_min(array, size, min, min_index);

    cout << "The maximum of all the elements from the array: " << max << " at index " << max_index << "\n";
    cout << "The minimum of all the elements from the array: " << min << " at index " << min_index << "\n";
}

// task 4
void get_array_size(int& size) {
    cout << "Please enter the size of the array: ";
    cin >> size;
}

void check_array_size(int& size) {
    if (size > 500)
        size = 10;
}

void fill_array(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Please enter your number: ";
        cin >> array[i];
    }
}

void print_new_array(int array[], int size) {
    cout << "Reversed array:\n";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

void create_new_array(int array[], int new_array[], int size) {
    int index = 0;
    for (int i = size - 1; i >= 0; i--) {
        new_array[index] = array[i];
        index++;
    }
}

void clear_memory(int array[], int new_array[]) {
    delete[] array;
    delete[] new_array;
}
