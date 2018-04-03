void LinkedList::findNthToLast(int n) {
	Node* temp;
	temp = get(n - 1);
	while (temp != NULL) {
		std::cout << temp->data;
		temp = temp->next;
	}
	std::cout << std::endl;

}