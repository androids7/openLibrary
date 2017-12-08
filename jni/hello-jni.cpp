
#include <string.h>
#include <jni.h>
#include <dlfcn.h>


typedef char  *(* myadd)( char * a,char * b);

//typedef int (*myadd)(int a,int b);

typedef jstring (*eat)(JNIEnv *env);

extern "C"
{
	JNIEXPORT jstring JNICALL Java_as_op_lib_HelloJni_stringFromJNI(JNIEnv* env, jobject thiz)
	{
		
	void *handle;
	handle = dlopen("libtest.so", RTLD_LAZY);
	
	
	if(handle==NULL)
	{
		return env->NewStringUTF("hanlde无效");
	}
	
	
	myadd sadd=(myadd)dlsym(handle, "add");

	eat myeat=(eat)dlsym(handle,"eat");
	
	jstring  a=myeat(env);
	
	char *result= sadd("hello","...6");

	//dlclose(handle);
	
		//return dlerror();
		
		return a;
		//env->NewStringUTF(result);
	}
}


