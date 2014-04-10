from math import sqrt
def prime (x):
	upper = int(sqrt(x)) + 1
	for i in range (2, upper):
		if x % i == 0:
			return 0
	return 1

#for i in range (2, 100):
#	if prime(i):
#		print(i)
a = int(raw_input())

print(prime(a))
