// OoT3D decomp @ 003f0ae0  name=FUN_003f0ae0  size=484

void FUN_003f0ae0(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;

  iVar6 = *(int *)(DAT_003f0cc4 + param_2);
  iVar4 = FUN_0036bc98(param_1);
  uVar2 = DAT_003f0cc8;
  uVar1 = (undefined2)DAT_003f0cc8;
  if (iVar4 == 0) {
    sVar3 = FUN_0036bba8(param_2,0x1a);
    *(short *)(param_1 + 0x116) = sVar3;
    if (sVar3 == 0) {
      *(undefined2 *)(param_1 + 0x116) = uVar1;
    }
    if (DAT_003f0d0c <
        (int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x2150U) {
      return;
    }
    if (DAT_003f0d10 <= *(int *)(param_1 + 0x98)) {
      return;
    }
    FUN_0036bbd0(DAT_003f0d14,param_1,param_2,0xd);
    *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) | 1;
    return;
  }
  iVar4 = FUN_0036bc84(param_2);
  uVar5 = DAT_003f0ccc;
  if (*(ushort *)(param_1 + 0x116) == uVar2) {
    if (*(char *)((uint)*(byte *)(DAT_003f0cd4 + 0x30) + DAT_003f0cd8) == '6') {
      *(short *)(DAT_003f0cd0 + iVar6) = (short)DAT_003f0cdc;
    }
    else {
      if (iVar4 == 0) {
        sVar3 = *(short *)(param_1 + 0x838);
        if (7 < sVar3) {
          if ((*(ushort *)(DAT_003f0ce0 + 10) & 1) == 0) {
            *(short *)(DAT_003f0cd0 + iVar6) = (short)DAT_003f0ce8;
            *(undefined4 *)(param_1 + 0x83c) = DAT_003f0cec;
            *(undefined2 *)(param_1 + 0x838) = 0;
            return;
          }
          *(short *)(DAT_003f0cd0 + iVar6) = (short)DAT_003f0ce4;
          goto LAB_003f0b54;
        }
        if (sVar3 != 0) {
          *(short *)(DAT_003f0cd0 + iVar6) = sVar3 + 0x406c;
          goto LAB_003f0b54;
        }
      }
      else if (iVar4 == 0xd) {
        *(short *)(DAT_003f0cd0 + iVar6) = (short)DAT_003f0cf0;
        *(undefined4 *)(param_1 + 0x83c) = DAT_003f0cf4;
        uVar5 = FUN_0036ae14(param_1 + 0x1fc,0);
        uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        FUN_00375c08(DAT_003f0d00,DAT_003f0cfc,uVar5,DAT_003f0cf8,param_1 + 0x1fc,0,2);
        uVar5 = DAT_003f0d08;
        *(ushort *)(param_1 + 0x836) = *(ushort *)(param_1 + 0x836) & 0xfffd;
        *(undefined2 *)(DAT_003f0d04 + 0x62) = 0;
        FUN_00372244(param_2 + 0x5fcc,0x1e,uVar5);
        return;
      }
      *(undefined2 *)(DAT_003f0cd0 + iVar6) = uVar1;
    }
  }
  else {
    *(ushort *)(DAT_003f0cd0 + iVar6) = *(ushort *)(param_1 + 0x116);
  }
LAB_003f0b54:
  *(undefined4 *)(param_1 + 0x83c) = uVar5;
  return;
}
