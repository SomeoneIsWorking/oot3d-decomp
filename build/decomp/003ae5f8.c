// OoT3D decomp @ 003ae5f8  name=FUN_003ae5f8  size=168

void FUN_003ae5f8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar2 = FUN_0036bba8(param_2,9);
  uVar1 = DAT_003ae6a4;
  if (iVar2 == 0) {
    iVar2 = DAT_003ae6a0;
  }
  iVar3 = FUN_0036bc98(param_1,param_2);
  if (iVar3 == 0) {
    *(short *)(DAT_003ae6a8 + param_1) = (short)iVar2;
    uVar1 = DAT_003ae6b4;
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x2150U <=
         DAT_003ae6ac) && (*(int *)(param_1 + 0x98) < DAT_003ae6b0)) {
      *(ushort *)(param_1 + 0x704) = *(ushort *)(param_1 + 0x704) | 1;
      FUN_0036bb28(uVar1,param_1,param_2);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x708) = uVar1;
  }
  return;
}
