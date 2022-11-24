void grade_array(int score[], char grade[], int size){
	int i;
	for (i=0;i<10;i++){
		if (90 <= score[i] &&  score[i] <=100)
			grade[i]='A';
		else if (80 <= score[i] && score[i] <90) 
			grade[i]='B';
		else if (70 <= score[i] && score[i] <80) 
			grade[i]='C';
		else if (60 <= score[i] && score[i] <70) 
			grade[i]='D';
		else 
			grade[i]='F';
	}
}

