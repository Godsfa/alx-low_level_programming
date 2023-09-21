int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(arr) / sizeof(arr[0]);

    array_iterator(arr, size, print_element);

    return (0);
}
