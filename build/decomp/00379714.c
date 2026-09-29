// OoT3D decomp @ 00379714  name=FUN_00379714  size=76

uint FUN_00379714(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = FUN_0036bc98(param_1,param_2);
  uVar1 = DAT_00379760;
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x638) = DAT_00379760;
    return uVar1;
  }
  iVar2 = *(int *)(param_2 + 0x20ac);
  if ((*(uint *)(iVar2 + 4) & 0x100) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x114) == '\0') {
    if (DAT_00379764 < ABS(*(float *)(param_1 + 0x9c))) {
      return 0;
    }
    fVar5 = *(float *)(param_1 + 0x98);
    fVar6 = *(float *)(iVar2 + 0x1730);
    bVar4 = NAN(fVar5) || NAN(fVar6);
    if (fVar5 <= fVar6) {
      bVar4 = NAN(fVar5) || NAN(DAT_00379764);
      fVar6 = DAT_00379764;
    }
    if (fVar5 != fVar6 && fVar5 < fVar6 == bVar4) {
      return 0;
    }
  }
  iVar3 = (int)(short)((*(short *)(param_1 + 0x92) - *(short *)(iVar2 + 0xbe)) + -0x8000);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar3 < 0x4301) {
    *(int *)(iVar2 + 0x172c) = param_1;
    *(undefined4 *)(iVar2 + 0x1730) = *(undefined4 *)(param_1 + 0x98);
    *(undefined1 *)(iVar2 + 0x172b) = 0;
  }
  return (uint)(iVar3 < 0x4301);
}
