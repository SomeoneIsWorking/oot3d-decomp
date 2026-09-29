// OoT3D decomp @ 002fde08  name=FUN_002fde08  size=76

undefined4 FUN_002fde08(int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;

  iVar1 = *(int *)(param_1 + param_2 * 0x400 + param_3 * 4 + 0x418);
  if (iVar1 != 0) {
    bVar3 = false;
    bVar2 = false;
    if (*(int *)(iVar1 + 0xc) != 0) {
      bVar3 = *(float *)(iVar1 + 0x18) < *(float *)(iVar1 + 0x1c);
      bVar2 = NAN(*(float *)(iVar1 + 0x18)) || NAN(*(float *)(iVar1 + 0x1c));
    }
    if (bVar3 == bVar2) {
      return 1;
    }
  }
  return 0;
}
