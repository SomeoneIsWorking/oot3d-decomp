// OoT3D decomp @ 0011ad60  name=FUN_0011ad60  size=280

void FUN_0011ad60(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;

  FUN_00366d18(DAT_0011af20,param_1,param_2,1);
  if ((*(ushort *)(param_1 + 0x230) & 0x3f) == 0) {
    FUN_00375bcc(param_1,DAT_0011af24);
  }
  FUN_00370084(param_1 + 0xbc,DAT_0011af28,3,1000);
  if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
    if (((*(short *)(param_1 + 0x26e) == 0) &&
        ((int)ABS(DAT_0011af34 - *(float *)(param_1 + 0x28)) < DAT_0011af38)) &&
       ((int)ABS(DAT_0011af3c - *(float *)(param_1 + 0x30)) < DAT_0011af38)) {
                    /* WARNING: Subroutine does not return */
      FUN_003702c8(0x14,0x1e);
    }
    return;
  }
  sVar1 = *(short *)(param_1 + 0x82);
  sVar2 = *(short *)(param_1 + 0xbe) + -0x8000;
  if (sVar2 < sVar1) {
    sVar2 = sVar2 + (short)(sVar1 - sVar2) / 2;
  }
  else {
    sVar2 = sVar1 + (short)(sVar2 - sVar1) / 2;
  }
  FUN_003738a8();
  FUN_00338f60((int)sVar2);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
