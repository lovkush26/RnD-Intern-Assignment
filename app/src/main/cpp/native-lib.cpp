#include <jni.h>
#include <opencv2/opencv.hpp>

extern "C" JNIEXPORT void JNICALL
Java_com_example_rndedgeapp_NativeBridge_processFrame(JNIEnv* env, jclass clazz,
                                                      jbyteArray yuvArray, jint width, jint height,
                                                      jbyteArray outRgba) {}
