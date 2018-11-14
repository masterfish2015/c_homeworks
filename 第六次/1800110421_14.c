void main(void) {
    char str1[80],str2[80];
    int i=0,j=0,a=0,b=0;
    gets(str1);
    gets(str2);
    while(str1[i]!='\0') a+=str1[i++];
    while(str2[j]!='\0') b+=str2[j++];
    printf("resu=%d",a-b);
}