// OoT3D decomp @ 00157108  name=FUN_00157108  size=60

void FUN_00157108(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  undefined4 uVar3;
  int *piVar4;
  int extraout_r3;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  uint in_fpscr;
  uint uVar8;
  float fVar9;

  FUN_0036bcc8(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
               *(undefined4 *)(param_1 + 0x44),param_2,param_1,param_1 + 0x8c4,param_1 + 0x8ca);
  FUN_003731e0(param_1 + 0x1a4);
  bVar7 = *(short *)(param_2 + 0x104) == 99;
  iVar5 = extraout_r3;
  if (bVar7) {
    iVar5 = *(int *)(iRam001571d0 + 8) + -0xfc00;
  }
  if (((bVar7 && iVar5 == 0x3f4) || (*(ushort *)(iRam001571d0 + 0xc) - 0x3556 < 0xa001)) &&
     (*(int *)(param_1 + 0x89c) == 0)) {
    *(undefined4 *)(param_1 + 0x89c) = 3;
    piVar4 = (int *)(param_1 + 0x8d4);
    *(undefined4 *)(param_1 + 0x840) = uRam001571d4;
    *(uint *)(param_1 + 0x8d0) = *(uint *)(param_1 + 0x8d0) & 0xfffffffe;
    iVar5 = DAT_00353b6c;
    fVar2 = DAT_00353b68;
    puVar6 = (undefined4 *)(DAT_00353b6c + 0x30);
    fVar9 = DAT_00353b68;
    if ((-1 < *piVar4) && (*piVar4 != 3)) {
      fVar9 = *(float *)(DAT_00353b6c + 0x3c);
    }
    uVar1 = in_fpscr & 0xfffffff | (uint)(*(float *)(DAT_00353b6c + 0x34) < DAT_00353b68) << 0x1f;
    uVar8 = uVar1 | (uint)(NAN(*(float *)(DAT_00353b6c + 0x34)) || NAN(DAT_00353b68)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar8 >> 0x1c) & 1)) {
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00353b6c + 0x30),piVar4,0x4300);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(uVar8 >> 0x15) & 3);
      FUN_00375c08(*(undefined4 *)(iVar5 + 0x34),fVar2,uVar3,fVar9,param_1 + 0x1a4,*puVar6,
                   *(undefined1 *)(iVar5 + 0x38));
    }
    else {
      uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00353b6c + 0x30),piVar4,0x4300);
      uVar3 = VectorSignedToFloat(uVar3,(byte)(uVar8 >> 0x15) & 3);
      FUN_00375c08(*(undefined4 *)(iVar5 + 0x34),uVar3,fVar2,fVar9,param_1 + 0x1a4,*puVar6,
                   *(undefined1 *)(iVar5 + 0x38));
    }
    *piVar4 = 3;
    return;
  }
  return;
}
