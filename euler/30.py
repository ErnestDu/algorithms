num = [0,1,2,3,4,5,6,7,8,9]
char = "0123456789"
def digitSum(x):
	s = str(x)
	result = 0
	length = len(s)
	for i in range (0, length):
		for j in range (0, 10):
			if s[i] == char[j]:
				result = result + int(pow(num[j],5))
	return result
ss = 0
for i in range (10, 1000000):
	if i == digitSum(i):
		ss = ss + i
		print(i)
print(ss)
