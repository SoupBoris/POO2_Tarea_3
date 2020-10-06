#!/usr/bin/env bash

project_name=task_3
source_code='my_linked_list.h'
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}