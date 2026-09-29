// OoT3D decomp @ 0030dce0  name=FUN_0030dce0  size=128

void FUN_0030dce0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;

  *(undefined4 *)(param_1 + 0x14) = param_2;
  iVar1 = FUN_002ff634(DAT_0030dd60,param_1,param_3 + 0xfffU & 0xfffff000,0x1000);
  if (iVar1 == 0) {
    FUN_003123c0();
  }
  *(char *)(param_1 + 0x10) = (char)param_4;
  uVar2 = *(uint *)(param_1 + 0x14);
  if (param_4 == 0) {
    uVar4 = 3;
  }
  else {
    uVar4 = 1;
  }
  software_interrupt(0x1f);
  uVar3 = uVar2 >> 0x1b;
  if ((uVar2 & 0x80000000) != 0) {
    uVar3 = uVar3 - 0x20;
  }
  if ((uVar3 != 0xfffffff9 && uVar3 != 0) && uVar3 != 1) {
    FUN_003351b4(uVar2,uVar3,uVar4,0x10000000);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}
