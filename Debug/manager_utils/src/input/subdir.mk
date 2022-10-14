################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../manager_utils/src/input/ButtonBase.cpp 

CPP_DEPS += \
./manager_utils/src/input/ButtonBase.d 

OBJS += \
./manager_utils/src/input/ButtonBase.o 


# Each subdirectory must supply rules for building sources it contributes
manager_utils/src/input/%.o: ../manager_utils/src/input/%.cpp manager_utils/src/input/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-manager_utils-2f-src-2f-input

clean-manager_utils-2f-src-2f-input:
	-$(RM) ./manager_utils/src/input/ButtonBase.d ./manager_utils/src/input/ButtonBase.o

.PHONY: clean-manager_utils-2f-src-2f-input

