from pdf2image import convert_from_path
import sys

#using python module:pdf2img to convert pdf to image

images = convert_from_path(sys.argv[1])
for i in range(0,len(images)):
    images[i].save('./page/page'+ str(i) +'.png', 'PNG')
