nmap -p 5900 $(ip addr show eth0 | grep "inet " | awk '{print $2}' | cut -d/ -f1 | awk -F. '{print $1"."$2"."$3".0/24"}') --open | grep "Nmap scan report for " | awk '{print $NF}'

