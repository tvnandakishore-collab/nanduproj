int value(char c) {
    if (c == 'I') return 1;
    if (c == 'V') return 5;
    if (c == 'X') return 10;
    if (c == 'L') return 50;
    if (c == 'C') return 100;
    if (c == 'D') return 500;
    if (c == 'M') return 1000;
    return 0;
}

int romanToInt(char* s) {
    int sum = 0;
    for (int i = 0; s[i]; i++) {
        int v1 = value(s[i]);
        int v2 = value(s[i + 1]);
        if (v1 < v2)
            sum -= v1;
        else
            sum += v1;
    }
    return sum;
}

