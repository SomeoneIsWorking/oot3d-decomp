// OoT3D decomp @ 001d68a8  name=FUN_001d68a8  size=96

void FUN_001d68a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar2 = *(int *)(param_1 + 0x498);
  iVar1 = DAT_001d6908;
  if (iVar2 != DAT_001d6908) {
    iVar1 = DAT_001d690c;
  }
  if (iVar2 != DAT_001d6908 && iVar2 != iVar1) {
    FUN_00357fd0(*(undefined4 *)(DAT_001d6910 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001d6914,0,param_1,0);
  }
  return;
}
