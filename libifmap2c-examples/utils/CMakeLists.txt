# COPYRIGHT AND PERMISSION NOTICE
# 
# Copyright (c) 2010, 2011 Arne Welzel, <arne.welzel@googlemail.com>
#               
# All rights reserved.
#               
# Permission to use, copy, modify, and distribute this software for any purpose
# with or without fee is hereby granted, provided that the above copyright
# notice and this permission notice appear in all copies.
#      
# THE SOFTWARE IS PROVIDED AS IS, WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF THIRD PARTY RIGHTS. IN
# NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
# DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
# OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
# OR OTHER DEALINGS IN THE SOFTWARE.
#              
# Except as contained in this notice, the name of a copyright holder shall not
# be used in advertising or otherwise to promote the sale, use or other dealings
# in this Software without prior written authorization of the copyright holder.
#
ADD_EXECUTABLE(ar-ar ar-ar.cpp)
ADD_EXECUTABLE(ip-mac ip-mac.cpp)
ADD_EXECUTABLE(ar-mac ar-mac.cpp)
ADD_EXECUTABLE(dev-ip dev-ip.cpp)
ADD_EXECUTABLE(dev-attr dev-attr.cpp)
ADD_EXECUTABLE(auth-by auth-by.cpp)
ADD_EXECUTABLE(ar-dev ar-dev.cpp)
ADD_EXECUTABLE(ar-cap ar-cap.cpp)
ADD_EXECUTABLE(ar-ip ar-ip.cpp)
ADD_EXECUTABLE(layer2-info layer2-info.cpp)
ADD_EXECUTABLE(purge purge.cpp)
ADD_EXECUTABLE(ip-disc-by ip-disc-by.cpp)
ADD_EXECUTABLE(mac-disc-by mac-disc-by.cpp)
ADD_EXECUTABLE(role role.cpp)

TARGET_LINK_LIBRARIES(ar-ar ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(ip-mac ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(ar-mac ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(dev-ip ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(dev-attr ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(auth-by ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(ar-dev ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(ar-cap ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(ar-ip ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(layer2-info ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(purge ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(ip-disc-by ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(mac-disc-by ${LIBIFMAP2C_LIBRARIES} common)
TARGET_LINK_LIBRARIES(role ${LIBIFMAP2C_LIBRARIES} common)
