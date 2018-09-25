#ifndef _CIN_REDIRECT_
#define _CIN_REDIRECT_

/*
没有考虑多线程，多次进入的情况
*/

/*
@desc:	将cin的源重定向到filename指向的文件
@para 	filename：文件路径+文件名
@ret: 	没有意义
*/
int cin_redirect(char filename[]);
/*
@desc:	将cin的源重新定向回上次调用redirect函数之前的源
@ret: 	没有意义
*/
int cin_recover();

#endif