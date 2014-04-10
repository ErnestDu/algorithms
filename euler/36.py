def palindrome(x_str):
	upper = len(x_str)/2 + 1
	for i in range (0, upper):
		if x_str[i] != x_str[-1-i]:
			return 0
	return 1

def dec2bin(x):
	return str(bin(x)[2:])

s = 0 ## the sum
for i in range (1, 1000001):
	if palindrome(str(i)):
		if palindrome(dec2bin(i)):
			#print(i)
			s = s + i
print(s)
