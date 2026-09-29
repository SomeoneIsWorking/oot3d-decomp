// OoT3D decomp @ 0015ec70  name=FUN_0015ec70  size=104

void FUN_0015ec70(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  float fVar9;

  uVar5 = FUN_0036ae04();
  iVar2 = DAT_0015ece0;
  uVar7 = (uint)*(byte *)(param_1 + 2);
  uVar6 = uVar5 - uVar7;
  bVar8 = uVar5 == uVar7;
  uVar1 = uVar5;
  if (!bVar8) {
    uVar6 = (uint)*(short *)(DAT_0015ecd8 + param_1);
    uVar1 = uVar6;
  }
  if (((bVar8 || uVar1 == 0) || (int)uVar6 < 0 != (bVar8 && SBORROW4(uVar5,uVar7))) &&
     (fVar9 = *(float *)(param_1 + 0x230) - DAT_0015ecdc, *(float *)(param_1 + 0x230) = fVar9,
     uVar4 = DAT_0015ecec, uVar3 = DAT_0015ece8, (int)fVar9 <= iVar2)) {
    *(undefined4 *)(param_1 + 0x230) = DAT_0015ece4;
    *(undefined4 *)(param_1 + 0x1bc) = uVar3;
    FUN_00375bcc(param_1,uVar4);
    return;
  }
  return;
}
