/**
 * @file log.c
 * log tools class
 *
 * @author kit <zxyy123456@163.com>
 */

#include "log.h"

/**
 * Print the correct usage.
 */
static void
usage(const char *reason)
{
    if (reason) {
        printf("%s\n", reason);
    }

    printf("usage: log({1-8},str);\n\n");
    printf("1:emerg,紧急-系统无法使用\n");
    printf("2:alert,必须立即采取\n");
    printf("3:crit,致命情况\n");
    printf("4:error,错误情况\n");
    printf("5:warn,警告情况\n");
    printf("6:notice,一般重要情况\n");  
    printf("7:info,普通性息\n");
    printf("8:debug,出错级别信息\n\n");
}

/**
 * The log functino will printf the follow 8 class information
 * 1,1:emerg,紧急-系统无法使用
 * 2,2:alert,必须立即采取措施
 * 3,3:crit,致命情况
 * 4,4:error,错误情况
 * 5,5:warn,警告情况
 * 6,6:notice,一般重要情况
 * 7,7:info,普通性息
 * 8,8:debug,出错级别信息
 *
 */
void loges(int infoNum,const char *str,const char *fileStr,int lineNum,const char *funcStr)
{ 
    if (infoNum > 8 || infoNum < 1) 
    { 
        usage("the log number is wrong"); //return 1; 
	return ;
    } 
//    if (!strcmp(str,"")) { } 
    switch(infoNum) 
    { 
        case 1: 
            printf("%d [%s] emerg %s - %s\n",lineNum,funcStr,fileStr,str); 
            break; 
        case 2: 
            printf("%d [%s] alert %s - %s\n",lineNum,funcStr,fileStr,str); 
            break; 
        case 3: 
            printf("%d [%s] crit %s - %s\n",lineNum,funcStr,fileStr,str); 
	    break; 
        case 4: 
            printf("%d [%s] error %s - %s\n",lineNum,funcStr,fileStr,str); 
	    break; 
        case 5:
            printf("%d [%s] warn %s - %s\n",lineNum,funcStr,fileStr,str); 
	    break;
        case 6:
            printf("%d [%s] notice %s - %s\n",lineNum,funcStr,fileStr,str); 
	    break;
        case 7:
            printf("%d [%s] info %s - %s\n",lineNum,funcStr,fileStr,str); 
	    break;
        case 8:
            printf("%d [%s] debug %s - %s\n",lineNum,funcStr,fileStr,str); 
	    break;
        defaut:
	    break;
    }
}
