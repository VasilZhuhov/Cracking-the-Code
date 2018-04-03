void LinkedList::deleteDuplicate() {
	if (head == NULL) {
		return;
	}
	Node* previous = head;
	Node* current = previous->next;
	while (current != NULL) {
		Node* runner = head;
		while (runner != current) {
			if (runner->data == current->data) {
				Node* temp = current->next;
				previous->next = temp;
				current = temp;
				break;
			}
			runner = runner->next;
		}
		if (runner == current) {
			previous = current;
			current = current->next;
		}
	}
}