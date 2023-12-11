int main() {
    int number, mn = 1, count = 0, output = 0;
    printf("Введите число: ");
    scanf("%d", &number);
    while (number != 0)
    {
        if (count % 2 != 0)
        {
            output += number % 10 * mn;
            mn *= 10;
        }
        number = number / 10;
        
        count += 1;
    }
    printf("Полученное число: %d\n", output);

    return 0;
}
