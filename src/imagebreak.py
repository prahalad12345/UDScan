from Katna.video import Video
from Katna.writer import KeyFrameDiskWriter
import cv2
import sys
'''
Using katna library in python to obtain key frames from a video file
'''
vd=Video()
diskwriter=KeyFrameDiskWriter(location='./page/')
vd.extract_video_keyframes(no_of_frames = 20, file_path=sys.argv[1],writer=diskwriter)
