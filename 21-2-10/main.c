//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//struct stu
//{
//    int id;
//    int cai;
//    int de;
//};
//int cmp(const void *a,const void *b)
//{
//    int aa,bb,ade,bde;
//    ade=((struct stu*)a)->de;
//    bde=((struct stu*)b)->de;
//    aa=((struct stu*)a)->cai+((struct stu*)a)->de;
//    bb=((struct stu*)b)->cai+((struct stu*)b)->de;
//    if(aa==bb)
//    {
//        if(ade==bde)
//        {
//            return ((struct stu*)b)->id-((struct stu*)a)->id;
//        }
//        else
//            return ade-bde;
//    }
//    else
//        return aa-bb;
//}
//void mqsort(void*s,int n,int width,int (*p)(const void*a,const void*b))
//{
//    int i,j;
//    char *tmp=(char*)malloc(width);
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(p((char*)s+width*j,(char*)s+width*(j+1))<0)
//            {
//                memcpy(tmp,(char*)s+width*j,width);
//                memcpy((char*)s+width*j,(char*)s+width*(j+1),width);
//                memcpy((char*)s+width*(j+1),tmp,width);
//            }
//        }
//    }
//    free(tmp);
//}
//int main()
//{
//    int count1=0,count2=0,count3=0,count4=0,i,n,h,l,count=0,cai,de,id;
//    scanf("%d%d%d",&n,&l,&h);
//    struct stu s1[n],s2[n],s3[n],s4[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d%d%d",&id,&de,&cai);
//        if(de>=l&&cai>=l)
//        {
//            count++;
//            if(de>=h&&cai>=h)
//            {
//                s1[count1].id=id;
//                s1[count1].cai=cai;
//                s1[count1].de=de;
//                count1++;
//            }
//            else if(de>=h&&cai<h)
//            {
//                s2[count2].id=id;
//                s2[count2].de=de;
//                s2[count2].cai=cai;
//                count2++;
//            }
//            else if(de<h&&cai<h&&de>=cai)
//            {
//                s3[count3].id=id;
//                s3[count3].cai=cai;
//                s3[count3].de=de;
//                count3++;
//            }
//            else
//            {
//                s4[count4].id=id;
//                s4[count4].cai=cai;
//                s4[count4].de=de;
//                count4++;
//            }
//        }
//    }
//    mqsort(s1,count1,sizeof(struct stu),cmp);
//    mqsort(s2,count2,sizeof(struct stu),cmp);
//    mqsort(s3,count3,sizeof(struct stu),cmp);
//    mqsort(s4,count4,sizeof(struct stu),cmp);
//    printf("%d",count);
//    if(count)
//        printf("\n");
//    for(i=0;i<count1;i++)
//    {
//        printf("%d %d %d",s1[i].id,s1[i].de,s1[i].cai);
//        if(i!=count1-1||count2)
//            printf("\n");
//    }
//    for(i=0;i<count2;i++)
//    {
//        printf("%d %d %d",s2[i].id,s2[i].de,s2[i].cai);
//        if(i!=count2-1||count3)
//            printf("\n");
//    }
//    for(i=0;i<count3;i++)
//    {
//        printf("%d %d %d",s3[i].id,s3[i].de,s3[i].cai);
//        if(i!=count3-1||count4)
//            printf("\n");
//    }
//    for(i=0;i<count4;i++)
//    {
//        printf("%d %d %d",s4[i].id,s4[i].de,s4[i].cai);
//        if(i!=count4-1)
//            printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//struct stu
//{
//    int id;
//    int cai;
//    int de;
//};
//int cmp(const void *a,const void *b)
//{
//    int aa,bb,ade,bde;
//    ade=((struct stu*)a)->de;
//    bde=((struct stu*)b)->de;
//    aa=((struct stu*)a)->cai+((struct stu*)a)->de;
//    bb=((struct stu*)b)->cai+((struct stu*)b)->de;
//    if(aa==bb)
//    {
//        if(ade==bde)
//        {
//            return ((struct stu*)a)->id-((struct stu*)b)->id;
//        }
//        else
//            return bde-ade;
//    }
//    else
//        return bb-aa;
//}
//void mqsort(void*s,int n,int width,int (*p)(const void*a,const void*b))
//{
//    int i,j;
//    char *tmp=(char*)malloc(width);
//    for(i=0;i<n-1;i++)
//    {
//        for(j=0;j<n-1-i;j++)
//        {
//            if(p((char*)s+width*j,(char*)s+width*(j+1))<0)
//            {
//                memcpy(tmp,(char*)s+width*j,width);
//                memcpy((char*)s+width*j,(char*)s+width*(j+1),width);
//                memcpy((char*)s+width*(j+1),tmp,width);
//            }
//        }
//    }
//    free(tmp);
//}
//int main()
//{
//    int count1=0,count2=0,count3=0,count4=0,i,n,h,l,count=0,cai,de,id;
//    scanf("%d%d%d",&n,&l,&h);
//    struct stu s1[n],s2[n],s3[n],s4[n];
//    for(i=0;i<n;i++)
//    {
//        scanf("%d%d%d",&id,&de,&cai);
//        if(de>=l&&cai>=l)
//        {
//            count++;
//            if(de>=h&&cai>=h)
//            {
//                s1[count1].id=id;
//                s1[count1].cai=cai;
//                s1[count1].de=de;
//                count1++;
//            }
//            else if(de>=h&&cai<h)
//            {
//                s2[count2].id=id;
//                s2[count2].de=de;
//                s2[count2].cai=cai;
//                count2++;
//            }
//            else if(de<h&&cai<h&&de>=cai)
//            {
//                s3[count3].id=id;
//                s3[count3].cai=cai;
//                s3[count3].de=de;
//                count3++;
//            }
//            else
//            {
//                s4[count4].id=id;
//                s4[count4].cai=cai;
//                s4[count4].de=de;
//                count4++;
//            }
//        }
//    }
//    qsort(s1,count1,sizeof(struct stu),cmp);
//    qsort(s2,count2,sizeof(struct stu),cmp);
//    qsort(s3,count3,sizeof(struct stu),cmp);
//    qsort(s4,count4,sizeof(struct stu),cmp);
//    printf("%d",count);
//    printf("\n");
//    for(i=0;i<count1;i++)
//    {
//        printf("%08d %d %d\n",s1[i].id,s1[i].de,s1[i].cai);
//    }
//    for(i=0;i<count2;i++)
//    {
//        printf("%08d %d %d\n",s2[i].id,s2[i].de,s2[i].cai);
//    }
//    for(i=0;i<count3;i++)
//    {
//        printf("%08d %d %d\n",s3[i].id,s3[i].de,s3[i].cai);
//    }
//    for(i=0;i<count4;i++)
//    {
//        printf("%08d %d %d\n",s4[i].id,s4[i].de,s4[i].cai);
//    }
//    return 0;
//}
//int cmp(const void *a,const void *b)
//{
//    int aa,bb,ade,bde;
//    ade=((struct stu*)a)->de;
//    bde=((struct stu*)b)->de;
//    aa=((struct stu*)a)->cai+((struct stu*)a)->de;
//    bb=((struct stu*)b)->cai+((struct stu*)b)->de;
//    if(aa==bb)
//    {
//        if(ade==bde)
//        {
//            return ((struct stu*)a)->id-((struct stu*)b)->id;
//        }
//        else
//            return bde-ade;
//    }
//    else
//        return bb-aa;
//}
//int cmp(const void*a,const void*b)
//{
//    if(((struct stu*)b)->cai+((struct stu*)b)->de==((struct stu*)a)->cai+((struct stu*)a)->de)
//    {
//        if(((struct stu*)a)->de==((struct stu*)b)->de)
//        {
//            return ((struct stu*)a)->id-((struct stu*)b)->id;
//        }
//        else
//            return ((struct stu*)b)->de-((struct stu*)a)->de;
//    }
//    else
//        return ((struct stu*)b)->cai+((struct stu*)b)->de-((struct stu*)a)->cai+((struct stu*)a)->de;
//}
//int cmp(const void *a,const void *b)
//{
//    struct stu aa,bb;
//    aa=*(struct stu*)a;
//    bb=*(struct stu*)b;
//    if((aa.de+aa.cai)==(bb.de+bb.cai))
//    {
//        if(aa.de==bb.de)
//        {
//            return aa.id-bb.id;
//        }
//        else
//            return bb.de-aa.de;
//    }
//    else
//        return bb.de+bb.cai-aa.cai+aa.de;
//}
//int cmp(const void *a,const void *b)
//{
//    struct stu aa,bb;
//    aa=*(struct stu*)a;
//    bb=*(struct stu*)b;
//    if((aa.de+aa.cai)!=(bb.de+bb.cai))
//    {
//       return bb.de+bb.cai-aa.cai-aa.de;
//    }
//    else
//         if(aa.de!=bb.de)
//        {
//            return (bb.de-aa.de);
//        }
//        else
//           return (aa.id-bb.id);
//}
//#include<stdio.h>
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    printf("%d",n);
//    return 0;
//}
//#include<stdio.h>
//#include<string.h>
////#include<stddef.h>
//int main()
//{
//    char a[]="hhhh";
//    char b[]="hhhhh";
//    printf("%d",(strlen(a)-strlen(b))<0);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a[]="жа";
//    printf("%d",sizeof(a));
//    printf("%c%c",a[0],a[1]);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a[15],b[15],ad,bd;
//    int i,suma=0,sumb=0;
//    scanf("%s %c %s %c",a,&ad,b,&bd);
//    for(i=0;a[i];i++)
//    {
//        if(a[i]==ad)
//        {
//            suma*=10;
//            suma+=ad-'0';
//        }
//    }
//    for(i=0;b[i];i++)
//    {
//        if(b[i]==bd)
//        {
//            sumb*=10;
//            sumb+=bd-'0';
//        }
//    }
//    printf("%d",suma+sumb);
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char arr[1002];
//    int tmp=0,n,i,chu;
//    scanf("%s %d",arr,&n);
//    for(i=0;arr[i];i++)
//    {
//        tmp*=10;
//        tmp+=arr[i]-'0';
//        chu=tmp/n;
//        if(chu||i||!arr[i+1])
//            printf("%d",chu);
//        tmp%=n;
//        if(!arr[i+1])
//            printf(" %d",tmp);
//    }
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int arr1[3]={0},arr2[3]={0},n,i,sy[3]={0};
//    char tmp1,tmp2;
//    scanf("%d",&n);
//    for(i=0;i<n;i++)
//    {
//        while(getchar()!='\n');
//        scanf("%c %c",&tmp1,&tmp2);
//        if(tmp1=='C'&&tmp2=='B')
//        {
//            arr2[0]++;
//            sy[2]++;
//        }
//        else if(tmp1=='B'&&tmp2=='C')
//        {
//            arr1[0]++;
//            sy[0]++;
//        }
//        else if(tmp1=='J'&&tmp2=='C')
//        {
//            arr2[1]++;
//            sy[2]++;
//        }
//        else if(tmp1=='B'&&tmp2=='J')
//        {
//            arr2[2]++;
//            sy[2]++;
//        }
//        else if(tmp1=='C'&&tmp2=='J')
//        {
//            arr1[1]++;
//            sy[0]++;
//        }
//        else if(tmp1=='J'&&tmp2=='B')
//        {
//            arr1[2]++;
//            sy[0]++;
//        }
//        else
//        {
//            sy[1]++;
//        }
//    }
//    printf("%d %d %d\n%d %d %d\n",sy[0],sy[1],sy[2],sy[2],sy[1],sy[0]);
//    int max,maxi;
//    for(max=arr1[0],maxi=0,i=1;i<3;i++)
//    {
//        if(arr1[i]>max)
//        {
//            max=arr1[i];
//            maxi=i;
//        }
//    }
//    if(maxi==0)
//        printf("B");
//    else if(maxi==1)
//        printf("C");
//    else
//        printf("J");
//    for(max=arr2[0],maxi=0,i=1;i<3;i++)
//    {
//        if(arr2[i]>max)
//        {
//            max=arr2[i];
//            maxi=i;
//        }
//    }
//    if(maxi==0)
//        printf(" B");
//    else if(maxi==1)
//        printf(" C");
//    else
//        printf(" J");
//    return 0;
//}
#include<stdio.h>
int panj(int n)
{
    int arr[10]={0},i,sum=0,j;
    while(n)
    {
        arr[n%10]=1;
        n/=10;
    }
    for(i=9;i>=0;i--)
    {
        if(arr[i])
        {
            for(j=0;j<arr[i];j++)
            {
                sum*=10;
                sum+=arr[i];
            }
        }
    }
    return sum;
}
int pans(int n)
{
    int arr[10]={0},i,j,sum=0;
    while(n)
    {
        arr[n%10]=1;
        n/=10;
    }
    for(i=0;i<10;i++)
    {
        if(arr[i])
        {
            for(j=0;j<arr[i];j++)
            {
                sum*=10;
                sum+=arr[i];
            }
        }
    }
    return sum;
}
void chu(int n)
{
    int jiang=panj(n);
    int sheng=pans(n);
    if(jiang==sheng)
    {
        printf("%04d - %04d = %04d",n,n,n-n);
    }
    else if(jiang-sheng==6174)
        printf("%04d - %04d = %04d",jiang,sheng,jiang-sheng);
    else
    {
        printf("%04d - %04d = %04d",jiang,sheng,jiang-sheng);
        chu(jiang-sheng);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    chu(n);
    return 0;
}
