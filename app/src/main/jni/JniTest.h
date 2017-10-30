//
// Created by DengJf on 2017/10/10.
//

#ifndef JNITEST_JNITEST_H
#define JNITEST_JNITEST_H

#endif

#include <jni.h>

#ifndef _Included_com_jnidemo_JniUntil
#define _Included_com_jnidemo_JniUntil
#ifdef __cplusplus
extern "C" {
#endif
JNIEXPORT jstring JNICALL Java_com_jnidemo_JniUntil_getString
        (JNIEnv * env, jobject obj,jstring str);
JNIEXPORT jint JNICALL Java_com_jnidemo_JniUntil_sum
        (JNIEnv * env,jobject obj,jint a,jint b);
JNIEXPORT jint JNICALL Java_com_jnidemo_JniUntil_sumArray
        (JNIEnv *env,jobject obj,jintArray array);
#ifdef __cplusplus
}
#endif
#endif