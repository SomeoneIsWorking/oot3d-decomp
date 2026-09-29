// OoT3D decomp @ 003d8b54  name=FUN_003d8b54  size=128

void FUN_003d8b54(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  bool bVar4;

  iVar2 = FUN_003705a0(DAT_003d8bd8,DAT_003d8bd4,param_1 + 0x54);
  iVar1 = DAT_003d8bdc;
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x128);
    iVar2 = *(int *)(*(int *)(param_1 + 0x124) + 0x7d8);
    bVar4 = iVar2 != DAT_003d8bdc;
    if (!bVar4) {
      iVar2 = *(int *)(iVar3 + 0x7d8);
    }
    if (bVar4 || iVar2 != DAT_003d8bdc) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffee;
      *(int *)(param_1 + 0x7d8) = iVar1;
    }
    else {
      FUN_00374428();
      FUN_00374428(iVar3);
      FUN_00374428(param_1);
    }
  }
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x54);
  return;
}
