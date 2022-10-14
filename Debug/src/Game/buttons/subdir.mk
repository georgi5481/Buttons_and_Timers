################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Game/buttons/WheelButton.cpp 

CPP_DEPS += \
./src/Game/buttons/WheelButton.d 

OBJS += \
./src/Game/buttons/WheelButton.o 


# Each subdirectory must supply rules for building sources it contributes
src/Game/buttons/%.o: ../src/Game/buttons/%.cpp src/Game/buttons/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-Game-2f-buttons

clean-src-2f-Game-2f-buttons:
	-$(RM) ./src/Game/buttons/WheelButton.d ./src/Game/buttons/WheelButton.o

.PHONY: clean-src-2f-Game-2f-buttons

