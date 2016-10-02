
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES := add.c \
	main.c \
	state.c \
    show.S \
	strcopy.S

LOCAL_MODULE := ASSEMBLY

LOCAL_MODULE_TAGS := optional

include $(BUILD_EXECUTABLE)
