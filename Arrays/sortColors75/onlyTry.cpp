void sortColors(vector < int > & arr) {
    auto zero = arr.begin();
    auto two = arr.end() - 1;
    auto ptr = arr.begin();

    while (ptr <= two) {
        switch ( * ptr) {
        case 0:
            swap( * zero, * ptr);
            zero++;
            ptr++;
            break;

        case 1:
            ptr++;
            break;

        case 2:
            swap( * ptr, * two);
            two--;
            break;
        }
    }
    // return arr;
}
