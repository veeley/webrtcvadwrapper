/*
 * Copyright @ 2019-Present 8x8, Inc
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jitsi_webrtcvadwrapper_WebRTCVad */

#ifndef _Included_org_jitsi_webrtcvadwrapper_WebRTCVad
#define _Included_org_jitsi_webrtcvadwrapper_WebRTCVad
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jitsi_webrtcvadwrapper_WebRTCVad
 * Method:    nativeOpen
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_org_jitsi_webrtcvadwrapper_WebRTCVad_nativeOpen
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     org_jitsi_webrtcvadwrapper_WebRTCVad
 * Method:    nativeClose
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jitsi_webrtcvadwrapper_WebRTCVad_nativeClose
  (JNIEnv *, jobject);

/*
 * Class:     org_jitsi_webrtcvadwrapper_WebRTCVad
 * Method:    nativeIsOpen
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_org_jitsi_webrtcvadwrapper_WebRTCVad_nativeIsOpen
  (JNIEnv *, jobject);

/*
 * Class:     org_jitsi_webrtcvadwrapper_WebRTCVad
 * Method:    nativeIsSpeech
 * Signature: ([I)I
 */
JNIEXPORT jint JNICALL Java_org_jitsi_webrtcvadwrapper_WebRTCVad_nativeIsSpeech
  (JNIEnv *, jobject, jintArray);

#ifdef __cplusplus
}
#endif
#endif