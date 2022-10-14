################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Game/entities/Hero.cpp \
../src/Game/entities/Wheel.cpp 

CPP_DEPS += \
./src/Game/entities/Hero.d \
./src/Game/entities/Wheel.d 

OBJS += \
./src/Game/entities/Hero.o \
./src/Game/entities/Wheel.o 


# Each subdirectory must supply rules for building sources it contributes
src/Game/entities/%.o: ../src/Game/entities/%.cpp src/Game/entities/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-Game-2f-entities

clean-src-2f-Game-2f-entities:
	-$(RM) ./src/Game/entities/Hero.d ./src/Game/entities/Hero.o ./src/Game/entities/Wheel.d ./src/Game/entities/Wheel.o

.PHONY: clean-src-2f-Game-2f-entities

