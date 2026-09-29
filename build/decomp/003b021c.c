// OoT3D decomp @ 003b021c  name=FUN_003b021c  size=144

void FUN_003b021c(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;

  iVar2 = FUN_0036bc98();
  uVar3 = DAT_003b02bc;
  if (iVar2 == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    FUN_0036bb28(uVar3,param_1,param_2);
  }
  else {
    sVar1 = *(short *)(DAT_003b02ac + param_1);
    uVar3 = DAT_003b02b0;
    if ((sVar1 == 0x2085) || (uVar3 = DAT_003b02b8, sVar1 == 0x2086)) {
      *(undefined4 *)(param_1 + 0xbac) = uVar3;
    }
    else if (sVar1 == 0x2088) {
      *(undefined4 *)(param_1 + 0xbac) = DAT_003b02b4;
    }
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  *(ushort *)(param_1 + 0xc3c) = *(ushort *)(param_1 + 0xc3c) | 1;
  return;
}
