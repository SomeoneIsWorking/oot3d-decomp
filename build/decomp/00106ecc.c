// OoT3D decomp @ 00106ecc  name=FUN_00106ecc  size=212

void FUN_00106ecc(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  uint uVar3;
  int unaff_r5;
  int unaff_r6;
  bool bVar4;
  bool bVar5;

  uVar3 = *(ushort *)(param_1 + 0x90) & 2;
  bVar5 = (*(ushort *)(param_1 + 0x90) & 2) != 0;
  if (bVar5) {
    unaff_r5 = *(int *)(param_1 + 0x124);
  }
  bVar4 = bVar5 && unaff_r5 < 0;
  if (bVar5 && unaff_r5 != 0) {
    unaff_r6 = unaff_r5 + 0xc00;
    uVar3 = (uint)*(char *)(unaff_r5 + 0xc49);
    bVar4 = (int)(uVar3 - 5) < 0;
  }
  if (bVar4 != ((bVar5 && unaff_r5 != 0) && SBORROW4(uVar3,5))) {
    FUN_00375bcc(param_1,DAT_00106fa0);
    *(char *)(unaff_r5 + 0xc49) = *(char *)(unaff_r6 + 0x49) + '\x01';
  }
  if ((*(ushort *)(param_1 + 0x90) & 1) == 0) {
    FUN_00376864(param_1);
    FUN_00376340(DAT_00106fb4,DAT_00106fb0,DAT_00106fac,param_2,param_1,5);
    return;
  }
  *(float *)(param_1 + 0x58) = *(float *)(param_1 + 0x58) - DAT_00106fa4;
  fVar2 = DAT_00106fa8;
  *(float *)(param_1 + 0x54) = *(float *)(param_1 + 0x54) + DAT_00106fa8;
  *(float *)(param_1 + 0x5c) = *(float *)(param_1 + 0x5c) + fVar2;
  sVar1 = *(short *)(param_1 + 0xb74) + -1;
  *(short *)(param_1 + 0xb74) = sVar1;
  if (sVar1 != 0) {
    return;
  }
  FUN_00374428(param_1);
  return;
}
