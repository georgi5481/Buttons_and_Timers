################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Engine/Engine.cpp \
../src/Engine/EngineConfigLoader.cpp 

CPP_DEPS += \
./src/Engine/Engine.d \
./src/Engine/EngineConfigLoader.d 

OBJS += \
./src/Engine/Engine.o \
./src/Engine/EngineConfigLoader.o 


# Each subdirectory must supply rules for building sources it contributes
src/Engine/%.o: ../src/Engine/%.cpp src/Engine/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-Engine

clean-src-2f-Engine:
	-$(RM) ./src/Engine/Engine.d ./src/Engine/Engine.o ./src/Engine/EngineConfigLoader.d ./src/Engine/EngineConfigLoader.o

.PHONY: clean-src-2f-Engine

