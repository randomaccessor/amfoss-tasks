import pytesseract
from PIL import Image

img = Image.open('Image.png')
text_in_image = pytesseract.image_to_string(img)
ans = eval(text_in_image)
print(text_in_image)
print(ans)

