// OoT3D decomp @ 001c53ec  name=FUN_001c53ec  size=108

void FUN_001c53ec(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = *(int *)(param_2 + 0x20ac);
  uVar2 = *(uint *)(iVar1 + 0x1714);
  if ((uVar2 & 0x1000000) == 0) {
    if (*(float *)(param_1 + 0x98) < *(float *)(param_1 + 0x438) + DAT_001c545c) {
      *(uint *)(iVar1 + 0x1714) = uVar2 | 0x800000;
    }
    return;
  }
  *(uint *)(iVar1 + 0x1714) = uVar2 | 0x2000000;
  *(int *)(iVar1 + 0x1740) = param_1;
  FUN_0037073c(param_2,0x23);
  *(undefined4 *)(param_1 + 0x3f4) = DAT_001c5458;
  return;
}
