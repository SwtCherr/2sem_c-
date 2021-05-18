
void merge_Militech(Property **root_Arasaka, BuildingsCivilian **root_Militech) {
int i = -1, j = -1;
while (root_Arasaka->next) ++i;
while (root_Militech->next) ++j;
*(root_Arasaka + i + j)->next = *(root_Militech + j)->next;
*(root_)

}
