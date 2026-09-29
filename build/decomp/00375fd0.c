// OoT3D decomp @ 00375fd0  name=FUN_00375fd0  size=308

void FUN_00375fd0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  puVar3 = *(uint **)(param_2 + 0x24);
  if (puVar3 == (uint *)0x0) {
LAB_00375fe4:
    *(undefined1 *)(param_1 + 0x122) = 0;
    return;
  }
  if ((param_3 != 0) && ((*puVar3 & DAT_00376110) != 0)) {
    fVar4 = (float)VectorUnsignedToFloat
                             ((uint)*(byte *)((int)puVar3 + 5),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00376108 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x118) = (short)(int)((fVar4 * DAT_00376104) / fVar5 + DAT_0037610c);
    *(undefined1 *)(param_1 + 0x122) = 0;
    return;
  }
  uVar2 = *puVar3;
  if ((uVar2 & 0x800) == 0) {
    if ((uVar2 & 0x1000) == 0) {
      if ((uVar2 & 0x4000) == 0) {
        if ((uVar2 & 0x8000) == 0) {
          if ((uVar2 & 0x10000) == 0) {
            if ((uVar2 & 0x2000) == 0) {
              if ((uVar2 & 0x80000) != 0) {
                if (param_3 != 0) {
                  fVar4 = (float)VectorUnsignedToFloat
                                           ((uint)*(byte *)((int)puVar3 + 5),
                                            (byte)(in_fpscr >> 0x15) & 3);
                  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00376108 + 0x110),
                                                     (byte)(in_fpscr >> 0x15) & 3);
                  *(short *)(param_1 + 0x118) =
                       (short)(int)((fVar4 * DAT_00376104) / fVar5 + DAT_0037610c);
                }
                *(undefined1 *)(param_1 + 0x122) = 0x40;
                return;
              }
              goto LAB_00375fe4;
            }
            uVar1 = 0x20;
          }
          else {
            uVar1 = 0x10;
          }
        }
        else {
          uVar1 = 8;
        }
      }
      else {
        uVar1 = 4;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x122) = uVar1;
  return;
}
