// OoT3D decomp @ 0033603c  name=FUN_0033603c  size=520

undefined4 FUN_0033603c(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;

  iVar2 = DAT_00336254;
  iVar3 = DAT_00336244;
  if (((int)*(char *)(param_1 + 0x1a9) - 9U < 6) && (*(short *)(DAT_00336244 + 0x80) != 0)) {
    FUN_0037547c(DAT_00336250,0,4,DAT_0033624c,DAT_0033624c,DAT_00336248);
    return 0;
  }
  uVar6 = *(uint *)(param_1 + 0x29b8) & 0xffffffbf;
  *(uint *)(param_1 + 0x29b8) = uVar6;
  iVar5 = *(int *)(param_1 + 0x2210);
  iVar7 = iVar2;
  if (iVar5 != iVar2) {
    iVar7 = DAT_00336258;
  }
  if (iVar5 == iVar2 || iVar5 == iVar7) {
    *(uint *)(param_1 + 0x29b8) = uVar6 | 0x40;
  }
  FUN_0035d27c(param_1,DAT_0033625c);
  fVar1 = DAT_00336264;
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x200;
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00336260 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x2218) = (short)(int)(fVar1 / fVar8 + DAT_00336268);
  iVar2 = (int)*(short *)(param_1 + 0x2248);
  if (-1 < iVar2) {
    if (iVar2 != 0) {
      FUN_0036f59c(param_1,*(undefined4 *)(DAT_0033626c + iVar2 * 4));
    }
    iVar2 = FUN_00355a60(param_1);
    if (iVar2 == 0) {
      if (*(int *)(DAT_00336270 + 4) == 0) {
        iVar2 = 3;
        if ((*(uint *)(param_1 + 0x1710) & 0x800000) == 0) {
          iVar7 = *(char *)(param_1 + 0x1a9) + -6;
        }
        else {
          iVar7 = 1;
        }
      }
      else {
        iVar2 = 6;
        iVar7 = 9;
      }
      if (*(short *)(iVar3 + 0x94) == 1) {
        uVar6 = (uint)*(ushort *)(DAT_00336274 + param_2);
      }
      else {
        uVar6 = (uint)*(char *)(DAT_00336278 + param_2);
        if (uVar6 == 0) {
          uVar6 = (uint)*(char *)((uint)*(byte *)(DAT_0033627c + iVar2) + DAT_00336280);
        }
      }
      if ((0 < (int)uVar6) && (-1 < *(short *)(param_1 + 0x2248))) {
        iVar3 = iVar7 + -3;
        if ((-1 < iVar3) &&
           ((iVar3 < 3 &&
            (iVar3 = FUN_003318bc(param_2,*(undefined1 *)(DAT_00336284 + iVar3),0), iVar3 == 0)))) {
          iVar7 = 2;
        }
        uVar4 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x16,0
                             ,(int)*(short *)(param_1 + 0xbe),0,(int)(short)iVar7);
        *(undefined4 *)(param_1 + 0x1224) = uVar4;
      }
    }
  }
  return 1;
}
