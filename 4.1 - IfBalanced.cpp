int Tree::maxHeigth(Node* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + std::max(maxHeigth(root->children[0]), maxHeigth(root->children[1]));

}

int Tree::minHeigth(Node* root) {
	if (root == NULL) {
		return 0;
	}
	return 1 + std::min(minHeigth(root->children[0]), minHeigth(root->children[1]));

}
bool Tree::isBalanced() {
	return (maxHeigth(root) - minHeigth(root) - 1);
}