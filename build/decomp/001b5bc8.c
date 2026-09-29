// OoT3D decomp @ 001b5bc8  name=FUN_001b5bc8  size=584

void FUN_001b5bc8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;

  FUN_0037632c(param_1,param_1 + 0x1a4);
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a4);
  FUN_00376864(param_1);
  uVar2 = DAT_001b5e14;
  FUN_00376340(DAT_001b5e14,DAT_001b5e14,DAT_001b5e14,param_2,param_1,4);
  uVar5 = DAT_001b5e24;
  fVar4 = DAT_001b5e20;
  fVar9 = DAT_001b5e1c;
  piVar3 = DAT_001b5e18;
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001b5e18 + 0xcb6),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_0036fc20(DAT_001b5e24,DAT_001b5e20 + fVar9 * DAT_001b5e1c,param_1 + 0xc4);
  }
  else {
    iVar6 = FUN_00341df0(param_2 + 0xa98,*(undefined4 *)(param_1 + 0x7c),
                         *(undefined1 *)(param_1 + 0x81));
    if (iVar6 == 1) {
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0xcb6),
                                         (byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0xcb4),
                                         (byte)(in_fpscr >> 0x15) & 3);
      FUN_00373500(fVar8 + DAT_001b5e28,uVar5,fVar4 + fVar7 * fVar9,param_1 + 0xc4);
    }
  }
  iVar6 = FUN_003731e0(param_1 + 0x1fc);
  if (iVar6 != 0) {
    FUN_003478b0(uVar2,param_1 + 0x1fc);
  }
  (**(code **)(param_1 + 0x70c))(param_1,param_2);
  uVar2 = DAT_001b5e2c;
  if ((*(ushort *)(param_1 + 0x704) & 1) == 0) {
    FUN_00375a18(param_1 + 0x6f8,0,6,DAT_001b5e2c,100);
    FUN_00375a18(param_1 + 0x6fa,0,6,uVar2,100);
    FUN_00375a18(param_1 + 0x6fe,0,6,uVar2,100);
    FUN_00375a18(param_1 + 0x700,0,6,uVar2,100);
  }
  else {
    FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                 *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x6f8,param_1 + 0x6fe,
                 0x4300);
  }
  *(ushort *)(param_1 + 0x704) = *(ushort *)(param_1 + 0x704) & 0xfffe;
  if ((*(short *)(param_1 + 0x708) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x708) + -1, *(short *)(param_1 + 0x708) = sVar1, sVar1 != 0)) {
    *(short *)(param_1 + 0x706) = *(short *)(param_1 + 0x708);
    if (2 < *(short *)(param_1 + 0x708)) {
      *(undefined2 *)(param_1 + 0x706) = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x3c);
}
