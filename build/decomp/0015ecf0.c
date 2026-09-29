// OoT3D decomp @ 0015ecf0  name=FUN_0015ecf0  size=100

void FUN_0015ecf0(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  float fVar8;

  uVar4 = FUN_0036ae04();
  uVar6 = (uint)*(byte *)(param_1 + 2);
  uVar5 = uVar4 - uVar6;
  bVar7 = uVar4 == uVar6;
  uVar1 = uVar4;
  if (!bVar7) {
    uVar5 = (uint)*(short *)(DAT_0015ed54 + param_1);
    uVar1 = uVar5;
  }
  if (((bVar7 || uVar1 == 0) || (int)uVar5 < 0 != (bVar7 && SBORROW4(uVar4,uVar6))) &&
     (fVar8 = *(float *)(param_1 + 0x230) - DAT_0015ed58, *(float *)(param_1 + 0x230) = fVar8,
     uVar3 = DAT_0015ed64, uVar2 = DAT_0015ed60, (int)fVar8 < 0x3f800001)) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0015ed5c;
    *(undefined4 *)(param_1 + 0x230) = uVar2;
    FUN_00375bcc(param_1,uVar3);
    return;
  }
  return;
}
