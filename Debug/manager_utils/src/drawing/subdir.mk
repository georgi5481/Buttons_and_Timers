################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../manager_utils/src/drawing/Image.cpp \
../manager_utils/src/drawing/Text.cpp \
../manager_utils/src/drawing/Widget.cpp 

CPP_DEPS += \
./manager_utils/src/drawing/Image.d \
./manager_utils/src/drawing/Text.d \
./manager_utils/src/drawing/Widget.d 

OBJS += \
./manager_utils/src/drawing/Image.o \
./manager_utils/src/drawing/Text.o \
./manager_utils/src/drawing/Widget.o 


# Each subdirectory must supply rules for building sources it contributes
manager_utils/src/drawing/%.o: ../manager_utils/src/drawing/%.cpp manager_utils/src/drawing/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-manager_utils-2f-src-2f-drawing

clean-manager_utils-2f-src-2f-drawing:
	-$(RM) ./manager_utils/src/drawing/Image.d ./manager_utils/src/drawing/Image.o ./manager_utils/src/drawing/Text.d ./manager_utils/src/drawing/Text.o ./manager_utils/src/drawing/Widget.d ./manager_utils/src/drawing/Widget.o

.PHONY: clean-manager_utils-2f-src-2f-drawing

