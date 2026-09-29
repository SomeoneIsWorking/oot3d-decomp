// OoT3D decomp @ 00247c40  name=FUN_00247c40  size=560

void FUN_00247c40(int param_1,int param_2)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  uVar3 = DAT_00248038;
  puVar2 = DAT_00248034;
  iVar5 = DAT_00248030;
  if (((*(uint *)(DAT_00248030 + 0x18) & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00248030 + 0x18), uVar7 = DAT_00248040, uVar6 = DAT_0024803c,
     iVar4 != 0)) {
    *puVar2 = uVar3;
    puVar2[1] = uVar6;
    puVar2[2] = uVar7;
  }
  puVar2 = DAT_00248048;
  uVar6 = DAT_00248044;
  if (((*(uint *)(iVar5 + 0x14) & 1) == 0) && (iVar4 = FUN_003679b4(DAT_0024804c), iVar4 != 0)) {
    *puVar2 = DAT_00248050;
    puVar2[1] = uVar3;
    puVar2[2] = uVar6;
  }
  puVar2 = DAT_00248054;
  if (((*(uint *)(iVar5 + 0x10) & 1) == 0) && (iVar5 = FUN_003679b4(DAT_00248058), iVar5 != 0)) {
    *puVar2 = DAT_0024805c;
    puVar2[1] = uVar3;
    puVar2[2] = uVar6;
  }
  if (*(char *)(param_1 + 0x81) != '2') {
    sVar1 = *(short *)(param_1 + 0xbe);
    FUN_00330454(param_2 + 0xa98,*(char *)(param_1 + 0x81),param_1);
    if (*(short *)(param_1 + 0xbe) != sVar1) {
      iVar5 = (int)(short)(*(short *)(param_1 + 0xbe) - sVar1);
      fVar8 = (float)FUN_002cfca0(iVar5);
      fVar9 = (float)FUN_00338f60(iVar5);
      fVar10 = *(float *)(param_1 + 0x1b0);
      *(float *)(param_1 + 0x1b0) = *(float *)(param_1 + 0x1b8) * fVar8 + fVar9 * fVar10;
      *(float *)(param_1 + 0x1b8) = *(float *)(param_1 + 0x1b8) * fVar9 - fVar8 * fVar10;
      fVar10 = *(float *)(param_1 + 0x1bc);
      *(float *)(param_1 + 0x1bc) = *(float *)(param_1 + 0x1c4) * fVar8 + fVar9 * fVar10;
      *(float *)(param_1 + 0x1c4) = *(float *)(param_1 + 0x1c4) * fVar9 - fVar8 * fVar10;
      fVar10 = *(float *)(param_1 + 0x1c8);
      *(float *)(param_1 + 0x1c8) = *(float *)(param_1 + 0x1d0) * fVar8 + fVar9 * fVar10;
      *(float *)(param_1 + 0x1d0) = *(float *)(param_1 + 0x1d0) * fVar9 - fVar8 * fVar10;
    }
  }
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_0033bd9c(param_1);
  iVar5 = *(int *)(param_1 + 0x1fc);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(iVar5 + 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(iVar5 + 0x3c) = uVar6;
  *(undefined4 *)(iVar5 + 0x40) = uVar7;
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1e0);
  if (*(int *)(param_1 + 0x1a4) != DAT_00248060) {
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1e0);
  }
  FUN_0037322c(uVar3,param_1);
  if (*(int *)(param_1 + 0x1a4) == DAT_00248064) {
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
