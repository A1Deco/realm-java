/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_tightdb_Version */

#ifndef _Included_com_tightdb_Version
#define _Included_com_tightdb_Version
#ifdef __cplusplus
extern "C" {
#endif
#undef com_tightdb_Version_CORE_MIN_MAJOR
#define com_tightdb_Version_CORE_MIN_MAJOR 0L
#undef com_tightdb_Version_CORE_MIN_MINOR
#define com_tightdb_Version_CORE_MIN_MINOR 1L
#undef com_tightdb_Version_CORE_MIN_PATCH
#define com_tightdb_Version_CORE_MIN_PATCH 6L
#undef com_tightdb_Version_REQUIRED_JNI_VERSION
#define com_tightdb_Version_REQUIRED_JNI_VERSION 23L
/*
 * Class:     com_tightdb_Version
 * Method:    nativeGetVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_tightdb_Version_nativeGetVersion
  (JNIEnv *, jclass);

/*
 * Class:     com_tightdb_Version
 * Method:    nativeHasFeature
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Version_nativeHasFeature
  (JNIEnv *, jclass, jint);

/*
 * Class:     com_tightdb_Version
 * Method:    nativeIsAtLeast
 * Signature: (III)Z
 */
JNIEXPORT jboolean JNICALL Java_com_tightdb_Version_nativeIsAtLeast
  (JNIEnv *, jclass, jint, jint, jint);

/*
 * Class:     com_tightdb_Version
 * Method:    nativeGetAPIVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_tightdb_Version_nativeGetAPIVersion
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif