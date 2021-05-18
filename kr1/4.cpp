unsigned int is_an_invisible_bike(Vehicle* v, unsigned int n) {
    unsigned int ans = 0;
    for (unsigned int i = 0; i < n; ++i) if (v[i].is_visible == false and v[i].type == 1) ++ans;
    return ans;
}
            
