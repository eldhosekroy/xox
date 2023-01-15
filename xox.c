#include<stdio.h>
#include<stdlib.h>
#include<time.h>
time_t sec;
int rng(){
sec = time(NULL);
int t=(rand()*sec);
return t;
}

int a=3,b=3,c=3,d=3,e=3,f=3,g=3,h=3,i=3;
int user , com , ran, flag=0;



int xox(){ 
printf(" %d || %d || %d \n..............\n",a,b,c);
printf(" %d || %d || %d \n..............\n",d,e,f); 
printf(" %d || %d || %d \n..............\n",g,h,i);
printf("\n\n");
return 0;
}



int userin(){
printf("Enter 1,2,3,4,5,6,7,8,9 to change the value : ");
scanf("%d",&user);
if(user==1){
a=1;
}else if(user==2){
b=1;
}else if(user==3){
c=1; }else if(user==4){
d=1;
}else if(user==5){
e=1;
}else if(user==6){
f=1;
}else if(user==7){
g=1;
}else if(user==8){
h=1;
}else if(user==9){
i=1;
}else{
printf("invalied input :");
}
return 0;
}



int computer(){
int r;
printf("Computer playing\n\n");
for(int i=0;i<101;i++){
    r=rng()%9;
    com=r;
if(com==1){
if(a==3){
    a=0;
    break;
    }else
    break;
}else if(com==2){
if(b==3){
b=0;
break;
}else
break;
}else if(com==3){
if(c==3){
c=0;
break;
} else
break;
}else if(com==4){
if(d==3){
d=0;
break;
} else
break;
}else if(com==5){
if(e==3){
e=0;
break;
} else
break;
}else if(com==6){
if(f==3){
f=0;
break;
} else
break;
}else if(com==7){
if (g==3){
g=0;
break;
} else
break;
}else if(com==8){
if(h==3){
h=0;
break;
} else
break;
}else if(com==9){
if(i==3){
i=0;
break;
}else
break;
}
}
return 0;
}



int check(){
if(a<3){
    if(a==b){
        if(b==c){
        printf("%d   win\n\n",a);
        flag=1;
        }
    }
}
if(d<3){
    if(d==e){
        if(e==f){
        printf("%d   win\n\n",d);
        flag=1;
        }
    }
}
if(g<3){
    if(g==h){
        if(h==i){
        printf("%d   win\n\n",g);
        flag=1;
        }
    }
}

    if(a<3){
    if(a==d){
        if(d==g){
        printf("%d   win\n\n",a);
        flag=1;
        }
    }
}
if(b<3){
    if(b==e){
        if(e==h){
        printf("%d   win\n\n",b);
        flag=1;
        }
    }
}
if(c<3){
    if(c==f){
        if(f==i){
        printf("%d   win\n\n",c);
        flag=1;
        }
    }
}


if(a<3){
    if(a==e){
        if(e==i){
        printf("%d   win\n\n",a);
        flag=1;
        }
    }
}
if(c<3){
    if(c==e){
        if(e==g){
        printf("%d   win\n\n",c);
        flag=1;
        }
    }
}


}






int main(){

    for(int k=0;k<6;k++){

        xox();
        check();
        if(flag==1){
            break;
        }
        userin();
        xox();
        check();
        if(flag==1){
            break;
        }
        computer();

    }
    if(flag==0){
    printf("No winner");
    }
}