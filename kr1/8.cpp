void fix_list(BehaviorPattern *root) {
	if (!root) return;
	root->prev = nullptr; 
	BehaviorPattern *cur_pattern = root->next, *prev_pattern = root;	
	while (cur_pattern) {
		cur_pattern->prev = prev_pattern;
		cur_pattern = cur_pattern->next;
    prev_pattern = cur_pattern;
  }
}




