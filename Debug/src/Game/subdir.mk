################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Game/Game.cpp 

CPP_DEPS += \
./src/Game/Game.d 

OBJS += \
./src/Game/Game.o 


# Each subdirectory must supply rules for building sources it contributes
src/Game/%.o: ../src/Game/%.cpp src/Game/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/SDL2 -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src-2f-Game

clean-src-2f-Game:
	-$(RM) ./src/Game/Game.d ./src/Game/Game.o

.PHONY: clean-src-2f-Game

