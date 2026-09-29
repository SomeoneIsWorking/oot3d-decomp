// OoT3D decomp @ 0039d8cc  name=FUN_0039d8cc  size=144

void FUN_0039d8cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;

  FUN_00370734(param_1 + 0x1e0);
  iVar1 = DAT_0039d960;
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_0039d95c;
  uVar2 = DAT_0039d974;
  if (*(int *)(param_1 + 0x98) < iVar1) {
    fVar3 = *(float *)(param_1 + 0x9c);
    if (fVar3 < DAT_0039d964) {
      fVar3 = -fVar3;
    }
    if ((int)fVar3 < DAT_0039d968) {
      *(undefined4 *)(DAT_0039d970 + param_1) = DAT_0039d96c;
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x92);
      *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x92);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
      FUN_0037572c(uVar2,param_1);
      return;
    }
  }
  return;
}
