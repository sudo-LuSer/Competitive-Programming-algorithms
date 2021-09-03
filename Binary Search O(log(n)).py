def binary_search(array,size,value):
	low=0
	high=size-1
	while(low<=high):
		mid=(low+high)/2
		if(array[mid]==value):
			return True
		elif(array[mid]>value):
			high=mid-1
		else:
			low=mid+1
	return False
size=int(input())
array=[]
for _ in range(0,size):
	k=int(input())
	array.append(k)
value=int(input())
if(binary_search(array,size,value)):
	print('Found !')
else:
	print('not found')