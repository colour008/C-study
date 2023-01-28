# C语言学习笔记 :smile:

----



## 一、方法类

### 1. 字符串翻转实现方法

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

### 2. 自建方法实现大整数求和

### 3. 取一个多位数的每位上数值的方法

``` c++
int m;//假如m是一个五位数
int g, s, b, q, w;
	g = m / 1 % 10;//个位
	s = m / 10 % 10;//十位
	b = m / 100 % 10;//百位
	q = m / 1000 % 10;//千位
	w = m / 10000 % 10;//万位
	//....以此类推 
```

## 二、问题类

### 1. 为什么用`strlen()`不能算出空格

​    问题出在`scanf()`。`scanf()`开始读取输入以后，会在遇到的第一个空白字符空格（blank）、制表符（tab）或者换行符（newline）处停止读取。可以使用 `scanf("%[^\n]s",a);` 来解决问题。其中`%[^\n]`是说明只有在读入回车符时才终止读取。用`getchar()`在一个循环中不断读取字符缓冲区中的字符直到`\n`为止也可以实现类似功能,就是麻烦了些。

### 2. `vscode`引用自建头文件问题

vscode在引用自建头文件时可能会出现 `Cannot open include file: 'Function.h': No such file or directory`的提示，解决方法如下：在引用头文件时，将`#include <Function.h>`改成`#include "Function.h"`即可。

## 三、编译错误提示类

### 错误1. `control reaches end of non-void function [-Wreturn-type]`

这个是非常正经的分析，用`gcc`编译一个程序的时候出现这样的警告：`warning: control reaches end of non-void function`.它的意思是：控制到达非`void`函数的结尾。就是说你的一些本应带有返回值的函数到达结尾后可能并没有返回任何值。这时候，最好检查一下是否每个控制流都会有返回值。
