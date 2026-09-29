// OoT3D decomp @ 00177dd0  name=FUN_00177dd0  size=796

void FUN_00177dd0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;

  uVar3 = DAT_00178100;
  fVar12 = DAT_001780f4;
  local_3c = DAT_001780ec;
  local_38 = DAT_001780ec;
  local_34 = DAT_001780ec;
  local_48 = DAT_001780ec;
  local_44 = (float)DAT_001780ec;
  local_40 = DAT_001780ec;
  iVar8 = *(int *)(DAT_001780f0 + param_2);
  *(float *)(param_1 + 0x1b8) = DAT_001780f4;
  uVar4 = DAT_00178104;
  *(undefined4 *)(param_1 + 0x1bc) = uVar3;
  *(undefined4 *)(param_1 + 0x1c0) = uVar4;
  *(float *)(param_1 + 0x1c4) = fVar12;
  *(undefined4 *)(param_1 + 0x1c8) = uVar3;
  uVar5 = DAT_0017810c;
  uVar3 = DAT_00178108;
  *(undefined4 *)(param_1 + 0x1cc) = DAT_00178108;
  *(float *)(param_1 + 0x1d0) = fVar12;
  *(undefined4 *)(param_1 + 0x1d4) = uVar5;
  *(undefined4 *)(param_1 + 0x1d8) = uVar4;
  *(float *)(param_1 + 0x1dc) = fVar12;
  *(undefined4 *)(param_1 + 0x1e0) = uVar5;
  fVar2 = DAT_001780fc;
  fVar1 = DAT_001780f8;
  *(undefined4 *)(param_1 + 0x1e4) = uVar3;
  FUN_003731e0(param_1 + 0x2fc);
  if (DAT_00178110 <= *(int *)(iVar8 + 0x28)) {
    uVar7 = DAT_00178110 - 0xce0000;
    if (((int)*(uint *)(iVar8 + 0x30) <= (int)uVar7) &&
       (*(uint *)(iVar8 + 0x30) <= (uVar7 | uVar7 * 0x1000))) goto LAB_00177eb4;
  }
  if (*(uint *)(iVar8 + 0x2c) <= DAT_00178114) {
    return;
  }
LAB_00177eb4:
  if (((*(byte *)(param_1 + 0x235) & 2) != 0) || (*(short *)(*DAT_00178118 + 0x12d4) != 0)) {
    uVar7 = *(byte *)(param_1 + 0x235) & 0xfffffffd;
    *(char *)(param_1 + 0x235) = (char)uVar7;
    puVar9 = *(uint **)(param_1 + 600);
    if (puVar9 != (uint *)0x0) {
      uVar7 = *puVar9;
    }
    if (puVar9 != (uint *)0x0 && uVar7 != 0) {
      FUN_003620b8(param_2,uVar7 + 0x28,0,2);
      FUN_00375c44(param_2,*puVar9 + 0x28,0x14,DAT_0017811c);
      FUN_00374428(*puVar9);
    }
    local_44 = DAT_00178120;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x24a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x24e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x24c),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar12 = SQRT(ABS(fVar12 - fVar10) * ABS(fVar12 - fVar10) +
                  ABS(fVar1 - fVar11) * ABS(fVar1 - fVar11) +
                  ABS(fVar2 - fVar13) * ABS(fVar2 - fVar13));
    if ((int)fVar12 < 0x41000000) {
      local_30 = *(float *)(param_1 + 0x28) - DAT_00178124;
      local_2c = *(float *)(param_1 + 0x2c) + DAT_00178124;
      local_28 = *(float *)(param_1 + 0x30) + DAT_00178120;
      FUN_0034ddc8(param_2,&local_30,&local_48,&local_3c,4,2);
      uVar3 = DAT_00178128;
      FUN_0048961c(DAT_00178128);
      FUN_0037547c(uVar3,0,4,DAT_00178130,DAT_00178130,DAT_0017812c);
      if (((*(int *)(DAT_00178134 + 4) != 0) && ((*(ushort *)(DAT_00178138 + 10) & 0x2000) == 0)) &&
         (sVar6 = *(short *)(param_1 + 0x1fc) + 1, *(short *)(param_1 + 0x1fc) = sVar6, 2 < sVar6))
      {
        FUN_00371808(param_2,DAT_0017813c,0xffffff9d,param_1,0);
        FUN_0036e980(param_2,param_1,1);
        *(undefined2 *)(param_1 + 0x1ec) = 0x4b;
        *(undefined4 *)(param_1 + 0x1a4) = DAT_00178140;
      }
    }
    else if ((int)fVar12 < DAT_00178144) {
      local_30 = *(float *)(param_1 + 0x28);
      local_2c = *(float *)(param_1 + 0x2c) + DAT_00178124;
      local_28 = *(float *)(param_1 + 0x30) + DAT_00178120;
      FUN_0034ddc8(param_2,&local_30,&local_48,&local_3c,4,0);
      *(undefined2 *)(param_1 + 0x1fc) = 0;
      return;
    }
  }
  return;
}
