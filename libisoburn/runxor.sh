#! /bin/bash


scriptfile=`readlink -f $0`
scriptdir=`dirname $scriptfile`
updir=`dirname "$scriptdir/.."`
export LD_LIBRARY_PATH=$scriptdir/libisoburn/.libs:$updir/libisofs/libisofs/.libs
export XO_LOG_LEVEL=50
#sudo  -E LD_LIBRARY_PATH=$scriptdir/libisoburn/.libs:$updir/libisofs/libisofs/.libs $scriptdir/xorriso/.libs/xorriso -as mkisofs -D -r -J -joliet-long -l -V "TINYPLUS" -b /mnt/iso/boot/isolinux/isolinux.bin -c /mnt/iso/boot/isolinux/boot.cat -iso-level 3 -no-emul-boot -partition_offset 16 -boot-load-size 4 -boot-info-table -isohybrid-mbr /home/bt/sources/tinycore/tinycore/boot/isolinux/isohdpfx.bin -o /mnt/zdisk/tinycoreplus.iso /mnt/iso
#sudo  -E LD_LIBRARY_PATH=$scriptdir/libisoburn/.libs:$updir/libisofs/libisofs/.libs $scriptdir/xorriso/.libs/xorriso -as mkisofs -D -r -J -joliet-long -l -V "TINYPLUS" -b boot/isolinux/isolinux.bin -c /mnt/iso/boot/isolinux/boot.cat -iso-level 3 -no-emul-boot -partition_offset 16 -boot-load-size 4 -boot-info-table -isohybrid-mbr /home/bt/sources/tinycore/tinycore/boot/isolinux/isohdpfx.bin -o /mnt/zdisk/tinycoreplus.iso /mnt/iso
sudo  -E LD_LIBRARY_PATH=$scriptdir/libisoburn/.libs:$updir/libisofs/libisofs/.libs $scriptdir/xorriso/.libs/xorriso -as mkisofs -D -r -J -joliet-long -l -V "TINYPLUS" -b boot/isolinux/isolinux.bin -c boot/isolinux/boot.cat -iso-level 3 -no-emul-boot -partition_offset 16 -boot-load-size 4 -boot-info-table -isohybrid-mbr /home/bt/sources/tinycore/tinycore/boot/isolinux/isohdpfx.bin -o /mnt/zdisk/tinycoreplus.iso /mnt/iso