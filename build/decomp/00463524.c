// OoT3D decomp @ 00463524  name=FUN_00463524  size=848

void FUN_00463524(int param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int unaff_r8;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;

  iVar3 = *(int *)(param_1 + 0x20ac);
  uVar1 = *(ushort *)(*(int *)(param_1 + 0xa54) + 0x194);
  bVar4 = (uVar1 & 0x100) == 0;
  if (bVar4) {
    unaff_r8 = param_1 + 0x3000;
    uVar1 = (ushort)*(byte *)(param_1 + 0x3270);
  }
  if ((bVar4 && uVar1 == 0) &&
     (uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x7f44) == DAT_00463950) << 0x1e,
     !SUB41(uVar5 >> 0x1e,0))) {
    fVar10 = *(float *)(param_2 + 0x3c) - *(float *)(param_2 + 0x30);
    fVar6 = *(float *)(param_2 + 0x40) - *(float *)(param_2 + 0x34);
    fVar9 = *(float *)(param_2 + 0x44) - *(float *)(param_2 + 0x38);
    fVar6 = DAT_00463960 / SQRT(fVar10 * fVar10 + fVar6 * fVar6 + fVar9 * fVar9);
    fVar9 = fVar9 * fVar6;
    if (*(char *)(unaff_r8 + 0x26f) != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    if (*(char *)(unaff_r8 + 0x26f) != '\0') {
      iVar2 = FUN_0035bfb4(fVar9 * DAT_00463968,fVar9,*(undefined4 *)(param_2 + 0x30),
                           fVar10 * fVar6 * DAT_00463968,*(undefined4 *)(param_2 + 0x38),
                           *(undefined4 *)(param_2 + 0x34),param_1 + 0xa70,param_3);
      FUN_0035bf50(iVar2,*(undefined4 *)(param_1 + 0xa70),0);
      fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 8),(byte)(uVar5 >> 0x15) & 3);
      uVar7 = VectorFloatToUnsigned(fVar6 * *(float *)(unaff_r8 + 0x21c),3);
      *(char *)(iVar2 + 8) = (char)uVar7;
      fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 9),(byte)(uVar5 >> 0x15) & 3);
      uVar7 = VectorFloatToUnsigned(fVar6 * *(float *)(unaff_r8 + 0x21c),3);
      *(char *)(iVar2 + 9) = (char)uVar7;
      fVar6 = (float)VectorUnsignedToFloat((uint)*(byte *)(iVar2 + 10),(byte)(uVar5 >> 0x15) & 3);
      uVar8 = VectorFloatToUnsigned(fVar6 * *(float *)(unaff_r8 + 0x21c),3);
      *(char *)(iVar2 + 10) = (char)uVar8;
      fVar6 = DAT_00463960;
      fVar9 = (float)VectorUnsignedToFloat(*(byte *)(iVar2 + 8) + 0x6e,(byte)(uVar5 >> 0x15) & 3);
      local_b0 = (float)VectorUnsignedToFloat(*(byte *)(iVar2 + 9) + 0x6e,(byte)(uVar5 >> 0x15) & 3)
      ;
      local_ac = (float)VectorUnsignedToFloat((uVar8 & 0xff) + 0x6e,(byte)(uVar5 >> 0x15) & 3);
      if (DAT_00463ccc < (int)fVar9) {
        fVar9 = DAT_00463cc8;
      }
      if (DAT_00463ccc < (int)local_b0) {
        local_b0 = DAT_00463cc8;
      }
      if (DAT_00463ccc < (int)local_ac) {
        local_ac = DAT_00463cc8;
      }
      local_ac = local_ac * DAT_00463cd0;
      fVar9 = fVar9 * DAT_00463cd0;
      local_b0 = local_b0 * DAT_00463cd0;
      local_a4 = DAT_00463cd8 * fVar9;
      fVar11 = DAT_00463960 * local_ac;
      fVar10 = DAT_00463960 * local_b0;
      local_98 = *(float *)(DAT_00463cd4 + 0x34) * DAT_00463cd0 * DAT_00463960;
      iVar2 = *(int *)(param_1 + 0x3378);
      *(float *)(iVar2 + 0xf0) = local_a4;
      *(float *)(iVar2 + 0xf4) = fVar10;
      *(float *)(iVar2 + 0xf8) = fVar11;
      *(float *)(iVar2 + 0xfc) = local_98;
      local_a0 = fVar10;
      local_9c = fVar11;
      FUN_00371eac(*(undefined4 *)(param_1 + 0x3378),0);
      uVar7 = DAT_00463cdc;
      local_a8 = DAT_00463950;
      local_98 = (float)DAT_00463cdc;
      local_ac = DAT_00463ce0 * local_ac;
      local_b4 = DAT_00463ce0 * fVar9;
      local_b0 = DAT_00463ce0 * local_b0;
      local_a4 = fVar6 * fVar9 - local_b4;
      local_a0 = fVar10 - local_b0;
      local_9c = fVar11 - local_ac;
      iVar2 = *(int *)(param_1 + 0x3380);
      *(float *)(iVar2 + 0xf0) = local_a4;
      *(float *)(iVar2 + 0xf4) = local_a0;
      *(float *)(iVar2 + 0xf8) = local_9c;
      *(undefined4 *)(iVar2 + 0xfc) = uVar7;
      FUN_003429c8(*(undefined4 *)(param_1 + 0x3380),1,&local_b4);
    }
    if (*(float *)(iVar3 + 0x2c) < *(float *)(param_2 + 0x34)) {
      if (*(char *)(unaff_r8 + 0x26f) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      if (*(char *)(unaff_r8 + 0x26f) != '\0') {
        FUN_00371eac(*(undefined4 *)(param_1 + 0x3380),0);
      }
    }
  }
  return;
}
