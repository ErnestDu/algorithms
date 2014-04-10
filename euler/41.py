from math import sqrt
def isPandigital(x):
	a = []
	for i in range (10):
		a.append(0)
	s = str(x)
	for i in range (0, len(s)):
		a[int(s[i])] += 1
		if a[int(s[i])] > 1:
			return 0
	return 1

## input is larger than 2
def isPrime(x):
	upper = int(sqrt(x)) + 1
	for i in range (2, upper):
		if x % i == 0:
			return 0
	return 1

for i in range(9876543210, 1, -1):
	if isPandigital(i):
		if isPrime(i):
			print(i)
			break
