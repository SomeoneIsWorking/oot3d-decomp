// OoT3D decomp @ 003b04b8  name=FUN_003b04b8  size=140

void FUN_003b04b8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = FUN_0036bc98();
  uVar1 = DAT_003b0548;
  if (iVar2 == 0) {
    *(short *)(DAT_003b0550 + param_1) = (short)DAT_003b054c;
    uVar1 = DAT_003b0558;
    if (((int)(short)(*(short *)(param_1 + 0x92) - *(short *)(param_1 + 0xbe)) + 0x4300U < 0x8601)
       && (*(int *)(param_1 + 0x98) < DAT_003b0554)) {
      *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
      FUN_0036bb28(uVar1,param_1,param_2);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xbac) = DAT_003b0544;
    *(undefined4 *)(param_1 + 0xbb0) = uVar1;
  }
  return;
}
