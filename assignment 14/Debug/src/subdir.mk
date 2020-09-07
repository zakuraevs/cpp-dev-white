################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/assignment\ 14.cpp 

OBJS += \
./src/assignment\ 14.o 

CPP_DEPS += \
./src/assignment\ 14.d 


# Each subdirectory must supply rules for building sources it contributes
src/assignment\ 14.o: ../src/assignment\ 14.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/assignment 14.d" -MT"src/assignment\ 14.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


