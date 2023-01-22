# C语言学习笔记

### 1.为什么用`strlen()`不能算出空格

​    问题出在`scanf()`。`scanf()`开始读取输入以后，会在遇到的第一个空白字符空格（blank）、制表符（tab）或者换行符（newline）处停止读取。可以使用 `scanf("%[\^\n]",a);` 来解决问题。其中`%[\^\n]`是说明只有在读入回车符时才终止读取。用`getchar()`在一个循环中不断读取字符缓冲区中的字符直到`\n`为止也可以实现类似功能。就是麻烦了些。

### 2.字符串翻转实现方法

#### 方法1：

```c++
/* 构造函数1，传入字符串指针，计算字符串长度，通过暂存变量c将第一个和最后一个、第二个和倒数第二个...进行交换
** 如果是字符长度是偶数，交换1/2的长度刚好；如果是奇数，也是交换1/2的长度，最中间的字符无需调换 */
void function1(char *str)
{
	char c;
	int len = strlen(str);
	int j = len - 1; // 取len-1的原因是，数组下标索引从0开始，到len-1结束
	int i = 0;
	while (i < len / 2)
	{
		c = str[i];
		str[i] = str[j];
		str[j] = c;
		i++;
		j--;
	}
}
```

#### 方法2：

```c++
/* 构造函数2，传入字符串指针，计算字符串长度，通过暂存变量c将第一个和最后一个、第二个和倒数第二个...进行交换
** 用i代表开始索引角标，j代表索引末尾角标，只要i小于j就将对应的值进行互换，同样实现翻转 */
void function2(char *str)
{
	char c;
	int len = strlen(str);
	int j = len - 1; // 取len-1的原因是，数组下标索引从0开始，到len-1结束
	int i = 0;
	while (i < j)
	{
		c = *(str + i);
		*(str + i) = *(str + j);
		*(str + j) = c;
		i++;
		j--;
	}
}
```

### 3.自建方法实现大数求和
