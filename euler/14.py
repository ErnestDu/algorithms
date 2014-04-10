def f(n):
	count = 1
	while n != 1:
		if n % 2 == 0:
			n = n / 2
			count = count + 1
		else:
			n = 3 * n + 1
			count = count + 1
	return count
maxCount = 0
for i in range (1, 1000000):
	print i
	if maxCount < f(i):
		maxCount = f(i)
		num = i
print num
