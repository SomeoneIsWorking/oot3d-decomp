// OoT3D decomp @ 00206428  name=FUN_00206428  size=192

undefined4 FUN_00206428(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined2 uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;

  *(short *)(param_1 + 0x116) = (short)uRam002064e8;
  iVar3 = FUN_0036bba8(param_2,8);
  if (iVar3 != 0) {
    uVar2 = FUN_0036bba8(param_2,8);
    *(undefined2 *)(param_1 + 0x116) = uVar2;
  }
  iVar3 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar3 == 0) || (iVar3 = FUN_003769d8(param_2 + 0x28a0), iVar3 == 6)) {
    *(undefined2 *)(param_1 + 0x85e) = 8;
  }
  iVar3 = FUN_0036bc98(param_1,param_2);
  if (iVar3 != 0) {
    *(undefined1 *)(param_1 + 0x864) = 1;
    *(short *)(param_1 + 0x85e) = *(short *)(param_1 + 0x86a) + 9;
    uVar1 = uRam002064ec;
    *(undefined4 *)(param_1 + 0x840) = uRam002064ec;
    return uVar1;
  }
  iVar3 = *(int *)(param_2 + 0x20ac);
  if ((*(uint *)(iVar3 + 4) & 0x100) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x114) == '\0') {
    if (fRam002064f0 < ABS(*(float *)(param_1 + 0x9c))) {
      return 0;
    }
    fVar5 = *(float *)(param_1 + 0x98);
    fVar6 = *(float *)(iVar3 + 0x1730);
    bVar4 = NAN(fVar5) || NAN(fVar6);
    if (fVar5 <= fVar6) {
      bVar4 = NAN(fVar5) || NAN(fRam002064f0);
      fVar6 = fRam002064f0;
    }
    if (fVar5 != fVar6 && fVar5 < fVar6 == bVar4) {
      return 0;
    }
  }
  *(int *)(iVar3 + 0x172c) = param_1;
  *(undefined4 *)(iVar3 + 0x1730) = *(undefined4 *)(param_1 + 0x98);
  *(undefined1 *)(iVar3 + 0x172b) = 0;
  return 1;
}
