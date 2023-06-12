
            while(r != 0){
                a = b;
                b = r;
                r = a % b;
                if(r == 0 ){
                     cout<<"the hcf is"<<b<<endl;