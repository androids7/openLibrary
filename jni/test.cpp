
//#include<stdio.h>
#include<stdlib.h>
#include<jni.h>

char *test="global";
char *line();
extern "C"
{
char  *add(char *a,char *b) {
	
return line();
}


jstring eat(JNIEnv* env)
{
	return env->NewStringUTF("from env");
}

}


char *line()
{
	return test;
}

