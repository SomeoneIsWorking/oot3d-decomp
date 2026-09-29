// OoT3D decomp @ 003acde4  name=FUN_003acde4  size=144

void FUN_003acde4(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  uVar3 = DAT_003ace7c;
  uVar2 = DAT_003ace78;
  fVar1 = DAT_003ace74;
  iVar4 = *(int *)(param_1 + 0x124);
  if (((*(ushort *)(param_1 + 0x90) & 1) != 0) && (*(float *)(param_1 + 100) <= DAT_003ace74)) {
    *(ushort *)(iVar4 + 0x1c) = *(ushort *)(iVar4 + 0x1c) | 0x8000;
    FUN_00374428(param_1);
    return;
  }
  FUN_0036e168(*(undefined4 *)(iVar4 + 8),DAT_003ace7c,DAT_003ace78,DAT_003ace74,param_1 + 0x28);
  FUN_0036e168(*(undefined4 *)(*(int *)(param_1 + 0x124) + 0x10),uVar3,uVar2,fVar1,param_1 + 0x30);
  return;
}
