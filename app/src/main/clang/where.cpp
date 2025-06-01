// Write C++ code here.
//
// Do not forget to dynamically load the C++ library into your application.
//
// For instance,
//
// In MainActivity.java:
//    static {
//       System.loadLibrary("where");
//    }
//
// Or, in MainActivity.kt:
//    companion object {
//      init {
//         System.loadLibrary("where")
//      }
//    }


#include <jni.h>

extern "C" {
JNIEXPORT jstring JNICALL
Java_com_meyou_where_Home_httpUrl(JNIEnv *env, [[maybe_unused]] jclass type) {
    return env->NewStringUTF("https://bydengjie.com/Where");
}


JNIEXPORT jstring JNICALL
Java_com_meyou_where_Home_downloadUrl(JNIEnv *env, [[maybe_unused]] jclass type) {
    return env->NewStringUTF("https://bydengjie.com/APKS/Where.apk");
}


JNIEXPORT jstring JNICALL
Java_com_meyou_where_Home_proName(JNIEnv *env, [[maybe_unused]] jclass type) {
    return env->NewStringUTF("InstallFileProvider");
}

}


