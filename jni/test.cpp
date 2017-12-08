
//#include<stdio.h>
#include<stdlib.h>
#include<jni.h>


extern "C"
{
char  *add(char *a,char *b) {
	
return "hello";
}



jstring eat(JNIEnv* env)
{
	return env->NewStringUTF("from env");
}

}
