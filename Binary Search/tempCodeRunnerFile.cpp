int Array_Insertion(int size,int sizeofArray)
{
int sum = 0;
while (size != 0) {
sum = sum + size % 10;
size = size / 10;
}
if(sizeofArray<sum){
sum = Array_Insertion(sum,sizeofArray);
}
return sum;
}
int main(){

int size, sizeofarray,i,elements;
cin>>size>>n;
int arr[size+1];
for(i=0;i<size;i++){
if(i<sizeofarray){cin>>arr[i];}
else{arr[i]=0;}
}
cin>>elements;
if(size>sizeofarray){
int sum = Array_Insertion(elements,size);

for(i=size; i>=sum; i--)
{
arr[i] = arr[i-1];
}
arr[i] = elements;
}
else{
cout<<"Insertion is not possible becouse Array Overflow.. !!"<<endl;
}

for(i=0;i<size;i++){
cout<<arr[i];
if(i!=size-1){
int special = 8-to_string(arr[i]).length();
for(int k=0;k<special;k++){
cout<<" ";
}
}
}
return 0;
}