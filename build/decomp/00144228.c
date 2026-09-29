// OoT3D decomp @ 00144228  name=FUN_00144228  size=172

void FUN_00144228(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;

  cVar4 = '\x03';
  bVar8 = ((uint)*(ushort *)(param_1 + 0x1c) << 0x19) >> 0x1d != 3;
  if (bVar8) {
    cVar4 = *(char *)(param_1 + 0x1c6);
  }
  if (bVar8 && cVar4 != '\0') {
    uVar5 = FUN_0036ae04();
    uVar7 = (uint)*(byte *)(param_1 + 2);
    uVar6 = uVar5 - uVar7;
    bVar8 = uVar5 == uVar7;
    uVar1 = uVar5;
    if (!bVar8) {
      uVar6 = (uint)*(short *)(param_1 + 0x1c4);
      uVar1 = uVar6;
    }
    if ((!bVar8 && uVar1 != 0) && (int)uVar6 < 0 == (bVar8 && SBORROW4(uVar5,uVar7))) {
      return;
    }
  }
  iVar2 = DAT_001442d8;
  fVar9 = *(float *)(param_1 + 0x58) - DAT_001442d4;
  *(float *)(param_1 + 0x58) = fVar9;
  uVar3 = DAT_001442e4;
  if ((int)fVar9 <= iVar2) {
    *(undefined4 *)(param_1 + 0x58) = DAT_001442dc;
    *(undefined2 *)(param_1 + 0x1c0) = 9;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_001442e0;
    FUN_00375bcc(param_1,uVar3);
    if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
      *(undefined2 *)(*(int *)(DAT_001442e8 + param_2) + 0x118) = *(undefined2 *)(param_1 + 0x1c4);
    }
  }
  return;
}
