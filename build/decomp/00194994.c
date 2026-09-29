// OoT3D decomp @ 00194994  name=FUN_00194994  size=152

void FUN_00194994(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  iVar2 = *(int *)(param_2 + 0x20ac);
  if ((*(uint *)(iVar2 + 0x1714) & 0x1000000) == 0) {
    if (*(short *)(param_1 + 0x554) == 2) {
      FUN_0036e980(param_2,param_1,7);
      *(undefined2 *)(param_1 + 0x554) = 0;
    }
    if (*(float *)(param_1 + 0x98) < *(float *)(param_1 + 0x438) + DAT_00194a30) {
      *(uint *)(iVar2 + 0x1714) = *(uint *)(iVar2 + 0x1714) | 0x800000;
    }
    return;
  }
  FUN_00343868(param_2,0x22);
  *(uint *)(iVar2 + 0x1714) = *(uint *)(iVar2 + 0x1714) | 0x2000000;
  uVar1 = DAT_00194a2c;
  *(int *)(iVar2 + 0x1740) = param_1;
  *(undefined4 *)(param_1 + 0x3f4) = uVar1;
  return;
}
