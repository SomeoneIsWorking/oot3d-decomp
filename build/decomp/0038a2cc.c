// OoT3D decomp @ 0038a2cc  name=FUN_0038a2cc  size=96

undefined4 FUN_0038a2cc(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;

  sVar1 = *(short *)(*(int *)(param_1 + 0xa54) + 0x196);
  while (((sVar1 != 0 && (iVar2 = *(int *)(param_1 + sVar1 * 4 + 0xa54), iVar2 != 0)) &&
         (*(short *)(iVar2 + 0x18a) == 0x2b))) {
    if (*(byte *)(*(int *)(iVar2 + 0xf0) + 2) == param_2) {
      return 1;
    }
    sVar1 = *(short *)(iVar2 + 0x196);
  }
  return 0;
}
