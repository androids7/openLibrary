
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_CPP_EXTENSION := .cpp .cc
LOCAL_MODULE    := hello-jni
LOCAL_SRC_FILES := hello-jni.cpp

LOCAL_CFLAGS += -ldl


ifeq ($(TARGET_ARCH_ABI),x86)
    LOCAL_CFLAGS += -ffast-math -mtune=atom -mssse3 -mfpmath=sse
endif

include $(BUILD_SHARED_LIBRARY)




include $(CLEAR_VARS)

LOCAL_CPP_EXTENSION := .cpp .cc
LOCAL_MODULE    := test
LOCAL_SRC_FILES := test.cpp

#LOCAL_CFLAGS += -ldl


include $(BUILD_SHARED_LIBRARY)

