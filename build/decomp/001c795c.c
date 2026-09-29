// OoT3D decomp @ 001c795c  name=FUN_001c795c  size=536

void FUN_001c795c(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = FUN_00381334(param_2,param_1 + 0xec);
  if (iVar2 != 0) {
    FUN_0033ff0c(0);
  }
  if (*(short *)(param_1 + 0xc9c) != 0) {
    FUN_00373500(*(undefined4 *)(param_1 + 0xccc),*(undefined4 *)(param_1 + 0xcd8),
                 *(float *)(param_1 + 0xce4) * *(float *)(param_1 + 0xd14),param_1 + 0xcc0);
    FUN_00373500(*(undefined4 *)(param_1 + 0xcd4),*(undefined4 *)(param_1 + 0xce0),
                 *(float *)(param_1 + 0xcec) * *(float *)(param_1 + 0xd14),param_1 + 0xcc8);
    FUN_00373500(*(undefined4 *)(param_1 + 0xcf0),*(undefined4 *)(param_1 + 0xcfc),
                 *(float *)(param_1 + 0xd08) * *(float *)(param_1 + 0xd14),param_1 + 0xcb4);
    FUN_00373500(*(undefined4 *)(param_1 + 0xcf4),*(undefined4 *)(param_1 + 0xd00),
                 *(float *)(param_1 + 0xd0c) * *(float *)(param_1 + 0xd14),param_1 + 0xcb8);
    FUN_00373500(*(undefined4 *)(param_1 + 0xcf8),*(undefined4 *)(param_1 + 0xd04),
                 *(float *)(param_1 + 0xd10) * *(float *)(param_1 + 0xd14),param_1 + 0xcbc);
    FUN_00373500(DAT_001c7c64,DAT_001c7c64,DAT_001c7c60,param_1 + 0xd14);
  }
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0xc9c),param_1 + 0xcb4,param_1 + 0xcc0);
  uVar1 = (ushort)*(byte *)(param_1 + 0xd1a);
  bVar4 = uVar1 == 0;
  if (bVar4) {
    uVar1 = *(ushort *)(param_1 + 0xc96);
  }
  if (bVar4 && uVar1 == 0) {
    *(undefined2 *)(param_1 + 0xc96) = 8;
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  if ((*(short *)(param_1 + 0xc90) == 0) ||
     (((((int)ABS(*(float *)(param_1 + 0xcc0) - *(float *)(param_1 + 0xccc)) < 0x40000000 &&
        ((int)ABS(*(float *)(param_1 + 0xcc4) - *(float *)(param_1 + 0xcd0)) < 0x40000000)) &&
       ((int)ABS(*(float *)(param_1 + 0xcc8) - *(float *)(param_1 + 0xcd4)) < 0x40000000)) &&
      ((((int)ABS(*(float *)(param_1 + 0xcb4) - *(float *)(param_1 + 0xcf0)) < 0x40000000 &&
        ((int)ABS(*(float *)(param_1 + 0xcb8) - *(float *)(param_1 + 0xcf4)) < 0x40000000)) &&
       ((int)ABS(*(float *)(param_1 + 0xcbc) - *(float *)(param_1 + 0xcf8)) < 0x40000000)))))) {
    uVar3 = DAT_001c7c88;
    if (*(short *)(param_1 + 0xc9e) != 0) {
      *(undefined2 *)(param_1 + 0xc90) = 0x69;
      *(undefined2 *)(param_1 + 0xc9e) = 2;
      uVar3 = DAT_001c7c8c;
    }
    *(undefined4 *)(param_1 + 0xc7c) = uVar3;
  }
  return;
}
