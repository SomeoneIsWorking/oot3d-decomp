// OoT3D decomp @ 003e6778  name=FUN_003e6778  size=240

void FUN_003e6778(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if (iVar2 != 0) {
    *(undefined2 *)(*(int *)(param_1 + 0x8d0) + 0x668) = 0;
  }
  FUN_0036fc20(DAT_003e686c,DAT_003e6868,param_1 + 0x6c);
  iVar2 = FUN_0036bc98(param_1,param_2);
  uVar1 = DAT_003e6874;
  if (iVar2 == 0) {
    if ((*(short *)(param_1 + 0x8b8) == 0) && (iVar2 = FUN_003769d8(param_2 + 0x28a0), iVar2 == 0))
    {
      fVar3 = (float)FUN_00371e50(uVar1);
      *(short *)(param_1 + 0x8b8) = (short)(int)(fVar3 + DAT_003e6878);
      *(undefined4 *)(param_1 + 0x8a8) = DAT_003e687c;
      return;
    }
    FUN_0036bb28(uVar1,param_1,param_2);
    return;
  }
  if (*(short *)(DAT_003e6870 + param_1) == 0x70ea) {
    *(undefined2 *)(param_1 + 0x8c6) = 1;
  }
  return;
}
