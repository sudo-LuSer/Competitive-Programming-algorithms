array=[]
size=int(input())
for i in range(0,size):
	k=int(input())
	array.append(k)
k=int(input())
i=0 
r=n-1
while (i<r):
	if(array[i]+array[r]==k):
		print (i)
		print (r)
		break
	elif(array[i]+array[r]>k):
		r-=1
	else:
		i+=1
if(not check):
	print ("impossible")