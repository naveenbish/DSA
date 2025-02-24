#!/bin/bash

# Run TypeScript build
tsc -b

# Check if build was successful
if [ $? -ne 0 ]; then
  echo "❌ TypeScript build failed. Exiting..."
  exit 1
fi

# Check if a file path argument is provided
if [ -z "$1" ]; then
  echo "❌ Error: No JavaScript file provided!"
  echo "Usage: ./run-ts.sh <compiled-js-file-path>"
  exit 1
fi

# Assign the first argument as the JavaScript file path
jsPath="$1"

# Check if the file exists
if [ ! -f "$jsPath" ]; then
  echo "❌ Error: File '$jsPath' not found!"
  exit 1
fi

# Run the JavaScript file using Node.js
node "$jsPath"
