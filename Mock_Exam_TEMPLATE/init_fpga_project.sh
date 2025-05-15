#!/bin/bash

echo "🛠 Creating standard directories..."
mkdir -p build constraints project_files sim src/{components,modules,testbenches}

echo "📂 Looking for source files inside subfolders..."

# Move VHDL files
find . -type f -iname "*.vhd" -exec mv -v {} src/modules/ \;

# Project config files
find . -type f \( -iname "*.xise" -o -iname "*.xst" -o -iname "*.prj" \) -exec mv -v {} project_files/ \;

# Constraints
find . -type f -iname "*.ucf" -exec mv -v {} constraints/ \;

# Build artifacts
find . -type f \( -iname "*.bit" -o -iname "*.bin" -o -iname "*.ngc" -o -iname "*.ngd" -o -iname "*.ncd" \) -exec mv -v {} build/ \;

echo "✅ File sorting done."

# Prompt for folder deletion
read -p "❗ Delete leftover folders now? (y/N): " confirm
if [[ "$confirm" =~ ^[Yy]$ ]]; then
  echo "Deleting folders except the new structure..."
  find . -maxdepth 1 -type d ! -name '.' ! -name 'src' ! -name 'build' ! -name 'sim' ! -name 'project_files' ! -name 'constraints' -exec rm -rf {} +
fi

echo "🎉 All done."

