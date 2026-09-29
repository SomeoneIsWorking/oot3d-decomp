// OoT3D decomp @ 00391924  name=FUN_00391924  size=204

void FUN_00391924(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;

  uVar3 = DAT_003919f4;
  uVar1 = DAT_003919f0;
  FUN_0036e168(DAT_003919f0,DAT_003919f4,DAT_003919f4,DAT_003919f0,param_1 + 0x6c);
  FUN_0036e168(*(undefined4 *)(param_1 + 0x84),uVar3,DAT_003919f8,uVar1,param_1 + 0x2c);
  if (*(short *)(DAT_003919fc + param_1) == 0) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,0);
    fVar4 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    if (*(int *)(param_1 + 0x63c) != 0xd) {
      FUN_00375c08(uVar1,DAT_00391a00,fVar4,uVar1,param_1 + 0x1a4,0,2);
    }
    iVar2 = DAT_00391a04;
    *(undefined4 *)(param_1 + 0x63c) = 8;
    *(short *)(iVar2 + param_1) = (short)(int)fVar4;
    FUN_00375bcc(param_1,DAT_00391a08);
    *(undefined4 *)(param_1 + 0x644) = DAT_00391a0c;
  }
  return;
}
