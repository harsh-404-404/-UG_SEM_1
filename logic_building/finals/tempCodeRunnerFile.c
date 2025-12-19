    while(j < n-1){
        matrix[i][j++] = digit++;
    }
    while(i < n-1){
        matrix[i++][j] = digit++;
    }
    while(j > 0){
        matrix[i][j--] = digit++;
    }
    while(i > 0){
        matrix[i--][j] = digit++;
    }