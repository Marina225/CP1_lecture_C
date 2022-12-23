int q = a[i];
            int p = a[i + 1];
            int k = (p - q);
            if (k > 1) {
                printf("No \n");
                flag = 0;
                break;
            } else {
                flag = 1;
            }
            if (flag == 1){
                printf("Yes \n");
            }