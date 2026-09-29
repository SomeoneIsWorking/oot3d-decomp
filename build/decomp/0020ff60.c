// OoT3D decomp @ 0020ff60  name=FUN_0020ff60  size=412

void FUN_0020ff60(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_00210124);
  FUN_00372d4c(DAT_00210130,DAT_00210128,param_1 + 0xbc,DAT_0021012c);
  FUN_00372f38(param_1,param_2,param_1 + 0x7ac,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1c8,0,0,param_1 + 600,param_1 + 0x4c8,0xc);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0x73c,param_1,DAT_00210134,param_1 + 0x75c);
  FUN_00350d20(param_1 + 0xa0,DAT_00210138 + 0x18);
  if (((int)(short)*(ushort *)(param_1 + 0x1c) & 0x8000U) != 0) {
    *(undefined4 *)(param_1 + 0x140) = DAT_0021013c;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x7fff;
  }
  uVar1 = DAT_00210140;
  if (*(short *)(param_1 + 0x1c) < 2) {
    *(undefined1 *)(param_1 + 0x251) = 1;
    *(undefined4 *)(param_1 + 0x24c) = uVar1;
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0x14,0x3c);
  }
  *(undefined1 *)(param_1 + 0x251) = 0;
  if (*(short *)(param_1 + 0x1c) == 3) {
    *(undefined4 *)(param_1 + 0x24c) = DAT_0021014c;
  }
  else {
    *(undefined4 *)(param_1 + 0x24c) = uVar1;
    if (*(short *)(param_1 + 0x1c) == 4) {
      *(undefined1 *)(*(int *)(param_1 + 0x758) + 4) = 2;
      *(undefined1 *)(param_1 + 0x123) = 0x56;
      goto LAB_002100e8;
    }
  }
  *(undefined1 *)(*(int *)(param_1 + 0x758) + 4) = 0;
  *(undefined1 *)(param_1 + 0x123) = 0x12;
LAB_002100e8:
  *(float *)(param_1 + 0x738) = *(float *)(param_1 + 0xc) + DAT_00210150;
  if (*(short *)(param_1 + 0x1c) == 4) {
    *(undefined1 *)(param_1 + 0x250) = 2;
  }
  else {
    *(undefined1 *)(param_1 + 0x250) = 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x758) + 0x44) =
       *(undefined4 *)(*(int *)(DAT_00210134 + 0xc) + 0x28);
  return;
}
