// OoT3D decomp @ 001747a4  name=FUN_001747a4  size=264

void FUN_001747a4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float local_24;
  float local_20;
  float local_1c;

  uVar3 = DAT_001748b0;
  iVar1 = (int)*(short *)(param_1 + 0x4ac);
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0x4b2) == 2) {
      iVar2 = (int)((ulonglong)((longlong)DAT_001748ac * (longlong)iVar1) >> 0x20);
      if (iVar1 + ((iVar2 >> 2) - (iVar2 >> 0x1f)) * -0x18 == 0) {
        local_24 = (float)FUN_003738a8(DAT_001748b0);
        local_24 = local_24 + *(float *)(param_1 + 0x28);
        local_20 = (float)FUN_003738a8(uVar3);
        local_20 = local_20 + *(float *)(param_1 + 0x2c);
        local_1c = (float)FUN_003738a8(uVar3);
        local_1c = local_1c + *(float *)(param_1 + 0x30);
        uVar3 = DAT_001748b4;
        if (*(short *)(param_1 + 0x4ae) != 0) {
          uVar3 = DAT_001748b8;
        }
        FUN_0035e710(uVar3,param_2,param_1,&local_24,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
      }
    }
    return;
  }
  FUN_00375bcc(param_1,DAT_001748bc);
  FUN_00375b70(param_2,param_1);
  *(undefined4 *)(param_1 + 0x4a0) = DAT_001748c0;
  return;
}
