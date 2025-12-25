    while(k < times){
        int i = k,j = k;
        matrix[i][j] = digit;
        while(j < n-1-k){
            matrix[i][j++] = digit++;
        }
        while(i < n-1-k){
            matrix[i++][j] = digit++;
        }
        while(j > k){
            matrix[i][j--] = digit++;
        }
        while(i > k){
            matrix[i--][j] = digit++;
        }
        k++;
    }