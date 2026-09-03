#include "libft.h"

static size_t	ft_itoa_len(long num)                                // сколько символов понадобится для его строкового представления
{
	size_t	len;                                                    // Создаём переменную, в которой будем считать количество символов.

	len = 0;
	if (num == 0)                                                    // для того чтобы корректо описать 0 как строку на нужна длинна 1 поэтому делаем эту проверку 
		return (1);
	if (num < 0)                                                      // num = -123 У отрицательного числа есть дополнительный символ: -123 " - " -- получаем len = 1 Это место будет учитывать '-'
	{
		len++;
		num = -num;                                                    // Получаем -123 → 123
	}
	while (num >= 1)                                                 // Считаем количество цифр num = 12345 Первый проход: len = 1 12345 / 10 = 1234 Второй: len = 2 1234 / 10 = 123 Третий: len = 3 123 / 10 = 12 Пятый: len = 5 1 / 10 = 0 Теперь: num = 0 num >= 1 ложное. 
	{
		len++;
		num /= 10;
	}
	return (len);
}

static char	*ft_num_to_str(long num, char *str, size_t len)         // num — число str — указатель на строку len — сколько символов нужно И возвращает готовую строку.
{
	str = ft_calloc(len + 1, sizeof(char));                            // Выделяем память. 
	if (str == NULL)
		return (NULL);
	if (num < 0)                                                       // Работа с минусом
	{
		str[0] = '-';
		num = -num;
	}
	len--;
	while (len)
	{
		str[len] = (num % 10) + '0';
		num /= 10;
		len--;
	}
	if (str[0] != '-')
		str[0] = (num % 10) + '0';
	return (str);
}

char	*ft_itoa(int n)                                    // превращает число в строку.
{
	long	num;                                             // num — число, но уже /  long len — длина строки / str — будущая строка
	size_t	len;
	char	*str;

	num = n;                                              // Копируем int в long.
	len = ft_itoa_len(num);                               // Сначала узнаём, сколько символов потребуется.
	str = 0;
	str = ft_num_to_str(num, str, len);
	if (!str)
		return (NULL);
	return (str);
}
