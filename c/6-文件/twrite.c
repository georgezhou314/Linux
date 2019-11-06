#include <stdio.h>
#include<unistd.h>
/**
*文本文件的写
*/
int main(int argc,char** argv) {
		if(argc<2){
						printf("file name shouldn't been null\n");
						return 0;
		}
    FILE* stream;
    //a+的模式是，在append的情况上增加读的权限
		stream=fopen(argv[1],"a+");
		//fprintf(FILE* file, ...args)与sprintf()参数相似
		//经过验证,Ubuntu系统将汉字编码为utf编码,一个汉字占用3个字节
		//字母数字为ascii编码
    fprintf(stream,"汉字%d\n",100);
		for(int i=0;i<100;i++){
						fprintf(stream,"第%d条数据\n",i);
						//写入之后立即写入到文件中，不放在缓冲区中
						fflush(stream);
						sleep(1);
		}
    fclose(stream);
    return 0;
}
