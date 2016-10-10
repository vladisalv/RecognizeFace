#include <jni.h>
#include <string>

extern "C"
jstring
Java_vladisalv_recognizeface_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "I will recognize your face!";
    return env->NewStringUTF(hello.c_str());
}
