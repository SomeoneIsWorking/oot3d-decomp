// OoT3D decomp @ 00488458  name=FUN_00488458  size=52

undefined4 FUN_00488458(int param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;

  iVar1 = *(int *)(param_1 + 0x528);
  bVar3 = *(int *)(iVar1 + 0xc) < 0;
  bVar2 = false;
  if (*(int *)(iVar1 + 0xc) != 0) {
    bVar3 = *(float *)(iVar1 + 0x18) < *(float *)(iVar1 + 0x1c);
    bVar2 = NAN(*(float *)(iVar1 + 0x18)) || NAN(*(float *)(iVar1 + 0x1c));
  }
  if (bVar3 != bVar2) {
    return 0;
  }
  return 1;
}
