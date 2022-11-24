LINK string_to_list(char s[]){
	LINK head = (LINK)malloc(sizeof(ELEMENT));
	LINK horse = head;
	LINK tmp;
	if (s[0]=='\0')
		return NULL;
	else {
		head->data=s[0];
		for(int i=1;s[i]!='\0';i++){
			tmp = (LINK)malloc(sizeof(ELEMENT));
			tmp->data=s[i];
			horse->next = tmp;
			horse=horse->next;
		}
	}
	return head;
}
