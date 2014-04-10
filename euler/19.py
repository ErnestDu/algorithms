def leapYear(x):
	if x % 4 == 0 and x % 400 == 0:
		return 1
	elif x % 4 == 0 and x % 100 == 0 and x % 400 != 0:
		return 0
	elif x % 4 == 0:
		return 1

def dayOfMonth(month, leap):
	if leap == 1 and month == 2:
		return 29
	elif month == 2:
		return 28
	elif month == 9 or month == 4 or month == 6 or month == 11:
		return 30
	else :
		return 31

daySum = 0
day = 1
for year in range (1900, 2001):
	for month in range (1, 13):
		first = day 
		if first % 7 == 0:
			daySum = daySum + 1
#			print(year, month) ## use cal to check the correctness
		day = day + dayOfMonth(month, leapYear(year))
daySum = daySum - 2 ## minus 2 sundays in 1900
print(daySum)
