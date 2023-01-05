from launch import LaunchDescription
from launch_ros.actions import Node




def generate_launch_description():
    imgpre=Node(
        package="image",
        executable="imgpre"
        
    )

    video_mid=Node(
        package="ved_select",
        executable="video_mid",
        output='screen'
    )

    video_kmf=Node(
        package="video_kmf",
        executable="video_kmf",
        output='screen'
    )
    #launch文件 先用Node赋值三个节点，再用LaunchDescription 注意generate_launch_description这个函数名字别错了
    launch_description = LaunchDescription([imgpre, video_mid, video_kmf])

    return launch_description