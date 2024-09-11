
echo "-----------------------------------EJERICICIO 1------------------------------------------------------------"
 grep "model name" /proc/cpuinfo

echo "-----------------------------------EJERICICIO 2------------------------------------------------------------"
 
  grep "model name" /proc/cpuinfo | wc -l

echo "-----------------------------------EJERICICIO 3------------------------------------------------------------"
wget https://raw.githubusercontent.com/dariomalchiodi/superhero-datascience/master/content/data/heroes.csv | cut - d ',' -f2 heroes.csv| tr '[:upper:]' '[:lower:]' | tr -d ' ' 


echo "-----------------------------------EJERICICIO 4------------------------------------------------------------"

sort -k6,6n weather_cordoba.in | head -n 1 | awk '{print $1, $2, $3}'; sort -k5,5n weather_cordoba.in| tail -n 1 |  awk '{print $1, $2, $3}'


echo "-----------------------------------EJERICICIO 5------------------------------------------------------------"

sort -k3,3nr atpplayers.in


echo "-----------------------------------EJERICICIO 6------------------------------------------------------------"
awk '{ print $1 , $2, $7-$8  }' superliga.in | sort -k2,2nr -k3,3nr
echo "-----------------------------------EJERICICIO 7------------------------------------------------------------"
ip link show | grep -0 "link/ether"



echo "-----------------------------------EJERICICIO 8------------------------------------------------------------"
echo "-----------------------------------PUNTO A------------------------------------------------------------"
mkdir serie
cd serie
for i in {1..10}; do touch "fma_S01E${i}_es.srt"; done
ls -R
echo "-----------------------------------PUNTO B------------------------------------------------------------"


for file in *_es.srt; do mv "$file" "${file/_es.srt/.srt}"; done

ls -R 

echo "-----------------------------------EJERICICIO 9------------------------------------------------------------"
ffmpeg -i prueba.mp4 -ss 00:00:05 -t 00:00:50 -c copy prueba2.mp4
