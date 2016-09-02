cat /etc/passwd | grep -v '#' | awk 'NR%2==1' | cut -d ":" -f 1 | rev | sort -r -d | sed -n "8,16 p" | xargs | sed "s/ /, /g" | sed "s/$/./" | tr -d "\n"
