function binary_search(array,size,value){
	var low=0,high=size-1;
	while(low<=high){
		var mid=(high+low)/2;
		if(array[mid]==value){
			return true;
		}
		else if(array[mid]>value){
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return false;
}
var array=[];
var size=Number(prompt("Size of the array"));
for(let i=0;i<size;i++){
	array[i]=Number(prompt("array [0]["+i+"]" ));
}
var value = Number (prompt("The value for search . !"));
if(binary_search(array,size,value)){
	alert('found !');
}
else{
	alert('Not found !!');
}