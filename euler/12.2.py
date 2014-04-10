from math import sqrt
def isPrime(n):
	m = int(sqrt(n))
	for i in range (2, m+1):
		if n % i == 0:
			return 0
	return 1

def countDiv(n):
	count = 0
	for i in range (1, n+1):
		if n % i == 0:
			count = count + 1
	return count

for i in range (5, 10000):
	countDiv(i)
