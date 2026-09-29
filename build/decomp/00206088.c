// OoT3D decomp @ 00206088  name=FUN_00206088  size=132

void FUN_00206088(int param_1,undefined4 param_2)

{
  short sVar1;
  ushort uVar2;

  if (*(short *)(param_1 + 0x1ae) == 0) {
    return;
  }
  sVar1 = *(short *)(param_1 + 0x1b2);
  if (sVar1 == 0) {
LAB_002060cc:
    uVar2 = *(ushort *)(DAT_0020610c + 10) | 2;
  }
  else {
    if (sVar1 != 1) {
      if (sVar1 != 0x14) goto LAB_002060d4;
      goto LAB_002060cc;
    }
    uVar2 = *(ushort *)(DAT_0020610c + 10) | 4;
  }
  *(ushort *)(DAT_0020610c + 10) = uVar2;
LAB_002060d4:
  FUN_0036963c(param_2,(int)*(short *)(param_1 + 0x1aa));
  FUN_00320d7c(param_2,0,7);
  FUN_0036e980(param_2,0,8);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00206110;
  return;
}
