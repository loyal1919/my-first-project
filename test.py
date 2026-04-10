import math
x = int(input("请输入x的值："))
y = int(input("请输入y的值："))
z = int(input("请输入z的值："))
a = 3 * x + 4 * math.sqrt(x ** 2 + 2 * y ** 2)
b = 1 + math.cos(z**3)
result = a / b
print("表达式结果：", result)
