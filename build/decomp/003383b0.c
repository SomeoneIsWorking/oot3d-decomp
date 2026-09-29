// OoT3D decomp @ 003383b0  name=FUN_003383b0  size=248

void FUN_003383b0(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;

  bVar1 = *(byte *)(DAT_003384ac + *(int *)(DAT_003384a8 + 4));
  cVar2 = *(char *)(DAT_003384b0 + (uint)bVar1);
  iVar5 = FUN_00355a60(param_2);
  iVar6 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(param_2 + 0x1224);
  }
  if (iVar5 != 0 && iVar6 != 0) {
    FUN_00374428();
    *(undefined4 *)(param_2 + 0x128) = 0;
    *(undefined4 *)(param_2 + 0x1224) = 0;
  }
  FUN_0036b02c(param_1,param_2);
  *(byte *)(param_2 + 0x1aa) = bVar1;
  uVar4 = FUN_0033b548(param_2,(int)cVar2);
  *(undefined1 *)(param_2 + 0x1b1) = uVar4;
  *(char *)(param_2 + 0x1ac) = cVar2;
  *(char *)(param_2 + 0x1a9) = cVar2;
  *(undefined1 *)(param_2 + 0x1b0) = uVar4;
  uVar3 = DAT_003384b4;
  *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) & 0xfefffff7;
  *(undefined4 *)(param_2 + 0x2244) = uVar3;
  *(undefined4 *)(param_2 + 0x2240) = uVar3;
  *(undefined2 *)(DAT_003384b8 + param_2) = 0;
  (**(code **)(DAT_003384bc + cVar2 * 4))(param_1,param_2);
  FUN_0033b504(param_2,*(undefined1 *)(param_2 + 0x1b0));
  FUN_0036aef0(param_1,param_2);
  if (param_3 == 0) {
    return;
  }
  FUN_0036f59c(param_2,DAT_003384c0);
  return;
}
