#include <jni.h>
#include <string>

JNIEXPORT jstring JNICALL
Java_com_bandonleon_ndkskeleton_MainActivity_getOutputString(JNIEnv *env, jobject instance) {
    std::string returnValue = "Hello from native land!";
    return env->NewStringUTF(returnValue.c_str());
}