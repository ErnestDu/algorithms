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

def countDiv2(n):
	## find prime divisors of n
	m = int(sqrt(n))+1
	pd = []
	for i in p:
		if n % i == 0:
			pd.append(i)
	#print pd
	#print len(pd)
	pdc = []
	for i in pd:
	#	print "prime" 
	#	print i
		count = 0
		r = n
		while r % i == 0:
			r = r / i
			count = count+1
	#	print count
		pdc.append(count)
#	pdlen = len(pd)
#	print pdlen
	dc = 1
	for i in pdc:
		dc = dc * (i + 1)
	#print dc
	return dc

#countDiv2(36)
#exit()
count = 0
i = 2
p = [] 
#print p
while count != 500:
#	print i
	if isPrime(i):
		p.append(i)
		count = count + 1
	i = i + 1
#print p 
#countDiv2(36)
#exit()
i = 1
flag = 0
tri = 0
while flag == 0:
	tri = tri + i
	i = i + 1
#	print tri
	if countDiv2(tri) > 500:
		#print "found"
		print tri
		flag = 1
