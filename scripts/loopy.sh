#!/bin/sh

for file in $(find protocols -type f -name "*.xml"); do
    if [ -f "$file" ]; then
        folder=$(dirname "$file")
        folder_to_protocols=glue$(echo "$folder" | awk -F'/' '{$1=""; print $0}' | sed 's/ /\//g')
        mkdir -p "$folder_to_protocols"
        hyprwayland-scanner "$file" "$folder_to_protocols"
        mkdir "$folder_to_protocols/client"
        hyprwayland-scanner "$file" "$folder_to_protocols/client" --client
        echo "$file: $folder_to_protocols"
    fi
done