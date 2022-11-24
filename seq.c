void diff_array(int arr[],int first, int diff, int size){
	arr[0]=first;
	for (int i=0;i<size-1;i++){
		arr[i+1]=arr[i]+diff;
	}
}
