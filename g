#!/bin/bash
echo "your commit msg : "
read msg
git add .
git commit -m "Add: task $msg files"
git push

