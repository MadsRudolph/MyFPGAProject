#!/bin/bash

# Check for project name argument
if [ -z "$1" ]; then
    echo "Usage: $0 <project_name>"
    exit 1
fi

PROJECT_NAME=$1
mkdir -p "$PROJECT_NAME"/{build,constraints,project_files,sim,src/components,src/modules,src/testbenches}

echo "✅ Created folder structure for '$PROJECT_NAME':"
tree -L 3 "$PROJECT_NAME"
