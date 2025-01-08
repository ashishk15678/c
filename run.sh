#!/bin/bash

# Check if the input file is provided


if [ -z "$1" ]; then
    echo "Usage: $0 <source_file.c>"
    exit 1
fi

# Get the input file name
SOURCE_FILE=$1

# Check if the source file exists
if [ ! -f "$SOURCE_FILE" ]; then
    echo "Error: File '$SOURCE_FILE' not found!"
    exit 1
fi

# Create the output directory if it doesn't exist
OUTPUT_DIR="./output"
mkdir -p $OUTPUT_DIR

# Get the base name of the source file (without extension)
BASE_NAME=$(basename "$SOURCE_FILE" .c)

# Compile the source file
gcc "$SOURCE_FILE" -o "$OUTPUT_DIR/$BASE_NAME"

# Check if the compilation was successful
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi

# Run the compiled program
"$OUTPUT_DIR/$BASE_NAME"