//
// Created by DengJf on 2017/10/10.
//
#include "JniTest.h"
#include <stdio.h>

JNIEXPORT jstring JNICALL Java_com_jnidemo_JniUntil_getString
        (JNIEnv * env, jobject obj,jstring str){
    //以UTF编码格式将jstrng对象转换成char型
    char *a= (*env)->GetStringUTFChars(env, str, 0);
    //将char型转换回jstring返回给Java
    return (*env)->NewStringUTF(env,a);
}

JNIEXPORT jint JNICALL Java_com_jnidemo_JniUntil_sum
        (JNIEnv * env,jobject obj,jint a,jint b){
    return a+b;
}

JNIEXPORT jint JNICALL Java_com_jnidemo_JniUntil_sumArray
        (JNIEnv *env,jobject obj,jintArray array){
    int sum=0;
    //获取数组长度
    jsize length=(*env)->GetArrayLength(env,array);
    //获取数组地址
    jint *c_array=(*env)->GetIntArrayElements(env,array,0);

    for (int i=0;i<length;i++){
        sum=sum+c_array[i];
    }
    return sum;
};
