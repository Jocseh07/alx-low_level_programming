#!/usr/bin/python3


def isPalin(k):
  k = str(k)
  l = str(k)[::-1]
  return k == l

def palindrome():
	list=[]
	i = 999
	while (i > 100):
		for j in range(999, 100, -1):
			k = i * j
			print("{}, {}, {}".format(i, j, k))
			if (isPalin(k)):
				list.append(k)
		i -= 1
	print(max(list))
      
palindrome()