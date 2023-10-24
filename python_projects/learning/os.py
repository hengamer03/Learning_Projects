import os
import platform
import psutil
import datetime
from prettytable import PrettyTable

hostname = platform.node()
system = platform.system()
architecture = platform.machine()
disk = psutil.disk_usage('/')
list = PrettyTable()
date = datetime.datetime.now()

list.field_names = ["Hostname", "system type", "architecture", "disk usage percent"]
list.add_rows(
    [
        [hostname, system, architecture, disk.percent]
    ]
)


file = open("system_monitor.txt", "w")
file.write(str(date) + "\n")
file.write(str(list) + "\n")
file.close()