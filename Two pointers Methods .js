var array=[];
var size=Number(prompt("the size of the array"));
for (let i=0;i<size;i++){
	array[i]=Number(prompt("ENTER ARRAY ELEMENT "));
}
var k=Number(prompt("Enter the variable K to search to element from the array i+r==k"));
var i=0,r=size-1;
var check=false;
while (i<r){
	if(array[i]+array[r]==k){
		alert(i + " " + r);
		check=false;
		break;
	}
	else if(array[i]+array[r]>k){
		r--;
	}
	else{
		i++;
	}
}
if(check){
	alert("impossible ");
}