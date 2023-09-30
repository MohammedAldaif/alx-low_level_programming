#!/bin/bash

echo "enter your commit msg:"
read msg
git add .
if [ -z "$msg" ]
then 
	git commit -m "default commit msg"
else 
	git commit -m "$msg"
fi
git push
