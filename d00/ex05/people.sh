ldapsearch -LLL -Q 'uid=z*' cn | grep cn | cut -s -d ' ' -f 2-3 | sort -r -f
