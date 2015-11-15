#include <jni.h>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT jstring JNICALL
Java_com_bandonleon_ndkskeleton_MainActivity_getOutputString(JNIEnv *env, jobject instance) {
    std::string returnValue = "Hello from native land!";
    return env->NewStringUTF(returnValue.c_str());
}

#ifdef __cplusplus
}
#endif
