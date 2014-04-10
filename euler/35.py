from math import sqrt
def prime(x):
	upper =  int(sqrt(x)) + 1
	for i in range (2, upper):
		if x % i == 0:
			return 0
	return 1

def rotate(x):
	end = 0
	s = str(x)
	tmp = s
	while end == 0:
		tmp = tmp[1:] + tmp[0]
		if tmp == s:
			end = 1
		elif tmp[0] == '0': ## tmp starts with 0
			return 0
		else:
			if prime(int(tmp)) == 0:
				return 0
	return 1

count = 0
for i in range (2, 1000001):
	if prime(i):
		if rotate(i):
			#print(i)
			count += 1
print(count)
